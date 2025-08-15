// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/Activities/NPCActivityConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCActivityConfiguration() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivity_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivityConfiguration();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivityConfiguration_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCGoalGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNPCActivityConfiguration
void UNPCActivityConfiguration::StaticRegisterNativesUNPCActivityConfiguration()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCActivityConfiguration);
UClass* Z_Construct_UClass_UNPCActivityConfiguration_NoRegister()
{
	return UNPCActivityConfiguration::StaticClass();
}
struct Z_Construct_UClass_UNPCActivityConfiguration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines what activities an NPC can do, and what goal generators they will have.\n */" },
		{ "IncludePath", "AI/Activities/NPCActivityConfiguration.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityConfiguration.h" },
		{ "ToolTip", "Defines what activities an NPC can do, and what goal generators they will have." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RescoreInterval_MetaData[] = {
		{ "Category", "Activity Group" },
		{ "Comment", "//How often we want to re-score our goals, which may change our current activity. Faster rescore rates will use more performance.\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityConfiguration.h" },
		{ "ToolTip", "How often we want to re-score our goals, which may change our current activity. Faster rescore rates will use more performance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultActivities_MetaData[] = {
		{ "Category", "Activity Group" },
		{ "Comment", "//The activities to grant the NPC\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityConfiguration.h" },
		{ "ToolTip", "The activities to grant the NPC" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalGenerators_MetaData[] = {
		{ "Category", "Activity Group" },
		{ "Comment", "//The goal generators the NPC can use to generate goals - you can add your own goals manually via AC->AddGoal(), goals do not have to be added via generators \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityConfiguration.h" },
		{ "ToolTip", "The goal generators the NPC can use to generate goals - you can add your own goals manually via AC->AddGoal(), goals do not have to be added via generators" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RescoreInterval;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultActivities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultActivities;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GoalGenerators_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GoalGenerators;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCActivityConfiguration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNPCActivityConfiguration_Statics::NewProp_RescoreInterval = { "RescoreInterval", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivityConfiguration, RescoreInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RescoreInterval_MetaData), NewProp_RescoreInterval_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNPCActivityConfiguration_Statics::NewProp_DefaultActivities_Inner = { "DefaultActivities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UNPCActivity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNPCActivityConfiguration_Statics::NewProp_DefaultActivities = { "DefaultActivities", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivityConfiguration, DefaultActivities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultActivities_MetaData), NewProp_DefaultActivities_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNPCActivityConfiguration_Statics::NewProp_GoalGenerators_Inner = { "GoalGenerators", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UNPCGoalGenerator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNPCActivityConfiguration_Statics::NewProp_GoalGenerators = { "GoalGenerators", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivityConfiguration, GoalGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalGenerators_MetaData), NewProp_GoalGenerators_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCActivityConfiguration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityConfiguration_Statics::NewProp_RescoreInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityConfiguration_Statics::NewProp_DefaultActivities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityConfiguration_Statics::NewProp_DefaultActivities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityConfiguration_Statics::NewProp_GoalGenerators_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityConfiguration_Statics::NewProp_GoalGenerators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivityConfiguration_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNPCActivityConfiguration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivityConfiguration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCActivityConfiguration_Statics::ClassParams = {
	&UNPCActivityConfiguration::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNPCActivityConfiguration_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivityConfiguration_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivityConfiguration_Statics::Class_MetaDataParams), Z_Construct_UClass_UNPCActivityConfiguration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNPCActivityConfiguration()
{
	if (!Z_Registration_Info_UClass_UNPCActivityConfiguration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCActivityConfiguration.OuterSingleton, Z_Construct_UClass_UNPCActivityConfiguration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNPCActivityConfiguration.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNPCActivityConfiguration>()
{
	return UNPCActivityConfiguration::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCActivityConfiguration);
UNPCActivityConfiguration::~UNPCActivityConfiguration() {}
// End Class UNPCActivityConfiguration

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityConfiguration_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNPCActivityConfiguration, UNPCActivityConfiguration::StaticClass, TEXT("UNPCActivityConfiguration"), &Z_Registration_Info_UClass_UNPCActivityConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCActivityConfiguration), 70696136U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityConfiguration_h_3268179306(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityConfiguration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityConfiguration_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
