// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Tales/TaggedDialogueSet.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativeNPCCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaggedDialogueSet() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTaggedDialogueSet();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTaggedDialogueSet_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FTaggedDialogue();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UTaggedDialogueSet
void UTaggedDialogueSet::StaticRegisterNativesUTaggedDialogueSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaggedDialogueSet);
UClass* Z_Construct_UClass_UTaggedDialogueSet_NoRegister()
{
	return UTaggedDialogueSet::StaticClass();
}
struct Z_Construct_UClass_UTaggedDialogueSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains various dialogues to play when a NPC greets, threatens, investigates, and so on. \n */" },
		{ "IncludePath", "Tales/TaggedDialogueSet.h" },
		{ "ModuleRelativePath", "Public/Tales/TaggedDialogueSet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Contains various dialogues to play when a NPC greets, threatens, investigates, and so on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaggedDialogues_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/** The NPCs tagged dialogues these are essentially dialogue, usually free movement that can be kicked off via a tag \"TaggedDialogue.Taunt, TaggedDialogue.Greet, etc. */" },
		{ "ModuleRelativePath", "Public/Tales/TaggedDialogueSet.h" },
		{ "ToolTip", "The NPCs tagged dialogues these are essentially dialogue, usually free movement that can be kicked off via a tag \"TaggedDialogue.Taunt, TaggedDialogue.Greet, etc." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaggedDialogues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TaggedDialogues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaggedDialogueSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTaggedDialogueSet_Statics::NewProp_TaggedDialogues_Inner = { "TaggedDialogues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTaggedDialogue, METADATA_PARAMS(0, nullptr) }; // 225624026
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTaggedDialogueSet_Statics::NewProp_TaggedDialogues = { "TaggedDialogues", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaggedDialogueSet, TaggedDialogues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaggedDialogues_MetaData), NewProp_TaggedDialogues_MetaData) }; // 225624026
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaggedDialogueSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaggedDialogueSet_Statics::NewProp_TaggedDialogues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaggedDialogueSet_Statics::NewProp_TaggedDialogues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaggedDialogueSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTaggedDialogueSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaggedDialogueSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaggedDialogueSet_Statics::ClassParams = {
	&UTaggedDialogueSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTaggedDialogueSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTaggedDialogueSet_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaggedDialogueSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaggedDialogueSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaggedDialogueSet()
{
	if (!Z_Registration_Info_UClass_UTaggedDialogueSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaggedDialogueSet.OuterSingleton, Z_Construct_UClass_UTaggedDialogueSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaggedDialogueSet.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UTaggedDialogueSet>()
{
	return UTaggedDialogueSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaggedDialogueSet);
UTaggedDialogueSet::~UTaggedDialogueSet() {}
// End Class UTaggedDialogueSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TaggedDialogueSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTaggedDialogueSet, UTaggedDialogueSet::StaticClass, TEXT("UTaggedDialogueSet"), &Z_Registration_Info_UClass_UTaggedDialogueSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaggedDialogueSet), 1006825221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TaggedDialogueSet_h_499042523(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TaggedDialogueSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TaggedDialogueSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
