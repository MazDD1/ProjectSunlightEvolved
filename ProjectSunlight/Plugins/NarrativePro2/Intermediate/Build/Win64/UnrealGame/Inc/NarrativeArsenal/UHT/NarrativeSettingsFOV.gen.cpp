// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Camera/NarrativeSettingsFOV.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeSettingsFOV() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraNode();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeSettingsFOVCameraNode();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeSettingsFOVCameraNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeSettingsFOVCameraNode
void UNarrativeSettingsFOVCameraNode::StaticRegisterNativesUNarrativeSettingsFOVCameraNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeSettingsFOVCameraNode);
UClass* Z_Construct_UClass_UNarrativeSettingsFOVCameraNode_NoRegister()
{
	return UNarrativeSettingsFOVCameraNode::StaticClass();
}
struct Z_Construct_UClass_UNarrativeSettingsFOVCameraNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CameraNodeCategories", "Common,Lens" },
		{ "Comment", "/**\n * Allows us to control the FOV via PC->GetDesiredFOV. We dont really want camera modes to handle blending FOVs as it seems fairly\n * expirimental and difficult to control blend transition times etc, so letting PC control it seemed like better option. \n */" },
		{ "IncludePath", "Camera/NarrativeSettingsFOV.h" },
		{ "ModuleRelativePath", "Public/Camera/NarrativeSettingsFOV.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Allows us to control the FOV via PC->GetDesiredFOV. We dont really want camera modes to handle blending FOVs as it seems fairly\nexpirimental and difficult to control blend transition times etc, so letting PC control it seemed like better option." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeSettingsFOVCameraNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeSettingsFOVCameraNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraNode,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSettingsFOVCameraNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeSettingsFOVCameraNode_Statics::ClassParams = {
	&UNarrativeSettingsFOVCameraNode::StaticClass,
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
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSettingsFOVCameraNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeSettingsFOVCameraNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeSettingsFOVCameraNode()
{
	if (!Z_Registration_Info_UClass_UNarrativeSettingsFOVCameraNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeSettingsFOVCameraNode.OuterSingleton, Z_Construct_UClass_UNarrativeSettingsFOVCameraNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeSettingsFOVCameraNode.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeSettingsFOVCameraNode>()
{
	return UNarrativeSettingsFOVCameraNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeSettingsFOVCameraNode);
UNarrativeSettingsFOVCameraNode::~UNarrativeSettingsFOVCameraNode() {}
// End Class UNarrativeSettingsFOVCameraNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Camera_NarrativeSettingsFOV_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeSettingsFOVCameraNode, UNarrativeSettingsFOVCameraNode::StaticClass, TEXT("UNarrativeSettingsFOVCameraNode"), &Z_Registration_Info_UClass_UNarrativeSettingsFOVCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeSettingsFOVCameraNode), 3570078847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Camera_NarrativeSettingsFOV_h_3254043543(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Camera_NarrativeSettingsFOV_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Camera_NarrativeSettingsFOV_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
