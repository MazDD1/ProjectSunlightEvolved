// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Widgets/NarrativeMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeMenu() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeMenu();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeMenu_NoRegister();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeActivatableWidget();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeMenu
void UNarrativeMenu::StaticRegisterNativesUNarrativeMenu()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeMenu);
UClass* Z_Construct_UClass_UNarrativeMenu_NoRegister()
{
	return UNarrativeMenu::StaticClass();
}
struct Z_Construct_UClass_UNarrativeMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for menus - screens that can be activated and show some content, and closed later. Added to the gameplay HUD. \n */" },
		{ "IncludePath", "Widgets/NarrativeMenu.h" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeMenu.h" },
		{ "ToolTip", "Base class for menus - screens that can be activated and show some content, and closed later. Added to the gameplay HUD." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeMenu_Statics::ClassParams = {
	&UNarrativeMenu::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeMenu()
{
	if (!Z_Registration_Info_UClass_UNarrativeMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeMenu.OuterSingleton, Z_Construct_UClass_UNarrativeMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeMenu.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeMenu>()
{
	return UNarrativeMenu::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeMenu);
UNarrativeMenu::~UNarrativeMenu() {}
// End Class UNarrativeMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Widgets_NarrativeMenu_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeMenu, UNarrativeMenu::StaticClass, TEXT("UNarrativeMenu"), &Z_Registration_Info_UClass_UNarrativeMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeMenu), 3585378382U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Widgets_NarrativeMenu_h_864843497(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Widgets_NarrativeMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Widgets_NarrativeMenu_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
