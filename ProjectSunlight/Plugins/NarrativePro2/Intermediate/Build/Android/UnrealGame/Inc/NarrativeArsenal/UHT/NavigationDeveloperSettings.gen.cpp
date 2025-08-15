// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Navigation/NavigationDeveloperSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationDeveloperSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNavigationDeveloperSettings();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNavigationDeveloperSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNavigationDeveloperSettings
void UNavigationDeveloperSettings::StaticRegisterNativesUNavigationDeveloperSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationDeveloperSettings);
UClass* Z_Construct_UClass_UNavigationDeveloperSettings_NoRegister()
{
	return UNavigationDeveloperSettings::StaticClass();
}
struct Z_Construct_UClass_UNavigationDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Narrative - Navigator Settings" },
		{ "IncludePath", "Navigation/NavigationDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/Navigation/NavigationDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerColor_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//If we're the local player the nav marker will appear this color\n" },
		{ "ModuleRelativePath", "Public/Navigation/NavigationDeveloperSettings.h" },
		{ "ToolTip", "If we're the local player the nav marker will appear this color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendlyColor_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//If we're friendly the nav marker will appear this color\n" },
		{ "ModuleRelativePath", "Public/Navigation/NavigationDeveloperSettings.h" },
		{ "ToolTip", "If we're friendly the nav marker will appear this color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeutralColor_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//If we're neutral the nav marker will appear this color\n" },
		{ "ModuleRelativePath", "Public/Navigation/NavigationDeveloperSettings.h" },
		{ "ToolTip", "If we're neutral the nav marker will appear this color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostileColor_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//If we're hostile the nav marker will appear this color\n" },
		{ "ModuleRelativePath", "Public/Navigation/NavigationDeveloperSettings.h" },
		{ "ToolTip", "If we're hostile the nav marker will appear this color" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FriendlyColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NeutralColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HostileColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationDeveloperSettings_Statics::NewProp_PlayerColor = { "PlayerColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationDeveloperSettings, PlayerColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerColor_MetaData), NewProp_PlayerColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationDeveloperSettings_Statics::NewProp_FriendlyColor = { "FriendlyColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationDeveloperSettings, FriendlyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendlyColor_MetaData), NewProp_FriendlyColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationDeveloperSettings_Statics::NewProp_NeutralColor = { "NeutralColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationDeveloperSettings, NeutralColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeutralColor_MetaData), NewProp_NeutralColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationDeveloperSettings_Statics::NewProp_HostileColor = { "HostileColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationDeveloperSettings, HostileColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostileColor_MetaData), NewProp_HostileColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationDeveloperSettings_Statics::NewProp_PlayerColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationDeveloperSettings_Statics::NewProp_FriendlyColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationDeveloperSettings_Statics::NewProp_NeutralColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationDeveloperSettings_Statics::NewProp_HostileColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavigationDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationDeveloperSettings_Statics::ClassParams = {
	&UNavigationDeveloperSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNavigationDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationDeveloperSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigationDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigationDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_UNavigationDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationDeveloperSettings.OuterSingleton, Z_Construct_UClass_UNavigationDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigationDeveloperSettings.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNavigationDeveloperSettings>()
{
	return UNavigationDeveloperSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationDeveloperSettings);
UNavigationDeveloperSettings::~UNavigationDeveloperSettings() {}
// End Class UNavigationDeveloperSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NavigationDeveloperSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationDeveloperSettings, UNavigationDeveloperSettings::StaticClass, TEXT("UNavigationDeveloperSettings"), &Z_Registration_Info_UClass_UNavigationDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationDeveloperSettings), 3233521686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NavigationDeveloperSettings_h_3962534858(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NavigationDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NavigationDeveloperSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
