// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Navigation/NavigationMarkerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationMarkerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UMapMarker_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNavigationMarkerComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNavigationMarkerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNavigationMarkerComponent
void UNavigationMarkerComponent::StaticRegisterNativesUNavigationMarkerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationMarkerComponent);
UClass* Z_Construct_UClass_UNavigationMarkerComponent_NoRegister()
{
	return UNavigationMarkerComponent::StaticClass();
}
struct Z_Construct_UClass_UNavigationMarkerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/**Add this component to any actor you want to show up on Narrative Navigator UI like the compass, world map, etc. */" },
		{ "IncludePath", "Navigation/NavigationMarkerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Navigation/NavigationMarkerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Add this component to any actor you want to show up on Narrative Navigator UI like the compass, world map, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerObject_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Navigation/NavigationMarkerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationMarkerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_MarkerObject = { "MarkerObject", nullptr, (EPropertyFlags)0x0126080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationMarkerComponent, MarkerObject), Z_Construct_UClass_UMapMarker_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerObject_MetaData), NewProp_MarkerObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationMarkerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationMarkerComponent_Statics::NewProp_MarkerObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationMarkerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavigationMarkerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationMarkerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationMarkerComponent_Statics::ClassParams = {
	&UNavigationMarkerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNavigationMarkerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationMarkerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationMarkerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigationMarkerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigationMarkerComponent()
{
	if (!Z_Registration_Info_UClass_UNavigationMarkerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationMarkerComponent.OuterSingleton, Z_Construct_UClass_UNavigationMarkerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigationMarkerComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNavigationMarkerComponent>()
{
	return UNavigationMarkerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationMarkerComponent);
UNavigationMarkerComponent::~UNavigationMarkerComponent() {}
// End Class UNavigationMarkerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NavigationMarkerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationMarkerComponent, UNavigationMarkerComponent::StaticClass, TEXT("UNavigationMarkerComponent"), &Z_Registration_Info_UClass_UNavigationMarkerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationMarkerComponent), 2658522711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NavigationMarkerComponent_h_3286285605(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NavigationMarkerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NavigationMarkerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
