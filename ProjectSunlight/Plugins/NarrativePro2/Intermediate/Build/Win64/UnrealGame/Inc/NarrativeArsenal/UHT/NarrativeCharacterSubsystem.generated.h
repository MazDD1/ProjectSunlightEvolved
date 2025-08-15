// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/NarrativeCharacterSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ANarrativeCharacter;
class ANarrativeNPCCharacter;
class UCharacterDefinition;
class UNPCDefinition;
struct FNPCSpawnParams;
struct FPrimaryAssetId;
#ifdef NARRATIVEARSENAL_NarrativeCharacterSubsystem_generated_h
#error "NarrativeCharacterSubsystem.generated.h already included, missing '#pragma once' in NarrativeCharacterSubsystem.h"
#endif
#define NARRATIVEARSENAL_NarrativeCharacterSubsystem_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeCharacterSubsystem_h_14_DELEGATE \
NARRATIVEARSENAL_API void FOnRequestedNPCSpawned_DelegateWrapper(const FMulticastScriptDelegate& OnRequestedNPCSpawned, const UNPCDefinition* NPCData, ANarrativeNPCCharacter* Character);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeCharacterSubsystem_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterArray_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FCharacterArray>();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeCharacterSubsystem_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNPCArray_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FNPCArray>();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeCharacterSubsystem_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnActorDestroyed); \
	DECLARE_FUNCTION(execOnActorSpawned); \
	DECLARE_FUNCTION(execOnNPCClassLoaded); \
	DECLARE_FUNCTION(execIsCharacterSpawned); \
	DECLARE_FUNCTION(execFindCharacters); \
	DECLARE_FUNCTION(execFindNPCs); \
	DECLARE_FUNCTION(execFindCharacter); \
	DECLARE_FUNCTION(execFindNPC); \
	DECLARE_FUNCTION(execFindOrSpawnNPC); \
	DECLARE_FUNCTION(execSpawnNPC); \
	DECLARE_FUNCTION(execDestroyNPC);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeCharacterSubsystem_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeCharacterSubsystem(); \
	friend struct Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics; \
public: \
	DECLARE_CLASS(UNarrativeCharacterSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeCharacterSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeCharacterSubsystem_h_114_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeCharacterSubsystem(UNarrativeCharacterSubsystem&&); \
	UNarrativeCharacterSubsystem(const UNarrativeCharacterSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeCharacterSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeCharacterSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativeCharacterSubsystem) \
	NO_API virtual ~UNarrativeCharacterSubsystem();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeCharacterSubsystem_h_111_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeCharacterSubsystem_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeCharacterSubsystem_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeCharacterSubsystem_h_114_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeCharacterSubsystem_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UNarrativeCharacterSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeCharacterSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
