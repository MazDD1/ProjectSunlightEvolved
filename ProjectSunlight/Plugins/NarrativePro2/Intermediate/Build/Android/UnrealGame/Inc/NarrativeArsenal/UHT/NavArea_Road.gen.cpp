// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Private/Navigation/NavArea_Road.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavArea_Road() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNavArea_Road();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNavArea_Road_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNavArea_Road
void UNavArea_Road::StaticRegisterNativesUNavArea_Road()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavArea_Road);
UClass* Z_Construct_UClass_UNavArea_Road_NoRegister()
{
	return UNavArea_Road::StaticClass();
}
struct Z_Construct_UClass_UNavArea_Road_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Navigation/NavArea_Road.h" },
		{ "ModuleRelativePath", "Private/Navigation/NavArea_Road.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavArea_Road>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavArea_Road_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavArea,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Road_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavArea_Road_Statics::ClassParams = {
	&UNavArea_Road::StaticClass,
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
	0x003000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Road_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavArea_Road_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavArea_Road()
{
	if (!Z_Registration_Info_UClass_UNavArea_Road.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavArea_Road.OuterSingleton, Z_Construct_UClass_UNavArea_Road_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavArea_Road.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNavArea_Road>()
{
	return UNavArea_Road::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavArea_Road);
UNavArea_Road::~UNavArea_Road() {}
// End Class UNavArea_Road

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Private_Navigation_NavArea_Road_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavArea_Road, UNavArea_Road::StaticClass, TEXT("UNavArea_Road"), &Z_Registration_Info_UClass_UNavArea_Road, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavArea_Road), 1036180155U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Private_Navigation_NavArea_Road_h_3436582962(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Private_Navigation_NavArea_Road_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Private_Navigation_NavArea_Road_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
