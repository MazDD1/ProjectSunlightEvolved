// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnrealFramework/NarrativeCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ANarrativeCharacterVisual;
class AWeaponVisual;
class UCharacterAppearance;
class UCharacterDefinition;
class UCharacterMapMarker;
class UDialogue;
class UEquipmentComponent;
class UMotionWarpingComponent;
class UNarrativeAbilitySystemComponent;
class UNarrativeAttributeSetBase;
class UNarrativeCharacterMovement;
class UNarrativeEvent;
class UNarrativeInteractionComponent;
class UNarrativeInventoryComponent;
class UNarrativeTrigger;
class UTriggerSet;
class UWeaponItem;
struct FCombatTraceData;
struct FGameplayTag;
struct FPrimaryAssetId;
#ifdef NARRATIVEARSENAL_NarrativeCharacter_generated_h
#error "NarrativeCharacter.generated.h already included, missing '#pragma once' in NarrativeCharacter.h"
#endif
#define NARRATIVEARSENAL_NarrativeCharacter_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeleeComboAnimSet_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FMeleeComboAnimSet>();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeleeCombatData_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FMeleeCombatData>();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_65_DELEGATE \
NARRATIVEARSENAL_API void FOnFactionUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnFactionUpdated);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_66_DELEGATE \
NARRATIVEARSENAL_API void FOnTeleported_DelegateWrapper(const FMulticastScriptDelegate& OnTeleported);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAttackTraceData); \
	DECLARE_FUNCTION(execGetAttackRange); \
	DECLARE_FUNCTION(execGetWeapon); \
	DECLARE_FUNCTION(execGetWeaponVisual); \
	DECLARE_FUNCTION(execGetEquippedWeaponVisual); \
	DECLARE_FUNCTION(execOnRep_EquippedWeapon); \
	DECLARE_FUNCTION(execIsWeaponHolstered); \
	DECLARE_FUNCTION(execSetEquippedWeapon); \
	DECLARE_FUNCTION(execSetWeaponHolstered); \
	DECLARE_FUNCTION(execGetNarrativeCharacterMovement); \
	DECLARE_FUNCTION(execGetAttributeSetBase); \
	DECLARE_FUNCTION(execGetMotionWarpingComponent); \
	DECLARE_FUNCTION(execGetEquipmentComponent); \
	DECLARE_FUNCTION(execGetMarkerComponent); \
	DECLARE_FUNCTION(execGetCharacterVisual); \
	DECLARE_FUNCTION(execRemoveTrigger); \
	DECLARE_FUNCTION(execAddTrigger); \
	DECLARE_FUNCTION(execApplyTriggerSets); \
	DECLARE_FUNCTION(execApplyAppearance); \
	DECLARE_FUNCTION(execOnCharacterVisualInitialized); \
	DECLARE_FUNCTION(execGetCharacterVisualClass); \
	DECLARE_FUNCTION(execSpawnCharacterVisual); \
	DECLARE_FUNCTION(execIsCharacterPendingLoad); \
	DECLARE_FUNCTION(execHandleCharacterDefinitionDataLoaded); \
	DECLARE_FUNCTION(execOnPostCharacterDefinitionDataLoaded); \
	DECLARE_FUNCTION(execOnCharacterDefinitionDataLoaded); \
	DECLARE_FUNCTION(execHandleDeath); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetStealthRating); \
	DECLARE_FUNCTION(execGetXP); \
	DECLARE_FUNCTION(execGetCharacterLevel); \
	DECLARE_FUNCTION(execGetPercentToNextLevel); \
	DECLARE_FUNCTION(execLevelToXP); \
	DECLARE_FUNCTION(execXPToLevel); \
	DECLARE_FUNCTION(execAddDefaultAbilities); \
	DECLARE_FUNCTION(execSetEventActive); \
	DECLARE_FUNCTION(execInitNewCharacter); \
	DECLARE_FUNCTION(execOnDefinitionSet); \
	DECLARE_FUNCTION(execGetInteractionComponent); \
	DECLARE_FUNCTION(execGetInventoryComponent); \
	DECLARE_FUNCTION(execGetCharacterDefinition); \
	DECLARE_FUNCTION(execGetFloorLocation); \
	DECLARE_FUNCTION(execIsAlive);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_95_CALLBACK_WRAPPERS
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANarrativeCharacter(); \
	friend struct Z_Construct_UClass_ANarrativeCharacter_Statics; \
public: \
	DECLARE_CLASS(ANarrativeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(ANarrativeCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ANarrativeCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippedWeapon=NETFIELD_REP_START, \
		NETFIELD_REP_END=EquippedWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_95_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANarrativeCharacter(ANarrativeCharacter&&); \
	ANarrativeCharacter(const ANarrativeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANarrativeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANarrativeCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANarrativeCharacter) \
	NO_API virtual ~ANarrativeCharacter();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_91_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_95_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_95_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class ANarrativeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
