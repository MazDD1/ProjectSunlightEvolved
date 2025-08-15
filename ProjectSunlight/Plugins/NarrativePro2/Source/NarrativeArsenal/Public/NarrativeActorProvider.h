// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <GameplayTagContainer.h>
#include "NarrativeActorProvider.generated.h"

//Allows blueprints to create instanced providers!  
USTRUCT(BlueprintType)
struct NARRATIVEARSENAL_API FInstancedActorProvider
{
	GENERATED_BODY()


	FInstancedActorProvider(){};

	//The instanced goal
	UPROPERTY(Instanced, EditAnywhere, BlueprintReadOnly, Category = "Provider")
	TObjectPtr<UNarrativeActorProvider> Provider; 

};

//Allows blueprints to create instanced providers!  
USTRUCT(BlueprintType)
struct NARRATIVEARSENAL_API FInstancedTransformProvider
{
	GENERATED_BODY()

	FInstancedTransformProvider(){};

	//The instanced goal
	UPROPERTY(Instanced, EditAnywhere, BlueprintReadOnly, Category = "Provider")
	TObjectPtr<UNarrativeTransformProvider> Provider; 

};

/**
 * Provides an actor/transform based on some passed in information. Similar to EQSContexts, but more general gameplay oriented. 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew, AutoExpandCategories = ("Provider"))
class NARRATIVEARSENAL_API UNarrativeProviderBase : public UObject
{
	GENERATED_BODY()

public:

	UNarrativeProviderBase();

	//Return some text describing what the actor provider is providing
	UFUNCTION(BlueprintPure, Category = "Provider")
	virtual FText GetDescription() const;
};

/**
 * Provides an actor/transform based on some passed in information. Similar to EQSContexts, but more general gameplay oriented. 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew, AutoExpandCategories = ("Provider"))
class NARRATIVEARSENAL_API UNarrativeTransformProvider : public UNarrativeProviderBase
{
	GENERATED_BODY()
	
public: 

	UNarrativeTransformProvider();

	// Allows the Object to get a valid UWorld from it's outer.
	virtual UWorld* GetWorld() const override
	{
		if (HasAllFlags(RF_ClassDefaultObject))
		{
			// If we are a CDO, we must return nullptr instead of calling Outer->GetWorld() to fool UObject::ImplementsGetWorld.
			return nullptr;
		}

		UObject* Outer = GetOuter();

		while (Outer)
		{
			UWorld* World = Outer->GetWorld();
			if (World)
			{
				return World;
			}

			Outer = Outer->GetOuter();
		}

		return nullptr;
	}

	//Provide a transform instead of an actor. By default uses ProvideActors() transform if you dont override this. 
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Provider", meta = (WorldContext = "WorldContextObject"))
	FTransform ProvideTransform(const UObject* WorldContextObject) const;
	virtual FTransform ProvideTransform_Implementation(const UObject* WorldContextObject) const;

	virtual FText GetDescription() const override;

};


/**
 * Provides an actor/transform on top of the transform. Similar to EQSContexts, but more general gameplay oriented. 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew, AutoExpandCategories = ("Provider"))
class NARRATIVEARSENAL_API UNarrativeActorProvider : public UNarrativeTransformProvider
{
	GENERATED_BODY()
	
public: 

	UNarrativeActorProvider();

	// Allows the Object to get a valid UWorld from it's outer.
	virtual UWorld* GetWorld() const override
	{
		if (HasAllFlags(RF_ClassDefaultObject))
		{
			// If we are a CDO, we must return nullptr instead of calling Outer->GetWorld() to fool UObject::ImplementsGetWorld.
			return nullptr;
		}

		UObject* Outer = GetOuter();

		while (Outer)
		{
			UWorld* World = Outer->GetWorld();
			if (World)
			{
				return World;
			}

			Outer = Outer->GetOuter();
		}

		return nullptr;
	}

	//Provide the actor. 
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Provider", meta = (WorldContext = "WorldContextObject"))
	class AActor* ProvideActor(const UObject* WorldContextObject) const;
	virtual class AActor* ProvideActor_Implementation(const UObject* WorldContextObject) const;

	virtual FTransform ProvideTransform_Implementation(const UObject* WorldContextObject) const;

	virtual FText GetDescription() const override;

};

/**
 * Provides an NPC
 */
UCLASS(Blueprintable, EditInlineNew, AutoExpandCategories = ("Provider"), meta = (DisplayName = "Find NPC"))
class NARRATIVEARSENAL_API UNarrativeActorProvider_NPC : public UNarrativeActorProvider
{
	GENERATED_BODY()
	
public:

	 UNarrativeActorProvider_NPC();

	 virtual class AActor* ProvideActor_Implementation(const UObject* WorldContextObject) const override;
	 virtual FText GetDescription() const override;

	 //The NPC to provide 
	 UPROPERTY(EditAnywhere, Category = "Actor Provider")
	 TObjectPtr<class UNPCDefinition> NPCDefinition;
};

/**
 * Finds an actor in the world with the specified save GUID. 
 * 
 * Find by level reference is a lot simpler and more intuitive to use - you should use this instead if possible.
 */
UCLASS(Blueprintable, EditInlineNew, AutoExpandCategories = ("Provider"), meta = (DisplayName = "Find Actor By Save GUID"))
class NARRATIVEARSENAL_API UNarrativeActorProvider_GUIDLookup : public UNarrativeActorProvider
{
	GENERATED_BODY()
	
public:

	 UNarrativeActorProvider_GUIDLookup();

	 virtual class AActor* ProvideActor_Implementation(const UObject* WorldContextObject) const override;
	 virtual FText GetDescription() const override;

	 //The GUID to lookup 
	 UPROPERTY(EditAnywhere, Category = "Actor Provider")
	 FGuid GUIDToLookup;
};

/**
 * Finds an actor in the world with the specified level reference.
 */
UCLASS(Blueprintable, EditInlineNew, AutoExpandCategories = ("Provider"), meta = (DisplayName = "Level Actor"))
class NARRATIVEARSENAL_API UNarrativeActorProvider_LevelReference : public UNarrativeActorProvider
{
	GENERATED_BODY()
	
public:

	 UNarrativeActorProvider_LevelReference();

	 virtual class AActor* ProvideActor_Implementation(const UObject* WorldContextObject) const override;
	 virtual FText GetDescription() const override;

	 //The actor reference 
	 UPROPERTY(EditAnywhere, Category = "Actor Provider")
	 TSoftObjectPtr<class AActor> SoftActorReference;
};

/**
 * Finds an actor in the world with the specified class
 */
UCLASS(Blueprintable, EditInlineNew, AutoExpandCategories = ("Provider"), meta = (DisplayName = "Actor of Class"))
class NARRATIVEARSENAL_API UNarrativeActorProvider_ActorOfClass : public UNarrativeActorProvider
{
	GENERATED_BODY()
	
public:

	 UNarrativeActorProvider_ActorOfClass();

	 virtual class AActor* ProvideActor_Implementation(const UObject* WorldContextObject) const override;
	 virtual FText GetDescription() const override;

	 //The actor reference - TODO probably needs to be soft reffed
	 UPROPERTY(EditAnywhere, Category = "Actor Provider")
	 TSubclassOf<class AActor> ActorClassToFind;
};

/**
 * Finds an actor in the world with the specified level reference.
 */
UCLASS(Blueprintable, EditInlineNew, AutoExpandCategories = ("Provider"), meta = (DisplayName = "Point of Interest (Transform)"))
class NARRATIVEARSENAL_API UNarrativeTransformProvider_POI : public UNarrativeTransformProvider
{
	GENERATED_BODY()
	
public:

	 UNarrativeTransformProvider_POI();

	 virtual FTransform ProvideTransform_Implementation(const UObject* WorldContextObject) const override;
	 virtual FText GetDescription() const override;

	/** The Point of interest we should find to return the transform of */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Point Of Interest", meta = (Categories = "Narrative.POIs"))
	FGameplayTag POITag;

};

/**
 * Provide a hardcoded transform to use. 
 */
UCLASS(Blueprintable, EditInlineNew, AutoExpandCategories = ("Provider"), meta = (DisplayName = "Specified Transform"))
class NARRATIVEARSENAL_API UNarrativeTransformProvider_SpecifiedTransform : public UNarrativeTransformProvider
{
	GENERATED_BODY()
	
public:

	 UNarrativeTransformProvider_SpecifiedTransform();

	 virtual FTransform ProvideTransform_Implementation(const UObject* WorldContextObject) const override;

	/** The Point of interest we should find to return the transform of */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Point Of Interest")
	FTransform SpecifiedTransform;

};