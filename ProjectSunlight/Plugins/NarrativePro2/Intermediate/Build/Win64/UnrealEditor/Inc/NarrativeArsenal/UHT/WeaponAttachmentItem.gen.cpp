// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Items/WeaponAttachmentItem.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponAttachmentItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeItem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UWeaponAttachmentItem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UWeaponAttachmentItem_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UWeaponItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UWeaponAttachmentItem Function HandleAttach
struct WeaponAttachmentItem_eventHandleAttach_Parms
{
	UWeaponItem* AttachingTo;
};
static const FName NAME_UWeaponAttachmentItem_HandleAttach = FName(TEXT("HandleAttach"));
void UWeaponAttachmentItem::HandleAttach(UWeaponItem* AttachingTo)
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponAttachmentItem_HandleAttach);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		WeaponAttachmentItem_eventHandleAttach_Parms Parms;
		Parms.AttachingTo=AttachingTo;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleAttach_Implementation(AttachingTo);
	}
}
struct Z_Construct_UFunction_UWeaponAttachmentItem_HandleAttach_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attachments" },
		{ "Comment", "/** Handle any logic the attachment wants on Attach */" },
		{ "ModuleRelativePath", "Public/Items/WeaponAttachmentItem.h" },
		{ "ToolTip", "Handle any logic the attachment wants on Attach" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachingTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachingTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponAttachmentItem_HandleAttach_Statics::NewProp_AttachingTo = { "AttachingTo", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponAttachmentItem_eventHandleAttach_Parms, AttachingTo), Z_Construct_UClass_UWeaponItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachingTo_MetaData), NewProp_AttachingTo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponAttachmentItem_HandleAttach_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttachmentItem_HandleAttach_Statics::NewProp_AttachingTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentItem_HandleAttach_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponAttachmentItem_HandleAttach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponAttachmentItem, nullptr, "HandleAttach", nullptr, nullptr, Z_Construct_UFunction_UWeaponAttachmentItem_HandleAttach_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentItem_HandleAttach_Statics::PropPointers), sizeof(WeaponAttachmentItem_eventHandleAttach_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentItem_HandleAttach_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponAttachmentItem_HandleAttach_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponAttachmentItem_eventHandleAttach_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponAttachmentItem_HandleAttach()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponAttachmentItem_HandleAttach_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponAttachmentItem::execHandleAttach)
{
	P_GET_OBJECT(UWeaponItem,Z_Param_AttachingTo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAttach_Implementation(Z_Param_AttachingTo);
	P_NATIVE_END;
}
// End Class UWeaponAttachmentItem Function HandleAttach

// Begin Class UWeaponAttachmentItem Function HandleDetach
struct WeaponAttachmentItem_eventHandleDetach_Parms
{
	UWeaponItem* DetachingFrom;
};
static const FName NAME_UWeaponAttachmentItem_HandleDetach = FName(TEXT("HandleDetach"));
void UWeaponAttachmentItem::HandleDetach(UWeaponItem* DetachingFrom)
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponAttachmentItem_HandleDetach);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		WeaponAttachmentItem_eventHandleDetach_Parms Parms;
		Parms.DetachingFrom=DetachingFrom;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleDetach_Implementation(DetachingFrom);
	}
}
struct Z_Construct_UFunction_UWeaponAttachmentItem_HandleDetach_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attachments" },
		{ "Comment", "/** Handle any logic the attachment wants on Attach */" },
		{ "ModuleRelativePath", "Public/Items/WeaponAttachmentItem.h" },
		{ "ToolTip", "Handle any logic the attachment wants on Attach" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetachingFrom_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetachingFrom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponAttachmentItem_HandleDetach_Statics::NewProp_DetachingFrom = { "DetachingFrom", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponAttachmentItem_eventHandleDetach_Parms, DetachingFrom), Z_Construct_UClass_UWeaponItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetachingFrom_MetaData), NewProp_DetachingFrom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponAttachmentItem_HandleDetach_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttachmentItem_HandleDetach_Statics::NewProp_DetachingFrom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentItem_HandleDetach_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponAttachmentItem_HandleDetach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponAttachmentItem, nullptr, "HandleDetach", nullptr, nullptr, Z_Construct_UFunction_UWeaponAttachmentItem_HandleDetach_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentItem_HandleDetach_Statics::PropPointers), sizeof(WeaponAttachmentItem_eventHandleDetach_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentItem_HandleDetach_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponAttachmentItem_HandleDetach_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponAttachmentItem_eventHandleDetach_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponAttachmentItem_HandleDetach()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponAttachmentItem_HandleDetach_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponAttachmentItem::execHandleDetach)
{
	P_GET_OBJECT(UWeaponItem,Z_Param_DetachingFrom);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDetach_Implementation(Z_Param_DetachingFrom);
	P_NATIVE_END;
}
// End Class UWeaponAttachmentItem Function HandleDetach

// Begin Class UWeaponAttachmentItem Function OnRep_WeaponOwner
struct Z_Construct_UFunction_UWeaponAttachmentItem_OnRep_WeaponOwner_Statics
{
	struct WeaponAttachmentItem_eventOnRep_WeaponOwner_Parms
	{
		UWeaponItem* PreviousOwner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/WeaponAttachmentItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousOwner_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponAttachmentItem_OnRep_WeaponOwner_Statics::NewProp_PreviousOwner = { "PreviousOwner", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponAttachmentItem_eventOnRep_WeaponOwner_Parms, PreviousOwner), Z_Construct_UClass_UWeaponItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousOwner_MetaData), NewProp_PreviousOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponAttachmentItem_OnRep_WeaponOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttachmentItem_OnRep_WeaponOwner_Statics::NewProp_PreviousOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentItem_OnRep_WeaponOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponAttachmentItem_OnRep_WeaponOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponAttachmentItem, nullptr, "OnRep_WeaponOwner", nullptr, nullptr, Z_Construct_UFunction_UWeaponAttachmentItem_OnRep_WeaponOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentItem_OnRep_WeaponOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponAttachmentItem_OnRep_WeaponOwner_Statics::WeaponAttachmentItem_eventOnRep_WeaponOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentItem_OnRep_WeaponOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponAttachmentItem_OnRep_WeaponOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponAttachmentItem_OnRep_WeaponOwner_Statics::WeaponAttachmentItem_eventOnRep_WeaponOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponAttachmentItem_OnRep_WeaponOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponAttachmentItem_OnRep_WeaponOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponAttachmentItem::execOnRep_WeaponOwner)
{
	P_GET_OBJECT(UWeaponItem,Z_Param_PreviousOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_WeaponOwner(Z_Param_PreviousOwner);
	P_NATIVE_END;
}
// End Class UWeaponAttachmentItem Function OnRep_WeaponOwner

// Begin Class UWeaponAttachmentItem Function OverrideWeaponFOV
struct WeaponAttachmentItem_eventOverrideWeaponFOV_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	WeaponAttachmentItem_eventOverrideWeaponFOV_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_UWeaponAttachmentItem_OverrideWeaponFOV = FName(TEXT("OverrideWeaponFOV"));
float UWeaponAttachmentItem::OverrideWeaponFOV() const
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponAttachmentItem_OverrideWeaponFOV);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		WeaponAttachmentItem_eventOverrideWeaponFOV_Parms Parms;
		const_cast<UWeaponAttachmentItem*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UWeaponAttachmentItem*>(this)->OverrideWeaponFOV_Implementation();
	}
}
struct Z_Construct_UFunction_UWeaponAttachmentItem_OverrideWeaponFOV_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attachments" },
		{ "Comment", "/** Lets the attachment override the FOV if desired. */" },
		{ "ModuleRelativePath", "Public/Items/WeaponAttachmentItem.h" },
		{ "ToolTip", "Lets the attachment override the FOV if desired." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeaponAttachmentItem_OverrideWeaponFOV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponAttachmentItem_eventOverrideWeaponFOV_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponAttachmentItem_OverrideWeaponFOV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttachmentItem_OverrideWeaponFOV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentItem_OverrideWeaponFOV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponAttachmentItem_OverrideWeaponFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponAttachmentItem, nullptr, "OverrideWeaponFOV", nullptr, nullptr, Z_Construct_UFunction_UWeaponAttachmentItem_OverrideWeaponFOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentItem_OverrideWeaponFOV_Statics::PropPointers), sizeof(WeaponAttachmentItem_eventOverrideWeaponFOV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentItem_OverrideWeaponFOV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponAttachmentItem_OverrideWeaponFOV_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponAttachmentItem_eventOverrideWeaponFOV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponAttachmentItem_OverrideWeaponFOV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponAttachmentItem_OverrideWeaponFOV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponAttachmentItem::execOverrideWeaponFOV)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OverrideWeaponFOV_Implementation();
	P_NATIVE_END;
}
// End Class UWeaponAttachmentItem Function OverrideWeaponFOV

// Begin Class UWeaponAttachmentItem
void UWeaponAttachmentItem::StaticRegisterNativesUWeaponAttachmentItem()
{
	UClass* Class = UWeaponAttachmentItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleAttach", &UWeaponAttachmentItem::execHandleAttach },
		{ "HandleDetach", &UWeaponAttachmentItem::execHandleDetach },
		{ "OnRep_WeaponOwner", &UWeaponAttachmentItem::execOnRep_WeaponOwner },
		{ "OverrideWeaponFOV", &UWeaponAttachmentItem::execOverrideWeaponFOV },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponAttachmentItem);
UClass* Z_Construct_UClass_UWeaponAttachmentItem_NoRegister()
{
	return UWeaponAttachmentItem::StaticClass();
}
struct Z_Construct_UClass_UWeaponAttachmentItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An item that can be attached to a WeaponItem in order to modify its functionality and/or visuals \n */" },
		{ "IncludePath", "Items/WeaponAttachmentItem.h" },
		{ "ModuleRelativePath", "Public/Items/WeaponAttachmentItem.h" },
		{ "ToolTip", "An item that can be attached to a WeaponItem in order to modify its functionality and/or visuals" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponOwner_MetaData[] = {
		{ "Category", "Attachments" },
		{ "Comment", "/** The weapon this attachment is current attached to - null if not attached*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/WeaponAttachmentItem.h" },
		{ "ToolTip", "The weapon this attachment is current attached to - null if not attached" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponOwnerIdx_MetaData[] = {
		{ "Category", "Attachments" },
		{ "Comment", "/** Our owners IDx in the inventory. We cache this so we can restore WeaponOwner when attachment loads back in. TODO if item gets removed from game this idx may break - perhaps assign each item FGUID of some kind?  */" },
		{ "ModuleRelativePath", "Public/Items/WeaponAttachmentItem.h" },
		{ "ToolTip", "Our owners IDx in the inventory. We cache this so we can restore WeaponOwner when attachment loads back in. TODO if item gets removed from game this idx may break - perhaps assign each item FGUID of some kind?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAttachmentSlot_MetaData[] = {
		{ "Categories", "Narrative.Equipment.Weapon.AttachSlot" },
		{ "Category", "Item - Weapon Attachment" },
		{ "Comment", "//The slot this attachment should equip to on the weapon \n" },
		{ "ModuleRelativePath", "Public/Items/WeaponAttachmentItem.h" },
		{ "ToolTip", "The slot this attachment should equip to on the weapon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentMesh_MetaData[] = {
		{ "Category", "Item - Weapon Attachment" },
		{ "Comment", "//The mesh that we should create and attach to the gun - TODO soft ref and load this \n" },
		{ "ModuleRelativePath", "Public/Items/WeaponAttachmentItem.h" },
		{ "ToolTip", "The mesh that we should create and attach to the gun - TODO soft ref and load this" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVOverride_MetaData[] = {
		{ "Category", "Item - Weapon Attachment | FOV" },
		{ "Comment", "//If non negative value will act as an FOV override for ADS \n" },
		{ "ModuleRelativePath", "Public/Items/WeaponAttachmentItem.h" },
		{ "ToolTip", "If non negative value will act as an FOV override for ADS" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponOwner;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponOwnerIdx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponAttachmentSlot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponAttachmentItem_HandleAttach, "HandleAttach" }, // 4280805114
		{ &Z_Construct_UFunction_UWeaponAttachmentItem_HandleDetach, "HandleDetach" }, // 2386442205
		{ &Z_Construct_UFunction_UWeaponAttachmentItem_OnRep_WeaponOwner, "OnRep_WeaponOwner" }, // 3255500835
		{ &Z_Construct_UFunction_UWeaponAttachmentItem_OverrideWeaponFOV, "OverrideWeaponFOV" }, // 517189278
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponAttachmentItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponAttachmentItem_Statics::NewProp_WeaponOwner = { "WeaponOwner", "OnRep_WeaponOwner", (EPropertyFlags)0x012408010008003c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponAttachmentItem, WeaponOwner), Z_Construct_UClass_UWeaponItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponOwner_MetaData), NewProp_WeaponOwner_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponAttachmentItem_Statics::NewProp_WeaponOwnerIdx = { "WeaponOwnerIdx", nullptr, (EPropertyFlags)0x0020080001000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponAttachmentItem, WeaponOwnerIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponOwnerIdx_MetaData), NewProp_WeaponOwnerIdx_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponAttachmentItem_Statics::NewProp_WeaponAttachmentSlot = { "WeaponAttachmentSlot", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponAttachmentItem, WeaponAttachmentSlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAttachmentSlot_MetaData), NewProp_WeaponAttachmentSlot_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponAttachmentItem_Statics::NewProp_AttachmentMesh = { "AttachmentMesh", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponAttachmentItem, AttachmentMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentMesh_MetaData), NewProp_AttachmentMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponAttachmentItem_Statics::NewProp_FOVOverride = { "FOVOverride", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponAttachmentItem, FOVOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVOverride_MetaData), NewProp_FOVOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponAttachmentItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponAttachmentItem_Statics::NewProp_WeaponOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponAttachmentItem_Statics::NewProp_WeaponOwnerIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponAttachmentItem_Statics::NewProp_WeaponAttachmentSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponAttachmentItem_Statics::NewProp_AttachmentMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponAttachmentItem_Statics::NewProp_FOVOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAttachmentItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponAttachmentItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAttachmentItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponAttachmentItem_Statics::ClassParams = {
	&UWeaponAttachmentItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeaponAttachmentItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAttachmentItem_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAttachmentItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponAttachmentItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponAttachmentItem()
{
	if (!Z_Registration_Info_UClass_UWeaponAttachmentItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponAttachmentItem.OuterSingleton, Z_Construct_UClass_UWeaponAttachmentItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponAttachmentItem.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UWeaponAttachmentItem>()
{
	return UWeaponAttachmentItem::StaticClass();
}
void UWeaponAttachmentItem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_WeaponOwner(TEXT("WeaponOwner"));
	const bool bIsValid = true
		&& Name_WeaponOwner == ClassReps[(int32)ENetFields_Private::WeaponOwner].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UWeaponAttachmentItem"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponAttachmentItem);
UWeaponAttachmentItem::~UWeaponAttachmentItem() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWeaponAttachmentItem)
// End Class UWeaponAttachmentItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponAttachmentItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponAttachmentItem, UWeaponAttachmentItem::StaticClass, TEXT("UWeaponAttachmentItem"), &Z_Registration_Info_UClass_UWeaponAttachmentItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponAttachmentItem), 126630206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponAttachmentItem_h_2674820998(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponAttachmentItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponAttachmentItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
