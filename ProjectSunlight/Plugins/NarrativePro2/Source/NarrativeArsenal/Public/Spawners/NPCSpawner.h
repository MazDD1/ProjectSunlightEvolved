// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Spawners/SpawnerBase.h"
#include "SaveSystemStatics.h"
#include "NPCSpawner.generated.h"

/**
 * A world partition managed actor that spawns/despawns NPCs from a list. Remembers if NPCs have died, and
 * also won't clean up NPCs that are near your player, ie followers etc. 
 */
UCLASS(Blueprintable)
class NARRATIVEARSENAL_API ANPCSpawner : public ASpawnerBase
{
	GENERATED_BODY()
	
public:

	ANPCSpawner();

	//Get all the NPCs spawned here - TODO we can make this more efficient by caching NPCs. 
	UFUNCTION(BlueprintPure, Category = "NPC Spawner")
	void GetSpawnedNPCs(TArray<ANarrativeNPCCharacter*>& OutNPCs);

#if WITH_EDITOR
	// Creates a new npc spawner component for the actor
	void CreateNPCSpawner();
	
	/** Returns Valid if this object has data validation rules set up for it and the data for this object is valid. Returns Invalid if it does not pass the rules. Returns NotValidated if no rules are set for this object. */
	virtual EDataValidationResult IsDataValid(class FDataValidationContext& Context) const override;
#endif // WITH_EDITOR
};
