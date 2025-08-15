// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/NarrativeCharacterVisual.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ANarrativeCharacter;
class AWeaponVisual;
class UAnimInstance;
class UEquippableItem_Clothing;
class UMeshComponent;
class USkeletalMeshComponent;
class UWeaponItem;
struct FCharacterCreatorAttribute_Groom;
struct FCharacterCreatorAttribute_Mesh;
struct FCharacterCreatorAttributeSet;
struct FGameplayTag;
#ifdef NARRATIVEARSENAL_NarrativeCharacterVisual_generated_h
#error "NarrativeCharacterVisual.generated.h already included, missing '#pragma once' in NarrativeCharacterVisual.h"
#endif
#define NARRATIVEARSENAL_NarrativeCharacterVisual_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterVisual_h_14_DELEGATE \
NARRATIVEARSENAL_API void FCharacterAppearanceEvent_DelegateWrapper(const FMulticastScriptDelegate& CharacterAppearanceEvent);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterVisual_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHeadMeshes); \
	DECLARE_FUNCTION(execGetBodyMesh); \
	DECLARE_FUNCTION(execGetFaceMesh); \
	DECLARE_FUNCTION(execGetMainMesh); \
	DECLARE_FUNCTION(execGetLeaderMesh); \
	DECLARE_FUNCTION(execRemoveWeaponVisual); \
	DECLARE_FUNCTION(execAttachWeaponVisual); \
	DECLARE_FUNCTION(execAddWeaponVisual); \
	DECLARE_FUNCTION(execOnWeaponVisualClassReady); \
	DECLARE_FUNCTION(execOnGroomAppearanceReady); \
	DECLARE_FUNCTION(execOnMeshAppearanceReady); \
	DECLARE_FUNCTION(execOnBaseMeshesReady); \
	DECLARE_FUNCTION(execHasLoadHandles); \
	DECLARE_FUNCTION(execGetMeshComponent); \
	DECLARE_FUNCTION(execClearAnimBPOverride); \
	DECLARE_FUNCTION(execSetAnimBPOverride); \
	DECLARE_FUNCTION(execBaseAppearanceApplied); \
	DECLARE_FUNCTION(execGetWeaponVisual); \
	DECLARE_FUNCTION(execInitializeFromCharacter); \
	DECLARE_FUNCTION(execHandleUnEquipClothing); \
	DECLARE_FUNCTION(execHandleEquipClothing); \
	DECLARE_FUNCTION(execHandleUnWieldWeapon); \
	DECLARE_FUNCTION(execHandleWieldWeapon);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterVisual_h_21_CALLBACK_WRAPPERS
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterVisual_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANarrativeCharacterVisual(); \
	friend struct Z_Construct_UClass_ANarrativeCharacterVisual_Statics; \
public: \
	DECLARE_CLASS(ANarrativeCharacterVisual, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(ANarrativeCharacterVisual)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterVisual_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANarrativeCharacterVisual(ANarrativeCharacterVisual&&); \
	ANarrativeCharacterVisual(const ANarrativeCharacterVisual&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANarrativeCharacterVisual); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANarrativeCharacterVisual); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANarrativeCharacterVisual) \
	NO_API virtual ~ANarrativeCharacterVisual();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterVisual_h_18_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterVisual_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterVisual_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterVisual_h_21_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterVisual_h_21_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterVisual_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class ANarrativeCharacterVisual>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterVisual_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
