// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeCommonUI/Public/NarrativeCommonHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCommonHUD() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeCommonHUD();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeCommonHUD_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeCommonUI();
// End Cross Module References

// Begin Class UNarrativeCommonHUD
void UNarrativeCommonHUD::StaticRegisterNativesUNarrativeCommonHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeCommonHUD);
UClass* Z_Construct_UClass_UNarrativeCommonHUD_NoRegister()
{
	return UNarrativeCommonHUD::StaticClass();
}
struct Z_Construct_UClass_UNarrativeCommonHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NarrativeCommonHUD.h" },
		{ "ModuleRelativePath", "Public/NarrativeCommonHUD.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeCommonHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeCommonHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeCommonUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCommonHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeCommonHUD_Statics::ClassParams = {
	&UNarrativeCommonHUD::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCommonHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeCommonHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeCommonHUD()
{
	if (!Z_Registration_Info_UClass_UNarrativeCommonHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeCommonHUD.OuterSingleton, Z_Construct_UClass_UNarrativeCommonHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeCommonHUD.OuterSingleton;
}
template<> NARRATIVECOMMONUI_API UClass* StaticClass<UNarrativeCommonHUD>()
{
	return UNarrativeCommonHUD::StaticClass();
}
UNarrativeCommonHUD::UNarrativeCommonHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeCommonHUD);
UNarrativeCommonHUD::~UNarrativeCommonHUD() {}
// End Class UNarrativeCommonHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeCommonHUD, UNarrativeCommonHUD::StaticClass, TEXT("UNarrativeCommonHUD"), &Z_Registration_Info_UClass_UNarrativeCommonHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeCommonHUD), 4113872095U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonHUD_h_167776324(TEXT("/Script/NarrativeCommonUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
