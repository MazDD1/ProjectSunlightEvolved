// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Weapons/WeaponVisual.h"
#include "NarrativeArsenal/Public/Items/WeaponItem.h"
#include "NarrativeArsenal/Public/Weapons/WeaponAnimPose.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponVisual() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEventReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_AWeaponVisual();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_AWeaponVisual_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UWeaponAttachmentItem_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UWeaponItem_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponAttachmentSlotConfig();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponCollisionData();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class AWeaponVisual Function CacheAnimationTransform
struct Z_Construct_UFunction_AWeaponVisual_CacheAnimationTransform_Statics
{
	struct WeaponVisual_eventCacheAnimationTransform_Parms
	{
		FAnimNotifyEventReference AnimNotifyEventRef;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SocketName" },
		{ "Category", "Weapon Visual | Attack Caching" },
		{ "Comment", "// Caches animation socket data for retrieval at a later time. \n" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponVisual.h" },
		{ "ToolTip", "Caches animation socket data for retrieval at a later time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimNotifyEventRef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimNotifyEventRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponVisual_CacheAnimationTransform_Statics::NewProp_AnimNotifyEventRef = { "AnimNotifyEventRef", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponVisual_eventCacheAnimationTransform_Parms, AnimNotifyEventRef), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimNotifyEventRef_MetaData), NewProp_AnimNotifyEventRef_MetaData) }; // 3961895738
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponVisual_CacheAnimationTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponVisual_CacheAnimationTransform_Statics::NewProp_AnimNotifyEventRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_CacheAnimationTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponVisual_CacheAnimationTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponVisual, nullptr, "CacheAnimationTransform", nullptr, nullptr, Z_Construct_UFunction_AWeaponVisual_CacheAnimationTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_CacheAnimationTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponVisual_CacheAnimationTransform_Statics::WeaponVisual_eventCacheAnimationTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_CacheAnimationTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponVisual_CacheAnimationTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWeaponVisual_CacheAnimationTransform_Statics::WeaponVisual_eventCacheAnimationTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponVisual_CacheAnimationTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponVisual_CacheAnimationTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponVisual::execCacheAnimationTransform)
{
	P_GET_STRUCT_REF(FAnimNotifyEventReference,Z_Param_Out_AnimNotifyEventRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CacheAnimationTransform(Z_Param_Out_AnimNotifyEventRef);
	P_NATIVE_END;
}
// End Class AWeaponVisual Function CacheAnimationTransform

// Begin Class AWeaponVisual Function CacheCollisionData
struct Z_Construct_UFunction_AWeaponVisual_CacheCollisionData_Statics
{
	struct WeaponVisual_eventCacheCollisionData_Parms
	{
		bool bForceUpdate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Visual | Attack Caching" },
		{ "Comment", "/**\n\x09 * Caches collision data so that we can query collision while performing attacks.\n\x09 * @param bForceUpdate Whether we want to forcefully generate collision data even if it was already done\n\x09 */" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponVisual.h" },
		{ "ToolTip", "Caches collision data so that we can query collision while performing attacks.\n@param bForceUpdate Whether we want to forcefully generate collision data even if it was already done" },
	};
#endif // WITH_METADATA
	static void NewProp_bForceUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AWeaponVisual_CacheCollisionData_Statics::NewProp_bForceUpdate_SetBit(void* Obj)
{
	((WeaponVisual_eventCacheCollisionData_Parms*)Obj)->bForceUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponVisual_CacheCollisionData_Statics::NewProp_bForceUpdate = { "bForceUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponVisual_eventCacheCollisionData_Parms), &Z_Construct_UFunction_AWeaponVisual_CacheCollisionData_Statics::NewProp_bForceUpdate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponVisual_CacheCollisionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponVisual_CacheCollisionData_Statics::NewProp_bForceUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_CacheCollisionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponVisual_CacheCollisionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponVisual, nullptr, "CacheCollisionData", nullptr, nullptr, Z_Construct_UFunction_AWeaponVisual_CacheCollisionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_CacheCollisionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponVisual_CacheCollisionData_Statics::WeaponVisual_eventCacheCollisionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_CacheCollisionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponVisual_CacheCollisionData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWeaponVisual_CacheCollisionData_Statics::WeaponVisual_eventCacheCollisionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponVisual_CacheCollisionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponVisual_CacheCollisionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponVisual::execCacheCollisionData)
{
	P_GET_UBOOL(Z_Param_bForceUpdate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CacheCollisionData(Z_Param_bForceUpdate);
	P_NATIVE_END;
}
// End Class AWeaponVisual Function CacheCollisionData

// Begin Class AWeaponVisual Function CleanupAttackData
struct Z_Construct_UFunction_AWeaponVisual_CleanupAttackData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Visual | Attack Caching" },
		{ "Comment", "// Cleans up attack data so that it is ready to be used again\n" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponVisual.h" },
		{ "ToolTip", "Cleans up attack data so that it is ready to be used again" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponVisual_CleanupAttackData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponVisual, nullptr, "CleanupAttackData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_CleanupAttackData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponVisual_CleanupAttackData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponVisual_CleanupAttackData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponVisual_CleanupAttackData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponVisual::execCleanupAttackData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CleanupAttackData();
	P_NATIVE_END;
}
// End Class AWeaponVisual Function CleanupAttackData

// Begin Class AWeaponVisual Function GetCollidingPrimitives
struct WeaponVisual_eventGetCollidingPrimitives_Parms
{
	TArray<UPrimitiveComponent*> ReturnValue;
};
static const FName NAME_AWeaponVisual_GetCollidingPrimitives = FName(TEXT("GetCollidingPrimitives"));
TArray<UPrimitiveComponent*> AWeaponVisual::GetCollidingPrimitives()
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponVisual_GetCollidingPrimitives);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		WeaponVisual_eventGetCollidingPrimitives_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetCollidingPrimitives_Implementation();
	}
}
struct Z_Construct_UFunction_AWeaponVisual_GetCollidingPrimitives_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Visual | Attack Caching" },
		{ "Comment", "// Fetches all primitives that will be considered for collision during sweep melee attacks\n" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponVisual.h" },
		{ "ToolTip", "Fetches all primitives that will be considered for collision during sweep melee attacks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponVisual_GetCollidingPrimitives_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWeaponVisual_GetCollidingPrimitives_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponVisual_eventGetCollidingPrimitives_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponVisual_GetCollidingPrimitives_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponVisual_GetCollidingPrimitives_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponVisual_GetCollidingPrimitives_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_GetCollidingPrimitives_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponVisual_GetCollidingPrimitives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponVisual, nullptr, "GetCollidingPrimitives", nullptr, nullptr, Z_Construct_UFunction_AWeaponVisual_GetCollidingPrimitives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_GetCollidingPrimitives_Statics::PropPointers), sizeof(WeaponVisual_eventGetCollidingPrimitives_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_GetCollidingPrimitives_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponVisual_GetCollidingPrimitives_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponVisual_eventGetCollidingPrimitives_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponVisual_GetCollidingPrimitives()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponVisual_GetCollidingPrimitives_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponVisual::execGetCollidingPrimitives)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UPrimitiveComponent*>*)Z_Param__Result=P_THIS->GetCollidingPrimitives_Implementation();
	P_NATIVE_END;
}
// End Class AWeaponVisual Function GetCollidingPrimitives

// Begin Class AWeaponVisual Function HandleAddAttachment
struct WeaponVisual_eventHandleAddAttachment_Parms
{
	UWeaponAttachmentItem* Attachment;
	FWeaponAttachmentSlotConfig WeaponSlotConfig;
};
static const FName NAME_AWeaponVisual_HandleAddAttachment = FName(TEXT("HandleAddAttachment"));
void AWeaponVisual::HandleAddAttachment(UWeaponAttachmentItem* Attachment, FWeaponAttachmentSlotConfig const& WeaponSlotConfig)
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponVisual_HandleAddAttachment);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		WeaponVisual_eventHandleAddAttachment_Parms Parms;
		Parms.Attachment=Attachment;
		Parms.WeaponSlotConfig=WeaponSlotConfig;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleAddAttachment_Implementation(Attachment, WeaponSlotConfig);
	}
}
struct Z_Construct_UFunction_AWeaponVisual_HandleAddAttachment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attachments" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attachment_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSlotConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attachment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponSlotConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponVisual_HandleAddAttachment_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponVisual_eventHandleAddAttachment_Parms, Attachment), Z_Construct_UClass_UWeaponAttachmentItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attachment_MetaData), NewProp_Attachment_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponVisual_HandleAddAttachment_Statics::NewProp_WeaponSlotConfig = { "WeaponSlotConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponVisual_eventHandleAddAttachment_Parms, WeaponSlotConfig), Z_Construct_UScriptStruct_FWeaponAttachmentSlotConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSlotConfig_MetaData), NewProp_WeaponSlotConfig_MetaData) }; // 2429602380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponVisual_HandleAddAttachment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponVisual_HandleAddAttachment_Statics::NewProp_Attachment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponVisual_HandleAddAttachment_Statics::NewProp_WeaponSlotConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_HandleAddAttachment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponVisual_HandleAddAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponVisual, nullptr, "HandleAddAttachment", nullptr, nullptr, Z_Construct_UFunction_AWeaponVisual_HandleAddAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_HandleAddAttachment_Statics::PropPointers), sizeof(WeaponVisual_eventHandleAddAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_HandleAddAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponVisual_HandleAddAttachment_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponVisual_eventHandleAddAttachment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponVisual_HandleAddAttachment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponVisual_HandleAddAttachment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponVisual::execHandleAddAttachment)
{
	P_GET_OBJECT(UWeaponAttachmentItem,Z_Param_Attachment);
	P_GET_STRUCT_REF(FWeaponAttachmentSlotConfig,Z_Param_Out_WeaponSlotConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAddAttachment_Implementation(Z_Param_Attachment,Z_Param_Out_WeaponSlotConfig);
	P_NATIVE_END;
}
// End Class AWeaponVisual Function HandleAddAttachment

// Begin Class AWeaponVisual Function HandleRemoveAttachment
struct WeaponVisual_eventHandleRemoveAttachment_Parms
{
	UWeaponAttachmentItem* Attachment;
};
static const FName NAME_AWeaponVisual_HandleRemoveAttachment = FName(TEXT("HandleRemoveAttachment"));
void AWeaponVisual::HandleRemoveAttachment(UWeaponAttachmentItem* Attachment)
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponVisual_HandleRemoveAttachment);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		WeaponVisual_eventHandleRemoveAttachment_Parms Parms;
		Parms.Attachment=Attachment;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleRemoveAttachment_Implementation(Attachment);
	}
}
struct Z_Construct_UFunction_AWeaponVisual_HandleRemoveAttachment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attachments" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attachment_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attachment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponVisual_HandleRemoveAttachment_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponVisual_eventHandleRemoveAttachment_Parms, Attachment), Z_Construct_UClass_UWeaponAttachmentItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attachment_MetaData), NewProp_Attachment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponVisual_HandleRemoveAttachment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponVisual_HandleRemoveAttachment_Statics::NewProp_Attachment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_HandleRemoveAttachment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponVisual_HandleRemoveAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponVisual, nullptr, "HandleRemoveAttachment", nullptr, nullptr, Z_Construct_UFunction_AWeaponVisual_HandleRemoveAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_HandleRemoveAttachment_Statics::PropPointers), sizeof(WeaponVisual_eventHandleRemoveAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_HandleRemoveAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponVisual_HandleRemoveAttachment_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponVisual_eventHandleRemoveAttachment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponVisual_HandleRemoveAttachment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponVisual_HandleRemoveAttachment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponVisual::execHandleRemoveAttachment)
{
	P_GET_OBJECT(UWeaponAttachmentItem,Z_Param_Attachment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleRemoveAttachment_Implementation(Z_Param_Attachment);
	P_NATIVE_END;
}
// End Class AWeaponVisual Function HandleRemoveAttachment

// Begin Class AWeaponVisual Function PerformCollisionCheck
struct Z_Construct_UFunction_AWeaponVisual_PerformCollisionCheck_Statics
{
	struct WeaponVisual_eventPerformCollisionCheck_Parms
	{
		TArray<FHitResult> OutHits;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Visual | Attack Caching" },
		{ "Comment", "// Performs a collision sweep on current and previous animation data that has not been calculated yet. This ensures that collision is accurate when at low framerate.\n" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponVisual.h" },
		{ "ToolTip", "Performs a collision sweep on current and previous animation data that has not been calculated yet. This ensures that collision is accurate when at low framerate." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponVisual_PerformCollisionCheck_Statics::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWeaponVisual_PerformCollisionCheck_Statics::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponVisual_eventPerformCollisionCheck_Parms, OutHits), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponVisual_PerformCollisionCheck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponVisual_PerformCollisionCheck_Statics::NewProp_OutHits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponVisual_PerformCollisionCheck_Statics::NewProp_OutHits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_PerformCollisionCheck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponVisual_PerformCollisionCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponVisual, nullptr, "PerformCollisionCheck", nullptr, nullptr, Z_Construct_UFunction_AWeaponVisual_PerformCollisionCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_PerformCollisionCheck_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponVisual_PerformCollisionCheck_Statics::WeaponVisual_eventPerformCollisionCheck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_PerformCollisionCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponVisual_PerformCollisionCheck_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWeaponVisual_PerformCollisionCheck_Statics::WeaponVisual_eventPerformCollisionCheck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponVisual_PerformCollisionCheck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponVisual_PerformCollisionCheck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponVisual::execPerformCollisionCheck)
{
	P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformCollisionCheck(Z_Param_Out_OutHits);
	P_NATIVE_END;
}
// End Class AWeaponVisual Function PerformCollisionCheck

// Begin Class AWeaponVisual Function RegisterDefaultAttachment
struct Z_Construct_UFunction_AWeaponVisual_RegisterDefaultAttachment_Statics
{
	struct WeaponVisual_eventRegisterDefaultAttachment_Parms
	{
		FGameplayTag Slot;
		UStaticMeshComponent* Mesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attachments" },
		{ "Comment", "//Register a default attachment on the weapon, like ironsights. \n" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponVisual.h" },
		{ "ToolTip", "Register a default attachment on the weapon, like ironsights." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponVisual_RegisterDefaultAttachment_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponVisual_eventRegisterDefaultAttachment_Parms, Slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponVisual_RegisterDefaultAttachment_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponVisual_eventRegisterDefaultAttachment_Parms, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponVisual_RegisterDefaultAttachment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponVisual_RegisterDefaultAttachment_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponVisual_RegisterDefaultAttachment_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_RegisterDefaultAttachment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponVisual_RegisterDefaultAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponVisual, nullptr, "RegisterDefaultAttachment", nullptr, nullptr, Z_Construct_UFunction_AWeaponVisual_RegisterDefaultAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_RegisterDefaultAttachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponVisual_RegisterDefaultAttachment_Statics::WeaponVisual_eventRegisterDefaultAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_RegisterDefaultAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponVisual_RegisterDefaultAttachment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWeaponVisual_RegisterDefaultAttachment_Statics::WeaponVisual_eventRegisterDefaultAttachment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponVisual_RegisterDefaultAttachment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponVisual_RegisterDefaultAttachment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponVisual::execRegisterDefaultAttachment)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Slot);
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_Mesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterDefaultAttachment(Z_Param_Out_Slot,Z_Param_Mesh);
	P_NATIVE_END;
}
// End Class AWeaponVisual Function RegisterDefaultAttachment

// Begin Class AWeaponVisual Function SweepForHits
struct Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics
{
	struct WeaponVisual_eventSweepForHits_Parms
	{
		FVector Start;
		FVector End;
		FQuat Rot;
		FVector CapsuleSize;
		TArray<AActor*> ActorsToIgnore;
		TArray<FHitResult> OutHits;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "Category", "Weapon Visual" },
		{ "Comment", "//Allows us to use the weapons geometry in some way to sweep for hits. \n" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponVisual.h" },
		{ "ToolTip", "Allows us to use the weapons geometry in some way to sweep for hits." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rot_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleSize_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHits;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponVisual_eventSweepForHits_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponVisual_eventSweepForHits_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::NewProp_Rot = { "Rot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponVisual_eventSweepForHits_Parms, Rot), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rot_MetaData), NewProp_Rot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::NewProp_CapsuleSize = { "CapsuleSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponVisual_eventSweepForHits_Parms, CapsuleSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleSize_MetaData), NewProp_CapsuleSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponVisual_eventSweepForHits_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponVisual_eventSweepForHits_Parms, OutHits), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponVisual_eventSweepForHits_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponVisual_eventSweepForHits_Parms), &Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::NewProp_Rot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::NewProp_CapsuleSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::NewProp_OutHits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::NewProp_OutHits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponVisual, nullptr, "SweepForHits", nullptr, nullptr, Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::WeaponVisual_eventSweepForHits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::WeaponVisual_eventSweepForHits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponVisual_SweepForHits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponVisual_SweepForHits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponVisual::execSweepForHits)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_Rot);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_CapsuleSize);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SweepForHits(Z_Param_Out_Start,Z_Param_Out_End,Z_Param_Out_Rot,Z_Param_Out_CapsuleSize,Z_Param_Out_ActorsToIgnore,Z_Param_Out_OutHits);
	P_NATIVE_END;
}
// End Class AWeaponVisual Function SweepForHits

// Begin Class AWeaponVisual
void AWeaponVisual::StaticRegisterNativesAWeaponVisual()
{
	UClass* Class = AWeaponVisual::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CacheAnimationTransform", &AWeaponVisual::execCacheAnimationTransform },
		{ "CacheCollisionData", &AWeaponVisual::execCacheCollisionData },
		{ "CleanupAttackData", &AWeaponVisual::execCleanupAttackData },
		{ "GetCollidingPrimitives", &AWeaponVisual::execGetCollidingPrimitives },
		{ "HandleAddAttachment", &AWeaponVisual::execHandleAddAttachment },
		{ "HandleRemoveAttachment", &AWeaponVisual::execHandleRemoveAttachment },
		{ "PerformCollisionCheck", &AWeaponVisual::execPerformCollisionCheck },
		{ "RegisterDefaultAttachment", &AWeaponVisual::execRegisterDefaultAttachment },
		{ "SweepForHits", &AWeaponVisual::execSweepForHits },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponVisual);
UClass* Z_Construct_UClass_AWeaponVisual_NoRegister()
{
	return AWeaponVisual::StaticClass();
}
struct Z_Construct_UClass_AWeaponVisual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/WeaponVisual.h" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentMeshComps_MetaData[] = {
		{ "Category", "Attachments" },
		{ "Comment", "// Cached attachments meshes for attachments that are added to the weapon - BPReadWrite so we can suport having \"Default\" attachments, like IronSights. \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponVisual.h" },
		{ "ToolTip", "Cached attachments meshes for attachments that are added to the weapon - BPReadWrite so we can suport having \"Default\" attachments, like IronSights." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentMeshDefaultMeshes_MetaData[] = {
		{ "Category", "Attachments" },
		{ "Comment", "// Attachment meshes will have their mesh set to this if no attachment is equipped in that slot\n" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponVisual.h" },
		{ "ToolTip", "Attachment meshes will have their mesh set to this if no attachment is equipped in that slot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNotifyEvent_MetaData[] = {
		{ "Comment", "// The latest notify event that will be used for collision checks\n" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponVisual.h" },
		{ "ToolTip", "The latest notify event that will be used for collision checks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOwner_MetaData[] = {
		{ "Category", "Weapon Visual" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponOwner_MetaData[] = {
		{ "Category", "Weapon Visual" },
		{ "Comment", "//The weapon item that created this weapon visual when it was equipped \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponVisual.h" },
		{ "ToolTip", "The weapon item that created this weapon visual when it was equipped" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentMeshComps_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachmentMeshComps_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AttachmentMeshComps;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentMeshDefaultMeshes_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachmentMeshDefaultMeshes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AttachmentMeshDefaultMeshes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentNotifyEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponVisual_CacheAnimationTransform, "CacheAnimationTransform" }, // 3923993147
		{ &Z_Construct_UFunction_AWeaponVisual_CacheCollisionData, "CacheCollisionData" }, // 298948581
		{ &Z_Construct_UFunction_AWeaponVisual_CleanupAttackData, "CleanupAttackData" }, // 879730456
		{ &Z_Construct_UFunction_AWeaponVisual_GetCollidingPrimitives, "GetCollidingPrimitives" }, // 3278661203
		{ &Z_Construct_UFunction_AWeaponVisual_HandleAddAttachment, "HandleAddAttachment" }, // 1688805020
		{ &Z_Construct_UFunction_AWeaponVisual_HandleRemoveAttachment, "HandleRemoveAttachment" }, // 1062448271
		{ &Z_Construct_UFunction_AWeaponVisual_PerformCollisionCheck, "PerformCollisionCheck" }, // 4053443403
		{ &Z_Construct_UFunction_AWeaponVisual_RegisterDefaultAttachment, "RegisterDefaultAttachment" }, // 3254623304
		{ &Z_Construct_UFunction_AWeaponVisual_SweepForHits, "SweepForHits" }, // 900207460
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponVisual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponVisual_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponVisual, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMesh_MetaData), NewProp_WeaponMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponVisual_Statics::NewProp_AttachmentMeshComps_ValueProp = { "AttachmentMeshComps", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponVisual_Statics::NewProp_AttachmentMeshComps_Key_KeyProp = { "AttachmentMeshComps_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWeaponVisual_Statics::NewProp_AttachmentMeshComps = { "AttachmentMeshComps", nullptr, (EPropertyFlags)0x002008800000000c, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponVisual, AttachmentMeshComps), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentMeshComps_MetaData), NewProp_AttachmentMeshComps_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponVisual_Statics::NewProp_AttachmentMeshDefaultMeshes_ValueProp = { "AttachmentMeshDefaultMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponVisual_Statics::NewProp_AttachmentMeshDefaultMeshes_Key_KeyProp = { "AttachmentMeshDefaultMeshes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWeaponVisual_Statics::NewProp_AttachmentMeshDefaultMeshes = { "AttachmentMeshDefaultMeshes", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponVisual, AttachmentMeshDefaultMeshes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentMeshDefaultMeshes_MetaData), NewProp_AttachmentMeshDefaultMeshes_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponVisual_Statics::NewProp_CurrentNotifyEvent = { "CurrentNotifyEvent", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponVisual, CurrentNotifyEvent), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentNotifyEvent_MetaData), NewProp_CurrentNotifyEvent_MetaData) }; // 3961895738
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponVisual_Statics::NewProp_CollisionData_Inner = { "CollisionData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWeaponCollisionData, METADATA_PARAMS(0, nullptr) }; // 700300016
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWeaponVisual_Statics::NewProp_CollisionData = { "CollisionData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponVisual, CollisionData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionData_MetaData), NewProp_CollisionData_MetaData) }; // 700300016
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponVisual_Statics::NewProp_CharacterOwner = { "CharacterOwner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponVisual, CharacterOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterOwner_MetaData), NewProp_CharacterOwner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponVisual_Statics::NewProp_WeaponOwner = { "WeaponOwner", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponVisual, WeaponOwner), Z_Construct_UClass_UWeaponItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponOwner_MetaData), NewProp_WeaponOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponVisual_Statics::NewProp_WeaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponVisual_Statics::NewProp_AttachmentMeshComps_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponVisual_Statics::NewProp_AttachmentMeshComps_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponVisual_Statics::NewProp_AttachmentMeshComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponVisual_Statics::NewProp_AttachmentMeshDefaultMeshes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponVisual_Statics::NewProp_AttachmentMeshDefaultMeshes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponVisual_Statics::NewProp_AttachmentMeshDefaultMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponVisual_Statics::NewProp_CurrentNotifyEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponVisual_Statics::NewProp_CollisionData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponVisual_Statics::NewProp_CollisionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponVisual_Statics::NewProp_CharacterOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponVisual_Statics::NewProp_WeaponOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponVisual_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeaponVisual_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponVisual_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponVisual_Statics::ClassParams = {
	&AWeaponVisual::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWeaponVisual_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponVisual_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponVisual_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponVisual_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeaponVisual()
{
	if (!Z_Registration_Info_UClass_AWeaponVisual.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponVisual.OuterSingleton, Z_Construct_UClass_AWeaponVisual_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeaponVisual.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<AWeaponVisual>()
{
	return AWeaponVisual::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponVisual);
AWeaponVisual::~AWeaponVisual() {}
// End Class AWeaponVisual

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponVisual_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponVisual, AWeaponVisual::StaticClass, TEXT("AWeaponVisual"), &Z_Registration_Info_UClass_AWeaponVisual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponVisual), 2935674669U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponVisual_h_313488173(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponVisual_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_WeaponVisual_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
