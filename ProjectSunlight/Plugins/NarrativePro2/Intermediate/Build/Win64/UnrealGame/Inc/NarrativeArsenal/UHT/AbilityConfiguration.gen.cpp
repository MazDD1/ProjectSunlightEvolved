// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/GAS/AbilityConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityConfiguration() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UAbilityConfiguration();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UAbilityConfiguration_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UAbilityConfiguration
void UAbilityConfiguration::StaticRegisterNativesUAbilityConfiguration()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityConfiguration);
UClass* Z_Construct_UClass_UAbilityConfiguration_NoRegister()
{
	return UAbilityConfiguration::StaticClass();
}
struct Z_Construct_UClass_UAbilityConfiguration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains some default abilities to grant, attributes, etc. \n */" },
		{ "IncludePath", "GAS/AbilityConfiguration.h" },
		{ "ModuleRelativePath", "Public/GAS/AbilityConfiguration.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Contains some default abilities to grant, attributes, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributes_MetaData[] = {
		{ "Category", "Narrative|Abilities" },
		{ "Comment", "// Default attributes for a character for initializing on spawn/respawn.\n// This is an instant GE that overrides the values for attributes that get reset on spawn/respawn.\n" },
		{ "ModuleRelativePath", "Public/GAS/AbilityConfiguration.h" },
		{ "ToolTip", "Default attributes for a character for initializing on spawn/respawn.\nThis is an instant GE that overrides the values for attributes that get reset on spawn/respawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupEffects_MetaData[] = {
		{ "Category", "Narrative|Abilities" },
		{ "Comment", "// These effects are only applied one time on startup\n" },
		{ "ModuleRelativePath", "Public/GAS/AbilityConfiguration.h" },
		{ "ToolTip", "These effects are only applied one time on startup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilities_MetaData[] = {
		{ "Category", "Narrative|Abilities" },
		{ "Comment", "// Default abilities to grant the player  \n" },
		{ "ModuleRelativePath", "Public/GAS/AbilityConfiguration.h" },
		{ "ToolTip", "Default abilities to grant the player" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAttributes;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartupEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupEffects;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityConfiguration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilityConfiguration_Statics::NewProp_DefaultAttributes = { "DefaultAttributes", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityConfiguration, DefaultAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttributes_MetaData), NewProp_DefaultAttributes_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilityConfiguration_Statics::NewProp_StartupEffects_Inner = { "StartupEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilityConfiguration_Statics::NewProp_StartupEffects = { "StartupEffects", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityConfiguration, StartupEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupEffects_MetaData), NewProp_StartupEffects_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilityConfiguration_Statics::NewProp_DefaultAbilities_Inner = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UNarrativeGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilityConfiguration_Statics::NewProp_DefaultAbilities = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityConfiguration, DefaultAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAbilities_MetaData), NewProp_DefaultAbilities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityConfiguration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityConfiguration_Statics::NewProp_DefaultAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityConfiguration_Statics::NewProp_StartupEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityConfiguration_Statics::NewProp_StartupEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityConfiguration_Statics::NewProp_DefaultAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityConfiguration_Statics::NewProp_DefaultAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityConfiguration_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityConfiguration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityConfiguration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityConfiguration_Statics::ClassParams = {
	&UAbilityConfiguration::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAbilityConfiguration_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityConfiguration_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityConfiguration_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityConfiguration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityConfiguration()
{
	if (!Z_Registration_Info_UClass_UAbilityConfiguration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityConfiguration.OuterSingleton, Z_Construct_UClass_UAbilityConfiguration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityConfiguration.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UAbilityConfiguration>()
{
	return UAbilityConfiguration::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityConfiguration);
UAbilityConfiguration::~UAbilityConfiguration() {}
// End Class UAbilityConfiguration

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_AbilityConfiguration_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityConfiguration, UAbilityConfiguration::StaticClass, TEXT("UAbilityConfiguration"), &Z_Registration_Info_UClass_UAbilityConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityConfiguration), 2766976109U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_AbilityConfiguration_h_2219085983(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_AbilityConfiguration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_AbilityConfiguration_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
