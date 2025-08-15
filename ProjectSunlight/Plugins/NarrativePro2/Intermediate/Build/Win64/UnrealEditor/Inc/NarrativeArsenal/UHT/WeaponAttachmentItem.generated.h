// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/WeaponAttachmentItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWeaponItem;
#ifdef NARRATIVEARSENAL_WeaponAttachmentItem_generated_h
#error "WeaponAttachmentItem.generated.h already included, missing '#pragma once' in WeaponAttachmentItem.h"
#endif
#define NARRATIVEARSENAL_WeaponAttachmentItem_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponAttachmentItem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float OverrideWeaponFOV_Implementation() const; \
	DECLARE_FUNCTION(execOverrideWeaponFOV); \
	DECLARE_FUNCTION(execOnRep_WeaponOwner); \
	DECLARE_FUNCTION(execHandleDetach); \
	DECLARE_FUNCTION(execHandleAttach);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponAttachmentItem_h_15_CALLBACK_WRAPPERS
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponAttachmentItem_h_15_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWeaponAttachmentItem, NO_API)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponAttachmentItem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponAttachmentItem(); \
	friend struct Z_Construct_UClass_UWeaponAttachmentItem_Statics; \
public: \
	DECLARE_CLASS(UWeaponAttachmentItem, UNarrativeItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UWeaponAttachmentItem) \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponAttachmentItem_h_15_ARCHIVESERIALIZER \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WeaponOwner=NETFIELD_REP_START, \
		NETFIELD_REP_END=WeaponOwner	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponAttachmentItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWeaponAttachmentItem(UWeaponAttachmentItem&&); \
	UWeaponAttachmentItem(const UWeaponAttachmentItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponAttachmentItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponAttachmentItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponAttachmentItem) \
	NO_API virtual ~UWeaponAttachmentItem();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponAttachmentItem_h_12_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponAttachmentItem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponAttachmentItem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponAttachmentItem_h_15_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponAttachmentItem_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponAttachmentItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UWeaponAttachmentItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponAttachmentItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
