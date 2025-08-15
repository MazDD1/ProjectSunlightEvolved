// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Items/RangedWeaponItem.h"
#include "NarrativeArsenal/Public/GAS/NarrativeCombatAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangedWeaponItem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_URangedWeaponItem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_URangedWeaponItem_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UWeaponItem();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCombatTraceData();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class URangedWeaponItem Function GetAimFOV
struct Z_Construct_UFunction_URangedWeaponItem_GetAimFOV_Statics
{
	struct RangedWeaponItem_eventGetAimFOV_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//Get the percentage of the default FOV this weapon should use when aiming \n" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "Get the percentage of the default FOV this weapon should use when aiming" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URangedWeaponItem_GetAimFOV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RangedWeaponItem_eventGetAimFOV_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URangedWeaponItem_GetAimFOV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URangedWeaponItem_GetAimFOV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponItem_GetAimFOV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URangedWeaponItem_GetAimFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangedWeaponItem, nullptr, "GetAimFOV", nullptr, nullptr, Z_Construct_UFunction_URangedWeaponItem_GetAimFOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponItem_GetAimFOV_Statics::PropPointers), sizeof(Z_Construct_UFunction_URangedWeaponItem_GetAimFOV_Statics::RangedWeaponItem_eventGetAimFOV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponItem_GetAimFOV_Statics::Function_MetaDataParams), Z_Construct_UFunction_URangedWeaponItem_GetAimFOV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URangedWeaponItem_GetAimFOV_Statics::RangedWeaponItem_eventGetAimFOV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URangedWeaponItem_GetAimFOV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URangedWeaponItem_GetAimFOV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URangedWeaponItem::execGetAimFOV)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAimFOV();
	P_NATIVE_END;
}
// End Class URangedWeaponItem Function GetAimFOV

// Begin Class URangedWeaponItem Function GetRecoilImpulse
struct Z_Construct_UFunction_URangedWeaponItem_GetRecoilImpulse_Statics
{
	struct RangedWeaponItem_eventGetRecoilImpulse_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//Get a random recoil impulse that can be applied\n" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "Get a random recoil impulse that can be applied" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URangedWeaponItem_GetRecoilImpulse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RangedWeaponItem_eventGetRecoilImpulse_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URangedWeaponItem_GetRecoilImpulse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URangedWeaponItem_GetRecoilImpulse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponItem_GetRecoilImpulse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URangedWeaponItem_GetRecoilImpulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangedWeaponItem, nullptr, "GetRecoilImpulse", nullptr, nullptr, Z_Construct_UFunction_URangedWeaponItem_GetRecoilImpulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponItem_GetRecoilImpulse_Statics::PropPointers), sizeof(Z_Construct_UFunction_URangedWeaponItem_GetRecoilImpulse_Statics::RangedWeaponItem_eventGetRecoilImpulse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponItem_GetRecoilImpulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_URangedWeaponItem_GetRecoilImpulse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URangedWeaponItem_GetRecoilImpulse_Statics::RangedWeaponItem_eventGetRecoilImpulse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URangedWeaponItem_GetRecoilImpulse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URangedWeaponItem_GetRecoilImpulse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URangedWeaponItem::execGetRecoilImpulse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetRecoilImpulse();
	P_NATIVE_END;
}
// End Class URangedWeaponItem Function GetRecoilImpulse

// Begin Class URangedWeaponItem
void URangedWeaponItem::StaticRegisterNativesURangedWeaponItem()
{
	UClass* Class = URangedWeaponItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAimFOV", &URangedWeaponItem::execGetAimFOV },
		{ "GetRecoilImpulse", &URangedWeaponItem::execGetRecoilImpulse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URangedWeaponItem);
UClass* Z_Construct_UClass_URangedWeaponItem_NoRegister()
{
	return URangedWeaponItem::StaticClass();
}
struct Z_Construct_UClass_URangedWeaponItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for a ranged weapon - includes some properties that aren't required for melee based weapons \n */" },
		{ "IncludePath", "Items/RangedWeaponItem.h" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "Base class for a ranged weapon - includes some properties that aren't required for melee based weapons" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticFire_MetaData[] = {
		{ "Category", "Weapon|Config|Ranged Weapon" },
		{ "Comment", "/** The hitscan ability will read this to configure itself */" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "The hitscan ability will read this to configure itself" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RateOfFire_MetaData[] = {
		{ "Category", "Weapon|Config|Ranged Weapon" },
		{ "Comment", "/** The time between shots, hitscan ability configures itself with this */" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "The time between shots, hitscan ability configures itself with this" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimFOVPct_MetaData[] = {
		{ "Category", "Weapon|Config|Ranged Weapon" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/** The FOV we should zoom in to as a percentage of the base FOV. 1=no zoom at all, 0.1 = huge amount of zoom */" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "The FOV we should zoom in to as a percentage of the base FOV. 1=no zoom at all, 0.1 = huge amount of zoom" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseSpreadDegrees_MetaData[] = {
		{ "Category", "Weapon|Config|Ranged Weapon" },
		{ "Comment", "/** Base spread in degrees to add to the targeting transform of the weeapon.  */" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "Base spread in degrees to add to the targeting transform of the weeapon." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeedAddDegrees_MetaData[] = {
		{ "Category", "Weapon|Config|Ranged Weapon" },
		{ "Comment", "/** If moving at full speed, this amount of degrees will be added to spread. If half speed, half this amount, etc. */" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "If moving at full speed, this amount of degrees will be added to spread. If half speed, half this amount, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchSpreadMultiplier_MetaData[] = {
		{ "Category", "Weapon|Config|Ranged Weapon" },
		{ "Comment", "/** If crouched we'll multiply current weapon spread by this number.  */" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "If crouched we'll multiply current weapon spread by this number." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadFireBump_MetaData[] = {
		{ "Category", "Weapon|Config|Ranged Weapon" },
		{ "Comment", "/** Amount we'll add to the spread when the weapon is fired */" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "Amount we'll add to the spread when the weapon is fired" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpreadDegrees_MetaData[] = {
		{ "Category", "Weapon|Config|Ranged Weapon" },
		{ "Comment", "/** Max spread in degrees we'll allow */" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "Max spread in degrees we'll allow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadDecreaseSpeed_MetaData[] = {
		{ "Category", "Weapon|Config|Ranged Weapon" },
		{ "Comment", "/** Speed at which current spread returns to the base spread amount.  */" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "Speed at which current spread returns to the base spread amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpread_MetaData[] = {
		{ "Category", "Ranged Weapon" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilImpulseTranslationMin_MetaData[] = {
		{ "Category", "Weapon|Config|IK Weapon FX" },
		{ "Comment", "/** Recoil impulse min to add  */" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "Recoil impulse min to add" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilImpulseTranslationMax_MetaData[] = {
		{ "Category", "Weapon|Config|IK Weapon FX" },
		{ "Comment", "/** Recoil impulse max to add  */" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "Recoil impulse max to add" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HipRecoilImpulseTranslationMin_MetaData[] = {
		{ "Category", "Weapon|Config|IK Weapon FX" },
		{ "Comment", "/** HipRecoil impulse min to add  */" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "HipRecoil impulse min to add" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HipRecoilImpulseTranslationMax_MetaData[] = {
		{ "Category", "Weapon|Config|IK Weapon FX" },
		{ "Comment", "/** HipRecoil impulse max to add  */" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "HipRecoil impulse max to add" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceData_MetaData[] = {
		{ "Category", "Weapon|Config|Trace" },
		{ "Comment", "//The trace data we'll use when firing the weapon \n" },
		{ "ModuleRelativePath", "Public/Items/RangedWeaponItem.h" },
		{ "ToolTip", "The trace data we'll use when firing the weapon" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutomaticFire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticFire;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RateOfFire;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimFOVPct;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSpreadDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeedAddDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchSpreadMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadFireBump;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpreadDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadDecreaseSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSpread;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilImpulseTranslationMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilImpulseTranslationMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HipRecoilImpulseTranslationMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HipRecoilImpulseTranslationMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URangedWeaponItem_GetAimFOV, "GetAimFOV" }, // 442545834
		{ &Z_Construct_UFunction_URangedWeaponItem_GetRecoilImpulse, "GetRecoilImpulse" }, // 4124651935
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URangedWeaponItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_bAutomaticFire_SetBit(void* Obj)
{
	((URangedWeaponItem*)Obj)->bAutomaticFire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_bAutomaticFire = { "bAutomaticFire", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URangedWeaponItem), &Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_bAutomaticFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticFire_MetaData), NewProp_bAutomaticFire_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_RateOfFire = { "RateOfFire", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URangedWeaponItem, RateOfFire), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RateOfFire_MetaData), NewProp_RateOfFire_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_AimFOVPct = { "AimFOVPct", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URangedWeaponItem, AimFOVPct), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimFOVPct_MetaData), NewProp_AimFOVPct_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_BaseSpreadDegrees = { "BaseSpreadDegrees", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URangedWeaponItem, BaseSpreadDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseSpreadDegrees_MetaData), NewProp_BaseSpreadDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_MoveSpeedAddDegrees = { "MoveSpeedAddDegrees", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URangedWeaponItem, MoveSpeedAddDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeedAddDegrees_MetaData), NewProp_MoveSpeedAddDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_CrouchSpreadMultiplier = { "CrouchSpreadMultiplier", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URangedWeaponItem, CrouchSpreadMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchSpreadMultiplier_MetaData), NewProp_CrouchSpreadMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_SpreadFireBump = { "SpreadFireBump", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URangedWeaponItem, SpreadFireBump), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadFireBump_MetaData), NewProp_SpreadFireBump_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_MaxSpreadDegrees = { "MaxSpreadDegrees", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URangedWeaponItem, MaxSpreadDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpreadDegrees_MetaData), NewProp_MaxSpreadDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_SpreadDecreaseSpeed = { "SpreadDecreaseSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URangedWeaponItem, SpreadDecreaseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadDecreaseSpeed_MetaData), NewProp_SpreadDecreaseSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_CurrentSpread = { "CurrentSpread", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URangedWeaponItem, CurrentSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSpread_MetaData), NewProp_CurrentSpread_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_RecoilImpulseTranslationMin = { "RecoilImpulseTranslationMin", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URangedWeaponItem, RecoilImpulseTranslationMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilImpulseTranslationMin_MetaData), NewProp_RecoilImpulseTranslationMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_RecoilImpulseTranslationMax = { "RecoilImpulseTranslationMax", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URangedWeaponItem, RecoilImpulseTranslationMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilImpulseTranslationMax_MetaData), NewProp_RecoilImpulseTranslationMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_HipRecoilImpulseTranslationMin = { "HipRecoilImpulseTranslationMin", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URangedWeaponItem, HipRecoilImpulseTranslationMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HipRecoilImpulseTranslationMin_MetaData), NewProp_HipRecoilImpulseTranslationMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_HipRecoilImpulseTranslationMax = { "HipRecoilImpulseTranslationMax", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URangedWeaponItem, HipRecoilImpulseTranslationMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HipRecoilImpulseTranslationMax_MetaData), NewProp_HipRecoilImpulseTranslationMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_TraceData = { "TraceData", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URangedWeaponItem, TraceData), Z_Construct_UScriptStruct_FCombatTraceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceData_MetaData), NewProp_TraceData_MetaData) }; // 179883577
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URangedWeaponItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_bAutomaticFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_RateOfFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_AimFOVPct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_BaseSpreadDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_MoveSpeedAddDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_CrouchSpreadMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_SpreadFireBump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_MaxSpreadDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_SpreadDecreaseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_CurrentSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_RecoilImpulseTranslationMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_RecoilImpulseTranslationMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_HipRecoilImpulseTranslationMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_HipRecoilImpulseTranslationMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponItem_Statics::NewProp_TraceData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URangedWeaponItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWeaponItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URangedWeaponItem_Statics::ClassParams = {
	&URangedWeaponItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URangedWeaponItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponItem_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponItem_Statics::Class_MetaDataParams), Z_Construct_UClass_URangedWeaponItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URangedWeaponItem()
{
	if (!Z_Registration_Info_UClass_URangedWeaponItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URangedWeaponItem.OuterSingleton, Z_Construct_UClass_URangedWeaponItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URangedWeaponItem.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<URangedWeaponItem>()
{
	return URangedWeaponItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URangedWeaponItem);
URangedWeaponItem::~URangedWeaponItem() {}
// End Class URangedWeaponItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_RangedWeaponItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URangedWeaponItem, URangedWeaponItem::StaticClass, TEXT("URangedWeaponItem"), &Z_Registration_Info_UClass_URangedWeaponItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URangedWeaponItem), 4132723776U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_RangedWeaponItem_h_3040738346(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_RangedWeaponItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_RangedWeaponItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
