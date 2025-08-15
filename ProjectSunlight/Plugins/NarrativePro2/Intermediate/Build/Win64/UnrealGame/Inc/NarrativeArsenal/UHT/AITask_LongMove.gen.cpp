// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/AITask_LongMove.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITask_LongMove() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAITask();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAIOptionFlag();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UAITask_LongMove();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UAITask_LongMove_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNavigationSubsystem_NoRegister();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_MoveTaskCompleted__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Delegate FMoveTaskCompleted
struct Z_Construct_UDelegateFunction_NarrativeArsenal_MoveTaskCompleted__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventMoveTaskCompleted_Parms
	{
		TEnumAsByte<EPathFollowingResult::Type> Result;
		AAIController* AIController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/AITask_LongMove.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_MoveTaskCompleted__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventMoveTaskCompleted_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(0, nullptr) }; // 3125870747
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_MoveTaskCompleted__DelegateSignature_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventMoveTaskCompleted_Parms, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_MoveTaskCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_MoveTaskCompleted__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_MoveTaskCompleted__DelegateSignature_Statics::NewProp_AIController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_MoveTaskCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_MoveTaskCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "MoveTaskCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_MoveTaskCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_MoveTaskCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_MoveTaskCompleted__DelegateSignature_Statics::_Script_NarrativeArsenal_eventMoveTaskCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_MoveTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_MoveTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_MoveTaskCompleted__DelegateSignature_Statics::_Script_NarrativeArsenal_eventMoveTaskCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_MoveTaskCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_MoveTaskCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMoveTaskCompleted_DelegateWrapper(const FMulticastScriptDelegate& MoveTaskCompleted, EPathFollowingResult::Type Result, AAIController* AIController)
{
	struct _Script_NarrativeArsenal_eventMoveTaskCompleted_Parms
	{
		TEnumAsByte<EPathFollowingResult::Type> Result;
		AAIController* AIController;
	};
	_Script_NarrativeArsenal_eventMoveTaskCompleted_Parms Parms;
	Parms.Result=Result;
	Parms.AIController=AIController;
	MoveTaskCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMoveTaskCompleted

// Begin Class UAITask_LongMove Function RunLongMove
struct Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics
{
	struct AITask_LongMove_eventRunLongMove_Parms
	{
		AAIController* Controller;
		FVector GoalLocation;
		float AcceptanceRadius;
		TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap;
		TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath;
		bool bLockAILogic;
		TEnumAsByte<EAIOptionFlag::Type> ProjectGoalOnNavigation;
		TEnumAsByte<EAIOptionFlag::Type> RequireNavigableEndLocation;
		UAITask_LongMove* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "AcceptanceRadius,StopOnOverlap,AcceptPartialPath,bUsePathfinding,bUseContinuousGoalTracking,ProjectGoalOnNavigation,RequireNavigableEndLocation" },
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "AI|Tasks" },
		{ "Comment", "/**\n\x09 * Use linked POIs to determine a path to the destination even when the navmesh may not completely exist yet.\n\x09 * If a path does exist, we fall back to the traditional AITask_MoveTo task.\n\x09 * @param Controller The AI controller performing the movement\n\x09 * @param GoalLocation The target location for the agent\n\x09 * @param AcceptanceRadius The range around the goal to complete the move task\n\x09 * @param StopOnOverlap Whether the agent should complete the move when overlapping with the goal\n\x09 * @param AcceptPartialPath Whether to accept a partial path to the goal\n\x09 * @param bLockAILogic Whether AI logic should be locked while performing the move\n\x09 * @param ProjectGoalOnNavigation Determines if we should project the goal location to the navmesh\n\x09 * @param RequireNavigableEndLocation Determines if we need the end location to be navigable in order to execute\n\x09 */" },
		{ "CPP_Default_AcceptanceRadius", "-1.000000" },
		{ "CPP_Default_AcceptPartialPath", "Default" },
		{ "CPP_Default_bLockAILogic", "true" },
		{ "CPP_Default_ProjectGoalOnNavigation", "Default" },
		{ "CPP_Default_RequireNavigableEndLocation", "Default" },
		{ "CPP_Default_StopOnOverlap", "Default" },
		{ "DefaultToSelf", "Controller" },
		{ "DisplayName", "Long Range Move To Location" },
		{ "ModuleRelativePath", "Public/AI/AITask_LongMove.h" },
		{ "ToolTip", "Use linked POIs to determine a path to the destination even when the navmesh may not completely exist yet.\nIf a path does exist, we fall back to the traditional AITask_MoveTo task.\n@param Controller The AI controller performing the movement\n@param GoalLocation The target location for the agent\n@param AcceptanceRadius The range around the goal to complete the move task\n@param StopOnOverlap Whether the agent should complete the move when overlapping with the goal\n@param AcceptPartialPath Whether to accept a partial path to the goal\n@param bLockAILogic Whether AI logic should be locked while performing the move\n@param ProjectGoalOnNavigation Determines if we should project the goal location to the navmesh\n@param RequireNavigableEndLocation Determines if we need the end location to be navigable in order to execute" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GoalLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StopOnOverlap;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AcceptPartialPath;
	static void NewProp_bLockAILogic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockAILogic;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectGoalOnNavigation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RequireNavigableEndLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_LongMove_eventRunLongMove_Parms, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::NewProp_GoalLocation = { "GoalLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_LongMove_eventRunLongMove_Parms, GoalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_LongMove_eventRunLongMove_Parms, AcceptanceRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::NewProp_StopOnOverlap = { "StopOnOverlap", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_LongMove_eventRunLongMove_Parms, StopOnOverlap), Z_Construct_UEnum_AIModule_EAIOptionFlag, METADATA_PARAMS(0, nullptr) }; // 3690324133
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::NewProp_AcceptPartialPath = { "AcceptPartialPath", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_LongMove_eventRunLongMove_Parms, AcceptPartialPath), Z_Construct_UEnum_AIModule_EAIOptionFlag, METADATA_PARAMS(0, nullptr) }; // 3690324133
void Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::NewProp_bLockAILogic_SetBit(void* Obj)
{
	((AITask_LongMove_eventRunLongMove_Parms*)Obj)->bLockAILogic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::NewProp_bLockAILogic = { "bLockAILogic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AITask_LongMove_eventRunLongMove_Parms), &Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::NewProp_bLockAILogic_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::NewProp_ProjectGoalOnNavigation = { "ProjectGoalOnNavigation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_LongMove_eventRunLongMove_Parms, ProjectGoalOnNavigation), Z_Construct_UEnum_AIModule_EAIOptionFlag, METADATA_PARAMS(0, nullptr) }; // 3690324133
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::NewProp_RequireNavigableEndLocation = { "RequireNavigableEndLocation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_LongMove_eventRunLongMove_Parms, RequireNavigableEndLocation), Z_Construct_UEnum_AIModule_EAIOptionFlag, METADATA_PARAMS(0, nullptr) }; // 3690324133
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_LongMove_eventRunLongMove_Parms, ReturnValue), Z_Construct_UClass_UAITask_LongMove_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::NewProp_GoalLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::NewProp_AcceptanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::NewProp_StopOnOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::NewProp_AcceptPartialPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::NewProp_bLockAILogic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::NewProp_ProjectGoalOnNavigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::NewProp_RequireNavigableEndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITask_LongMove, nullptr, "RunLongMove", nullptr, nullptr, Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::AITask_LongMove_eventRunLongMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::AITask_LongMove_eventRunLongMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAITask_LongMove_RunLongMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAITask_LongMove_RunLongMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAITask_LongMove::execRunLongMove)
{
	P_GET_OBJECT(AAIController,Z_Param_Controller);
	P_GET_STRUCT(FVector,Z_Param_GoalLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AcceptanceRadius);
	P_GET_PROPERTY(FByteProperty,Z_Param_StopOnOverlap);
	P_GET_PROPERTY(FByteProperty,Z_Param_AcceptPartialPath);
	P_GET_UBOOL(Z_Param_bLockAILogic);
	P_GET_PROPERTY(FByteProperty,Z_Param_ProjectGoalOnNavigation);
	P_GET_PROPERTY(FByteProperty,Z_Param_RequireNavigableEndLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAITask_LongMove**)Z_Param__Result=UAITask_LongMove::RunLongMove(Z_Param_Controller,Z_Param_GoalLocation,Z_Param_AcceptanceRadius,EAIOptionFlag::Type(Z_Param_StopOnOverlap),EAIOptionFlag::Type(Z_Param_AcceptPartialPath),Z_Param_bLockAILogic,EAIOptionFlag::Type(Z_Param_ProjectGoalOnNavigation),EAIOptionFlag::Type(Z_Param_RequireNavigableEndLocation));
	P_NATIVE_END;
}
// End Class UAITask_LongMove Function RunLongMove

// Begin Class UAITask_LongMove
void UAITask_LongMove::StaticRegisterNativesUAITask_LongMove()
{
	UClass* Class = UAITask_LongMove::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RunLongMove", &UAITask_LongMove::execRunLongMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAITask_LongMove);
UClass* Z_Construct_UClass_UAITask_LongMove_NoRegister()
{
	return UAITask_LongMove::StaticClass();
}
struct Z_Construct_UClass_UAITask_LongMove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AI/AITask_LongMove.h" },
		{ "ModuleRelativePath", "Public/AI/AITask_LongMove.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/AITask_LongMove.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMoveFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/AITask_LongMove.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/AITask_LongMove.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestFailed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMoveFinished;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavigationSubsystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAITask_LongMove_RunLongMove, "RunLongMove" }, // 3808915527
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAITask_LongMove>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAITask_LongMove_Statics::NewProp_OnRequestFailed = { "OnRequestFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITask_LongMove, OnRequestFailed), Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestFailed_MetaData), NewProp_OnRequestFailed_MetaData) }; // 117634863
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAITask_LongMove_Statics::NewProp_OnMoveFinished = { "OnMoveFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITask_LongMove, OnMoveFinished), Z_Construct_UDelegateFunction_NarrativeArsenal_MoveTaskCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMoveFinished_MetaData), NewProp_OnMoveFinished_MetaData) }; // 1743907807
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAITask_LongMove_Statics::NewProp_NavigationSubsystem = { "NavigationSubsystem", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITask_LongMove, NavigationSubsystem), Z_Construct_UClass_UNavigationSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationSubsystem_MetaData), NewProp_NavigationSubsystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAITask_LongMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_LongMove_Statics::NewProp_OnRequestFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_LongMove_Statics::NewProp_OnMoveFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_LongMove_Statics::NewProp_NavigationSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_LongMove_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAITask_LongMove_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAITask,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_LongMove_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAITask_LongMove_Statics::ClassParams = {
	&UAITask_LongMove::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAITask_LongMove_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_LongMove_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_LongMove_Statics::Class_MetaDataParams), Z_Construct_UClass_UAITask_LongMove_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAITask_LongMove()
{
	if (!Z_Registration_Info_UClass_UAITask_LongMove.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAITask_LongMove.OuterSingleton, Z_Construct_UClass_UAITask_LongMove_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAITask_LongMove.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UAITask_LongMove>()
{
	return UAITask_LongMove::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAITask_LongMove);
UAITask_LongMove::~UAITask_LongMove() {}
// End Class UAITask_LongMove

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_AITask_LongMove_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAITask_LongMove, UAITask_LongMove::StaticClass, TEXT("UAITask_LongMove"), &Z_Registration_Info_UClass_UAITask_LongMove, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAITask_LongMove), 1683574135U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_AITask_LongMove_h_2947137359(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_AITask_LongMove_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_AITask_LongMove_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
