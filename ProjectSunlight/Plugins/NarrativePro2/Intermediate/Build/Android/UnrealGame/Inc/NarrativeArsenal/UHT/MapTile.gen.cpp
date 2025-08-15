// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Navigation/MapTile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapTile() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UMapMarker();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UMapTileMarker();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UMapTileMarker_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UMapTileMarker
void UMapTileMarker::StaticRegisterNativesUMapTileMarker()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapTileMarker);
UClass* Z_Construct_UClass_UMapTileMarker_NoRegister()
{
	return UMapTileMarker::StaticClass();
}
struct Z_Construct_UClass_UMapTileMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "Comment", "/**\n * Special type of map marker that is actually a maptile for the maps background image. \n */" },
		{ "IncludePath", "Navigation/MapTile.h" },
		{ "ModuleRelativePath", "Public/Navigation/MapTile.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Special type of map marker that is actually a maptile for the maps background image." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapTileMarker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMapTileMarker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMapMarker,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapTileMarker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapTileMarker_Statics::ClassParams = {
	&UMapTileMarker::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapTileMarker_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapTileMarker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMapTileMarker()
{
	if (!Z_Registration_Info_UClass_UMapTileMarker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapTileMarker.OuterSingleton, Z_Construct_UClass_UMapTileMarker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapTileMarker.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UMapTileMarker>()
{
	return UMapTileMarker::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMapTileMarker);
UMapTileMarker::~UMapTileMarker() {}
// End Class UMapTileMarker

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapTile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapTileMarker, UMapTileMarker::StaticClass, TEXT("UMapTileMarker"), &Z_Registration_Info_UClass_UMapTileMarker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapTileMarker), 1821334125U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapTile_h_425130309(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapTile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapTile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
