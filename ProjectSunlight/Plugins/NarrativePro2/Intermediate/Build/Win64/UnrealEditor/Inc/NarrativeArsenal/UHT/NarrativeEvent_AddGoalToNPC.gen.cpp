// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/Activities/NarrativeEvent_AddGoalToNPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeEvent_AddGoalToNPC() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeEvent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeEvent_AddGoalMulti();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivity_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCDefinition_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCGoalItem_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FAddGoalMultiTarget();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeEvent_AddGoalToNPC
void UNarrativeEvent_AddGoalToNPC::StaticRegisterNativesUNarrativeEvent_AddGoalToNPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeEvent_AddGoalToNPC);
UClass* Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_NoRegister()
{
	return UNarrativeEvent_AddGoalToNPC::StaticClass();
}
struct Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "Comment", "/**\n * Adds a goal to the given NPC. You may prefer to use a BP Event to bind this instead, as that will pass you a pointer back\n * to the created goal, meaning you can keep a reference to the goal, update it, or remove it. \n */" },
		{ "DisplayName", "Add Goal To NPC" },
		{ "IncludePath", "AI/Activities/NarrativeEvent_AddGoalToNPC.h" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeEvent_AddGoalToNPC.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Adds a goal to the given NPC. You may prefer to use a BP Event to bind this instead, as that will pass you a pointer back\nto the created goal, meaning you can keep a reference to the goal, update it, or remove it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalToAdd_MetaData[] = {
		{ "Category", "NPC Activity" },
		{ "Comment", "//The goal to send to the NPC \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeEvent_AddGoalToNPC.h" },
		{ "ToolTip", "The goal to send to the NPC" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGoal_MetaData[] = {
		{ "Comment", "//The active goal. \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeEvent_AddGoalToNPC.h" },
		{ "ToolTip", "The active goal." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GoalToAdd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveGoal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeEvent_AddGoalToNPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::NewProp_GoalToAdd = { "GoalToAdd", nullptr, (EPropertyFlags)0x0146000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeEvent_AddGoalToNPC, GoalToAdd), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalToAdd_MetaData), NewProp_GoalToAdd_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::NewProp_ActiveGoal = { "ActiveGoal", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeEvent_AddGoalToNPC, ActiveGoal), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveGoal_MetaData), NewProp_ActiveGoal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::NewProp_GoalToAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::NewProp_ActiveGoal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeEvent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::ClassParams = {
	&UNarrativeEvent_AddGoalToNPC::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC()
{
	if (!Z_Registration_Info_UClass_UNarrativeEvent_AddGoalToNPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeEvent_AddGoalToNPC.OuterSingleton, Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeEvent_AddGoalToNPC.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeEvent_AddGoalToNPC>()
{
	return UNarrativeEvent_AddGoalToNPC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeEvent_AddGoalToNPC);
UNarrativeEvent_AddGoalToNPC::~UNarrativeEvent_AddGoalToNPC() {}
// End Class UNarrativeEvent_AddGoalToNPC

// Begin ScriptStruct FAddGoalMultiTarget
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AddGoalMultiTarget;
class UScriptStruct* FAddGoalMultiTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AddGoalMultiTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AddGoalMultiTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAddGoalMultiTarget, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("AddGoalMultiTarget"));
	}
	return Z_Registration_Info_UScriptStruct_AddGoalMultiTarget.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FAddGoalMultiTarget>()
{
	return FAddGoalMultiTarget::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Represents one of the NPCs in a settlement activity\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeEvent_AddGoalToNPC.h" },
		{ "ToolTip", "Represents one of the NPCs in a settlement activity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCDefinition_MetaData[] = {
		{ "Category", "Settlement Activity" },
		{ "Comment", "//The NPC to run this activity on\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeEvent_AddGoalToNPC.h" },
		{ "ToolTip", "The NPC to run this activity on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[] = {
		{ "Category", "Settlement Activity" },
		{ "Comment", "//The activity to run at the specified time \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeEvent_AddGoalToNPC.h" },
		{ "ToolTip", "The activity to run at the specified time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireSucceed_MetaData[] = {
		{ "Category", "Settlement Activity" },
		{ "Comment", "//If false, the settlement activity can still run even if this NPC failed to start the activity the settlement wanted. \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeEvent_AddGoalToNPC.h" },
		{ "ToolTip", "If false, the settlement activity can still run even if this NPC failed to start the activity the settlement wanted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGoalSucceeded_MetaData[] = {
		{ "Category", "Settlement Activity" },
		{ "Comment", "//We track in here whether the goal has yet been succeded or not \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeEvent_AddGoalToNPC.h" },
		{ "ToolTip", "We track in here whether the goal has yet been succeded or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCDefinition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Goal;
	static void NewProp_bRequireSucceed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireSucceed;
	static void NewProp_bGoalSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGoalSucceeded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAddGoalMultiTarget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::NewProp_NPCDefinition = { "NPCDefinition", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddGoalMultiTarget, NPCDefinition), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCDefinition_MetaData), NewProp_NPCDefinition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x011600000009000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddGoalMultiTarget, Goal), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Goal_MetaData), NewProp_Goal_MetaData) };
void Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::NewProp_bRequireSucceed_SetBit(void* Obj)
{
	((FAddGoalMultiTarget*)Obj)->bRequireSucceed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::NewProp_bRequireSucceed = { "bRequireSucceed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAddGoalMultiTarget), &Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::NewProp_bRequireSucceed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireSucceed_MetaData), NewProp_bRequireSucceed_MetaData) };
void Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::NewProp_bGoalSucceeded_SetBit(void* Obj)
{
	((FAddGoalMultiTarget*)Obj)->bGoalSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::NewProp_bGoalSucceeded = { "bGoalSucceeded", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAddGoalMultiTarget), &Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::NewProp_bGoalSucceeded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGoalSucceeded_MetaData), NewProp_bGoalSucceeded_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::NewProp_NPCDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::NewProp_Goal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::NewProp_bRequireSucceed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::NewProp_bGoalSucceeded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"AddGoalMultiTarget",
	Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::PropPointers),
	sizeof(FAddGoalMultiTarget),
	alignof(FAddGoalMultiTarget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAddGoalMultiTarget()
{
	if (!Z_Registration_Info_UScriptStruct_AddGoalMultiTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AddGoalMultiTarget.InnerSingleton, Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AddGoalMultiTarget.InnerSingleton;
}
// End ScriptStruct FAddGoalMultiTarget

// Begin Class UNarrativeEvent_AddGoalMulti Function OnActivityCompleted
struct Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnActivityCompleted_Statics
{
	struct NarrativeEvent_AddGoalMulti_eventOnActivityCompleted_Parms
	{
		UNPCActivity* Activity;
		UNPCGoalItem* Goal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeEvent_AddGoalToNPC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Activity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Goal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnActivityCompleted_Statics::NewProp_Activity = { "Activity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeEvent_AddGoalMulti_eventOnActivityCompleted_Parms, Activity), Z_Construct_UClass_UNPCActivity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnActivityCompleted_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeEvent_AddGoalMulti_eventOnActivityCompleted_Parms, Goal), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnActivityCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnActivityCompleted_Statics::NewProp_Activity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnActivityCompleted_Statics::NewProp_Goal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnActivityCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnActivityCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeEvent_AddGoalMulti, nullptr, "OnActivityCompleted", nullptr, nullptr, Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnActivityCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnActivityCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnActivityCompleted_Statics::NarrativeEvent_AddGoalMulti_eventOnActivityCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnActivityCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnActivityCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnActivityCompleted_Statics::NarrativeEvent_AddGoalMulti_eventOnActivityCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnActivityCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnActivityCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeEvent_AddGoalMulti::execOnActivityCompleted)
{
	P_GET_OBJECT(UNPCActivity,Z_Param_Activity);
	P_GET_OBJECT(UNPCGoalItem,Z_Param_Goal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActivityCompleted(Z_Param_Activity,Z_Param_Goal);
	P_NATIVE_END;
}
// End Class UNarrativeEvent_AddGoalMulti Function OnActivityCompleted

// Begin Class UNarrativeEvent_AddGoalMulti Function OnGoalsCompleted
static const FName NAME_UNarrativeEvent_AddGoalMulti_OnGoalsCompleted = FName(TEXT("OnGoalsCompleted"));
void UNarrativeEvent_AddGoalMulti::OnGoalsCompleted()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeEvent_AddGoalMulti_OnGoalsCompleted);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnGoalsCompleted_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnGoalsCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Goal Item" },
		{ "Comment", "//Prepare the goal for a save - this might for example mean storing an actors GUID so we can find it later when we load \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeEvent_AddGoalToNPC.h" },
		{ "ToolTip", "Prepare the goal for a save - this might for example mean storing an actors GUID so we can find it later when we load" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnGoalsCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeEvent_AddGoalMulti, nullptr, "OnGoalsCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnGoalsCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnGoalsCompleted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnGoalsCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnGoalsCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeEvent_AddGoalMulti::execOnGoalsCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGoalsCompleted_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeEvent_AddGoalMulti Function OnGoalsCompleted

// Begin Class UNarrativeEvent_AddGoalMulti
void UNarrativeEvent_AddGoalMulti::StaticRegisterNativesUNarrativeEvent_AddGoalMulti()
{
	UClass* Class = UNarrativeEvent_AddGoalMulti::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnActivityCompleted", &UNarrativeEvent_AddGoalMulti::execOnActivityCompleted },
		{ "OnGoalsCompleted", &UNarrativeEvent_AddGoalMulti::execOnGoalsCompleted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeEvent_AddGoalMulti);
UClass* Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_NoRegister()
{
	return UNarrativeEvent_AddGoalMulti::StaticClass();
}
struct Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "Comment", "/**\n * Special version that handles adding goals to multiple NPCs instead of just the one.\n */" },
		{ "DisplayName", "Add Multiple Goals" },
		{ "IncludePath", "AI/Activities/NarrativeEvent_AddGoalToNPC.h" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeEvent_AddGoalToNPC.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Special version that handles adding goals to multiple NPCs instead of just the one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IssuedGoals_MetaData[] = {
		{ "Category", "Settlement Activity" },
		{ "Comment", "//The active goals \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeEvent_AddGoalToNPC.h" },
		{ "ToolTip", "The active goals" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCGoalTargets_MetaData[] = {
		{ "Category", "Settlement Activity" },
		{ "Comment", "//The NPCs that this settlement activity will effect \n" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeEvent_AddGoalToNPC.h" },
		{ "ToolTip", "The NPCs that this settlement activity will effect" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IssuedGoals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IssuedGoals;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NPCGoalTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCGoalTargets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnActivityCompleted, "OnActivityCompleted" }, // 3508389636
		{ &Z_Construct_UFunction_UNarrativeEvent_AddGoalMulti_OnGoalsCompleted, "OnGoalsCompleted" }, // 2063749698
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeEvent_AddGoalMulti>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_Statics::NewProp_IssuedGoals_Inner = { "IssuedGoals", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_Statics::NewProp_IssuedGoals = { "IssuedGoals", nullptr, (EPropertyFlags)0x0124080000022015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeEvent_AddGoalMulti, IssuedGoals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IssuedGoals_MetaData), NewProp_IssuedGoals_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_Statics::NewProp_NPCGoalTargets_Inner = { "NPCGoalTargets", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAddGoalMultiTarget, METADATA_PARAMS(0, nullptr) }; // 275918969
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_Statics::NewProp_NPCGoalTargets = { "NPCGoalTargets", nullptr, (EPropertyFlags)0x0021088000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeEvent_AddGoalMulti, NPCGoalTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCGoalTargets_MetaData), NewProp_NPCGoalTargets_MetaData) }; // 275918969
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_Statics::NewProp_IssuedGoals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_Statics::NewProp_IssuedGoals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_Statics::NewProp_NPCGoalTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_Statics::NewProp_NPCGoalTargets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeEvent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_Statics::ClassParams = {
	&UNarrativeEvent_AddGoalMulti::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeEvent_AddGoalMulti()
{
	if (!Z_Registration_Info_UClass_UNarrativeEvent_AddGoalMulti.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeEvent_AddGoalMulti.OuterSingleton, Z_Construct_UClass_UNarrativeEvent_AddGoalMulti_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeEvent_AddGoalMulti.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeEvent_AddGoalMulti>()
{
	return UNarrativeEvent_AddGoalMulti::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeEvent_AddGoalMulti);
UNarrativeEvent_AddGoalMulti::~UNarrativeEvent_AddGoalMulti() {}
// End Class UNarrativeEvent_AddGoalMulti

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NarrativeEvent_AddGoalToNPC_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAddGoalMultiTarget::StaticStruct, Z_Construct_UScriptStruct_FAddGoalMultiTarget_Statics::NewStructOps, TEXT("AddGoalMultiTarget"), &Z_Registration_Info_UScriptStruct_AddGoalMultiTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAddGoalMultiTarget), 275918969U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeEvent_AddGoalToNPC, UNarrativeEvent_AddGoalToNPC::StaticClass, TEXT("UNarrativeEvent_AddGoalToNPC"), &Z_Registration_Info_UClass_UNarrativeEvent_AddGoalToNPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeEvent_AddGoalToNPC), 1781631051U) },
		{ Z_Construct_UClass_UNarrativeEvent_AddGoalMulti, UNarrativeEvent_AddGoalMulti::StaticClass, TEXT("UNarrativeEvent_AddGoalMulti"), &Z_Registration_Info_UClass_UNarrativeEvent_AddGoalMulti, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeEvent_AddGoalMulti), 1490384977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NarrativeEvent_AddGoalToNPC_h_719073559(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NarrativeEvent_AddGoalToNPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NarrativeEvent_AddGoalToNPC_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NarrativeEvent_AddGoalToNPC_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NarrativeEvent_AddGoalToNPC_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
