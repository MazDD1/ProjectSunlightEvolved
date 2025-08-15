// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Activities/NPCGoalItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNPCActivity;
class UNPCGoalItem;
class UObject;
#ifdef NARRATIVEARSENAL_NPCGoalItem_generated_h
#error "NPCGoalItem.generated.h already included, missing '#pragma once' in NPCGoalItem.h"
#endif
#define NARRATIVEARSENAL_NPCGoalItem_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h_11_DELEGATE \
NARRATIVEARSENAL_API void FOnGoalSucceeded_DelegateWrapper(const FMulticastScriptDelegate& OnGoalSucceeded, UNPCActivity* Activity, UNPCGoalItem* Goal);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsActiveGoal); \
	DECLARE_FUNCTION(execRemoveGoal); \
	DECLARE_FUNCTION(execOnRemoved); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execPrepareForSave); \
	DECLARE_FUNCTION(execShouldCleanup); \
	DECLARE_FUNCTION(execGetGoalScore); \
	DECLARE_FUNCTION(execGetGoalKey); \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetGoalAgeSeconds); \
	DECLARE_FUNCTION(execGetCatchupTime);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h_23_CALLBACK_WRAPPERS
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNPCGoalItem(); \
	friend struct Z_Construct_UClass_UNPCGoalItem_Statics; \
public: \
	DECLARE_CLASS(UNPCGoalItem, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UNPCGoalItem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNPCGoalItem(UNPCGoalItem&&); \
	UNPCGoalItem(const UNPCGoalItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNPCGoalItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNPCGoalItem); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNPCGoalItem) \
	NO_API virtual ~UNPCGoalItem();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h_20_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h_23_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h_23_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UNPCGoalItem>();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h_172_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSavedGoalItem_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FSavedGoalItem>();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h_188_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstancedNPCGoalItem_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FInstancedNPCGoalItem>();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h_204_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNPCGoalContainer_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FNPCGoalContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
