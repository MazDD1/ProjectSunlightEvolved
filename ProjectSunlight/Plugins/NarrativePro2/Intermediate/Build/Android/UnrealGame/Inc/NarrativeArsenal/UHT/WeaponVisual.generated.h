// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/WeaponVisual.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
class UStaticMeshComponent;
class UWeaponAttachmentItem;
struct FAnimNotifyEventReference;
struct FGameplayTag;
struct FHitResult;
struct FWeaponAttachmentSlotConfig;
#ifdef NARRATIVEARSENAL_WeaponVisual_generated_h
#error "WeaponVisual.generated.h already included, missing '#pragma once' in WeaponVisual.h"
#endif
#define NARRATIVEARSENAL_WeaponVisual_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponVisual_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TArray<UPrimitiveComponent*> GetCollidingPrimitives_Implementation(); \
	virtual void HandleRemoveAttachment_Implementation(UWeaponAttachmentItem* Attachment); \
	virtual void HandleAddAttachment_Implementation(UWeaponAttachmentItem* Attachment, FWeaponAttachmentSlotConfig const& WeaponSlotConfig); \
	DECLARE_FUNCTION(execGetCollidingPrimitives); \
	DECLARE_FUNCTION(execCacheCollisionData); \
	DECLARE_FUNCTION(execCleanupAttackData); \
	DECLARE_FUNCTION(execPerformCollisionCheck); \
	DECLARE_FUNCTION(execCacheAnimationTransform); \
	DECLARE_FUNCTION(execSweepForHits); \
	DECLARE_FUNCTION(execHandleRemoveAttachment); \
	DECLARE_FUNCTION(execHandleAddAttachment); \
	DECLARE_FUNCTION(execRegisterDefaultAttachment);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponVisual_h_14_CALLBACK_WRAPPERS
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponVisual_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponVisual(); \
	friend struct Z_Construct_UClass_AWeaponVisual_Statics; \
public: \
	DECLARE_CLASS(AWeaponVisual, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(AWeaponVisual)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponVisual_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWeaponVisual(AWeaponVisual&&); \
	AWeaponVisual(const AWeaponVisual&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponVisual); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponVisual); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponVisual) \
	NO_API virtual ~AWeaponVisual();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponVisual_h_11_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponVisual_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponVisual_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponVisual_h_14_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponVisual_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponVisual_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class AWeaponVisual>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponVisual_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
