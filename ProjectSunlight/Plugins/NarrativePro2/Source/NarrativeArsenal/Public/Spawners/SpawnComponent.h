// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "NarrativeSavableComponent.h"
#include "SpawnComponent.generated.h"

/**Lives on a spawner, and will spawn an actor at its transform when requested. */
UCLASS(ClassGroup=(Spawners), meta = (BlueprintSpawnableComponent))
class NARRATIVEARSENAL_API USpawnComponent : public USceneComponent, public INarrativeSavableComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USpawnComponent();

	virtual bool ShouldSpawnActor();
	virtual bool ShouldDespawnActor();

	virtual bool TrySpawnActor();
	virtual bool TryDespawnActor();

	virtual class AActor* SpawnActor();

	UFUNCTION(BlueprintCallable, Category = "Spawn Component")
	virtual bool RemoveActor();

	//Holds a reference to the spawned actor
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawn Component")
	TWeakObjectPtr<class AActor> SpawnedActor;

	virtual FString GetEditorLabel() const;

};
