// Copyright Narrative Tools 2024. 


#include "AI/NarrativeCharacterSubsystem.h"
#include "AI/NPCDefinition.h"
#include "UnrealFramework/NarrativeNPCCharacter.h"
#include <EngineUtils.h>
#include <Engine/AssetManager.h>
#include <GameFramework/GameModeBase.h>
#include "Subsystems/NarrativeSaveSubsystem.h"
#include <Kismet/GameplayStatics.h>
#include "NarrativeLogChannels.h"
#include "AI/NarrativeNPCController.h"


UNarrativeCharacterSubsystem::UNarrativeCharacterSubsystem()
{

}


void UNarrativeCharacterSubsystem::PostInitialize()
{
	Super::PostInitialize();
	
	//The save subsystem used to load all this itself, but we had a problem - we needed NPC data around before we loaded - so we've moved it here instead. TODO perhaps a more proper system to handle load ordering 
	if (UWorld* World = GetWorld())
	{
		FOnActorDestroyed::FDelegate ActorDestroyed = FOnActorDestroyed::FDelegate::CreateUObject(this, &UNarrativeCharacterSubsystem::OnActorDestroyed);
		ActorDestroyedHandle = World->AddOnActorDestroyedHandler(ActorDestroyed);

		FOnActorSpawned::FDelegate ActorSpawned = FOnActorSpawned::FDelegate::CreateUObject(this, &UNarrativeCharacterSubsystem::OnActorSpawned);
		ActorSpawnedHandle = World->AddOnActorSpawnedHandler(ActorSpawned);
	}
}

void UNarrativeCharacterSubsystem::Deinitialize()
{
	Super::Deinitialize();

	NPCMap.Empty();
	CharacterMap.Empty();
	ActorSpawnedHandle.Reset();
	ActorDestroyedHandle.Reset();
}

void UNarrativeCharacterSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);
}

bool UNarrativeCharacterSubsystem::DestroyNPC(ANarrativeNPCCharacter* NPC)
{
	if (NPC)
	{
		if (ANarrativeNPCController* NPCController = Cast<ANarrativeNPCController>(NPC->GetController()))
		{
			NPCController->CleanUp(0.f);
		}
		else
		{
			NPC->Destroy();
		}

		return true;
	}

	return false; 
}

class ANarrativeNPCCharacter* UNarrativeCharacterSubsystem::SpawnNPC(UNPCDefinition* NPCData, FTransform SpawnTransform /*= FTransform()*/, FNPCSpawnParams SpawnParams /*= FNPCSpawnParams()*/)
{
	if (NPCData)
	{
		if (UWorld* World = GetWorld())
		{
			//Only server types should spawn NPCs, which should then replicate 
			if (World->GetNetMode() < NM_Client)
			{
				if (!NPCData->NPCClassPath.IsValid())
				{
					//TODO should we async load new NPCs in, this is generally always loaded though atm 
					NPCData->NPCClassPath.LoadSynchronous();
				}

				//If the NPCs class path is valid, we can spawn it immediately. Otherwise, we'll need to wait for the asset manager to load it. 
				if (NPCData->NPCClassPath.IsValid())
				{
					return SpawnNPC_Internal(NPCData, SpawnTransform, SpawnParams);
				}
			}
		}
	}

	return nullptr;
}

class ANarrativeNPCCharacter* UNarrativeCharacterSubsystem::FindOrSpawnNPC(UNPCDefinition* NPCData, FTransform SpawnTransform)
{
	if (!IsValid(NPCData))
	{
		return nullptr;
	}

	ANarrativeNPCCharacter* NPC = FindNPC(NPCData);

	//If the NPC is invalid, it wasn't in the world, and so we need to make sure we spawn it. 
	if(!IsValid(NPC))
	{
		return SpawnNPC(NPCData, SpawnTransform);

	}

	return NPC;
}

class ANarrativeNPCCharacter* UNarrativeCharacterSubsystem::FindNPC(const UNPCDefinition* NPCData, bool& bOutSucceeded) const 
{
	if (NPCMap.Contains(NPCData))
	{
		for (auto& NPC : NPCMap[NPCData].NPCs)
		{
			if (IsValid(NPC))
			{
				bOutSucceeded = true; 
				return NPC;
			}
		}
	}

	bOutSucceeded = false;
	return nullptr;
}

class ANarrativeNPCCharacter* UNarrativeCharacterSubsystem::FindNPC(const UNPCDefinition* NPCData) const
{
	if (NPCMap.Contains(NPCData))
	{
		for (auto& NPC : NPCMap[NPCData].NPCs)
		{
			if (IsValid(NPC))
			{
				return NPC;
			}
		}
	}

	return nullptr;
}

class ANarrativeCharacter* UNarrativeCharacterSubsystem::FindCharacter(const UCharacterDefinition* CharacterDefinition) const
{
	if (CharacterMap.Contains(CharacterDefinition))
	{
		for (auto& Char : CharacterMap[CharacterDefinition].Characters)
		{
			if (IsValid(Char))
			{
				return Char;
			}
		}
	}
	return nullptr;
}

void UNarrativeCharacterSubsystem::FindNPCs(const UNPCDefinition* NPCData, TArray<ANarrativeNPCCharacter*>& OutActors) const
{
	if (NPCMap.Contains(NPCData))
	{
		OutActors = NPCMap[NPCData].NPCs;
	}
}

void UNarrativeCharacterSubsystem::FindCharacters(const UCharacterDefinition* CharacterDefinition, TArray<ANarrativeCharacter*>& OutActors) const
{
	if (CharacterMap.Contains(CharacterDefinition))
	{
		OutActors = CharacterMap[CharacterDefinition].Characters;
	}
}

bool UNarrativeCharacterSubsystem::IsCharacterSpawned(const UCharacterDefinition* CharacterDefinition) const
{
	if (CharacterMap.Contains(CharacterDefinition))
	{
		return CharacterMap[CharacterDefinition].HasValidCharacters();
	}

	return false; 
}


class ANarrativeNPCCharacter* UNarrativeCharacterSubsystem::SpawnNPC_Internal(UNPCDefinition* NPCData, const FTransform& SpawnTransform, const FNPCSpawnParams& SpawnParams)
{
	if (UWorld* World = GetWorld())
	{
		//Only server types should spawn NPCs, which should then replicate 
		if (World->GetNetMode() < NM_Client)
		{
			if (IsValid(NPCData))
			{	
				//TODO maybe just have one npc class and load syncronous it 
				const TSubclassOf<ANarrativeNPCCharacter> NPCClass =  NPCData->NPCClassPath.LoadSynchronous();

				FNPCArray& NPCArray = NPCMap.FindOrAdd(NPCData);
				FCharacterArray& CharArray = CharacterMap.FindOrAdd(NPCData);

				//The NPC array already has an NPC spawned under this key. This instance cannot be created, lets destroy the NPC we tried to spawn 
				//TODO we could also check if the NPC has been killed and doesn't want respawned 
				if (!NPCData->bAllowMultipleInstances && NPCArray.HasValidNPCs())
				{
					UE_LOG(LogNPCs, Warning, TEXT("UNarrativeNPCSubsystem::SpawnNPC_Internal prevented a duplicate of %s"), *NPCData->NPCName.ToString());
					return nullptr;
				}

				if (ANarrativeNPCCharacter* NPC = World->SpawnActorDeferred<ANarrativeNPCCharacter>(NPCClass, SpawnTransform, nullptr, nullptr, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn))
				{
					if (IsValid(NPC))
					{
						NPC->SpawnInfo.SpawnParams = SpawnParams;
						NPC->SetNPCDefinition(NPCData);
						NPC->FinishSpawning(SpawnTransform);

						/*A good example of how terrifying game development can be. I added this to help designers see in the outliner which NPCs were which. 
						However this resulted in a terrifying bug where NPCs were having all their components quitely destroyed and rebuilt, causing many very difficult to track down bugs. 
						
						Worst still, this only happened in editor standalone games, no problem in PIE. So its gone for now!  
						*/
						//#if WITH_EDITOR
							//NPC->SetActorLabel("NarrativeNPC_" + NPC->NPCData->NPCID.ToString());
						//#endif

						if (NPC)
						{
							NPC->SpawnDefaultController();
						}

						NPCArray.NPCs.AddUnique(NPC);
						CharArray.Characters.AddUnique(NPC);

						OnNPCSpawned.Broadcast(NPCData, NPC);

						return NPC;
					}

				}
			}
		}
	}
	return nullptr;
}

void UNarrativeCharacterSubsystem::RegisterCharacter(class ANarrativeCharacter* Character)
{
	if (IsValid(Character))
	{
		if (UCharacterDefinition* CharDef = Character->GetCharacterDefinition())
		{
			FCharacterArray& CharArray = CharacterMap.FindOrAdd(CharDef);

			CharArray.Characters.AddUnique(Character);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("NChar %s was spawned but didn't have valid chardef so we cannot map it. "), *GetNameSafe(Character));
		}
	}
}

void UNarrativeCharacterSubsystem::OnNPCClassLoaded(FPrimaryAssetId LoadedId, const FTransform SpawnTransform, const FNPCSpawnParams& SpawnParams)
{
	if (UAssetManager* Manager = UAssetManager::GetIfInitialized())
	{
		if (UNPCDefinition* NPCData = Cast<UNPCDefinition>(Manager->GetPrimaryAssetObject(LoadedId)))
		{
			//The class path should now be loaded thanks to bundles! 
			check(NPCData->NPCClassPath.IsValid());

			SpawnNPC_Internal(NPCData, SpawnTransform, SpawnParams);
		}
	}
}

void UNarrativeCharacterSubsystem::OnActorSpawned(class AActor* SpawnedActor)
{
	//NPCs and Player spawning logic both just call this manually as more efficient and we can ensure character state is ready 
	//if (ANarrativeCharacter* NChar = Cast<ANarrativeCharacter>(SpawnedActor))
	//{
	//	if (IsValid(NChar))
	//	{
	//		if (UCharacterDefinition* CharDef = NChar->GetCharacterDefiniton())
	//		{
	//			FCharacterArray& CharArray = CharacterMap.FindOrAdd(CharDef);

	//			CharArray.Characters.AddUnique(NChar);
	//		}
	//		else
	//		{
	//			UE_LOG(LogTemp, Warning, TEXT("NChar %s was spawned but didn't have valid chardef so we cannot map it. "), *GetNameSafe(NChar));
	//		}
	//	}
	//}
}

void UNarrativeCharacterSubsystem::OnActorDestroyed(class AActor* DestroyedActor)
{
	if (ANarrativeCharacter* NChar = Cast<ANarrativeCharacter>(DestroyedActor))
	{
		if (UCharacterDefinition* CharDef = NChar->GetCharacterDefinition())
		{
			if (CharacterMap.Contains(CharDef))
			{
				CharacterMap[CharDef].Characters.Remove(NChar);
			}
			else
			{
				UE_LOG(LogNPCs, Warning, TEXT("UNarrativeNPCSubsystem::OnActorDestroyed tried removing character from map but it had null CharDef! "));
			}
		}

		//Remove the destroyed NPC from its map
		if (ANarrativeNPCCharacter* DestroyedNPC = Cast<ANarrativeNPCCharacter>(DestroyedActor))
		{
			if (UNPCDefinition* NPCData = DestroyedNPC->NPCDefinition)
			{
				if (NPCMap.Contains(NPCData))
				{
					NPCMap[NPCData].NPCs.Remove(DestroyedNPC);
				}
				else
				{
					UE_LOG(LogNPCs, Warning, TEXT("UNarrativeNPCSubsystem::OnActorDestroyed tried removing NPC from map but it had null NPCData! "));
				}
			}
		}
	}

}

//
//void UAsyncAction_FindOrSpawnNPC::HandleRequestCompleted()
//{
//
//}
//
//void UAsyncAction_FindOrSpawnNPC::Activate()
//{
//	if (World.IsValid())
//	{
//		UWorld* OurWorld = World.Get();
//
//		if (UNarrativeCharacterSubsystem* NPCSubsystem = OurWorld->GetSubsystem<UNarrativeCharacterSubsystem>())
//		{
//			//If character isn't valid yet, wait for subsystem to announce its ready
//			// TODO REMOVED FOR NOW AS WE ARE NOT ASYNC LOAD ATM, ADD THIS BACK WHEN READY 
//			//NPCSubsystem->OnNPCSpawned.AddDynamic(this, &UAsyncAction_FindOrSpawnNPC::OnNPCSpawned);
//
//			ANarrativeNPCCharacter* Character = NPCSubsystem->FindOrSpawnNPC(NPCAsset, Transform);
//
//			if (IsValid(Character))
//			{
//				OnNPCReady.Broadcast(Character);
//			}
//		}
//	}
//}
//
//
//UAsyncAction_FindOrSpawnNPC* UAsyncAction_FindOrSpawnNPC::FindOrSpawnNPC(UObject* WorldContextObject, UNPCDefinition* NPCData, FTransform Transform /*= FTransform()*/)
//{
//	if (WorldContextObject)
//	{
//		UAsyncAction_FindOrSpawnNPC* Action = NewObject<UAsyncAction_FindOrSpawnNPC>();
//		Action->NPCAsset = NPCData;
//		Action->Transform = Transform;
//		Action->World = WorldContextObject->GetWorld();
//		Action->RegisterWithGameInstance(WorldContextObject);
//
//		return Action;
//	}
//
//	return nullptr;
//}
//
//void UAsyncAction_FindOrSpawnNPC::OnNPCSpawned(const UNPCDefinition* InNPCAsset, class ANarrativeNPCCharacter* Character)
//{	
//	UWorld* OurWorld = World.Get();
//
//	//TODO remove delegate in better way 
//	if (UNarrativeCharacterSubsystem* NPCSubsystem = OurWorld->GetSubsystem<UNarrativeCharacterSubsystem>())
//	{
//		//Make sure the NPC we requested was spawned and not a different one 
//		if (InNPCAsset == NPCAsset)
//		{
//			OnNPCReady.Broadcast(Character);
//		}
//
//		//If character isn't valid yet, wait for subsystem to announce its ready
//		NPCSubsystem->OnNPCSpawned.RemoveDynamic(this, &UAsyncAction_FindOrSpawnNPC::OnNPCSpawned);
//	}
//
//}
