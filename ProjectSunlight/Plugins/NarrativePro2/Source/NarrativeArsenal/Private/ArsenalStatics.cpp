// Copyright Narrative Tools 2024. 


#include "ArsenalStatics.h"
#include "ArsenalSettings.h"
#include "UnrealFramework/NarrativeTeamAgentInterface.h"
#include <LevelSequence.h>
#include <MovieScene.h>
#include "AI/NPCDefinition.h"
#include <Components/LODSyncComponent.h>
#include <UnrealEngine.h>
#include "UnrealFramework/NarrativePlayerController.h"
#include "Settings/NarrativeCombatDeveloperSettings.h"
#include "NarrativeUIDeveloperSettings.h"
#include "Settings/NarrativeTimeOfDaySettings.h"
#include "UnrealFramework/NarrativeGameState.h"
#include "UnrealFramework/NarrativeGameMode.h"
#include "AI/Activities/NPCActivity.h"
#include <AbilitySystemBlueprintLibrary.h>
#include <AbilitySystemComponent.h>
#include <NavigationSystem.h>
#include "NavFilters/NavigationQueryFilter.h"
#include "AI/NarrativeNPCController.h"
#include "Kismet/GameplayStatics.h"
#include "Widgets/NarrativeGameplayHUD.h"

bool UArsenalStatics::IsSameTeam(const AActor* A, const AActor* B)
{
	if (A && B)
	{
		const INarrativeTeamAgentInterface* ATeam = Cast<const INarrativeTeamAgentInterface>(A);
		const INarrativeTeamAgentInterface* BTeam = Cast<const INarrativeTeamAgentInterface>(B);

		if (ATeam && BTeam)
		{
			return ATeam->GetFactions().HasAny(BTeam->GetFactions());
		}
	}

	return false;
}

ETeamAttitude::Type UArsenalStatics::GetAttitude(const AActor* TestActor, const AActor* Target)
{
	if (TestActor && Target)
	{
		if (const INarrativeTeamAgentInterface* TestActorTeam = Cast<const INarrativeTeamAgentInterface>(TestActor))
		{
			if (TestActorTeam)
			{
				return TestActorTeam->GetTeamAttitudeTowards(*Target);
			}
		}
	}

	return ETeamAttitude::Neutral;
}

FGameplayTagContainer UArsenalStatics::GetActorFactions(AActor* Actor)
{
	if (Actor)
	{
		if (INarrativeTeamAgentInterface* ActorTeam = Cast<INarrativeTeamAgentInterface>(Actor))
		{
			return ActorTeam->GetFactions();
		}
	}

	return FGameplayTagContainer();
}

void UArsenalStatics::AddFactionsToActor(AActor* Actor, const FGameplayTagContainer& Factions)
{
	if (Actor)
	{
		if (INarrativeTeamAgentInterface* ActorTeam = Cast<INarrativeTeamAgentInterface>(Actor))
		{
			TArray<FGameplayTag> FactionsTags;
			Factions.GetGameplayTagArray(FactionsTags);

			for (auto& T : FactionsTags)
			{			
				ActorTeam->AddFaction(T);
			}
		}
	}
}

void UArsenalStatics::RemoveFactionsFromActor(AActor* Actor, const FGameplayTagContainer& Factions)
{
	if (Actor)
	{
		if (INarrativeTeamAgentInterface* ActorTeam = Cast<INarrativeTeamAgentInterface>(Actor))
		{
			TArray<FGameplayTag> FactionsTags;
			Factions.GetGameplayTagArray(FactionsTags);

			for (auto& T : FactionsTags)
			{			
				ActorTeam->RemoveFaction(T);
			}
		}
	}
}

class UArsenalSettings* UArsenalStatics::GetNarrativeProSettings()
{

	if (UArsenalSettings* Settings = GetMutableDefault<UArsenalSettings>())
	{
		return Settings;
	}

	return nullptr; 
}

class UNarrativeTimeOfDaySettings* UArsenalStatics::GetTimeOfDaySettings()
{
	if (UNarrativeTimeOfDaySettings* Settings = GetMutableDefault<UNarrativeTimeOfDaySettings>())
	{
		return Settings;
	}

	return nullptr; 
}

class UNarrativeUIDeveloperSettings* UArsenalStatics::GetNarrativeUISettings()
{
	if (UNarrativeUIDeveloperSettings* Settings = GetMutableDefault<UNarrativeUIDeveloperSettings>())
	{
		return Settings;
	}

	return nullptr; 
}

class UNarrativeCombatDeveloperSettings* UArsenalStatics::GetCombatSettings()
{
	if (UNarrativeCombatDeveloperSettings* Settings = GetMutableDefault<UNarrativeCombatDeveloperSettings>())
	{
		return Settings;
	}

	return nullptr; 
}

FName UArsenalStatics::GetGameEntryMapName()
{
	if (UArsenalSettings* Settings = GetMutableDefault<UArsenalSettings>())
	{
		return Settings->GameEntryMap.GetLongPackageFName();
	}

	return FName();
}

FName UArsenalStatics::GetCharacterCreatorMapName()
{
	if (UArsenalSettings* Settings = GetMutableDefault<UArsenalSettings>())
	{
		return Settings->CharacterCreatorMap.GetLongPackageFName();
	}

	return FName();
}

class UNarrativeGameUserSettings* UArsenalStatics::GetNarrativeGameUserSettings()
{
	return Cast<UNarrativeGameUserSettings>(UGameUserSettings::GetGameUserSettings());
}

ENarrativeGameplayDifficulty UArsenalStatics::GetGameplayDifficultyLevel()
{
	if (UNarrativeGameUserSettings* GUS = GetNarrativeGameUserSettings())
	{
		return GUS->GetGameplayDifficulty();
	}
	return ENarrativeGameplayDifficulty::Easy;
}

FVector2D UArsenalStatics::GetGameResolution()
{
	FVector2D Result = FVector2D( 1, 1 );

	Result.X = GSystemResolution.ResX;
	Result.Y = GSystemResolution.ResY;

	return Result;
}

FText UArsenalStatics::ReplaceInputVariables(class ANarrativePlayerController* PC, FText TextToReplace)
{
	if (PC)
	{
		//Replace variables in dialogue line
		FString LineString = TextToReplace.ToString();

		int32 OpenBraceIdx = -1;
		int32 CloseBraceIdx = -1;
		bool bFoundOpenBrace = LineString.FindChar('{', OpenBraceIdx);
		bool bFoundCloseBrace = LineString.FindChar('}', CloseBraceIdx);
		uint32 Iters = 0; // More than 50 wildcard replaces and something has probably gone wrong, so safeguard against that

		while (bFoundOpenBrace && bFoundCloseBrace && OpenBraceIdx < CloseBraceIdx && Iters < 50)
		{
			const FString VariableName = LineString.Mid(OpenBraceIdx + 1, CloseBraceIdx - OpenBraceIdx - 1);
			FString VariableVal = VariableName;

			FString L, R;

			//In Narrative Pro you can do {Input.Attack} and this should be replaced with the platform specific rich text ie <img id="Input.Xbox.Attack"/>
			if (VariableName.Split(".", &L, &R))
			{
				if (L.Equals("Input", ESearchCase::IgnoreCase))
				{
					const FString InputDeviceName = PC->GetNarrativeInputDeviceName();

					if (!InputDeviceName.IsEmpty())
					{
						VariableVal = FString::Printf(TEXT("<img id=\"Input.%s.%s\"/>"), *InputDeviceName, *R);
					}

					if (!VariableVal.IsEmpty())
					{
						LineString.RemoveAt(OpenBraceIdx, CloseBraceIdx - OpenBraceIdx + 1);
						LineString.InsertAt(OpenBraceIdx, VariableVal);
					}
				}
			}

			bFoundOpenBrace = LineString.FindChar('{', OpenBraceIdx);
			bFoundCloseBrace = LineString.FindChar('}', CloseBraceIdx);

			Iters++;
		}

		if (Iters > 0)
		{
			return FText::FromString(LineString);
		}
	}


	return TextToReplace;
}

float UArsenalStatics::GetTimeOfDay(const UObject* WorldContextObject)
{
	if (const UWorld* World = WorldContextObject->GetWorld())
	{
		if (ANarrativeGameState* NarrativeGameState = World->GetGameState<ANarrativeGameState>())
		{
			return NarrativeGameState->GetTimeOfDay();
		}
	}
	return 0.f; 
}

bool UArsenalStatics::IsTimeInRange(const float Time, const float RangeStart, const float RangeEnd)
{
	//Time is on same day 
	if (RangeStart <= RangeEnd)
	{
		return Time >= RangeStart && Time <= RangeEnd;
	}
	else // time spans into next day 
	{ 
		return Time >= RangeStart || Time <= RangeEnd;
	}
}

FString UArsenalStatics::GetTimeOfDayAsString(const UObject* WorldContextObject)
{
	const float Time = UArsenalStatics::GetTimeOfDay(WorldContextObject);

	return TimeToString(Time);
}

FString UArsenalStatics::TimeToString(const float InTime)
{
	float Time = InTime;

	if (Time > 2400.f)
	{
		Time = FMath::Fmod(InTime, 2400.f);
	}

	const FString Hour = FString::FromInt(FMath::FloorToInt(Time / 100.f)); 
	const int32 MinuteInt = FMath::TruncToInt((FMath::Fmod(Time, 100.f) / 100.f) * 60.f);
	const FString Minute = MinuteInt <= 9 ? "0" + FString::FromInt(MinuteInt) : FString::FromInt(MinuteInt);

	return FString::Printf(TEXT("%s:%s"), *Hour, *Minute);
}

float UArsenalStatics::GetTotalAccumulatedTime(const UObject* WorldContextObject)
{
	if (const UWorld* World = WorldContextObject->GetWorld())
	{
		if (ANarrativeGameState* NarrativeGameState = World->GetGameState<ANarrativeGameState>())
		{
			return NarrativeGameState->GetAccumulatedTime();
		}
	}
	return 0.f; 
}

class UNarrativeGameplayHUD* UArsenalStatics::GetGameplayHUD(const UObject* WorldContextObject)
{
	if (ANarrativePlayerController* PC = Cast<ANarrativePlayerController>(UGameplayStatics::GetPlayerController(WorldContextObject, 0)))
	{
		return PC->GetNarrativeGameplayHUD();
	}

	return nullptr; 
}

void UArsenalStatics::PushHUDNotification(const UObject* WorldContextObject, FText Message, const float Duration /*= 5.f*/)
{
	if (UNarrativeGameplayHUD* HUD = UArsenalStatics::GetGameplayHUD(WorldContextObject))
	{
		HUD->ShowNotification(Message, Duration);
	}
}

void UArsenalStatics::PushMajorHUDNotification(const UObject* WorldContextObject, FText Message, FText Subtitle, const float Duration /*= 5.f*/, const bool bOverrideCurrentNotification /*= true*/)
{
	if (UNarrativeGameplayHUD* HUD = UArsenalStatics::GetGameplayHUD(WorldContextObject))
	{
		HUD->ShowMajorNotification(Message, Subtitle, Duration, bOverrideCurrentNotification);
	}
}

ANarrativeGameState* UArsenalStatics::GetNarrativeGameState(const UObject* WorldContextObject)
{
	if (const UWorld* World = WorldContextObject->GetWorld())
	{
		return World->GetGameState<ANarrativeGameState>();
	}

	return nullptr; 
}

ANarrativeGameMode* UArsenalStatics::GetNarrativeGameMode(const UObject* WorldContextObject)
{
	if (const UWorld* World = WorldContextObject->GetWorld())
	{
		return World->GetAuthGameMode<ANarrativeGameMode>();
	}

	return nullptr;
}

bool UArsenalStatics::AddLooseGameplayTagsCount(AActor* Actor, const FGameplayTagContainer& GameplayTags, bool bShouldReplicate, int32 Count, const bool bDontAddIfAlreadyOwned)
{
	if (UAbilitySystemComponent* AbilitySysComp = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Actor))
	{
		if (!bDontAddIfAlreadyOwned || !AbilitySysComp->HasAnyMatchingGameplayTags(GameplayTags))
		{
			AbilitySysComp->AddLooseGameplayTags(GameplayTags, Count);

			if (bShouldReplicate)
			{
				AbilitySysComp->AddReplicatedLooseGameplayTags(GameplayTags);
			}

			return true;
		}
	}

	return false;
}

bool UArsenalStatics::RemoveLooseGameplayTagsCount(AActor* Actor, const FGameplayTagContainer& GameplayTags, bool bShouldReplicate, int32 Count)
{
	if (UAbilitySystemComponent* AbilitySysComp = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Actor))
	{
		AbilitySysComp->RemoveLooseGameplayTags(GameplayTags, Count);

		if (bShouldReplicate)
		{
			AbilitySysComp->RemoveReplicatedLooseGameplayTags(GameplayTags);
		}

		return true;
	}

	return false;
}

TArray<UObject*> UArsenalStatics::SortObjectArray_Comparator(const TArray<UObject*>& ObjectArray, FObjectComparator Comparator, const bool bReverse)
{
	TArray<UObject*> Array = ObjectArray;
	if (!bReverse)
	{
		Array.Sort([Comparator](UObject& A, UObject& B)
		{
			bool Result = false;
			Comparator.Execute(&A, &B, Result);
			return Result;
		});
	}
	else
	{
		Array.Sort([Comparator](UObject& A, UObject& B)
		{
			bool Result = false;
			Comparator.Execute(&A, &B, Result);
			return !Result;
		});
	}
	return Array;
}

bool UArsenalStatics::CheckPathExists(const FVector& PathStart, const FVector& PathEnd, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass, const bool bUseFastCheck/*=true*/)
{
	const UWorld* World = GEngine->GetWorldFromContextObject(PathfindingContext, EGetWorldErrorMode::LogAndReturnNull);

	if (World)
	{
		const UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(World);

		if (NavSys != nullptr && NavSys->GetDefaultNavDataInstance() != nullptr)
		{
			bool bValidPathContext = false;
			const ANavigationData* NavigationData = nullptr;

			if (PathfindingContext != nullptr)
			{
				INavAgentInterface* NavAgent = Cast<INavAgentInterface>(PathfindingContext);
			
				if (NavAgent != nullptr)
				{
					const FNavAgentProperties& AgentProps = NavAgent->GetNavAgentPropertiesRef();
					NavigationData = NavSys->GetNavDataForProps(AgentProps, PathStart);
					bValidPathContext = true;
				}
				else if (Cast<ANavigationData>(PathfindingContext))
				{
					NavigationData = (ANavigationData*)PathfindingContext;
					bValidPathContext = true;
				}
			}
			if (bValidPathContext == false)
			{
				// just use default
				NavigationData = NavSys->GetDefaultNavDataInstance();
			}

			check(NavigationData);

			const FPathFindingQuery Query(PathfindingContext, *NavigationData, PathStart, PathEnd, UNavigationQueryFilter::GetQueryFilter(*NavigationData, PathfindingContext, FilterClass));

			return NavSys->TestPathSync(Query, bUseFastCheck ? EPathFindingMode::Hierarchical : EPathFindingMode::Regular);
		}
	}

	return false; 
}

bool UArsenalStatics::IsObjectInEditorViewportWorld(UObject* Object)
{
	if (!Object)
	{
		return false;
	}

	if (UWorld* World = Object->GetWorld())
	{
		return World->WorldType == EWorldType::Editor ||  World->WorldType == EWorldType::EditorPreview;
	}

	return false; 
}

bool UArsenalStatics::IsWithEditor()
{
#if WITH_EDITOR
	return true;
#else
	return false;
#endif
}

bool UArsenalStatics::IsObjectOwnedByNPC(const UObject* TestObject, class UNPCDefinition* NPCDefinition)
{
	if (TestObject)
	{
		if (const ANarrativeNPCController* NPCController = Cast<ANarrativeNPCController>(TestObject))
		{
			return NPCController->GetNPCData() == NPCDefinition;
		}

		const UObject* Outer = TestObject->GetOuter();

		while (IsValid(Outer))
		{
			if (const ANarrativeNPCController* NPCController = Cast<ANarrativeNPCController>(Outer))
			{
				return NPCController->GetNPCData() == NPCDefinition;
			}

			Outer = Outer->GetOuter();
		}
	}

	return false; 
}
