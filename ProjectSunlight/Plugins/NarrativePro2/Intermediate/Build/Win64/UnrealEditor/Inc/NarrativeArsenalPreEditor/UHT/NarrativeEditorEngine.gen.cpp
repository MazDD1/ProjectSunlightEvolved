// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenalPreEditor/Public/NarrativeEditorEngine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeEditorEngine() {}

// Begin Cross Module References
NARRATIVEARSENALPREEDITOR_API UClass* Z_Construct_UClass_UNarrativeEditorEngine();
NARRATIVEARSENALPREEDITOR_API UClass* Z_Construct_UClass_UNarrativeEditorEngine_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UUnrealEdEngine();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenalPreEditor();
// End Cross Module References

// Begin Class UNarrativeEditorEngine
void UNarrativeEditorEngine::StaticRegisterNativesUNarrativeEditorEngine()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeEditorEngine);
UClass* Z_Construct_UClass_UNarrativeEditorEngine_NoRegister()
{
	return UNarrativeEditorEngine::StaticClass();
}
struct Z_Construct_UClass_UNarrativeEditorEngine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NarrativeEditorEngine.h" },
		{ "ModuleRelativePath", "Public/NarrativeEditorEngine.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeEditorEngine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeEditorEngine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUnrealEdEngine,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenalPreEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEditorEngine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeEditorEngine_Statics::ClassParams = {
	&UNarrativeEditorEngine::StaticClass,
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
	0x009000AEu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEditorEngine_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeEditorEngine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeEditorEngine()
{
	if (!Z_Registration_Info_UClass_UNarrativeEditorEngine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeEditorEngine.OuterSingleton, Z_Construct_UClass_UNarrativeEditorEngine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeEditorEngine.OuterSingleton;
}
template<> NARRATIVEARSENALPREEDITOR_API UClass* StaticClass<UNarrativeEditorEngine>()
{
	return UNarrativeEditorEngine::StaticClass();
}
UNarrativeEditorEngine::UNarrativeEditorEngine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeEditorEngine);
UNarrativeEditorEngine::~UNarrativeEditorEngine() {}
// End Class UNarrativeEditorEngine

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalPreEditor_Public_NarrativeEditorEngine_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeEditorEngine, UNarrativeEditorEngine::StaticClass, TEXT("UNarrativeEditorEngine"), &Z_Registration_Info_UClass_UNarrativeEditorEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeEditorEngine), 2162416605U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalPreEditor_Public_NarrativeEditorEngine_h_3846122755(TEXT("/Script/NarrativeArsenalPreEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalPreEditor_Public_NarrativeEditorEngine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalPreEditor_Public_NarrativeEditorEngine_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
