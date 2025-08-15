// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Character/CharacterMapMarker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMapMarker() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterMapMarker();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterMapMarker_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UMapMarker();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UCharacterMapMarker
void UCharacterMapMarker::StaticRegisterNativesUCharacterMapMarker()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterMapMarker);
UClass* Z_Construct_UClass_UCharacterMapMarker_NoRegister()
{
	return UCharacterMapMarker::StaticClass();
}
struct Z_Construct_UClass_UCharacterMapMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "Comment", "/**\n * Map marker that shows NarrativeCharacters on the map. Colors differently based on whether marker is our neutral, hostile, etc. \n */" },
		{ "IncludePath", "Character/CharacterMapMarker.h" },
		{ "ModuleRelativePath", "Public/Character/CharacterMapMarker.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Map marker that shows NarrativeCharacters on the map. Colors differently based on whether marker is our neutral, hostile, etc." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterMapMarker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCharacterMapMarker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMapMarker,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMapMarker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterMapMarker_Statics::ClassParams = {
	&UCharacterMapMarker::StaticClass,
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
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMapMarker_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterMapMarker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterMapMarker()
{
	if (!Z_Registration_Info_UClass_UCharacterMapMarker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterMapMarker.OuterSingleton, Z_Construct_UClass_UCharacterMapMarker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterMapMarker.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UCharacterMapMarker>()
{
	return UCharacterMapMarker::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterMapMarker);
UCharacterMapMarker::~UCharacterMapMarker() {}
// End Class UCharacterMapMarker

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_CharacterMapMarker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterMapMarker, UCharacterMapMarker::StaticClass, TEXT("UCharacterMapMarker"), &Z_Registration_Info_UClass_UCharacterMapMarker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterMapMarker), 2368593095U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_CharacterMapMarker_h_1943422217(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_CharacterMapMarker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_CharacterMapMarker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
