// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <Runtime/AIModule/Classes/GenericTeamAgentInterface.h>
#include "UnrealFramework/NarrativeGameUserSettings.h"
#include <GameplayTagContainer.h>
#include "ArsenalStatics.generated.h"

DECLARE_DYNAMIC_DELEGATE_ThreeParams(FObjectComparator, UObject*, A, UObject*, B, bool&, Result);


/**
 * Useful BP exposed functions for Narrative Pro. 
 */
UCLASS()
class NARRATIVEARSENAL_API UArsenalStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	//Checks we're the same team, not just that we're friendly with each other.
	UFUNCTION(BlueprintPure, Category = "Teams")
	static bool IsSameTeam(const AActor* TestActor, const AActor* Target);

	UFUNCTION(BlueprintPure, Category = "Teams")
	static ETeamAttitude::Type GetAttitude(const AActor* TestActor, const AActor* Target);

	//Get the factions from the given actor
	UFUNCTION(BlueprintCallable, Category = "Teams")
	static FGameplayTagContainer GetActorFactions(AActor* Actor);

	//Put the actor in the given factions, provided it implements the team interface. 
	UFUNCTION(BlueprintCallable, Category = "Teams")
	static void AddFactionsToActor(AActor* Actor, UPARAM(meta = (Categories="Narrative.Factions"))const FGameplayTagContainer& Factions);

	//remove the actor from the given factions, provided it implements the team interface. 
	UFUNCTION(BlueprintCallable, Category = "Teams")
	static void RemoveFactionsFromActor(AActor* Actor, UPARAM(meta = (Categories="Narrative.Factions"))const FGameplayTagContainer& Factions);

	//Return the narrative pro settings with the values configured in your DefaultEngine.ini file.  
	UFUNCTION(BlueprintPure, Category = "Settings")
	static class UArsenalSettings* GetNarrativeProSettings();

	//Return the time of day settings with the values configured in your DefaultGame.ini file.  
	UFUNCTION(BlueprintPure, Category = "Settings")
	static class UNarrativeTimeOfDaySettings* GetTimeOfDaySettings();

	//BP getter for UI Settings.  
	UFUNCTION(BlueprintPure, Category = "Settings")
	static class UNarrativeUIDeveloperSettings* GetNarrativeUISettings();

	//BP getter for combat Settings. 
	UFUNCTION(BlueprintPure, Category = "Settings")
	static class UNarrativeCombatDeveloperSettings* GetCombatSettings();

	//Return the game entry map name defined in the Narrative Pro settings. 
	UFUNCTION(BlueprintPure, Category = "Settings")
	static FName GetGameEntryMapName();

	//Return the charactor creator map name defined in the Narrative Pro settings. 
	UFUNCTION(BlueprintPure, Category = "Settings")
	static FName GetCharacterCreatorMapName();

	//Return the narrative game user settings
	UFUNCTION(BlueprintPure, Category = "Settings")
	static class UNarrativeGameUserSettings* GetNarrativeGameUserSettings(); 

	//Return the current gameplay difficulty level
	UFUNCTION(BlueprintPure, Category = "Settings")
	static ENarrativeGameplayDifficulty GetGameplayDifficultyLevel();

	//Return the current screen resolution
	UFUNCTION(BlueprintPure, Category = "Resolution")
	static FVector2D GetGameResolution();

	//Given some text, replace any {Input.Interact} style inputs with their rich text platform specific icon equivalents, ie {Input.Attack} becomes <img id=Input.Xbox.Attack/>
	UFUNCTION(BlueprintPure, Category = "Wildcards")
	static FText ReplaceInputVariables(class ANarrativePlayerController* PC, FText TextToReplace);

	//Get the ingame time of day 
	UFUNCTION(BlueprintPure, Category = "Narrative", meta = (WorldContext = "WorldContextObject"))
	static float GetTimeOfDay(const UObject* WorldContextObject);

	//check if the time of day provided falls in the given range - handles looping over to the next day 
	UFUNCTION(BlueprintPure, Category = "Narrative")
	static bool IsTimeInRange(const float Time, const float RangeStart, const float RangeEnd);

	//Get the ingame time of day, formatted as a string ie 16:35
	UFUNCTION(BlueprintPure, Category = "Narrative", meta = (WorldContext = "WorldContextObject"))
	static FString GetTimeOfDayAsString(const UObject* WorldContextObject);

	//Convert the float time into a 24 hour string
	UFUNCTION(BlueprintPure, Category = "Narrative", meta = (WorldContext = "WorldContextObject"))
	static FString TimeToString(const float Time);

	//Get the total accumulated time since the player started playing the game, where 2400 is one full ingame day. 
	UFUNCTION(BlueprintPure, Category = "Narrative", meta = (WorldContext = "WorldContextObject"))
	static float GetTotalAccumulatedTime(const UObject* WorldContextObject);

	//Quickly get the gameplay HUD from the local player. 
	UFUNCTION(BlueprintPure, Category = "Narrative", meta = (WorldContext = "WorldContextObject"))
	static class UNarrativeGameplayHUD* GetGameplayHUD(const UObject* WorldContextObject);
	//Add a notification to the Narrative HUD, provided one has been created 

	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Narrative Common UI", meta = (DisplayName = "Show Narrative HUD Notification", WorldContext = "WorldContextObject"))
	static void PushHUDNotification(const UObject* WorldContextObject, FText Message, const float Duration = 5.f);

	//Add a major notification to the Narrative HUD, provided one has been created 
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Narrative Common UI", meta = (DisplayName = "Show Major Narrative HUD Notification", WorldContext = "WorldContextObject"))
	static void PushMajorHUDNotification(const UObject* WorldContextObject, FText Message, FText Subtitle, const float Duration = 5.f, const bool bOverrideCurrentNotification = true);

	//Get the narrative game state
	UFUNCTION(BlueprintPure, Category = "Narrative", meta = (WorldContext = "WorldContextObject"))
	static ANarrativeGameState* GetNarrativeGameState(const UObject* WorldContextObject);

	//Get the narrative game mode
	UFUNCTION(BlueprintPure, BlueprintAuthorityOnly, Category = "Narrative", meta = (WorldContext = "WorldContextObject"))
	static ANarrativeGameMode* GetNarrativeGameMode(const UObject* WorldContextObject);

	//Add a number of gameplay tags to our ASC. Can skip adding if we already have the tag. 
	UFUNCTION(BlueprintCallable, Category = "GAS")
	static bool AddLooseGameplayTagsCount(AActor* Actor, const FGameplayTagContainer& GameplayTags, bool bShouldReplicate, int32 Count, const bool bDontAddIfAlreadyOwned);

	//Add a number of gameplay tags to our ASC. Can skip adding if we already have the tag. 
	UFUNCTION(BlueprintCallable, Category = "GAS")
	static bool RemoveLooseGameplayTagsCount(AActor* Actor, const FGameplayTagContainer& GameplayTags, bool bShouldReplicate, int32 Count);

	//Sorts an array using a function so BP can easily sort object arrays!
	UFUNCTION(BlueprintPure, Category = "Utility")
	static TArray<UObject*> SortObjectArray_Comparator(const TArray<UObject*>& ObjectArray, FObjectComparator Comparator, const bool bReverse);

	UFUNCTION(BlueprintCallable, Category = "Navigation")
	static bool CheckPathExists(const FVector& PathStart, const FVector& PathEnd, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass, const bool bUseFastCheck=true);

	//Lets us check whether a given objects world type is editor or PIE etc 
	UFUNCTION(BlueprintPure, Category = "Navigation")
	static bool IsObjectInEditorViewportWorld(UObject* Object);

	//Lets us check whether we're currently with the editor, or false if we're in a packaged game
	UFUNCTION(BlueprintPure, Category = "Navigation")
	static bool IsWithEditor();

	//Test is the object is owned by an NPC with the specified definition
	UFUNCTION(BlueprintPure, Category = "Development", meta = (DevelopmentOnly))
	static bool IsObjectOwnedByNPC(const UObject* TestObject, class UNPCDefinition* NPCDefinition);

};
