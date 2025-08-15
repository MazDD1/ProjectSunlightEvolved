// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Spawners/SpawnerBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NARRATIVEARSENAL_SpawnerBase_generated_h
#error "SpawnerBase.generated.h already included, missing '#pragma once' in SpawnerBase.h"
#endif
#define NARRATIVEARSENAL_SpawnerBase_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_SpawnerBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveActors); \
	DECLARE_FUNCTION(execSpawnActors);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_SpawnerBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnerBase(); \
	friend struct Z_Construct_UClass_ASpawnerBase_Statics; \
public: \
	DECLARE_CLASS(ASpawnerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(ASpawnerBase) \
	virtual UObject* _getUObject() const override { return const_cast<ASpawnerBase*>(this); }


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_SpawnerBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpawnerBase(ASpawnerBase&&); \
	ASpawnerBase(const ASpawnerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnerBase) \
	NO_API virtual ~ASpawnerBase();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_SpawnerBase_h_19_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_SpawnerBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_SpawnerBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_SpawnerBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_SpawnerBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class ASpawnerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_SpawnerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
