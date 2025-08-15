// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Character/NarrativeCharacterVisual.h"
#include "NarrativeArsenal/Public/CharacterCreator/CharacterCreatorAttributes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCharacterVisual() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeCharacterVisual();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeCharacterVisual_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_AWeaponVisual_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEquippableItem_Clothing_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UWeaponItem_NoRegister();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_CharacterAppearanceEvent__DelegateSignature();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Groom();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Delegate FCharacterAppearanceEvent
struct Z_Construct_UDelegateFunction_NarrativeArsenal_CharacterAppearanceEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_CharacterAppearanceEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "CharacterAppearanceEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_CharacterAppearanceEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_CharacterAppearanceEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_CharacterAppearanceEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_CharacterAppearanceEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCharacterAppearanceEvent_DelegateWrapper(const FMulticastScriptDelegate& CharacterAppearanceEvent)
{
	CharacterAppearanceEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FCharacterAppearanceEvent

// Begin Class ANarrativeCharacterVisual Function AddWeaponVisual
struct Z_Construct_UFunction_ANarrativeCharacterVisual_AddWeaponVisual_Statics
{
	struct NarrativeCharacterVisual_eventAddWeaponVisual_Parms
	{
		UWeaponItem* WeaponItem;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Visual" },
		{ "Comment", "//Spawn a weapon visual, attach to us \n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "Spawn a weapon visual, attach to us" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponItem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponItem;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_AddWeaponVisual_Statics::NewProp_WeaponItem = { "WeaponItem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventAddWeaponVisual_Parms, WeaponItem), Z_Construct_UClass_UWeaponItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponItem_MetaData), NewProp_WeaponItem_MetaData) };
void Z_Construct_UFunction_ANarrativeCharacterVisual_AddWeaponVisual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeCharacterVisual_eventAddWeaponVisual_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_AddWeaponVisual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacterVisual_eventAddWeaponVisual_Parms), &Z_Construct_UFunction_ANarrativeCharacterVisual_AddWeaponVisual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacterVisual_AddWeaponVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_AddWeaponVisual_Statics::NewProp_WeaponItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_AddWeaponVisual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_AddWeaponVisual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_AddWeaponVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "AddWeaponVisual", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacterVisual_AddWeaponVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_AddWeaponVisual_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_AddWeaponVisual_Statics::NarrativeCharacterVisual_eventAddWeaponVisual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_AddWeaponVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_AddWeaponVisual_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_AddWeaponVisual_Statics::NarrativeCharacterVisual_eventAddWeaponVisual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_AddWeaponVisual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_AddWeaponVisual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execAddWeaponVisual)
{
	P_GET_OBJECT(UWeaponItem,Z_Param_WeaponItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddWeaponVisual(Z_Param_WeaponItem);
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function AddWeaponVisual

// Begin Class ANarrativeCharacterVisual Function AttachWeaponVisual
struct Z_Construct_UFunction_ANarrativeCharacterVisual_AttachWeaponVisual_Statics
{
	struct NarrativeCharacterVisual_eventAttachWeaponVisual_Parms
	{
		UWeaponItem* WeaponItem;
		bool bHolster;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Visual" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponItem_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHolster_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponItem;
	static void NewProp_bHolster_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHolster;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_AttachWeaponVisual_Statics::NewProp_WeaponItem = { "WeaponItem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventAttachWeaponVisual_Parms, WeaponItem), Z_Construct_UClass_UWeaponItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponItem_MetaData), NewProp_WeaponItem_MetaData) };
void Z_Construct_UFunction_ANarrativeCharacterVisual_AttachWeaponVisual_Statics::NewProp_bHolster_SetBit(void* Obj)
{
	((NarrativeCharacterVisual_eventAttachWeaponVisual_Parms*)Obj)->bHolster = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_AttachWeaponVisual_Statics::NewProp_bHolster = { "bHolster", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacterVisual_eventAttachWeaponVisual_Parms), &Z_Construct_UFunction_ANarrativeCharacterVisual_AttachWeaponVisual_Statics::NewProp_bHolster_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHolster_MetaData), NewProp_bHolster_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacterVisual_AttachWeaponVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_AttachWeaponVisual_Statics::NewProp_WeaponItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_AttachWeaponVisual_Statics::NewProp_bHolster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_AttachWeaponVisual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_AttachWeaponVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "AttachWeaponVisual", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacterVisual_AttachWeaponVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_AttachWeaponVisual_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_AttachWeaponVisual_Statics::NarrativeCharacterVisual_eventAttachWeaponVisual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_AttachWeaponVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_AttachWeaponVisual_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_AttachWeaponVisual_Statics::NarrativeCharacterVisual_eventAttachWeaponVisual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_AttachWeaponVisual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_AttachWeaponVisual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execAttachWeaponVisual)
{
	P_GET_OBJECT(UWeaponItem,Z_Param_WeaponItem);
	P_GET_UBOOL(Z_Param_bHolster);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachWeaponVisual(Z_Param_WeaponItem,Z_Param_bHolster);
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function AttachWeaponVisual

// Begin Class ANarrativeCharacterVisual Function BaseAppearanceApplied
static const FName NAME_ANarrativeCharacterVisual_BaseAppearanceApplied = FName(TEXT("BaseAppearanceApplied"));
void ANarrativeCharacterVisual::BaseAppearanceApplied()
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacterVisual_BaseAppearanceApplied);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		BaseAppearanceApplied_Implementation();
	}
}
struct Z_Construct_UFunction_ANarrativeCharacterVisual_BaseAppearanceApplied_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Visual" },
		{ "Comment", "//Called after base meshes are set\n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "Called after base meshes are set" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_BaseAppearanceApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "BaseAppearanceApplied", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_BaseAppearanceApplied_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_BaseAppearanceApplied_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_BaseAppearanceApplied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_BaseAppearanceApplied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execBaseAppearanceApplied)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BaseAppearanceApplied_Implementation();
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function BaseAppearanceApplied

// Begin Class ANarrativeCharacterVisual Function ClearAnimBPOverride
struct Z_Construct_UFunction_ANarrativeCharacterVisual_ClearAnimBPOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacterVisual" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_ClearAnimBPOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "ClearAnimBPOverride", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_ClearAnimBPOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_ClearAnimBPOverride_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_ClearAnimBPOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_ClearAnimBPOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execClearAnimBPOverride)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAnimBPOverride();
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function ClearAnimBPOverride

// Begin Class ANarrativeCharacterVisual Function GetBodyMesh
struct Z_Construct_UFunction_ANarrativeCharacterVisual_GetBodyMesh_Statics
{
	struct NarrativeCharacterVisual_eventGetBodyMesh_Parms
	{
		USkeletalMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Visual" },
		{ "Comment", "//Return the body mesh \n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "Return the body mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_GetBodyMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventGetBodyMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacterVisual_GetBodyMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_GetBodyMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetBodyMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_GetBodyMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "GetBodyMesh", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacterVisual_GetBodyMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetBodyMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_GetBodyMesh_Statics::NarrativeCharacterVisual_eventGetBodyMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetBodyMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_GetBodyMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_GetBodyMesh_Statics::NarrativeCharacterVisual_eventGetBodyMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_GetBodyMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_GetBodyMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execGetBodyMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetBodyMesh();
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function GetBodyMesh

// Begin Class ANarrativeCharacterVisual Function GetFaceMesh
struct Z_Construct_UFunction_ANarrativeCharacterVisual_GetFaceMesh_Statics
{
	struct NarrativeCharacterVisual_eventGetFaceMesh_Parms
	{
		USkeletalMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Visual" },
		{ "Comment", "//Return the face mesh - can be null, your character doesn't require a face mesh \n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "Return the face mesh - can be null, your character doesn't require a face mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_GetFaceMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventGetFaceMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacterVisual_GetFaceMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_GetFaceMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetFaceMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_GetFaceMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "GetFaceMesh", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacterVisual_GetFaceMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetFaceMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_GetFaceMesh_Statics::NarrativeCharacterVisual_eventGetFaceMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetFaceMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_GetFaceMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_GetFaceMesh_Statics::NarrativeCharacterVisual_eventGetFaceMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_GetFaceMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_GetFaceMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execGetFaceMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetFaceMesh();
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function GetFaceMesh

// Begin Class ANarrativeCharacterVisual Function GetHeadMeshes
struct Z_Construct_UFunction_ANarrativeCharacterVisual_GetHeadMeshes_Statics
{
	struct NarrativeCharacterVisual_eventGetHeadMeshes_Parms
	{
		TArray<UMeshComponent*> OutHeadMeshes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Visual" },
		{ "Comment", "//Return all meshes considered to be \"head meshes\". These meshes will be hidden when the camera clips into the head, typically because we're in first person mode. \n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "Return all meshes considered to be \"head meshes\". These meshes will be hidden when the camera clips into the head, typically because we're in first person mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutHeadMeshes_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutHeadMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHeadMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_GetHeadMeshes_Statics::NewProp_OutHeadMeshes_Inner = { "OutHeadMeshes", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_GetHeadMeshes_Statics::NewProp_OutHeadMeshes = { "OutHeadMeshes", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventGetHeadMeshes_Parms, OutHeadMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutHeadMeshes_MetaData), NewProp_OutHeadMeshes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacterVisual_GetHeadMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_GetHeadMeshes_Statics::NewProp_OutHeadMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_GetHeadMeshes_Statics::NewProp_OutHeadMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetHeadMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_GetHeadMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "GetHeadMeshes", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacterVisual_GetHeadMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetHeadMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_GetHeadMeshes_Statics::NarrativeCharacterVisual_eventGetHeadMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetHeadMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_GetHeadMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_GetHeadMeshes_Statics::NarrativeCharacterVisual_eventGetHeadMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_GetHeadMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_GetHeadMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execGetHeadMeshes)
{
	P_GET_TARRAY_REF(UMeshComponent*,Z_Param_Out_OutHeadMeshes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetHeadMeshes(Z_Param_Out_OutHeadMeshes);
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function GetHeadMeshes

// Begin Class ANarrativeCharacterVisual Function GetLeaderMesh
struct NarrativeCharacterVisual_eventGetLeaderMesh_Parms
{
	USkeletalMeshComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeCharacterVisual_eventGetLeaderMesh_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ANarrativeCharacterVisual_GetLeaderMesh = FName(TEXT("GetLeaderMesh"));
USkeletalMeshComponent* ANarrativeCharacterVisual::GetLeaderMesh()
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacterVisual_GetLeaderMesh);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeCharacterVisual_eventGetLeaderMesh_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetLeaderMesh_Implementation();
	}
}
struct Z_Construct_UFunction_ANarrativeCharacterVisual_GetLeaderMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Visual" },
		{ "Comment", "//The mesh that clothing pieces will follow if desired. Returns Character.GetMesh() by default. \n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "The mesh that clothing pieces will follow if desired. Returns Character.GetMesh() by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_GetLeaderMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventGetLeaderMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacterVisual_GetLeaderMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_GetLeaderMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetLeaderMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_GetLeaderMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "GetLeaderMesh", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacterVisual_GetLeaderMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetLeaderMesh_Statics::PropPointers), sizeof(NarrativeCharacterVisual_eventGetLeaderMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetLeaderMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_GetLeaderMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCharacterVisual_eventGetLeaderMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_GetLeaderMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_GetLeaderMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execGetLeaderMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetLeaderMesh_Implementation();
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function GetLeaderMesh

// Begin Class ANarrativeCharacterVisual Function GetMainMesh
struct Z_Construct_UFunction_ANarrativeCharacterVisual_GetMainMesh_Statics
{
	struct NarrativeCharacterVisual_eventGetMainMesh_Parms
	{
		USkeletalMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Visual" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_GetMainMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventGetMainMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacterVisual_GetMainMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_GetMainMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetMainMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_GetMainMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "GetMainMesh", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacterVisual_GetMainMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetMainMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_GetMainMesh_Statics::NarrativeCharacterVisual_eventGetMainMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetMainMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_GetMainMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_GetMainMesh_Statics::NarrativeCharacterVisual_eventGetMainMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_GetMainMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_GetMainMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execGetMainMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMainMesh();
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function GetMainMesh

// Begin Class ANarrativeCharacterVisual Function GetMeshComponent
struct Z_Construct_UFunction_ANarrativeCharacterVisual_GetMeshComponent_Statics
{
	struct NarrativeCharacterVisual_eventGetMeshComponent_Parms
	{
		FGameplayTag Slot;
		USkeletalMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "Comment", "//Return the mesh at the provided slot. \n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "Return the mesh at the provided slot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "Categories", "Narrative.Equipment.Slot.Mesh" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_GetMeshComponent_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventGetMeshComponent_Parms, Slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_GetMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventGetMeshComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacterVisual_GetMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_GetMeshComponent_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_GetMeshComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetMeshComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_GetMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "GetMeshComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacterVisual_GetMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetMeshComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_GetMeshComponent_Statics::NarrativeCharacterVisual_eventGetMeshComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_GetMeshComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_GetMeshComponent_Statics::NarrativeCharacterVisual_eventGetMeshComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_GetMeshComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_GetMeshComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execGetMeshComponent)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMeshComponent(Z_Param_Out_Slot);
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function GetMeshComponent

// Begin Class ANarrativeCharacterVisual Function GetWeaponVisual
struct Z_Construct_UFunction_ANarrativeCharacterVisual_GetWeaponVisual_Statics
{
	struct NarrativeCharacterVisual_eventGetWeaponVisual_Parms
	{
		FGameplayTag WeaponSlot;
		AWeaponVisual* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "Comment", "//Returns our weapon visual. This just a generic actor that each weapon item defines, and holds the weapons static mesh and FX assets. \n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "Returns our weapon visual. This just a generic actor that each weapon item defines, and holds the weapons static mesh and FX assets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSlot_MetaData[] = {
		{ "Categories", "Narrative.Equipment.Slot.Weapon" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponSlot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_GetWeaponVisual_Statics::NewProp_WeaponSlot = { "WeaponSlot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventGetWeaponVisual_Parms, WeaponSlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSlot_MetaData), NewProp_WeaponSlot_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_GetWeaponVisual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventGetWeaponVisual_Parms, ReturnValue), Z_Construct_UClass_AWeaponVisual_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacterVisual_GetWeaponVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_GetWeaponVisual_Statics::NewProp_WeaponSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_GetWeaponVisual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetWeaponVisual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_GetWeaponVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "GetWeaponVisual", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacterVisual_GetWeaponVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetWeaponVisual_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_GetWeaponVisual_Statics::NarrativeCharacterVisual_eventGetWeaponVisual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_GetWeaponVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_GetWeaponVisual_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_GetWeaponVisual_Statics::NarrativeCharacterVisual_eventGetWeaponVisual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_GetWeaponVisual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_GetWeaponVisual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execGetWeaponVisual)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_WeaponSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AWeaponVisual**)Z_Param__Result=P_THIS->GetWeaponVisual(Z_Param_Out_WeaponSlot);
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function GetWeaponVisual

// Begin Class ANarrativeCharacterVisual Function HandleEquipClothing
struct NarrativeCharacterVisual_eventHandleEquipClothing_Parms
{
	UEquippableItem_Clothing* Clothing;
};
static const FName NAME_ANarrativeCharacterVisual_HandleEquipClothing = FName(TEXT("HandleEquipClothing"));
void ANarrativeCharacterVisual::HandleEquipClothing(UEquippableItem_Clothing* Clothing)
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacterVisual_HandleEquipClothing);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeCharacterVisual_eventHandleEquipClothing_Parms Parms;
		Parms.Clothing=Clothing;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleEquipClothing_Implementation(Clothing);
	}
}
struct Z_Construct_UFunction_ANarrativeCharacterVisual_HandleEquipClothing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Visual" },
		{ "Comment", "//Define what should happen to the character visual when a clothing item is equipped \n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "Define what should happen to the character visual when a clothing item is equipped" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Clothing_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Clothing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_HandleEquipClothing_Statics::NewProp_Clothing = { "Clothing", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventHandleEquipClothing_Parms, Clothing), Z_Construct_UClass_UEquippableItem_Clothing_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Clothing_MetaData), NewProp_Clothing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacterVisual_HandleEquipClothing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_HandleEquipClothing_Statics::NewProp_Clothing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_HandleEquipClothing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_HandleEquipClothing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "HandleEquipClothing", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacterVisual_HandleEquipClothing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_HandleEquipClothing_Statics::PropPointers), sizeof(NarrativeCharacterVisual_eventHandleEquipClothing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_HandleEquipClothing_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_HandleEquipClothing_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCharacterVisual_eventHandleEquipClothing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_HandleEquipClothing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_HandleEquipClothing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execHandleEquipClothing)
{
	P_GET_OBJECT(UEquippableItem_Clothing,Z_Param_Clothing);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleEquipClothing_Implementation(Z_Param_Clothing);
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function HandleEquipClothing

// Begin Class ANarrativeCharacterVisual Function HandleUnEquipClothing
struct NarrativeCharacterVisual_eventHandleUnEquipClothing_Parms
{
	UEquippableItem_Clothing* Clothing;
};
static const FName NAME_ANarrativeCharacterVisual_HandleUnEquipClothing = FName(TEXT("HandleUnEquipClothing"));
void ANarrativeCharacterVisual::HandleUnEquipClothing(UEquippableItem_Clothing* Clothing)
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacterVisual_HandleUnEquipClothing);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeCharacterVisual_eventHandleUnEquipClothing_Parms Parms;
		Parms.Clothing=Clothing;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleUnEquipClothing_Implementation(Clothing);
	}
}
struct Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnEquipClothing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Visual" },
		{ "Comment", "//Define what should happen to the character visual when a clothing item is UnEquipped \n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "Define what should happen to the character visual when a clothing item is UnEquipped" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Clothing_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Clothing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnEquipClothing_Statics::NewProp_Clothing = { "Clothing", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventHandleUnEquipClothing_Parms, Clothing), Z_Construct_UClass_UEquippableItem_Clothing_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Clothing_MetaData), NewProp_Clothing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnEquipClothing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnEquipClothing_Statics::NewProp_Clothing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnEquipClothing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnEquipClothing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "HandleUnEquipClothing", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnEquipClothing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnEquipClothing_Statics::PropPointers), sizeof(NarrativeCharacterVisual_eventHandleUnEquipClothing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnEquipClothing_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnEquipClothing_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCharacterVisual_eventHandleUnEquipClothing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnEquipClothing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnEquipClothing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execHandleUnEquipClothing)
{
	P_GET_OBJECT(UEquippableItem_Clothing,Z_Param_Clothing);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleUnEquipClothing_Implementation(Z_Param_Clothing);
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function HandleUnEquipClothing

// Begin Class ANarrativeCharacterVisual Function HandleUnWieldWeapon
struct NarrativeCharacterVisual_eventHandleUnWieldWeapon_Parms
{
	UWeaponItem* Weapon;
};
static const FName NAME_ANarrativeCharacterVisual_HandleUnWieldWeapon = FName(TEXT("HandleUnWieldWeapon"));
void ANarrativeCharacterVisual::HandleUnWieldWeapon(UWeaponItem* Weapon)
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacterVisual_HandleUnWieldWeapon);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeCharacterVisual_eventHandleUnWieldWeapon_Parms Parms;
		Parms.Weapon=Weapon;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleUnWieldWeapon_Implementation(Weapon);
	}
}
struct Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnWieldWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Visual" },
		{ "Comment", "//Define what should happen to the character visual when a weapon is equipped. \n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "Define what should happen to the character visual when a weapon is equipped." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnWieldWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventHandleUnWieldWeapon_Parms, Weapon), Z_Construct_UClass_UWeaponItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnWieldWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnWieldWeapon_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnWieldWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnWieldWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "HandleUnWieldWeapon", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnWieldWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnWieldWeapon_Statics::PropPointers), sizeof(NarrativeCharacterVisual_eventHandleUnWieldWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnWieldWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnWieldWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCharacterVisual_eventHandleUnWieldWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnWieldWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnWieldWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execHandleUnWieldWeapon)
{
	P_GET_OBJECT(UWeaponItem,Z_Param_Weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleUnWieldWeapon_Implementation(Z_Param_Weapon);
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function HandleUnWieldWeapon

// Begin Class ANarrativeCharacterVisual Function HandleWieldWeapon
struct NarrativeCharacterVisual_eventHandleWieldWeapon_Parms
{
	UWeaponItem* Weapon;
};
static const FName NAME_ANarrativeCharacterVisual_HandleWieldWeapon = FName(TEXT("HandleWieldWeapon"));
void ANarrativeCharacterVisual::HandleWieldWeapon(UWeaponItem* Weapon)
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacterVisual_HandleWieldWeapon);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeCharacterVisual_eventHandleWieldWeapon_Parms Parms;
		Parms.Weapon=Weapon;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleWieldWeapon_Implementation(Weapon);
	}
}
struct Z_Construct_UFunction_ANarrativeCharacterVisual_HandleWieldWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Visual" },
		{ "Comment", "//Define what should happen to the character visual when a weapon is equipped. \n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "Define what should happen to the character visual when a weapon is equipped." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_HandleWieldWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventHandleWieldWeapon_Parms, Weapon), Z_Construct_UClass_UWeaponItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacterVisual_HandleWieldWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_HandleWieldWeapon_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_HandleWieldWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_HandleWieldWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "HandleWieldWeapon", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacterVisual_HandleWieldWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_HandleWieldWeapon_Statics::PropPointers), sizeof(NarrativeCharacterVisual_eventHandleWieldWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_HandleWieldWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_HandleWieldWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCharacterVisual_eventHandleWieldWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_HandleWieldWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_HandleWieldWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execHandleWieldWeapon)
{
	P_GET_OBJECT(UWeaponItem,Z_Param_Weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleWieldWeapon_Implementation(Z_Param_Weapon);
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function HandleWieldWeapon

// Begin Class ANarrativeCharacterVisual Function HasLoadHandles
struct Z_Construct_UFunction_ANarrativeCharacterVisual_HasLoadHandles_Statics
{
	struct NarrativeCharacterVisual_eventHasLoadHandles_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "Comment", "//Check whether the visual has any assets its trying to load right now to apply  for\n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "Check whether the visual has any assets its trying to load right now to apply  for" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANarrativeCharacterVisual_HasLoadHandles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeCharacterVisual_eventHasLoadHandles_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_HasLoadHandles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacterVisual_eventHasLoadHandles_Parms), &Z_Construct_UFunction_ANarrativeCharacterVisual_HasLoadHandles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacterVisual_HasLoadHandles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_HasLoadHandles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_HasLoadHandles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_HasLoadHandles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "HasLoadHandles", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacterVisual_HasLoadHandles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_HasLoadHandles_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_HasLoadHandles_Statics::NarrativeCharacterVisual_eventHasLoadHandles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_HasLoadHandles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_HasLoadHandles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_HasLoadHandles_Statics::NarrativeCharacterVisual_eventHasLoadHandles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_HasLoadHandles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_HasLoadHandles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execHasLoadHandles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasLoadHandles();
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function HasLoadHandles

// Begin Class ANarrativeCharacterVisual Function InitializeFromCharacter
struct NarrativeCharacterVisual_eventInitializeFromCharacter_Parms
{
	ANarrativeCharacter* NarrativeCharacter;
	FCharacterCreatorAttributeSet Attributes;
};
static const FName NAME_ANarrativeCharacterVisual_InitializeFromCharacter = FName(TEXT("InitializeFromCharacter"));
void ANarrativeCharacterVisual::InitializeFromCharacter(ANarrativeCharacter* NarrativeCharacter, FCharacterCreatorAttributeSet const& Attributes)
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacterVisual_InitializeFromCharacter);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeCharacterVisual_eventInitializeFromCharacter_Parms Parms;
		Parms.NarrativeCharacter=NarrativeCharacter;
		Parms.Attributes=Attributes;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		InitializeFromCharacter_Implementation(NarrativeCharacter, Attributes);
	}
}
struct Z_Construct_UFunction_ANarrativeCharacterVisual_InitializeFromCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Visual" },
		{ "Comment", "//Handle wielding a weapon\n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "Handle wielding a weapon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NarrativeCharacter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_InitializeFromCharacter_Statics::NewProp_NarrativeCharacter = { "NarrativeCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventInitializeFromCharacter_Parms, NarrativeCharacter), Z_Construct_UClass_ANarrativeCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_InitializeFromCharacter_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventInitializeFromCharacter_Parms, Attributes), Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 1593732500
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacterVisual_InitializeFromCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_InitializeFromCharacter_Statics::NewProp_NarrativeCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_InitializeFromCharacter_Statics::NewProp_Attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_InitializeFromCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_InitializeFromCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "InitializeFromCharacter", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacterVisual_InitializeFromCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_InitializeFromCharacter_Statics::PropPointers), sizeof(NarrativeCharacterVisual_eventInitializeFromCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_InitializeFromCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_InitializeFromCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCharacterVisual_eventInitializeFromCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_InitializeFromCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_InitializeFromCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execInitializeFromCharacter)
{
	P_GET_OBJECT(ANarrativeCharacter,Z_Param_NarrativeCharacter);
	P_GET_STRUCT_REF(FCharacterCreatorAttributeSet,Z_Param_Out_Attributes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeFromCharacter_Implementation(Z_Param_NarrativeCharacter,Z_Param_Out_Attributes);
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function InitializeFromCharacter

// Begin Class ANarrativeCharacterVisual Function OnBaseMeshesReady
struct Z_Construct_UFunction_ANarrativeCharacterVisual_OnBaseMeshesReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_OnBaseMeshesReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "OnBaseMeshesReady", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_OnBaseMeshesReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_OnBaseMeshesReady_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_OnBaseMeshesReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_OnBaseMeshesReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execOnBaseMeshesReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBaseMeshesReady();
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function OnBaseMeshesReady

// Begin Class ANarrativeCharacterVisual Function OnGroomAppearanceReady
struct Z_Construct_UFunction_ANarrativeCharacterVisual_OnGroomAppearanceReady_Statics
{
	struct NarrativeCharacterVisual_eventOnGroomAppearanceReady_Parms
	{
		FGameplayTag Slot;
		FCharacterCreatorAttribute_Groom GroomData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroomData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_OnGroomAppearanceReady_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventOnGroomAppearanceReady_Parms, Slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_OnGroomAppearanceReady_Statics::NewProp_GroomData = { "GroomData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventOnGroomAppearanceReady_Parms, GroomData), Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Groom, METADATA_PARAMS(0, nullptr) }; // 2759858689
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacterVisual_OnGroomAppearanceReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_OnGroomAppearanceReady_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_OnGroomAppearanceReady_Statics::NewProp_GroomData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_OnGroomAppearanceReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_OnGroomAppearanceReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "OnGroomAppearanceReady", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacterVisual_OnGroomAppearanceReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_OnGroomAppearanceReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_OnGroomAppearanceReady_Statics::NarrativeCharacterVisual_eventOnGroomAppearanceReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_OnGroomAppearanceReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_OnGroomAppearanceReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_OnGroomAppearanceReady_Statics::NarrativeCharacterVisual_eventOnGroomAppearanceReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_OnGroomAppearanceReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_OnGroomAppearanceReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execOnGroomAppearanceReady)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Slot);
	P_GET_STRUCT(FCharacterCreatorAttribute_Groom,Z_Param_GroomData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGroomAppearanceReady(Z_Param_Slot,Z_Param_GroomData);
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function OnGroomAppearanceReady

// Begin Class ANarrativeCharacterVisual Function OnMeshAppearanceReady
struct Z_Construct_UFunction_ANarrativeCharacterVisual_OnMeshAppearanceReady_Statics
{
	struct NarrativeCharacterVisual_eventOnMeshAppearanceReady_Parms
	{
		FGameplayTag Slot;
		FCharacterCreatorAttribute_Mesh MeshData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//UFUNCTION()\n//virtual void OnDeferredWeaponsReady();\n" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "UFUNCTION()\nvirtual void OnDeferredWeaponsReady();" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_OnMeshAppearanceReady_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventOnMeshAppearanceReady_Parms, Slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_OnMeshAppearanceReady_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventOnMeshAppearanceReady_Parms, MeshData), Z_Construct_UScriptStruct_FCharacterCreatorAttribute_Mesh, METADATA_PARAMS(0, nullptr) }; // 2379112949
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacterVisual_OnMeshAppearanceReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_OnMeshAppearanceReady_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_OnMeshAppearanceReady_Statics::NewProp_MeshData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_OnMeshAppearanceReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_OnMeshAppearanceReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "OnMeshAppearanceReady", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacterVisual_OnMeshAppearanceReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_OnMeshAppearanceReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_OnMeshAppearanceReady_Statics::NarrativeCharacterVisual_eventOnMeshAppearanceReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_OnMeshAppearanceReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_OnMeshAppearanceReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_OnMeshAppearanceReady_Statics::NarrativeCharacterVisual_eventOnMeshAppearanceReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_OnMeshAppearanceReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_OnMeshAppearanceReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execOnMeshAppearanceReady)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Slot);
	P_GET_STRUCT(FCharacterCreatorAttribute_Mesh,Z_Param_MeshData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMeshAppearanceReady(Z_Param_Slot,Z_Param_MeshData);
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function OnMeshAppearanceReady

// Begin Class ANarrativeCharacterVisual Function OnWeaponVisualClassReady
struct Z_Construct_UFunction_ANarrativeCharacterVisual_OnWeaponVisualClassReady_Statics
{
	struct NarrativeCharacterVisual_eventOnWeaponVisualClassReady_Parms
	{
		UWeaponItem* WeaponItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponItem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_OnWeaponVisualClassReady_Statics::NewProp_WeaponItem = { "WeaponItem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventOnWeaponVisualClassReady_Parms, WeaponItem), Z_Construct_UClass_UWeaponItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponItem_MetaData), NewProp_WeaponItem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacterVisual_OnWeaponVisualClassReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_OnWeaponVisualClassReady_Statics::NewProp_WeaponItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_OnWeaponVisualClassReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_OnWeaponVisualClassReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "OnWeaponVisualClassReady", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacterVisual_OnWeaponVisualClassReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_OnWeaponVisualClassReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_OnWeaponVisualClassReady_Statics::NarrativeCharacterVisual_eventOnWeaponVisualClassReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_OnWeaponVisualClassReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_OnWeaponVisualClassReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_OnWeaponVisualClassReady_Statics::NarrativeCharacterVisual_eventOnWeaponVisualClassReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_OnWeaponVisualClassReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_OnWeaponVisualClassReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execOnWeaponVisualClassReady)
{
	P_GET_OBJECT(UWeaponItem,Z_Param_WeaponItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponVisualClassReady(Z_Param_WeaponItem);
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function OnWeaponVisualClassReady

// Begin Class ANarrativeCharacterVisual Function RemoveWeaponVisual
struct Z_Construct_UFunction_ANarrativeCharacterVisual_RemoveWeaponVisual_Statics
{
	struct NarrativeCharacterVisual_eventRemoveWeaponVisual_Parms
	{
		FGameplayTag WeaponSlot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Visual" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSlot_MetaData[] = {
		{ "Categories", "Narrative.Equipment.Slot.Weapon" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_RemoveWeaponVisual_Statics::NewProp_WeaponSlot = { "WeaponSlot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventRemoveWeaponVisual_Parms, WeaponSlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSlot_MetaData), NewProp_WeaponSlot_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacterVisual_RemoveWeaponVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_RemoveWeaponVisual_Statics::NewProp_WeaponSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_RemoveWeaponVisual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_RemoveWeaponVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "RemoveWeaponVisual", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacterVisual_RemoveWeaponVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_RemoveWeaponVisual_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_RemoveWeaponVisual_Statics::NarrativeCharacterVisual_eventRemoveWeaponVisual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_RemoveWeaponVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_RemoveWeaponVisual_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_RemoveWeaponVisual_Statics::NarrativeCharacterVisual_eventRemoveWeaponVisual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_RemoveWeaponVisual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_RemoveWeaponVisual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execRemoveWeaponVisual)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_WeaponSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveWeaponVisual(Z_Param_Out_WeaponSlot);
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function RemoveWeaponVisual

// Begin Class ANarrativeCharacterVisual Function SetAnimBPOverride
struct Z_Construct_UFunction_ANarrativeCharacterVisual_SetAnimBPOverride_Statics
{
	struct NarrativeCharacterVisual_eventSetAnimBPOverride_Parms
	{
		TSubclassOf<UAnimInstance> NewAnimBP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacterVisual" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewAnimBP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ANarrativeCharacterVisual_SetAnimBPOverride_Statics::NewProp_NewAnimBP = { "NewAnimBP", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterVisual_eventSetAnimBPOverride_Parms, NewAnimBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacterVisual_SetAnimBPOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacterVisual_SetAnimBPOverride_Statics::NewProp_NewAnimBP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_SetAnimBPOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacterVisual_SetAnimBPOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacterVisual, nullptr, "SetAnimBPOverride", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacterVisual_SetAnimBPOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_SetAnimBPOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_SetAnimBPOverride_Statics::NarrativeCharacterVisual_eventSetAnimBPOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacterVisual_SetAnimBPOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacterVisual_SetAnimBPOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacterVisual_SetAnimBPOverride_Statics::NarrativeCharacterVisual_eventSetAnimBPOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacterVisual_SetAnimBPOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacterVisual_SetAnimBPOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacterVisual::execSetAnimBPOverride)
{
	P_GET_OBJECT(UClass,Z_Param_NewAnimBP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnimBPOverride(Z_Param_NewAnimBP);
	P_NATIVE_END;
}
// End Class ANarrativeCharacterVisual Function SetAnimBPOverride

// Begin Class ANarrativeCharacterVisual
void ANarrativeCharacterVisual::StaticRegisterNativesANarrativeCharacterVisual()
{
	UClass* Class = ANarrativeCharacterVisual::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddWeaponVisual", &ANarrativeCharacterVisual::execAddWeaponVisual },
		{ "AttachWeaponVisual", &ANarrativeCharacterVisual::execAttachWeaponVisual },
		{ "BaseAppearanceApplied", &ANarrativeCharacterVisual::execBaseAppearanceApplied },
		{ "ClearAnimBPOverride", &ANarrativeCharacterVisual::execClearAnimBPOverride },
		{ "GetBodyMesh", &ANarrativeCharacterVisual::execGetBodyMesh },
		{ "GetFaceMesh", &ANarrativeCharacterVisual::execGetFaceMesh },
		{ "GetHeadMeshes", &ANarrativeCharacterVisual::execGetHeadMeshes },
		{ "GetLeaderMesh", &ANarrativeCharacterVisual::execGetLeaderMesh },
		{ "GetMainMesh", &ANarrativeCharacterVisual::execGetMainMesh },
		{ "GetMeshComponent", &ANarrativeCharacterVisual::execGetMeshComponent },
		{ "GetWeaponVisual", &ANarrativeCharacterVisual::execGetWeaponVisual },
		{ "HandleEquipClothing", &ANarrativeCharacterVisual::execHandleEquipClothing },
		{ "HandleUnEquipClothing", &ANarrativeCharacterVisual::execHandleUnEquipClothing },
		{ "HandleUnWieldWeapon", &ANarrativeCharacterVisual::execHandleUnWieldWeapon },
		{ "HandleWieldWeapon", &ANarrativeCharacterVisual::execHandleWieldWeapon },
		{ "HasLoadHandles", &ANarrativeCharacterVisual::execHasLoadHandles },
		{ "InitializeFromCharacter", &ANarrativeCharacterVisual::execInitializeFromCharacter },
		{ "OnBaseMeshesReady", &ANarrativeCharacterVisual::execOnBaseMeshesReady },
		{ "OnGroomAppearanceReady", &ANarrativeCharacterVisual::execOnGroomAppearanceReady },
		{ "OnMeshAppearanceReady", &ANarrativeCharacterVisual::execOnMeshAppearanceReady },
		{ "OnWeaponVisualClassReady", &ANarrativeCharacterVisual::execOnWeaponVisualClassReady },
		{ "RemoveWeaponVisual", &ANarrativeCharacterVisual::execRemoveWeaponVisual },
		{ "SetAnimBPOverride", &ANarrativeCharacterVisual::execSetAnimBPOverride },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANarrativeCharacterVisual);
UClass* Z_Construct_UClass_ANarrativeCharacterVisual_NoRegister()
{
	return ANarrativeCharacterVisual::StaticClass();
}
struct Z_Construct_UClass_ANarrativeCharacterVisual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**Seperates the appearance behavior out from NarrativeCharacter. Also handles asyncronously loading the assets before they are applied to the character. */" },
		{ "IncludePath", "Character/NarrativeCharacterVisual.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "Seperates the appearance behavior out from NarrativeCharacter. Also handles asyncronously loading the assets before they are applied to the character." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterVisualRoot_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppearanceAttributeSet_MetaData[] = {
		{ "Comment", "/**Our default appearance attribute set*/" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "Our default appearance attribute set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "Comment", "/**Points to Character*/" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "Points to Character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeferredMeshes_MetaData[] = {
		{ "Category", "Character Visual" },
		{ "Comment", "//We need to defer applying any meshes or weapons until our base appearance is loaded so base appearance doesn't override them - those go in here \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "We need to defer applying any meshes or weapons until our base appearance is loaded so base appearance doesn't override them - those go in here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeferredWeapons_MetaData[] = {
		{ "Category", "Character Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponents_MetaData[] = {
		{ "Category", "Character Visual" },
		{ "Comment", "/**The skeletal meshes added to the visual */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "The skeletal meshes added to the visual" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroomComponents_MetaData[] = {
		{ "Category", "Character Visual" },
		{ "Comment", "/**The grooms added to this visual. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "The grooms added to this visual." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedWeaponVisuals_MetaData[] = {
		{ "Category", "Character Visual" },
		{ "Comment", "/**Spawned weapon visuals, can be accessed via map */" },
		{ "ModuleRelativePath", "Public/Character/NarrativeCharacterVisual.h" },
		{ "ToolTip", "Spawned weapon visuals, can be accessed via map" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterVisualRoot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppearanceAttributeSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeferredMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeferredMeshes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeferredWeapons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeferredWeapons;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponents_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshComponents_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MeshComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroomComponents_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroomComponents_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GroomComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedWeaponVisuals_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnedWeaponVisuals_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SpawnedWeaponVisuals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_AddWeaponVisual, "AddWeaponVisual" }, // 4039926570
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_AttachWeaponVisual, "AttachWeaponVisual" }, // 3633877143
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_BaseAppearanceApplied, "BaseAppearanceApplied" }, // 585529323
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_ClearAnimBPOverride, "ClearAnimBPOverride" }, // 313906453
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_GetBodyMesh, "GetBodyMesh" }, // 3030311958
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_GetFaceMesh, "GetFaceMesh" }, // 1619334993
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_GetHeadMeshes, "GetHeadMeshes" }, // 3113709096
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_GetLeaderMesh, "GetLeaderMesh" }, // 2654700753
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_GetMainMesh, "GetMainMesh" }, // 3892683177
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_GetMeshComponent, "GetMeshComponent" }, // 984080787
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_GetWeaponVisual, "GetWeaponVisual" }, // 2836156681
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_HandleEquipClothing, "HandleEquipClothing" }, // 2672718043
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnEquipClothing, "HandleUnEquipClothing" }, // 2358940231
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_HandleUnWieldWeapon, "HandleUnWieldWeapon" }, // 3002810339
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_HandleWieldWeapon, "HandleWieldWeapon" }, // 1784713763
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_HasLoadHandles, "HasLoadHandles" }, // 3610993646
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_InitializeFromCharacter, "InitializeFromCharacter" }, // 1114917367
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_OnBaseMeshesReady, "OnBaseMeshesReady" }, // 3204906653
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_OnGroomAppearanceReady, "OnGroomAppearanceReady" }, // 3720875267
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_OnMeshAppearanceReady, "OnMeshAppearanceReady" }, // 2997878724
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_OnWeaponVisualClassReady, "OnWeaponVisualClassReady" }, // 594681644
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_RemoveWeaponVisual, "RemoveWeaponVisual" }, // 1072626378
		{ &Z_Construct_UFunction_ANarrativeCharacterVisual_SetAnimBPOverride, "SetAnimBPOverride" }, // 460921379
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANarrativeCharacterVisual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_CharacterVisualRoot = { "CharacterVisualRoot", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacterVisual, CharacterVisualRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterVisualRoot_MetaData), NewProp_CharacterVisualRoot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_AppearanceAttributeSet = { "AppearanceAttributeSet", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacterVisual, AppearanceAttributeSet), Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppearanceAttributeSet_MetaData), NewProp_AppearanceAttributeSet_MetaData) }; // 1593732500
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacterVisual, OwnerCharacter), Z_Construct_UClass_ANarrativeCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_DeferredMeshes_Inner = { "DeferredMeshes", nullptr, (EPropertyFlags)0x01040000000a0008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEquippableItem_Clothing_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_DeferredMeshes = { "DeferredMeshes", nullptr, (EPropertyFlags)0x0124088000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacterVisual, DeferredMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeferredMeshes_MetaData), NewProp_DeferredMeshes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_DeferredWeapons_Inner = { "DeferredWeapons", nullptr, (EPropertyFlags)0x01040000000a0008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWeaponItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_DeferredWeapons = { "DeferredWeapons", nullptr, (EPropertyFlags)0x0124088000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacterVisual, DeferredWeapons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeferredWeapons_MetaData), NewProp_DeferredWeapons_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_MeshComponents_ValueProp = { "MeshComponents", nullptr, (EPropertyFlags)0x0000000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_MeshComponents_Key_KeyProp = { "MeshComponents_Key", nullptr, (EPropertyFlags)0x0000000000080009, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_MeshComponents = { "MeshComponents", nullptr, (EPropertyFlags)0x002008800001000d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacterVisual, MeshComponents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponents_MetaData), NewProp_MeshComponents_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_GroomComponents_ValueProp = { "GroomComponents", nullptr, (EPropertyFlags)0x0000000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_GroomComponents_Key_KeyProp = { "GroomComponents_Key", nullptr, (EPropertyFlags)0x0000000000080009, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_GroomComponents = { "GroomComponents", nullptr, (EPropertyFlags)0x002008800001000d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacterVisual, GroomComponents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroomComponents_MetaData), NewProp_GroomComponents_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_SpawnedWeaponVisuals_ValueProp = { "SpawnedWeaponVisuals", nullptr, (EPropertyFlags)0x0104000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AWeaponVisual_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_SpawnedWeaponVisuals_Key_KeyProp = { "SpawnedWeaponVisuals_Key", nullptr, (EPropertyFlags)0x0100000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_SpawnedWeaponVisuals = { "SpawnedWeaponVisuals", nullptr, (EPropertyFlags)0x0124080000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacterVisual, SpawnedWeaponVisuals), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedWeaponVisuals_MetaData), NewProp_SpawnedWeaponVisuals_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANarrativeCharacterVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_CharacterVisualRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_AppearanceAttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_DeferredMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_DeferredMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_DeferredWeapons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_DeferredWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_MeshComponents_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_MeshComponents_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_MeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_GroomComponents_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_GroomComponents_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_GroomComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_SpawnedWeaponVisuals_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_SpawnedWeaponVisuals_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacterVisual_Statics::NewProp_SpawnedWeaponVisuals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeCharacterVisual_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANarrativeCharacterVisual_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeCharacterVisual_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANarrativeCharacterVisual_Statics::ClassParams = {
	&ANarrativeCharacterVisual::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANarrativeCharacterVisual_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeCharacterVisual_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeCharacterVisual_Statics::Class_MetaDataParams), Z_Construct_UClass_ANarrativeCharacterVisual_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANarrativeCharacterVisual()
{
	if (!Z_Registration_Info_UClass_ANarrativeCharacterVisual.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANarrativeCharacterVisual.OuterSingleton, Z_Construct_UClass_ANarrativeCharacterVisual_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANarrativeCharacterVisual.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ANarrativeCharacterVisual>()
{
	return ANarrativeCharacterVisual::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANarrativeCharacterVisual);
ANarrativeCharacterVisual::~ANarrativeCharacterVisual() {}
// End Class ANarrativeCharacterVisual

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterVisual_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANarrativeCharacterVisual, ANarrativeCharacterVisual::StaticClass, TEXT("ANarrativeCharacterVisual"), &Z_Registration_Info_UClass_ANarrativeCharacterVisual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANarrativeCharacterVisual), 414372190U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterVisual_h_3036684702(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterVisual_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterVisual_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
