// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Weapons/WeaponAnimPose.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponAnimPose() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEventReference();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UAnimNotifyRefObject();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UAnimNotifyRefObject_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FDamageStateData();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FDamageStateDataContainer();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponAnimPose();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponCollisionData();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FWeaponAnimPose
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponAnimPose;
class UScriptStruct* FWeaponAnimPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponAnimPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponAnimPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponAnimPose, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("WeaponAnimPose"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponAnimPose.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FWeaponAnimPose>()
{
	return FWeaponAnimPose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeaponAnimPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Copied from AnimPose.h but exposes certain functionality that was originally protected/private\n" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponAnimPose.h" },
		{ "ToolTip", "Copied from AnimPose.h but exposes certain functionality that was originally protected/private" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponAnimPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponAnimPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentBoneIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponAnimPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalSpacePoses_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponAnimPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldSpacePoses_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponAnimPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefLocalSpacePoses_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponAnimPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefWorldSpacePoses_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponAnimPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponAnimPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponAnimPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponAnimPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketParentBoneNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponAnimPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponAnimPose.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneIndices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParentBoneIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentBoneIndices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalSpacePoses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalSpacePoses;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpacePoses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldSpacePoses;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RefLocalSpacePoses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RefLocalSpacePoses;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RefWorldSpacePoses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RefWorldSpacePoses;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveNames;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveValues;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SocketNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketParentBoneNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SocketParentBoneNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SocketTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponAnimPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAnimPose, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneNames_MetaData), NewProp_BoneNames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_BoneIndices_Inner = { "BoneIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_BoneIndices = { "BoneIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAnimPose, BoneIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneIndices_MetaData), NewProp_BoneIndices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_ParentBoneIndices_Inner = { "ParentBoneIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_ParentBoneIndices = { "ParentBoneIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAnimPose, ParentBoneIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentBoneIndices_MetaData), NewProp_ParentBoneIndices_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_LocalSpacePoses_Inner = { "LocalSpacePoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_LocalSpacePoses = { "LocalSpacePoses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAnimPose, LocalSpacePoses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalSpacePoses_MetaData), NewProp_LocalSpacePoses_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_WorldSpacePoses_Inner = { "WorldSpacePoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_WorldSpacePoses = { "WorldSpacePoses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAnimPose, WorldSpacePoses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldSpacePoses_MetaData), NewProp_WorldSpacePoses_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_RefLocalSpacePoses_Inner = { "RefLocalSpacePoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_RefLocalSpacePoses = { "RefLocalSpacePoses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAnimPose, RefLocalSpacePoses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefLocalSpacePoses_MetaData), NewProp_RefLocalSpacePoses_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_RefWorldSpacePoses_Inner = { "RefWorldSpacePoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_RefWorldSpacePoses = { "RefWorldSpacePoses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAnimPose, RefWorldSpacePoses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefWorldSpacePoses_MetaData), NewProp_RefWorldSpacePoses_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_CurveNames_Inner = { "CurveNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_CurveNames = { "CurveNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAnimPose, CurveNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveNames_MetaData), NewProp_CurveNames_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_CurveValues_Inner = { "CurveValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_CurveValues = { "CurveValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAnimPose, CurveValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveValues_MetaData), NewProp_CurveValues_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_SocketNames_Inner = { "SocketNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_SocketNames = { "SocketNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAnimPose, SocketNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketNames_MetaData), NewProp_SocketNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_SocketParentBoneNames_Inner = { "SocketParentBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_SocketParentBoneNames = { "SocketParentBoneNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAnimPose, SocketParentBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketParentBoneNames_MetaData), NewProp_SocketParentBoneNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_SocketTransforms_Inner = { "SocketTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_SocketTransforms = { "SocketTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAnimPose, SocketTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketTransforms_MetaData), NewProp_SocketTransforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_BoneNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_BoneNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_BoneIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_BoneIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_ParentBoneIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_ParentBoneIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_LocalSpacePoses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_LocalSpacePoses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_WorldSpacePoses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_WorldSpacePoses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_RefLocalSpacePoses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_RefLocalSpacePoses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_RefWorldSpacePoses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_RefWorldSpacePoses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_CurveNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_CurveNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_CurveValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_CurveValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_SocketNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_SocketNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_SocketParentBoneNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_SocketParentBoneNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_SocketTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewProp_SocketTransforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"WeaponAnimPose",
	Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::PropPointers),
	sizeof(FWeaponAnimPose),
	alignof(FWeaponAnimPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponAnimPose()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponAnimPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponAnimPose.InnerSingleton, Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeaponAnimPose.InnerSingleton;
}
// End ScriptStruct FWeaponAnimPose

// Begin ScriptStruct FDamageStateData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DamageStateData;
class UScriptStruct* FDamageStateData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DamageStateData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DamageStateData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageStateData, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("DamageStateData"));
	}
	return Z_Registration_Info_UScriptStruct_DamageStateData.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FDamageStateData>()
{
	return FDamageStateData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDamageStateData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Stores state data about a specific frame in an attack animation\n" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponAnimPose.h" },
		{ "ToolTip", "Stores state data about a specific frame in an attack animation" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageStateData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageStateData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"DamageStateData",
	nullptr,
	0,
	sizeof(FDamageStateData),
	alignof(FDamageStateData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageStateData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDamageStateData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDamageStateData()
{
	if (!Z_Registration_Info_UScriptStruct_DamageStateData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DamageStateData.InnerSingleton, Z_Construct_UScriptStruct_FDamageStateData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DamageStateData.InnerSingleton;
}
// End ScriptStruct FDamageStateData

// Begin ScriptStruct FDamageStateDataContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DamageStateDataContainer;
class UScriptStruct* FDamageStateDataContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DamageStateDataContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DamageStateDataContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageStateDataContainer, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("DamageStateDataContainer"));
	}
	return Z_Registration_Info_UScriptStruct_DamageStateDataContainer.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FDamageStateDataContainer>()
{
	return FDamageStateDataContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDamageStateDataContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Container that stores damage state data and can be efficiently retrieved from a TMap\n" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponAnimPose.h" },
		{ "ToolTip", "Container that stores damage state data and can be efficiently retrieved from a TMap" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageStateDataContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageStateDataContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"DamageStateDataContainer",
	nullptr,
	0,
	sizeof(FDamageStateDataContainer),
	alignof(FDamageStateDataContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageStateDataContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDamageStateDataContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDamageStateDataContainer()
{
	if (!Z_Registration_Info_UScriptStruct_DamageStateDataContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DamageStateDataContainer.InnerSingleton, Z_Construct_UScriptStruct_FDamageStateDataContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DamageStateDataContainer.InnerSingleton;
}
// End ScriptStruct FDamageStateDataContainer

// Begin Class UAnimNotifyRefObject
void UAnimNotifyRefObject::StaticRegisterNativesUAnimNotifyRefObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyRefObject);
UClass* Z_Construct_UClass_UAnimNotifyRefObject_NoRegister()
{
	return UAnimNotifyRefObject::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyRefObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Wrapper class so we can send anim notify reference as a payload in gameplay event\n" },
		{ "IncludePath", "Weapons/WeaponAnimPose.h" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponAnimPose.h" },
		{ "ToolTip", "Wrapper class so we can send anim notify reference as a payload in gameplay event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotifyEventReference_MetaData[] = {
		{ "Category", "Anim Notify Ref Object" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponAnimPose.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotifyEventReference;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyRefObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyRefObject_Statics::NewProp_NotifyEventReference = { "NotifyEventReference", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyRefObject, NotifyEventReference), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotifyEventReference_MetaData), NewProp_NotifyEventReference_MetaData) }; // 3961895738
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyRefObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyRefObject_Statics::NewProp_NotifyEventReference,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyRefObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyRefObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyRefObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyRefObject_Statics::ClassParams = {
	&UAnimNotifyRefObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyRefObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyRefObject_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyRefObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyRefObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyRefObject()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyRefObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyRefObject.OuterSingleton, Z_Construct_UClass_UAnimNotifyRefObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyRefObject.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UAnimNotifyRefObject>()
{
	return UAnimNotifyRefObject::StaticClass();
}
UAnimNotifyRefObject::UAnimNotifyRefObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyRefObject);
UAnimNotifyRefObject::~UAnimNotifyRefObject() {}
// End Class UAnimNotifyRefObject

// Begin ScriptStruct FWeaponCollisionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponCollisionData;
class UScriptStruct* FWeaponCollisionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponCollisionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponCollisionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponCollisionData, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("WeaponCollisionData"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponCollisionData.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FWeaponCollisionData>()
{
	return FWeaponCollisionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeaponCollisionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponAnimPose.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponCollisionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponCollisionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"WeaponCollisionData",
	nullptr,
	0,
	sizeof(FWeaponCollisionData),
	alignof(FWeaponCollisionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponCollisionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponCollisionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponCollisionData()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponCollisionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponCollisionData.InnerSingleton, Z_Construct_UScriptStruct_FWeaponCollisionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeaponCollisionData.InnerSingleton;
}
// End ScriptStruct FWeaponCollisionData

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponAnimPose_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponAnimPose::StaticStruct, Z_Construct_UScriptStruct_FWeaponAnimPose_Statics::NewStructOps, TEXT("WeaponAnimPose"), &Z_Registration_Info_UScriptStruct_WeaponAnimPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponAnimPose), 3282630566U) },
		{ FDamageStateData::StaticStruct, Z_Construct_UScriptStruct_FDamageStateData_Statics::NewStructOps, TEXT("DamageStateData"), &Z_Registration_Info_UScriptStruct_DamageStateData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageStateData), 2222630328U) },
		{ FDamageStateDataContainer::StaticStruct, Z_Construct_UScriptStruct_FDamageStateDataContainer_Statics::NewStructOps, TEXT("DamageStateDataContainer"), &Z_Registration_Info_UScriptStruct_DamageStateDataContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageStateDataContainer), 1048134979U) },
		{ FWeaponCollisionData::StaticStruct, Z_Construct_UScriptStruct_FWeaponCollisionData_Statics::NewStructOps, TEXT("WeaponCollisionData"), &Z_Registration_Info_UScriptStruct_WeaponCollisionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponCollisionData), 700300016U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyRefObject, UAnimNotifyRefObject::StaticClass, TEXT("UAnimNotifyRefObject"), &Z_Registration_Info_UClass_UAnimNotifyRefObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyRefObject), 1564540352U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponAnimPose_h_1351370448(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponAnimPose_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponAnimPose_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponAnimPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponAnimPose_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
