// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Navigation/POIRenderingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePOIRenderingComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UPOIRenderingComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UPOIRenderingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UPOIRenderingComponent
void UPOIRenderingComponent::StaticRegisterNativesUPOIRenderingComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPOIRenderingComponent);
UClass* Z_Construct_UClass_UPOIRenderingComponent_NoRegister()
{
	return UPOIRenderingComponent::StaticClass();
}
struct Z_Construct_UClass_UPOIRenderingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Navigation/POIRenderingComponent.h" },
		{ "ModuleRelativePath", "Public/Navigation/POIRenderingComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPOIRenderingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPOIRenderingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPOIRenderingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPOIRenderingComponent_Statics::ClassParams = {
	&UPOIRenderingComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPOIRenderingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPOIRenderingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPOIRenderingComponent()
{
	if (!Z_Registration_Info_UClass_UPOIRenderingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPOIRenderingComponent.OuterSingleton, Z_Construct_UClass_UPOIRenderingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPOIRenderingComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UPOIRenderingComponent>()
{
	return UPOIRenderingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPOIRenderingComponent);
UPOIRenderingComponent::~UPOIRenderingComponent() {}
// End Class UPOIRenderingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_POIRenderingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPOIRenderingComponent, UPOIRenderingComponent::StaticClass, TEXT("UPOIRenderingComponent"), &Z_Registration_Info_UClass_UPOIRenderingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPOIRenderingComponent), 1036180809U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_POIRenderingComponent_h_3493231814(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_POIRenderingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_POIRenderingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
