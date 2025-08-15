// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Tales/TriggerSchedule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerSchedule() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTriggerSchedule();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTriggerSchedule_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTriggerSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UTriggerSchedule
void UTriggerSchedule::StaticRegisterNativesUTriggerSchedule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTriggerSchedule);
UClass* Z_Construct_UClass_UTriggerSchedule_NoRegister()
{
	return UTriggerSchedule::StaticClass();
}
struct Z_Construct_UClass_UTriggerSchedule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains a set of Narrative Triggers and their Events to activate/deactivate\n */" },
		{ "IncludePath", "Tales/TriggerSchedule.h" },
		{ "ModuleRelativePath", "Public/Tales/TriggerSchedule.h" },
		{ "ToolTip", "Contains a set of Narrative Triggers and their Events to activate/deactivate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[] = {
		{ "Category", "Triggers" },
		{ "Comment", "/** The triggers that make up this schedule */" },
		{ "ModuleRelativePath", "Public/Tales/TriggerSchedule.h" },
		{ "ToolTip", "The triggers that make up this schedule" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Triggers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerSchedule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTriggerSchedule_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTriggerSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerSchedule_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriggerSchedule, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triggers_MetaData), NewProp_Triggers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerSchedule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerSchedule_Statics::NewProp_Triggers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerSchedule_Statics::NewProp_Triggers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerSchedule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTriggerSchedule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerSchedule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTriggerSchedule_Statics::ClassParams = {
	&UTriggerSchedule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTriggerSchedule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerSchedule_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerSchedule_Statics::Class_MetaDataParams), Z_Construct_UClass_UTriggerSchedule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTriggerSchedule()
{
	if (!Z_Registration_Info_UClass_UTriggerSchedule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTriggerSchedule.OuterSingleton, Z_Construct_UClass_UTriggerSchedule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTriggerSchedule.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UTriggerSchedule>()
{
	return UTriggerSchedule::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerSchedule);
UTriggerSchedule::~UTriggerSchedule() {}
// End Class UTriggerSchedule

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TriggerSchedule_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTriggerSchedule, UTriggerSchedule::StaticClass, TEXT("UTriggerSchedule"), &Z_Registration_Info_UClass_UTriggerSchedule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriggerSchedule), 386984633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TriggerSchedule_h_1520161281(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TriggerSchedule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TriggerSchedule_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
