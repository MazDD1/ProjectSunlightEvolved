// Copyright Narrative Tools 2024. 

#include "Spawners/SpawnComponent.h"

USpawnComponent::USpawnComponent()
{

}

bool USpawnComponent::ShouldSpawnActor()
{
	//Check active 
	return IsActive();
}

bool USpawnComponent::ShouldDespawnActor()
{
	return SpawnedActor.IsValid(); 
}

bool USpawnComponent::TrySpawnActor()
{
	if (AActor* Actor = SpawnActor())
	{
		SpawnedActor = Actor;
		return true;
	}

	return false; 
}

bool USpawnComponent::TryDespawnActor()
{
	return RemoveActor();
}

class AActor* USpawnComponent::SpawnActor()
{
	return nullptr;
}

bool USpawnComponent::RemoveActor()
{
	if (SpawnedActor.IsValid())
	{
		SpawnedActor->Destroy();
		SpawnedActor.Reset();
		return true;
	}

	return false;
}

FString USpawnComponent::GetEditorLabel() const
{
	return FString();
}
