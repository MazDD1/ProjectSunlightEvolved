// Copyright Narrative Tools 2025. 


#include "Navigation/MapMarker.h"
#include "Navigation/NarrativeNavigationComponent.h"
#include "Navigation/NavigatorGameplayTags.h"
#include <Engine/Texture2D.h>
#include <Engine/World.h>
#include <UObject/ConstructorHelpers.h>
#include <GameFramework/PlayerController.h>
#include "Navigation/NarrativeNavigationComponent.h"
#include <UObject/UObjectThreadContext.h>
#include "NarrativeArsenal.h"

#define LOCTEXT_NAMESPACE "MapMarker"


UMapMarker::UMapMarker(const FObjectInitializer& ObjectInitializer)
{
	DefaultMarkerSettings.bOverride_LocationDisplayName = true;
	DefaultMarkerSettings.bOverride_bShowActorRotation = true;
	DefaultMarkerSettings.bOverride_LocationIcon = true;
	DefaultMarkerSettings.bOverride_IconTint = true;
	DefaultMarkerSettings.bOverride_IconSize = true;
	DefaultMarkerSettings.bOverride_IconOffset = true;

	//The default UI that ships with navigator really benefits from a couple of overrides! Compass icons and screen space markers should be a little bigger
	CompassOverrideSettings.bOverride_IconSize = true;
	CompassOverrideSettings.IconSize = FVector2D(40.f, 40.f);
	ScreenspaceOverrideSettings.bOverride_IconSize = true;
	ScreenspaceOverrideSettings.IconSize = FVector2D(50.f, 50.f);
	WorldMapOverrideSettings.bOverride_IconSize = true; 
	WorldMapOverrideSettings.IconSize = FVector2D(30.f);

	DefaultMarkerSettings.MarkerTitleText = LOCTEXT("NavigatorLocationDisplayName", "Location Marker");
	DefaultMarkerSettings.LocationIcon = nullptr;
	DefaultMarkerSettings.IconTint = FLinearColor(1.f, 1.f, 1.f);
	DefaultMarkerSettings.IconSize = FVector2D(20.f, 20.f);


	MarkerStartFadeOutDistance = 13500.f;
	MarkerStartFadeInDistance = 15000.f;
	bPinToMapEdge = false;

	auto LocationIconFinder = ConstructorHelpers::FObjectFinder<UTexture2D>(TEXT("/Script/Engine.Texture2D'/NarrativePro/NarrativeNavigator/Assets/Icons/T_Marker_Default.T_Marker_Default'"));
	if (LocationIconFinder.Succeeded())
	{
		DefaultMarkerSettings.LocationIcon = LocationIconFinder.Object;
	}

	//Markers should show up on these navigators by default - screen space shouldnt be default 
	MarkerDomain.AddTag(FNavigatorGameplayTags::Get().NavigatorTypes_Compass);
	MarkerDomain.AddTag(FNavigatorGameplayTags::Get().NavigatorTypes_Minimap);
	MarkerDomain.AddTag(FNavigatorGameplayTags::Get().NavigatorTypes_Worldmap);
}

void UMapMarker::RegisterMarker()
{
	//Because navigation is a local thing, we can safely use the local player controller
	for (FConstPlayerControllerIterator Iter = GetWorld()->GetPlayerControllerIterator(); Iter; ++Iter)
	{
		if (APlayerController* PC = Iter->Get())
		{
			if (PC->IsLocalController())
			{
				if (UNarrativeNavigationComponent* NavComp = Cast<UNarrativeNavigationComponent>(PC->GetComponentByClass(UNarrativeNavigationComponent::StaticClass())))
				{
					if (NavComp->AddMarker(this))
					{
						OnMarkerAdded(NavComp);
					}
				}
			}
		}
	}
}

void UMapMarker::RemoveMarker()
{
	//Because navigation is a local thing, we can safely use the local player controller
	for (FConstPlayerControllerIterator Iter = GetWorld()->GetPlayerControllerIterator(); Iter; ++Iter)
	{
		if (APlayerController* PC = Iter->Get())
		{
			if (PC->IsLocalController())
			{
				if (UNarrativeNavigationComponent* NavComp = Cast<UNarrativeNavigationComponent>(PC->GetComponentByClass(UNarrativeNavigationComponent::StaticClass())))
				{
					if (NavComp->RemoveMarker(this))
					{
						OnMarkerRemoved(NavComp);
					}
				}
			}
		}
	}
}

void UMapMarker::OnOwnerDestroyed(AActor* DestroyedActor)
{
	RemoveMarker();
}

void UMapMarker::OnMarkerAdded(class UNarrativeNavigationComponent* OwnerNavComp)
{
	if (ActorOwner)
	{
		ActorOwner->OnDestroyed.AddUniqueDynamic(this, &UMapMarker::OnOwnerDestroyed);
	}
}

void UMapMarker::OnMarkerRemoved(class UNarrativeNavigationComponent* OwnerNavComp)
{

}

FNavigationMarkerSettings UMapMarker::GetMarkerSettings(const FGameplayTag& NavigatorType) const
{
	FNavigationMarkerSettings Settings = DefaultMarkerSettings;
	FNavigationMarkerSettings Overrides = CompassOverrideSettings;

	if (NavigatorType == FNavigatorGameplayTags::Get().NavigatorTypes_Compass)
	{
		Overrides = CompassOverrideSettings;
	}
	else if(NavigatorType == FNavigatorGameplayTags::Get().NavigatorTypes_Worldmap)
	{
		Overrides = WorldMapOverrideSettings;
	}
	else if (NavigatorType == FNavigatorGameplayTags::Get().NavigatorTypes_Minimap)
	{
		Overrides = MinimapOverrideSettings;
	}
	else if (NavigatorType == FNavigatorGameplayTags::Get().NavigatorTypes_Screenspace)
	{
		Overrides = ScreenspaceOverrideSettings;
	}

	if (Overrides.bOverride_LocationIcon)
	{
		Settings.LocationIcon = Overrides.LocationIcon;
	}

	if (Overrides.bOverride_IconTint)
	{
		Settings.IconTint = Overrides.IconTint;
	}

	if (Overrides.bOverride_IconSize)
	{
		Settings.IconSize = Overrides.IconSize;
	}

	if (Overrides.bOverride_IconOffset)
	{
		Settings.IconOffset = Overrides.IconOffset;
	}

	if (Overrides.bOverride_bShowActorRotation)
	{
		Settings.bShowActorRotation = Overrides.bShowActorRotation;
	}

	return Settings;
}

void UMapMarker::RefreshMarker()
{
	OnRefreshRequired.Broadcast();
}

FText UMapMarker::GetMarkerActionText_Implementation(class UNarrativeNavigationComponent* Selector) const
{
	return DefaultMarkerActionText;
}

FText UMapMarker::GetMarkerDisplayText_Implementation(class UNarrativeNavigationComponent* Selector, const FGameplayTag& NavigatorType, FText& OutSubtitleText) const
{
	auto MarkerSettings = GetMarkerSettings(NavigatorType);
	OutSubtitleText = MarkerSettings.MarkerSubtitleText;

	return MarkerSettings.MarkerTitleText;
}

FLinearColor UMapMarker::GetMarkerColor_Implementation(class UNarrativeNavigationComponent* Selector, const FGameplayTag& NavigatorType) const
{
	return GetMarkerSettings(NavigatorType).IconTint;
}

bool UMapMarker::CanInteract_Implementation(class UNarrativeNavigationComponent* Selector) const
{
	return true; 
}

void UMapMarker::OnSelect_Implementation(class UNarrativeNavigationComponent* Selector)
{

}

void UMapMarker::SetDefaultDomains(const FGameplayTagContainer& DefaultDomains)
{
	MarkerDomain = DefaultDomains;
}

void UMapMarker::SetDomains(const FGameplayTagContainer& InMarkerDomain)
{
	//If we're in constructor we don't want to remove and update markers 
	FUObjectThreadContext& ThreadContext = FUObjectThreadContext::Get();
	if (ThreadContext.IsInConstructor > 0)
	{
		UE_LOG(LogNarrativeNavigator, Warning, TEXT("UNavigationMarkerComponent::SetDomain called from a constructor, you should call SetDefaultDomains instead. "));
		SetDefaultDomains(InMarkerDomain);
		return;
	}

	MarkerDomain = InMarkerDomain;
}

void UMapMarker::AddDomains(const FGameplayTagContainer& NewMarkerDomains)
{
	MarkerDomain.AppendTags(NewMarkerDomains);

	FUObjectThreadContext& ThreadContext = FUObjectThreadContext::Get();
	if (ThreadContext.IsInConstructor > 0)
	{
		return;
	}

}

void UMapMarker::RemoveDomains(const FGameplayTagContainer& RemoveDomains)
{
	MarkerDomain.RemoveTags(RemoveDomains);

	FUObjectThreadContext& ThreadContext = FUObjectThreadContext::Get();
	if (ThreadContext.IsInConstructor > 0)
	{
		return;
	}

}

FTransform UMapMarker::GetMarkerTransform() const
{
	if (ActorOwner)
	{
		return ActorOwner->GetActorTransform();
	}

	return MarkerTransform;
}

int32 UMapMarker::GetMarkerZOrder() const
{
	//Map tiles are 0 so icons need to be 1 so they show up in front 
	return 1;
}

#undef LOCTEXT_NAMESPACE 