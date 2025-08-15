// Copyright Narrative Tools 2024. 


#include "NarrativeActorProvider.h"
#include "AI/NarrativeCharacterSubsystem.h"
#include "AI/NPCDefinition.h"
#include "Subsystems/NarrativeSaveSubsystem.h"
#include <Engine/World.h>
#include "Navigation/MapTileBounds.h"
#include "Navigation/NavigationSubsystem.h"
#include "Kismet/GameplayStatics.h"

#define LOCTEXT_NAMESPACE "NarrativeActorProvider"


UNarrativeTransformProvider::UNarrativeTransformProvider()
{

}

FTransform UNarrativeTransformProvider::ProvideTransform_Implementation(const UObject* WorldContextObject) const
{
	return FTransform();
}

FText UNarrativeTransformProvider::GetDescription() const
{
	return FText::GetEmpty();
}

UNarrativeActorProvider::UNarrativeActorProvider()
{

}

UNarrativeActorProvider_NPC::UNarrativeActorProvider_NPC()
{

}

UNarrativeActorProvider_GUIDLookup::UNarrativeActorProvider_GUIDLookup()
{

}


class AActor* UNarrativeActorProvider::ProvideActor_Implementation(const UObject* WorldContextObject) const
{
	return nullptr; 
}


FTransform UNarrativeActorProvider::ProvideTransform_Implementation(const UObject* WorldContextObject) const
{
	if (AActor* Actor = ProvideActor(WorldContextObject))
	{
		return Actor->GetActorTransform();
	}

	return FTransform();
}

FText UNarrativeActorProvider::GetDescription() const
{
	return FText::GetEmpty();
}

class AActor* UNarrativeActorProvider_NPC::ProvideActor_Implementation(const UObject* WorldContextObject) const
{

	if (const UWorld* World = WorldContextObject->GetWorld())
	{
		if (UNarrativeCharacterSubsystem* NPCSub = World->GetSubsystem<UNarrativeCharacterSubsystem>())
		{
			return NPCSub->FindNPC(NPCDefinition);
		}
	}

	
	return nullptr; 
}


FText UNarrativeActorProvider_NPC::GetDescription() const
{
	if (NPCDefinition)
	{
		return FText::Format(LOCTEXT("NPCProviderDescription", "Find NPC {0}"), NPCDefinition->NPCName);
	}

	return FText::GetEmpty();
}

class AActor* UNarrativeActorProvider_GUIDLookup::ProvideActor_Implementation(const UObject* WorldContextObject) const
{

	if (const UWorld* World = WorldContextObject->GetWorld())
	{
		if (UNarrativeSaveSubsystem* SaveSub = World->GetSubsystem<UNarrativeSaveSubsystem>())
		{
			return SaveSub->LookupActorByGUID(GUIDToLookup);
		}
	}

	return nullptr; 
}

FText UNarrativeActorProvider_GUIDLookup::GetDescription() const
{
	return LOCTEXT("GUIDProviderDescription", "Find Actor By GUID");
}

UNarrativeActorProvider_LevelReference::UNarrativeActorProvider_LevelReference()
{

}

class AActor* UNarrativeActorProvider_LevelReference::ProvideActor_Implementation(const UObject* WorldContextObject) const
{
	if (!SoftActorReference.IsNull())
	{
		return SoftActorReference.LoadSynchronous();
	}

	return nullptr; 
}

FText UNarrativeActorProvider_LevelReference::GetDescription() const
{
	if (SoftActorReference.ToString().Len())
	{
		return FText::Format(LOCTEXT("NPCProviderDescription", "Actor Ref {0}"), FText::FromString(SoftActorReference.ToString()));
	}

	return FText::GetEmpty();
}

UNarrativeTransformProvider_POI::UNarrativeTransformProvider_POI()
{
	POITag = FGameplayTag();
}

FTransform UNarrativeTransformProvider_POI::ProvideTransform_Implementation(const UObject* WorldContextObject) const
{
	if (const UWorld* World = WorldContextObject->GetWorld())
	{
		if (UNavigationSubsystem* NavSub = World->GetSubsystem<UNavigationSubsystem>())
		{
			FPOIData POI;
			NavSub->GetPointOfInterest(POI, POITag);

			return FTransform(POI.POILocation);
		}
	}

	return FTransform();
}

FText UNarrativeTransformProvider_POI::GetDescription() const
{
	if (POITag.IsValid())
	{
		return FText::Format(LOCTEXT("POIProviderDescription", "POI {0}"), FText::FromString(POITag.ToString()));
	}


	return FText::GetEmpty();
}

UNarrativeActorProvider_ActorOfClass::UNarrativeActorProvider_ActorOfClass()
{
	
}

class AActor* UNarrativeActorProvider_ActorOfClass::ProvideActor_Implementation(const UObject* WorldContextObject) const
{
	return UGameplayStatics::GetActorOfClass(WorldContextObject, ActorClassToFind);
}

FText UNarrativeActorProvider_ActorOfClass::GetDescription() const
{
	if (IsValid(ActorClassToFind))
	{
		return FText::Format(LOCTEXT("POIProviderDescription", "Actor of Class {0}"), FText::FromString(*GetNameSafe(ActorClassToFind)));
	}


	return FText::GetEmpty();
}



UNarrativeProviderBase::UNarrativeProviderBase()
{

}

FText UNarrativeProviderBase::GetDescription() const
{
	return FText::FromString(GetName());
}

UNarrativeTransformProvider_SpecifiedTransform::UNarrativeTransformProvider_SpecifiedTransform()
{

}

FTransform UNarrativeTransformProvider_SpecifiedTransform::ProvideTransform_Implementation(const UObject* WorldContextObject) const
{
	return SpecifiedTransform;
}

#undef LOCTEXT_NAMESPACE 