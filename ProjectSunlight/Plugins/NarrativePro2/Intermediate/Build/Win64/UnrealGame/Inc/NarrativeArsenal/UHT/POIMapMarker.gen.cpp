// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Navigation/POIMapMarker.h"
#include "NarrativeArsenal/Public/Navigation/MapTileBounds.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePOIMapMarker() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UMapMarker();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UPOIMapMarker();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UPOIMapMarker_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FPOIData();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UPOIMapMarker
void UPOIMapMarker::StaticRegisterNativesUPOIMapMarker()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPOIMapMarker);
UClass* Z_Construct_UClass_UPOIMapMarker_NoRegister()
{
	return UPOIMapMarker::StaticClass();
}
struct Z_Construct_UClass_UPOIMapMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "Comment", "/**\n * Special map markers that are created for each POI in the game. They are \"discoverable\" and support being fast-travelled to when clicked on.\n */" },
		{ "IncludePath", "Navigation/POIMapMarker.h" },
		{ "ModuleRelativePath", "Public/Navigation/POIMapMarker.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Special map markers that are created for each POI in the game. They are \"discoverable\" and support being fast-travelled to when clicked on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POI_MetaData[] = {
		{ "Category", "POIs" },
		{ "ModuleRelativePath", "Public/Navigation/POIMapMarker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_POI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPOIMapMarker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPOIMapMarker_Statics::NewProp_POI = { "POI", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPOIMapMarker, POI), Z_Construct_UScriptStruct_FPOIData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POI_MetaData), NewProp_POI_MetaData) }; // 3949940213
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPOIMapMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPOIMapMarker_Statics::NewProp_POI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPOIMapMarker_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPOIMapMarker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMapMarker,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPOIMapMarker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPOIMapMarker_Statics::ClassParams = {
	&UPOIMapMarker::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPOIMapMarker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPOIMapMarker_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPOIMapMarker_Statics::Class_MetaDataParams), Z_Construct_UClass_UPOIMapMarker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPOIMapMarker()
{
	if (!Z_Registration_Info_UClass_UPOIMapMarker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPOIMapMarker.OuterSingleton, Z_Construct_UClass_UPOIMapMarker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPOIMapMarker.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UPOIMapMarker>()
{
	return UPOIMapMarker::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPOIMapMarker);
UPOIMapMarker::~UPOIMapMarker() {}
// End Class UPOIMapMarker

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_POIMapMarker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPOIMapMarker, UPOIMapMarker::StaticClass, TEXT("UPOIMapMarker"), &Z_Registration_Info_UClass_UPOIMapMarker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPOIMapMarker), 3167187592U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_POIMapMarker_h_151809629(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_POIMapMarker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_POIMapMarker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
