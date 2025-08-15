// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Tales/TriggerSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerSet() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTrigger_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTriggerSet();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTriggerSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UTriggerSet
void UTriggerSet::StaticRegisterNativesUTriggerSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTriggerSet);
UClass* Z_Construct_UClass_UTriggerSet_NoRegister()
{
	return UTriggerSet::StaticClass();
}
struct Z_Construct_UClass_UTriggerSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains an array of instanced triggers to use as a template \n */" },
		{ "IncludePath", "Tales/TriggerSet.h" },
		{ "ModuleRelativePath", "Public/Tales/TriggerSet.h" },
		{ "ToolTip", "Contains an array of instanced triggers to use as a template" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_Inner_MetaData[] = {
		{ "Category", "Triggers" },
		{ "Comment", "/** The triggers and their events to run */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tales/TriggerSet.h" },
		{ "ToolTip", "The triggers and their events to run" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[] = {
		{ "Category", "Triggers" },
		{ "Comment", "/** The triggers and their events to run */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tales/TriggerSet.h" },
		{ "ToolTip", "The triggers and their events to run" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerSet_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeTrigger_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triggers_Inner_MetaData), NewProp_Triggers_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerSet_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x001000800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerSet, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triggers_MetaData), NewProp_Triggers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerSet_Statics::NewProp_Triggers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerSet_Statics::NewProp_Triggers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTriggerSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTriggerSet_Statics::ClassParams = {
	&UTriggerSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTriggerSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerSet_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UTriggerSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTriggerSet()
{
	if (!Z_Registration_Info_UClass_UTriggerSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTriggerSet.OuterSingleton, Z_Construct_UClass_UTriggerSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTriggerSet.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UTriggerSet>()
{
	return UTriggerSet::StaticClass();
}
UTriggerSet::UTriggerSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerSet);
UTriggerSet::~UTriggerSet() {}
// End Class UTriggerSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TriggerSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTriggerSet, UTriggerSet::StaticClass, TEXT("UTriggerSet"), &Z_Registration_Info_UClass_UTriggerSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriggerSet), 2963293794U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TriggerSet_h_2920353565(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TriggerSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TriggerSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
