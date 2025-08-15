// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Spawners/NPCSpawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ANarrativeNPCCharacter;
#ifdef NARRATIVEARSENAL_NPCSpawner_generated_h
#error "NPCSpawner.generated.h already included, missing '#pragma once' in NPCSpawner.h"
#endif
#define NARRATIVEARSENAL_NPCSpawner_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_NPCSpawner_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSpawnedNPCs);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_NPCSpawner_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPCSpawner(); \
	friend struct Z_Construct_UClass_ANPCSpawner_Statics; \
public: \
	DECLARE_CLASS(ANPCSpawner, ASpawnerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(ANPCSpawner)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_NPCSpawner_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANPCSpawner(ANPCSpawner&&); \
	ANPCSpawner(const ANPCSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPCSpawner) \
	NO_API virtual ~ANPCSpawner();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_NPCSpawner_h_14_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_NPCSpawner_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_NPCSpawner_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_NPCSpawner_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_NPCSpawner_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class ANPCSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_NPCSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
