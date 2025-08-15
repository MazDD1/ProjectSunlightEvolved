// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/AITask_LongMove.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAIController;
class UAITask_LongMove;
#ifdef NARRATIVEARSENAL_AITask_LongMove_generated_h
#error "AITask_LongMove.generated.h already included, missing '#pragma once' in AITask_LongMove.h"
#endif
#define NARRATIVEARSENAL_AITask_LongMove_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_AITask_LongMove_h_13_DELEGATE \
NARRATIVEARSENAL_API void FMoveTaskCompleted_DelegateWrapper(const FMulticastScriptDelegate& MoveTaskCompleted, EPathFollowingResult::Type Result, AAIController* AIController);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_AITask_LongMove_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRunLongMove);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_AITask_LongMove_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAITask_LongMove(); \
	friend struct Z_Construct_UClass_UAITask_LongMove_Statics; \
public: \
	DECLARE_CLASS(UAITask_LongMove, UAITask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UAITask_LongMove)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_AITask_LongMove_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAITask_LongMove(UAITask_LongMove&&); \
	UAITask_LongMove(const UAITask_LongMove&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAITask_LongMove); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITask_LongMove); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITask_LongMove) \
	NO_API virtual ~UAITask_LongMove();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_AITask_LongMove_h_15_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_AITask_LongMove_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_AITask_LongMove_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_AITask_LongMove_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_AITask_LongMove_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UAITask_LongMove>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_AITask_LongMove_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
