// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Navigation/NavigatorStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigatorStatics() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNavigatorStatics();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNavigatorStatics_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNavigatorStatics
void UNavigatorStatics::StaticRegisterNativesUNavigatorStatics()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigatorStatics);
UClass* Z_Construct_UClass_UNavigatorStatics_NoRegister()
{
	return UNavigatorStatics::StaticClass();
}
struct Z_Construct_UClass_UNavigatorStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Navigation/NavigatorStatics.h" },
		{ "ModuleRelativePath", "Public/Navigation/NavigatorStatics.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigatorStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavigatorStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigatorStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigatorStatics_Statics::ClassParams = {
	&UNavigatorStatics::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigatorStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigatorStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigatorStatics()
{
	if (!Z_Registration_Info_UClass_UNavigatorStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigatorStatics.OuterSingleton, Z_Construct_UClass_UNavigatorStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigatorStatics.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNavigatorStatics>()
{
	return UNavigatorStatics::StaticClass();
}
UNavigatorStatics::UNavigatorStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigatorStatics);
UNavigatorStatics::~UNavigatorStatics() {}
// End Class UNavigatorStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NavigatorStatics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigatorStatics, UNavigatorStatics::StaticClass, TEXT("UNavigatorStatics"), &Z_Registration_Info_UClass_UNavigatorStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigatorStatics), 2971495366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NavigatorStatics_h_2086740943(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NavigatorStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NavigatorStatics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
