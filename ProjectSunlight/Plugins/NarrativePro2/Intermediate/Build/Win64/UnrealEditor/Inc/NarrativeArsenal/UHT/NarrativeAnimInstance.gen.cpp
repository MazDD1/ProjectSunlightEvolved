// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativeAnimInstance.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAnimInstance();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAnimInstance_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAnimSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeAnimInstance Function GetAnimSet
struct Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet_Statics
{
	struct NarrativeAnimInstance_eventGetAnimSet_Parms
	{
		FGameplayTag AnimSetTag;
		bool bOutFoundAnimSet;
		UNarrativeAnimSet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Anim Sets" },
		{ "Comment", "//Search for an animset on the anim instance via its tag. Return AnimSet and boolean saying whether animset was found \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeAnimInstance.h" },
		{ "ToolTip", "Search for an animset on the anim instance via its tag. Return AnimSet and boolean saying whether animset was found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSetTag_MetaData[] = {
		{ "Categories", "Narrative.AnimSets" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimSetTag;
	static void NewProp_bOutFoundAnimSet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutFoundAnimSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet_Statics::NewProp_AnimSetTag = { "AnimSetTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeAnimInstance_eventGetAnimSet_Parms, AnimSetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSetTag_MetaData), NewProp_AnimSetTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet_Statics::NewProp_bOutFoundAnimSet_SetBit(void* Obj)
{
	((NarrativeAnimInstance_eventGetAnimSet_Parms*)Obj)->bOutFoundAnimSet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet_Statics::NewProp_bOutFoundAnimSet = { "bOutFoundAnimSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeAnimInstance_eventGetAnimSet_Parms), &Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet_Statics::NewProp_bOutFoundAnimSet_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeAnimInstance_eventGetAnimSet_Parms, ReturnValue), Z_Construct_UClass_UNarrativeAnimSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet_Statics::NewProp_AnimSetTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet_Statics::NewProp_bOutFoundAnimSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeAnimInstance, nullptr, "GetAnimSet", nullptr, nullptr, Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet_Statics::NarrativeAnimInstance_eventGetAnimSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet_Statics::NarrativeAnimInstance_eventGetAnimSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeAnimInstance::execGetAnimSet)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_AnimSetTag);
	P_GET_UBOOL_REF(Z_Param_Out_bOutFoundAnimSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeAnimSet**)Z_Param__Result=P_THIS->GetAnimSet(Z_Param_Out_AnimSetTag,Z_Param_Out_bOutFoundAnimSet);
	P_NATIVE_END;
}
// End Class UNarrativeAnimInstance Function GetAnimSet

// Begin Class UNarrativeAnimInstance
void UNarrativeAnimInstance::StaticRegisterNativesUNarrativeAnimInstance()
{
	UClass* Class = UNarrativeAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAnimSet", &UNarrativeAnimInstance::execGetAnimSet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeAnimInstance);
UClass* Z_Construct_UClass_UNarrativeAnimInstance_NoRegister()
{
	return UNarrativeAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UNarrativeAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Narrative anim instance class - we generally just have this to add the GameplayTagPropertyMap as lyra does. \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "UnrealFramework/NarrativeAnimInstance.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeAnimInstance.h" },
		{ "ToolTip", "Narrative anim instance class - we generally just have this to add the GameplayTagPropertyMap as lyra does." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagPropertyMap_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/**Brilliant container type that ships with GAS - lets us bind variables directly to gameplaytags. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeAnimInstance.h" },
		{ "ToolTip", "Brilliant container type that ships with GAS - lets us bind variables directly to gameplaytags." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaggedAnimSets_MetaData[] = {
		{ "Categories", "Narrative.AnimSets" },
		{ "Category", "Combat Data" },
		{ "Comment", "/**Tagged animsets - this lets us have a generic, extensible, and BP friendly way of mapping tags to Combo Sets. */" },
		{ "ForceInlineRow", "" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeAnimInstance.h" },
		{ "ToolTip", "Tagged animsets - this lets us have a generic, extensible, and BP friendly way of mapping tags to Combo Sets." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagPropertyMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaggedAnimSets_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaggedAnimSets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TaggedAnimSets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeAnimInstance_GetAnimSet, "GetAnimSet" }, // 665752147
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_GameplayTagPropertyMap = { "GameplayTagPropertyMap", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAnimInstance, GameplayTagPropertyMap), Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagPropertyMap_MetaData), NewProp_GameplayTagPropertyMap_MetaData) }; // 2674068477
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_TaggedAnimSets_ValueProp = { "TaggedAnimSets", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UNarrativeAnimSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_TaggedAnimSets_Key_KeyProp = { "TaggedAnimSets_Key", nullptr, (EPropertyFlags)0x0100000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_TaggedAnimSets = { "TaggedAnimSets", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAnimInstance, TaggedAnimSets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaggedAnimSets_MetaData), NewProp_TaggedAnimSets_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_GameplayTagPropertyMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_TaggedAnimSets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_TaggedAnimSets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAnimInstance_Statics::NewProp_TaggedAnimSets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeAnimInstance_Statics::ClassParams = {
	&UNarrativeAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeAnimInstance()
{
	if (!Z_Registration_Info_UClass_UNarrativeAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeAnimInstance.OuterSingleton, Z_Construct_UClass_UNarrativeAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeAnimInstance.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeAnimInstance>()
{
	return UNarrativeAnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeAnimInstance);
UNarrativeAnimInstance::~UNarrativeAnimInstance() {}
// End Class UNarrativeAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeAnimInstance, UNarrativeAnimInstance::StaticClass, TEXT("UNarrativeAnimInstance"), &Z_Registration_Info_UClass_UNarrativeAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeAnimInstance), 962521746U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeAnimInstance_h_353774136(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
