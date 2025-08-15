// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/BehaviorTree/Tasks/BTTask_LongMove.h"
#include "Runtime/AIModule/Classes/BehaviorTree/ValueOrBBKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_LongMove() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_GameplayTaskBase();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Bool();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Float();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Vector();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UBTTask_LongMove();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UBTTask_LongMove_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UBTTask_LongMove
void UBTTask_LongMove::StaticRegisterNativesUBTTask_LongMove()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_LongMove);
UClass* Z_Construct_UClass_UBTTask_LongMove_NoRegister()
{
	return UBTTask_LongMove::StaticClass();
}
struct Z_Construct_UClass_UBTTask_LongMove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Perform AI movement which supports long distances through POI linking\n */" },
		{ "IncludePath", "AI/BehaviorTree/Tasks/BTTask_LongMove.h" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/Tasks/BTTask_LongMove.h" },
		{ "ToolTip", "Perform AI movement which supports long distances through POI linking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalLocation_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/Tasks/BTTask_LongMove.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/Tasks/BTTask_LongMove.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopOnOverlap_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/Tasks/BTTask_LongMove.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptPartialPath_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/Tasks/BTTask_LongMove.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockAILogic_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/Tasks/BTTask_LongMove.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectGoalOnNavigation_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/Tasks/BTTask_LongMove.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequireNavigableEndLocation_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/Tasks/BTTask_LongMove.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GoalLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AcceptanceRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StopOnOverlap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AcceptPartialPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LockAILogic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectGoalOnNavigation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequireNavigableEndLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_LongMove>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_LongMove_Statics::NewProp_GoalLocation = { "GoalLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_LongMove, GoalLocation), Z_Construct_UScriptStruct_FValueOrBBKey_Vector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalLocation_MetaData), NewProp_GoalLocation_MetaData) }; // 233808226
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_LongMove_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_LongMove, AcceptanceRadius), Z_Construct_UScriptStruct_FValueOrBBKey_Float, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptanceRadius_MetaData), NewProp_AcceptanceRadius_MetaData) }; // 4044354920
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_LongMove_Statics::NewProp_StopOnOverlap = { "StopOnOverlap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_LongMove, StopOnOverlap), Z_Construct_UScriptStruct_FValueOrBBKey_Bool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopOnOverlap_MetaData), NewProp_StopOnOverlap_MetaData) }; // 1056548058
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_LongMove_Statics::NewProp_AcceptPartialPath = { "AcceptPartialPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_LongMove, AcceptPartialPath), Z_Construct_UScriptStruct_FValueOrBBKey_Bool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptPartialPath_MetaData), NewProp_AcceptPartialPath_MetaData) }; // 1056548058
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_LongMove_Statics::NewProp_LockAILogic = { "LockAILogic", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_LongMove, LockAILogic), Z_Construct_UScriptStruct_FValueOrBBKey_Bool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockAILogic_MetaData), NewProp_LockAILogic_MetaData) }; // 1056548058
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_LongMove_Statics::NewProp_ProjectGoalOnNavigation = { "ProjectGoalOnNavigation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_LongMove, ProjectGoalOnNavigation), Z_Construct_UScriptStruct_FValueOrBBKey_Bool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectGoalOnNavigation_MetaData), NewProp_ProjectGoalOnNavigation_MetaData) }; // 1056548058
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_LongMove_Statics::NewProp_RequireNavigableEndLocation = { "RequireNavigableEndLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_LongMove, RequireNavigableEndLocation), Z_Construct_UScriptStruct_FValueOrBBKey_Bool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequireNavigableEndLocation_MetaData), NewProp_RequireNavigableEndLocation_MetaData) }; // 1056548058
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_LongMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_LongMove_Statics::NewProp_GoalLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_LongMove_Statics::NewProp_AcceptanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_LongMove_Statics::NewProp_StopOnOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_LongMove_Statics::NewProp_AcceptPartialPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_LongMove_Statics::NewProp_LockAILogic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_LongMove_Statics::NewProp_ProjectGoalOnNavigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_LongMove_Statics::NewProp_RequireNavigableEndLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_LongMove_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_LongMove_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_GameplayTaskBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_LongMove_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_LongMove_Statics::ClassParams = {
	&UBTTask_LongMove::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_LongMove_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_LongMove_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_LongMove_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_LongMove_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_LongMove()
{
	if (!Z_Registration_Info_UClass_UBTTask_LongMove.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_LongMove.OuterSingleton, Z_Construct_UClass_UBTTask_LongMove_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_LongMove.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UBTTask_LongMove>()
{
	return UBTTask_LongMove::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_LongMove);
UBTTask_LongMove::~UBTTask_LongMove() {}
// End Class UBTTask_LongMove

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_BehaviorTree_Tasks_BTTask_LongMove_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_LongMove, UBTTask_LongMove::StaticClass, TEXT("UBTTask_LongMove"), &Z_Registration_Info_UClass_UBTTask_LongMove, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_LongMove), 3671896525U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_BehaviorTree_Tasks_BTTask_LongMove_h_1806741080(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_BehaviorTree_Tasks_BTTask_LongMove_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_BehaviorTree_Tasks_BTTask_LongMove_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
