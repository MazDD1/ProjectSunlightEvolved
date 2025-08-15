// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Tales/NarrativeTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeTrigger() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeEvent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTrigger();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTrigger_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeTrigger Function Activate
struct Z_Construct_UFunction_UNarrativeTrigger_Activate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Trigger" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTrigger_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTrigger, nullptr, "Activate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTrigger_Activate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTrigger_Activate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeTrigger_Activate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTrigger_Activate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeTrigger::execActivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Activate();
	P_NATIVE_END;
}
// End Class UNarrativeTrigger Function Activate

// Begin Class UNarrativeTrigger Function Deactivate
struct Z_Construct_UFunction_UNarrativeTrigger_Deactivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Trigger" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTrigger_Deactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTrigger, nullptr, "Deactivate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTrigger_Deactivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTrigger_Deactivate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeTrigger_Deactivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTrigger_Deactivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeTrigger::execDeactivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Deactivate();
	P_NATIVE_END;
}
// End Class UNarrativeTrigger Function Deactivate

// Begin Class UNarrativeTrigger Function GetDescription
struct NarrativeTrigger_eventGetDescription_Parms
{
	FString ReturnValue;
};
static const FName NAME_UNarrativeTrigger_GetDescription = FName(TEXT("GetDescription"));
FString UNarrativeTrigger::GetDescription() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeTrigger_GetDescription);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeTrigger_eventGetDescription_Parms Parms;
		const_cast<UNarrativeTrigger*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNarrativeTrigger*>(this)->GetDescription_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeTrigger_GetDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Return a string saying what this trigger is */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeTrigger.h" },
		{ "ToolTip", "Return a string saying what this trigger is" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeTrigger_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeTrigger_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTrigger_GetDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTrigger_GetDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTrigger_GetDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTrigger_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTrigger, nullptr, "GetDescription", nullptr, nullptr, Z_Construct_UFunction_UNarrativeTrigger_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTrigger_GetDescription_Statics::PropPointers), sizeof(NarrativeTrigger_eventGetDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTrigger_GetDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTrigger_GetDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeTrigger_eventGetDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeTrigger_GetDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTrigger_GetDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeTrigger::execGetDescription)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDescription_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeTrigger Function GetDescription

// Begin Class UNarrativeTrigger Function Initialize
static const FName NAME_UNarrativeTrigger_Initialize = FName(TEXT("Initialize"));
void UNarrativeTrigger::Initialize()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeTrigger_Initialize);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Initialize_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeTrigger_Initialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Trigger" },
		{ "Comment", "//Bind delegates in here to activate or deactivate your trigger, set a timer, etc. \n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeTrigger.h" },
		{ "ToolTip", "Bind delegates in here to activate or deactivate your trigger, set a timer, etc." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTrigger_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTrigger, nullptr, "Initialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTrigger_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTrigger_Initialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeTrigger_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTrigger_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeTrigger::execInitialize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeTrigger Function Initialize

// Begin Class UNarrativeTrigger Function IsActive
struct NarrativeTrigger_eventIsActive_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeTrigger_eventIsActive_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNarrativeTrigger_IsActive = FName(TEXT("IsActive"));
bool UNarrativeTrigger::IsActive()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeTrigger_IsActive);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeTrigger_eventIsActive_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return IsActive_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeTrigger_IsActive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Trigger" },
		{ "Comment", "//Return whether the trigger is active or not\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeTrigger.h" },
		{ "ToolTip", "Return whether the trigger is active or not" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeTrigger_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeTrigger_eventIsActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeTrigger_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeTrigger_eventIsActive_Parms), &Z_Construct_UFunction_UNarrativeTrigger_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTrigger_IsActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTrigger_IsActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTrigger_IsActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTrigger_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTrigger, nullptr, "IsActive", nullptr, nullptr, Z_Construct_UFunction_UNarrativeTrigger_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTrigger_IsActive_Statics::PropPointers), sizeof(NarrativeTrigger_eventIsActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTrigger_IsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTrigger_IsActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeTrigger_eventIsActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeTrigger_IsActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTrigger_IsActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeTrigger::execIsActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActive_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeTrigger Function IsActive

// Begin Class UNarrativeTrigger Function OnActivate
static const FName NAME_UNarrativeTrigger_OnActivate = FName(TEXT("OnActivate"));
void UNarrativeTrigger::OnActivate()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeTrigger_OnActivate);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNarrativeTrigger_OnActivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Trigger" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTrigger_OnActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTrigger, nullptr, "OnActivate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTrigger_OnActivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTrigger_OnActivate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeTrigger_OnActivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTrigger_OnActivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UNarrativeTrigger Function OnActivate

// Begin Class UNarrativeTrigger Function OnDeactivate
static const FName NAME_UNarrativeTrigger_OnDeactivate = FName(TEXT("OnDeactivate"));
void UNarrativeTrigger::OnDeactivate()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeTrigger_OnDeactivate);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNarrativeTrigger_OnDeactivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Trigger" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTrigger_OnDeactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTrigger, nullptr, "OnDeactivate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTrigger_OnDeactivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTrigger_OnDeactivate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeTrigger_OnDeactivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTrigger_OnDeactivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UNarrativeTrigger Function OnDeactivate

// Begin Class UNarrativeTrigger
void UNarrativeTrigger::StaticRegisterNativesUNarrativeTrigger()
{
	UClass* Class = UNarrativeTrigger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Activate", &UNarrativeTrigger::execActivate },
		{ "Deactivate", &UNarrativeTrigger::execDeactivate },
		{ "GetDescription", &UNarrativeTrigger::execGetDescription },
		{ "Initialize", &UNarrativeTrigger::execInitialize },
		{ "IsActive", &UNarrativeTrigger::execIsActive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeTrigger);
UClass* Z_Construct_UClass_UNarrativeTrigger_NoRegister()
{
	return UNarrativeTrigger::StaticClass();
}
struct Z_Construct_UClass_UNarrativeTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Triggers can be activated,or deactivated at any time for any reason you like. They can fire events when began or ended,\n * or do any number of other things. \n */" },
		{ "IncludePath", "Tales/NarrativeTrigger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeTrigger.h" },
		{ "ToolTip", "Triggers can be activated,or deactivated at any time for any reason you like. They can fire events when began or ended,\nor do any number of other things." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEvents_Inner_MetaData[] = {
		{ "Category", "Narrative Trigger" },
		{ "Comment", "/** Events that this trigger should activate/deactivate */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeTrigger.h" },
		{ "ToolTip", "Events that this trigger should activate/deactivate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEvents_MetaData[] = {
		{ "Category", "Narrative Trigger" },
		{ "Comment", "/** Events that this trigger should activate/deactivate */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeTrigger.h" },
		{ "ToolTip", "Events that this trigger should activate/deactivate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "Category", "Narrative Trigger" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "Category", "Narrative Trigger" },
		{ "Comment", "/** Whether the trigger is active right now */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeTrigger.h" },
		{ "ToolTip", "Whether the trigger is active right now" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TriggerEvents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeTrigger_Activate, "Activate" }, // 3402011240
		{ &Z_Construct_UFunction_UNarrativeTrigger_Deactivate, "Deactivate" }, // 3330218730
		{ &Z_Construct_UFunction_UNarrativeTrigger_GetDescription, "GetDescription" }, // 3879795175
		{ &Z_Construct_UFunction_UNarrativeTrigger_Initialize, "Initialize" }, // 3066586235
		{ &Z_Construct_UFunction_UNarrativeTrigger_IsActive, "IsActive" }, // 277041850
		{ &Z_Construct_UFunction_UNarrativeTrigger_OnActivate, "OnActivate" }, // 1847879889
		{ &Z_Construct_UFunction_UNarrativeTrigger_OnDeactivate, "OnDeactivate" }, // 213249620
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeTrigger_Statics::NewProp_TriggerEvents_Inner = { "TriggerEvents", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerEvents_Inner_MetaData), NewProp_TriggerEvents_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeTrigger_Statics::NewProp_TriggerEvents = { "TriggerEvents", nullptr, (EPropertyFlags)0x001000800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTrigger, TriggerEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerEvents_MetaData), NewProp_TriggerEvents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeTrigger_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTrigger, OwnerCharacter), Z_Construct_UClass_ANarrativeCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
void Z_Construct_UClass_UNarrativeTrigger_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((UNarrativeTrigger*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeTrigger_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeTrigger), &Z_Construct_UClass_UNarrativeTrigger_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTrigger_Statics::NewProp_TriggerEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTrigger_Statics::NewProp_TriggerEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTrigger_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTrigger_Statics::NewProp_bIsActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTrigger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeTrigger_Statics::ClassParams = {
	&UNarrativeTrigger::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeTrigger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTrigger_Statics::PropPointers),
	0,
	0x009010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeTrigger()
{
	if (!Z_Registration_Info_UClass_UNarrativeTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeTrigger.OuterSingleton, Z_Construct_UClass_UNarrativeTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeTrigger.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeTrigger>()
{
	return UNarrativeTrigger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeTrigger);
UNarrativeTrigger::~UNarrativeTrigger() {}
// End Class UNarrativeTrigger

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeTrigger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeTrigger, UNarrativeTrigger::StaticClass, TEXT("UNarrativeTrigger"), &Z_Registration_Info_UClass_UNarrativeTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeTrigger), 2102467947U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeTrigger_h_1657719967(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeTrigger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
