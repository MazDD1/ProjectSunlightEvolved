// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Navigation/MapTileRenderingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapTileRenderingComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDebugDrawComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UMapTileRenderingComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UMapTileRenderingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UMapTileRenderingComponent
void UMapTileRenderingComponent::StaticRegisterNativesUMapTileRenderingComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapTileRenderingComponent);
UClass* Z_Construct_UClass_UMapTileRenderingComponent_NoRegister()
{
	return UMapTileRenderingComponent::StaticClass();
}
struct Z_Construct_UClass_UMapTileRenderingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Navigation/MapTileRenderingComponent.h" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileRenderingComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapTileRenderingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMapTileRenderingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDebugDrawComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapTileRenderingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapTileRenderingComponent_Statics::ClassParams = {
	&UMapTileRenderingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapTileRenderingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapTileRenderingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMapTileRenderingComponent()
{
	if (!Z_Registration_Info_UClass_UMapTileRenderingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapTileRenderingComponent.OuterSingleton, Z_Construct_UClass_UMapTileRenderingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapTileRenderingComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UMapTileRenderingComponent>()
{
	return UMapTileRenderingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMapTileRenderingComponent);
UMapTileRenderingComponent::~UMapTileRenderingComponent() {}
// End Class UMapTileRenderingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapTileRenderingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapTileRenderingComponent, UMapTileRenderingComponent::StaticClass, TEXT("UMapTileRenderingComponent"), &Z_Registration_Info_UClass_UMapTileRenderingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapTileRenderingComponent), 1689948742U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapTileRenderingComponent_h_3834982307(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapTileRenderingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapTileRenderingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
