// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/GAS/NarrativeCombatAbility.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCombatAbility() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCombatAbility();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCombatAbility_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeGameplayAbility();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTransformProvider();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTargetingTransformProvider();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTargetingTransformProvider_CameraTowardsFocus();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTargetingTransformProvider_CameraTowardsFocus_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTargetingTransformProvider_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCombatTraceData();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FCombatTraceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CombatTraceData;
class UScriptStruct* FCombatTraceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CombatTraceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CombatTraceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatTraceData, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("CombatTraceData"));
	}
	return Z_Registration_Info_UScriptStruct_CombatTraceData.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FCombatTraceData>()
{
	return FCombatTraceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCombatTraceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Stored on both weapons and our player for unarmed combat. Replaces the need for expensive targeting actors, GAs just generate target data themselves\n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeCombatAbility.h" },
		{ "ToolTip", "Stored on both weapons and our player for unarmed combat. Replaces the need for expensive targeting actors, GAs just generate target data themselves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Combat Trace Data" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeCombatAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[] = {
		{ "Category", "Combat Trace Data" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeCombatAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTraceMulti_MetaData[] = {
		{ "Category", "Combat Trace Data" },
		{ "Comment", "//True if we want to trace multi instead of single \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeCombatAbility.h" },
		{ "ToolTip", "True if we want to trace multi instead of single" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
	static void NewProp_bTraceMulti_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceMulti;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatTraceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatTraceData_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatTraceData, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDistance_MetaData), NewProp_TraceDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatTraceData_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatTraceData, TraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceRadius_MetaData), NewProp_TraceRadius_MetaData) };
void Z_Construct_UScriptStruct_FCombatTraceData_Statics::NewProp_bTraceMulti_SetBit(void* Obj)
{
	((FCombatTraceData*)Obj)->bTraceMulti = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCombatTraceData_Statics::NewProp_bTraceMulti = { "bTraceMulti", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCombatTraceData), &Z_Construct_UScriptStruct_FCombatTraceData_Statics::NewProp_bTraceMulti_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceMulti_MetaData), NewProp_bTraceMulti_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatTraceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatTraceData_Statics::NewProp_TraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatTraceData_Statics::NewProp_TraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatTraceData_Statics::NewProp_bTraceMulti,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatTraceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatTraceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"CombatTraceData",
	Z_Construct_UScriptStruct_FCombatTraceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatTraceData_Statics::PropPointers),
	sizeof(FCombatTraceData),
	alignof(FCombatTraceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatTraceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombatTraceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCombatTraceData()
{
	if (!Z_Registration_Info_UScriptStruct_CombatTraceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CombatTraceData.InnerSingleton, Z_Construct_UScriptStruct_FCombatTraceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CombatTraceData.InnerSingleton;
}
// End ScriptStruct FCombatTraceData

// Begin Class UTargetingTransformProvider
void UTargetingTransformProvider::StaticRegisterNativesUTargetingTransformProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingTransformProvider);
UClass* Z_Construct_UClass_UTargetingTransformProvider_NoRegister()
{
	return UTargetingTransformProvider::StaticClass();
}
struct Z_Construct_UClass_UTargetingTransformProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Targeting Provider Provider Provider" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Our targeting transform uses instanced objects so we can de-couple targeting behavior from the combat ability, since we need more of a composition based approach rather than inheritance based for GAS Combat abilities. \n */" },
		{ "DisplayName", "Targeting Transform Provider" },
		{ "IncludePath", "GAS/NarrativeCombatAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeCombatAbility.h" },
		{ "ToolTip", "Our targeting transform uses instanced objects so we can de-couple targeting behavior from the combat ability, since we need more of a composition based approach rather than inheritance based for GAS Combat abilities." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingTransformProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTargetingTransformProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeTransformProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingTransformProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingTransformProvider_Statics::ClassParams = {
	&UTargetingTransformProvider::StaticClass,
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
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingTransformProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetingTransformProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetingTransformProvider()
{
	if (!Z_Registration_Info_UClass_UTargetingTransformProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingTransformProvider.OuterSingleton, Z_Construct_UClass_UTargetingTransformProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetingTransformProvider.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UTargetingTransformProvider>()
{
	return UTargetingTransformProvider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingTransformProvider);
UTargetingTransformProvider::~UTargetingTransformProvider() {}
// End Class UTargetingTransformProvider

// Begin Class UTargetingTransformProvider_CameraTowardsFocus
void UTargetingTransformProvider_CameraTowardsFocus::StaticRegisterNativesUTargetingTransformProvider_CameraTowardsFocus()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingTransformProvider_CameraTowardsFocus);
UClass* Z_Construct_UClass_UTargetingTransformProvider_CameraTowardsFocus_NoRegister()
{
	return UTargetingTransformProvider_CameraTowardsFocus::StaticClass();
}
struct Z_Construct_UClass_UTargetingTransformProvider_CameraTowardsFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Targeting Provider Targeting Provider Provider Provider" },
		{ "Comment", "/**\n * Finds an actor in the world with the specified level reference.\n */" },
		{ "DisplayName", "Camera Towards Focus" },
		{ "IncludePath", "GAS/NarrativeCombatAbility.h" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeCombatAbility.h" },
		{ "ToolTip", "Finds an actor in the world with the specified level reference." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingTransformProvider_CameraTowardsFocus>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTargetingTransformProvider_CameraTowardsFocus_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTargetingTransformProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingTransformProvider_CameraTowardsFocus_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingTransformProvider_CameraTowardsFocus_Statics::ClassParams = {
	&UTargetingTransformProvider_CameraTowardsFocus::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingTransformProvider_CameraTowardsFocus_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetingTransformProvider_CameraTowardsFocus_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetingTransformProvider_CameraTowardsFocus()
{
	if (!Z_Registration_Info_UClass_UTargetingTransformProvider_CameraTowardsFocus.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingTransformProvider_CameraTowardsFocus.OuterSingleton, Z_Construct_UClass_UTargetingTransformProvider_CameraTowardsFocus_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetingTransformProvider_CameraTowardsFocus.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UTargetingTransformProvider_CameraTowardsFocus>()
{
	return UTargetingTransformProvider_CameraTowardsFocus::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingTransformProvider_CameraTowardsFocus);
UTargetingTransformProvider_CameraTowardsFocus::~UTargetingTransformProvider_CameraTowardsFocus() {}
// End Class UTargetingTransformProvider_CameraTowardsFocus

// Begin Class UNarrativeCombatAbility Function FinalizeTargetData
struct Z_Construct_UFunction_UNarrativeCombatAbility_FinalizeTargetData_Statics
{
	struct NarrativeCombatAbility_eventFinalizeTargetData_Parms
	{
		FGameplayAbilityTargetDataHandle TargetData;
		FGameplayTag ApplicationTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "//After targeting data is generated, this actually sends the target data to server and calls delegates etc. \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeCombatAbility.h" },
		{ "ToolTip", "After targeting data is generated, this actually sends the target data to server and calls delegates etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApplicationTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeCombatAbility_FinalizeTargetData_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCombatAbility_eventFinalizeTargetData_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 2741862775
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeCombatAbility_FinalizeTargetData_Statics::NewProp_ApplicationTag = { "ApplicationTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCombatAbility_eventFinalizeTargetData_Parms, ApplicationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCombatAbility_FinalizeTargetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCombatAbility_FinalizeTargetData_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCombatAbility_FinalizeTargetData_Statics::NewProp_ApplicationTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCombatAbility_FinalizeTargetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCombatAbility_FinalizeTargetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCombatAbility, nullptr, "FinalizeTargetData", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCombatAbility_FinalizeTargetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCombatAbility_FinalizeTargetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCombatAbility_FinalizeTargetData_Statics::NarrativeCombatAbility_eventFinalizeTargetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCombatAbility_FinalizeTargetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCombatAbility_FinalizeTargetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCombatAbility_FinalizeTargetData_Statics::NarrativeCombatAbility_eventFinalizeTargetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCombatAbility_FinalizeTargetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCombatAbility_FinalizeTargetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCombatAbility::execFinalizeTargetData)
{
	P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_TargetData);
	P_GET_STRUCT(FGameplayTag,Z_Param_ApplicationTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinalizeTargetData(Z_Param_Out_TargetData,Z_Param_ApplicationTag);
	P_NATIVE_END;
}
// End Class UNarrativeCombatAbility Function FinalizeTargetData

// Begin Class UNarrativeCombatAbility Function GenerateTargetData
struct Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "//Perform the tracing that generates the targeting data. Will fire off a targeting data ready delegate when finished. \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeCombatAbility.h" },
		{ "ToolTip", "Perform the tracing that generates the targeting data. Will fire off a targeting data ready delegate when finished." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCombatAbility, nullptr, "GenerateTargetData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCombatAbility::execGenerateTargetData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateTargetData();
	P_NATIVE_END;
}
// End Class UNarrativeCombatAbility Function GenerateTargetData

// Begin Class UNarrativeCombatAbility Function GenerateTargetDataUsingTrace
struct Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetDataUsingTrace_Statics
{
	struct NarrativeCombatAbility_eventGenerateTargetDataUsingTrace_Parms
	{
		FCombatTraceData TraceData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "// Version that lets us supply custom trace data if we want to ignore the weapons. \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeCombatAbility.h" },
		{ "ToolTip", "Version that lets us supply custom trace data if we want to ignore the weapons." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetDataUsingTrace_Statics::NewProp_TraceData = { "TraceData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCombatAbility_eventGenerateTargetDataUsingTrace_Parms, TraceData), Z_Construct_UScriptStruct_FCombatTraceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceData_MetaData), NewProp_TraceData_MetaData) }; // 179883577
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetDataUsingTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetDataUsingTrace_Statics::NewProp_TraceData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetDataUsingTrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetDataUsingTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCombatAbility, nullptr, "GenerateTargetDataUsingTrace", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetDataUsingTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetDataUsingTrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetDataUsingTrace_Statics::NarrativeCombatAbility_eventGenerateTargetDataUsingTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetDataUsingTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetDataUsingTrace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetDataUsingTrace_Statics::NarrativeCombatAbility_eventGenerateTargetDataUsingTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetDataUsingTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetDataUsingTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCombatAbility::execGenerateTargetDataUsingTrace)
{
	P_GET_STRUCT_REF(FCombatTraceData,Z_Param_Out_TraceData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateTargetDataUsingTrace(Z_Param_Out_TraceData);
	P_NATIVE_END;
}
// End Class UNarrativeCombatAbility Function GenerateTargetDataUsingTrace

// Begin Class UNarrativeCombatAbility Function GetTargetingViewPoint
struct NarrativeCombatAbility_eventGetTargetingViewPoint_Parms
{
	FTransform ReturnValue;
};
static const FName NAME_UNarrativeCombatAbility_GetTargetingViewPoint = FName(TEXT("GetTargetingViewPoint"));
FTransform UNarrativeCombatAbility::GetTargetingViewPoint() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeCombatAbility_GetTargetingViewPoint);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeCombatAbility_eventGetTargetingViewPoint_Parms Parms;
		const_cast<UNarrativeCombatAbility*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNarrativeCombatAbility*>(this)->GetTargetingViewPoint_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeCombatAbility_GetTargetingViewPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Combat Ability" },
		{ "Comment", "//Get the transform we should start tracing from. \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeCombatAbility.h" },
		{ "ToolTip", "Get the transform we should start tracing from." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeCombatAbility_GetTargetingViewPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCombatAbility_eventGetTargetingViewPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCombatAbility_GetTargetingViewPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCombatAbility_GetTargetingViewPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCombatAbility_GetTargetingViewPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCombatAbility_GetTargetingViewPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCombatAbility, nullptr, "GetTargetingViewPoint", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCombatAbility_GetTargetingViewPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCombatAbility_GetTargetingViewPoint_Statics::PropPointers), sizeof(NarrativeCombatAbility_eventGetTargetingViewPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCombatAbility_GetTargetingViewPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCombatAbility_GetTargetingViewPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCombatAbility_eventGetTargetingViewPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCombatAbility_GetTargetingViewPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCombatAbility_GetTargetingViewPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCombatAbility::execGetTargetingViewPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetTargetingViewPoint_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeCombatAbility Function GetTargetingViewPoint

// Begin Class UNarrativeCombatAbility Function GetTraceData
struct NarrativeCombatAbility_eventGetTraceData_Parms
{
	FCombatTraceData ReturnValue;
};
static const FName NAME_UNarrativeCombatAbility_GetTraceData = FName(TEXT("GetTraceData"));
FCombatTraceData UNarrativeCombatAbility::GetTraceData() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeCombatAbility_GetTraceData);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeCombatAbility_eventGetTraceData_Parms Parms;
		const_cast<UNarrativeCombatAbility*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNarrativeCombatAbility*>(this)->GetTraceData_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeCombatAbility_GetTraceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Combat Ability" },
		{ "Comment", "//Get the trace info this combat ability will use to generate its target data \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeCombatAbility.h" },
		{ "ToolTip", "Get the trace info this combat ability will use to generate its target data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeCombatAbility_GetTraceData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCombatAbility_eventGetTraceData_Parms, ReturnValue), Z_Construct_UScriptStruct_FCombatTraceData, METADATA_PARAMS(0, nullptr) }; // 179883577
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCombatAbility_GetTraceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCombatAbility_GetTraceData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCombatAbility_GetTraceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCombatAbility_GetTraceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCombatAbility, nullptr, "GetTraceData", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCombatAbility_GetTraceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCombatAbility_GetTraceData_Statics::PropPointers), sizeof(NarrativeCombatAbility_eventGetTraceData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCombatAbility_GetTraceData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCombatAbility_GetTraceData_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCombatAbility_eventGetTraceData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCombatAbility_GetTraceData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCombatAbility_GetTraceData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCombatAbility::execGetTraceData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCombatTraceData*)Z_Param__Result=P_THIS->GetTraceData_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeCombatAbility Function GetTraceData

// Begin Class UNarrativeCombatAbility Function K2_TargetDataReady
struct NarrativeCombatAbility_eventK2_TargetDataReady_Parms
{
	FGameplayAbilityTargetDataHandle TargetData;
};
static const FName NAME_UNarrativeCombatAbility_K2_TargetDataReady = FName(TEXT("K2_TargetDataReady"));
void UNarrativeCombatAbility::K2_TargetDataReady(FGameplayAbilityTargetDataHandle const& TargetData)
{
	NarrativeCombatAbility_eventK2_TargetDataReady_Parms Parms;
	Parms.TargetData=TargetData;
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeCombatAbility_K2_TargetDataReady);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNarrativeCombatAbility_K2_TargetDataReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "OnTargetDataReady" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeCombatAbility.h" },
		{ "ScriptName", "OnTargetDataReady" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeCombatAbility_K2_TargetDataReady_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCombatAbility_eventK2_TargetDataReady_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 2741862775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCombatAbility_K2_TargetDataReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCombatAbility_K2_TargetDataReady_Statics::NewProp_TargetData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCombatAbility_K2_TargetDataReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCombatAbility_K2_TargetDataReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCombatAbility, nullptr, "K2_TargetDataReady", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCombatAbility_K2_TargetDataReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCombatAbility_K2_TargetDataReady_Statics::PropPointers), sizeof(NarrativeCombatAbility_eventK2_TargetDataReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCombatAbility_K2_TargetDataReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCombatAbility_K2_TargetDataReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCombatAbility_eventK2_TargetDataReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCombatAbility_K2_TargetDataReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCombatAbility_K2_TargetDataReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UNarrativeCombatAbility Function K2_TargetDataReady

// Begin Class UNarrativeCombatAbility
void UNarrativeCombatAbility::StaticRegisterNativesUNarrativeCombatAbility()
{
	UClass* Class = UNarrativeCombatAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinalizeTargetData", &UNarrativeCombatAbility::execFinalizeTargetData },
		{ "GenerateTargetData", &UNarrativeCombatAbility::execGenerateTargetData },
		{ "GenerateTargetDataUsingTrace", &UNarrativeCombatAbility::execGenerateTargetDataUsingTrace },
		{ "GetTargetingViewPoint", &UNarrativeCombatAbility::execGetTargetingViewPoint },
		{ "GetTraceData", &UNarrativeCombatAbility::execGetTraceData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeCombatAbility);
UClass* Z_Construct_UClass_UNarrativeCombatAbility_NoRegister()
{
	return UNarrativeCombatAbility::StaticClass();
}
struct Z_Construct_UClass_UNarrativeCombatAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Ability that has all of the hitscan, collision checking, damage dealing etc built in. Used by both melee and hitscan weapons. \n */" },
		{ "IncludePath", "GAS/NarrativeCombatAbility.h" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeCombatAbility.h" },
		{ "ToolTip", "Ability that has all of the hitscan, collision checking, damage dealing etc built in. Used by both melee and hitscan weapons." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresAmmo_MetaData[] = {
		{ "Category", "Narrative Ability" },
		{ "Comment", "//if true, we check our item has its ammo class, and if not the cost check will fail \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeCombatAbility.h" },
		{ "ToolTip", "if true, we check our item has its ammo class, and if not the cost check will fail" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugTraces_MetaData[] = {
		{ "Category", "Narrative Ability" },
		{ "Comment", "//if true, we'll draw debugging traces \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeCombatAbility.h" },
		{ "ToolTip", "if true, we'll draw debugging traces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingTransformProvider_MetaData[] = {
		{ "Category", "Narrative Ability" },
		{ "Comment", "//Instanced class provides a targeting transform in a way that isnt tied to the ability, and composition can be used \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeCombatAbility.h" },
		{ "ToolTip", "Instanced class provides a targeting transform in a way that isnt tied to the ability, and composition can be used" },
	};
#endif // WITH_METADATA
	static void NewProp_bRequiresAmmo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresAmmo;
	static void NewProp_bDrawDebugTraces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugTraces;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingTransformProvider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeCombatAbility_FinalizeTargetData, "FinalizeTargetData" }, // 3913972384
		{ &Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetData, "GenerateTargetData" }, // 4198714070
		{ &Z_Construct_UFunction_UNarrativeCombatAbility_GenerateTargetDataUsingTrace, "GenerateTargetDataUsingTrace" }, // 764559839
		{ &Z_Construct_UFunction_UNarrativeCombatAbility_GetTargetingViewPoint, "GetTargetingViewPoint" }, // 594877307
		{ &Z_Construct_UFunction_UNarrativeCombatAbility_GetTraceData, "GetTraceData" }, // 189798765
		{ &Z_Construct_UFunction_UNarrativeCombatAbility_K2_TargetDataReady, "K2_TargetDataReady" }, // 3516827237
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeCombatAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNarrativeCombatAbility_Statics::NewProp_bRequiresAmmo_SetBit(void* Obj)
{
	((UNarrativeCombatAbility*)Obj)->bRequiresAmmo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeCombatAbility_Statics::NewProp_bRequiresAmmo = { "bRequiresAmmo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeCombatAbility), &Z_Construct_UClass_UNarrativeCombatAbility_Statics::NewProp_bRequiresAmmo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresAmmo_MetaData), NewProp_bRequiresAmmo_MetaData) };
void Z_Construct_UClass_UNarrativeCombatAbility_Statics::NewProp_bDrawDebugTraces_SetBit(void* Obj)
{
	((UNarrativeCombatAbility*)Obj)->bDrawDebugTraces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeCombatAbility_Statics::NewProp_bDrawDebugTraces = { "bDrawDebugTraces", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeCombatAbility), &Z_Construct_UClass_UNarrativeCombatAbility_Statics::NewProp_bDrawDebugTraces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugTraces_MetaData), NewProp_bDrawDebugTraces_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeCombatAbility_Statics::NewProp_TargetingTransformProvider = { "TargetingTransformProvider", nullptr, (EPropertyFlags)0x012608000208001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCombatAbility, TargetingTransformProvider), Z_Construct_UClass_UTargetingTransformProvider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingTransformProvider_MetaData), NewProp_TargetingTransformProvider_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeCombatAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCombatAbility_Statics::NewProp_bRequiresAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCombatAbility_Statics::NewProp_bDrawDebugTraces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCombatAbility_Statics::NewProp_TargetingTransformProvider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCombatAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeCombatAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCombatAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeCombatAbility_Statics::ClassParams = {
	&UNarrativeCombatAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeCombatAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCombatAbility_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCombatAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeCombatAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeCombatAbility()
{
	if (!Z_Registration_Info_UClass_UNarrativeCombatAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeCombatAbility.OuterSingleton, Z_Construct_UClass_UNarrativeCombatAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeCombatAbility.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeCombatAbility>()
{
	return UNarrativeCombatAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeCombatAbility);
UNarrativeCombatAbility::~UNarrativeCombatAbility() {}
// End Class UNarrativeCombatAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeCombatAbility_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCombatTraceData::StaticStruct, Z_Construct_UScriptStruct_FCombatTraceData_Statics::NewStructOps, TEXT("CombatTraceData"), &Z_Registration_Info_UScriptStruct_CombatTraceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatTraceData), 179883577U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingTransformProvider, UTargetingTransformProvider::StaticClass, TEXT("UTargetingTransformProvider"), &Z_Registration_Info_UClass_UTargetingTransformProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingTransformProvider), 1487935322U) },
		{ Z_Construct_UClass_UTargetingTransformProvider_CameraTowardsFocus, UTargetingTransformProvider_CameraTowardsFocus::StaticClass, TEXT("UTargetingTransformProvider_CameraTowardsFocus"), &Z_Registration_Info_UClass_UTargetingTransformProvider_CameraTowardsFocus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingTransformProvider_CameraTowardsFocus), 3467188927U) },
		{ Z_Construct_UClass_UNarrativeCombatAbility, UNarrativeCombatAbility::StaticClass, TEXT("UNarrativeCombatAbility"), &Z_Registration_Info_UClass_UNarrativeCombatAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeCombatAbility), 1631939879U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeCombatAbility_h_3778454923(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeCombatAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeCombatAbility_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeCombatAbility_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeCombatAbility_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
