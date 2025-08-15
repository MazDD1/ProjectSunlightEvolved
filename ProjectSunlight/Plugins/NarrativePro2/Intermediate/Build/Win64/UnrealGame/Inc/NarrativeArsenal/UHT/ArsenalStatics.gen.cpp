// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/ArsenalStatics.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArsenalStatics() {}

// Begin Cross Module References
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeGameMode_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeGameState_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativePlayerController_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UArsenalSettings_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UArsenalStatics();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UArsenalStatics_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCombatDeveloperSettings_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeGameplayHUD_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeGameUserSettings_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTimeOfDaySettings_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCDefinition_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeUIDeveloperSettings_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Delegate FObjectComparator
struct Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventObjectComparator_Parms
	{
		UObject* A;
		UObject* B;
		bool Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_A;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_B;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventObjectComparator_Parms, A), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventObjectComparator_Parms, B), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature_Statics::NewProp_Result_SetBit(void* Obj)
{
	((_Script_NarrativeArsenal_eventObjectComparator_Parms*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_NarrativeArsenal_eventObjectComparator_Parms), &Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature_Statics::NewProp_Result_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "ObjectComparator__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature_Statics::_Script_NarrativeArsenal_eventObjectComparator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature_Statics::_Script_NarrativeArsenal_eventObjectComparator_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FObjectComparator_DelegateWrapper(const FScriptDelegate& ObjectComparator, UObject* A, UObject* B, bool& Result)
{
	struct _Script_NarrativeArsenal_eventObjectComparator_Parms
	{
		UObject* A;
		UObject* B;
		bool Result;
	};
	_Script_NarrativeArsenal_eventObjectComparator_Parms Parms;
	Parms.A=A;
	Parms.B=B;
	Parms.Result=Result ? true : false;
	ObjectComparator.ProcessDelegate<UObject>(&Parms);
	Result=Parms.Result;
}
// End Delegate FObjectComparator

// Begin Class UArsenalStatics Function AddFactionsToActor
struct Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics
{
	struct ArsenalStatics_eventAddFactionsToActor_Parms
	{
		AActor* Actor;
		FGameplayTagContainer Factions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "//Put the actor in the given factions, provided it implements the team interface. \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Put the actor in the given factions, provided it implements the team interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Factions_MetaData[] = {
		{ "Categories", "Narrative.Factions" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Factions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventAddFactionsToActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::NewProp_Factions = { "Factions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventAddFactionsToActor_Parms, Factions), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Factions_MetaData), NewProp_Factions_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::NewProp_Factions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "AddFactionsToActor", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::ArsenalStatics_eventAddFactionsToActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::ArsenalStatics_eventAddFactionsToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execAddFactionsToActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Factions);
	P_FINISH;
	P_NATIVE_BEGIN;
	UArsenalStatics::AddFactionsToActor(Z_Param_Actor,Z_Param_Out_Factions);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function AddFactionsToActor

// Begin Class UArsenalStatics Function AddLooseGameplayTagsCount
struct Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics
{
	struct ArsenalStatics_eventAddLooseGameplayTagsCount_Parms
	{
		AActor* Actor;
		FGameplayTagContainer GameplayTags;
		bool bShouldReplicate;
		int32 Count;
		bool bDontAddIfAlreadyOwned;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS" },
		{ "Comment", "//Add a number of gameplay tags to our ASC. Can skip adding if we already have the tag. \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Add a number of gameplay tags to our ASC. Can skip adding if we already have the tag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDontAddIfAlreadyOwned_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static void NewProp_bShouldReplicate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldReplicate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static void NewProp_bDontAddIfAlreadyOwned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDontAddIfAlreadyOwned;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventAddLooseGameplayTagsCount_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventAddLooseGameplayTagsCount_Parms, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
void Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::NewProp_bShouldReplicate_SetBit(void* Obj)
{
	((ArsenalStatics_eventAddLooseGameplayTagsCount_Parms*)Obj)->bShouldReplicate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::NewProp_bShouldReplicate = { "bShouldReplicate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArsenalStatics_eventAddLooseGameplayTagsCount_Parms), &Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::NewProp_bShouldReplicate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventAddLooseGameplayTagsCount_Parms, Count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::NewProp_bDontAddIfAlreadyOwned_SetBit(void* Obj)
{
	((ArsenalStatics_eventAddLooseGameplayTagsCount_Parms*)Obj)->bDontAddIfAlreadyOwned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::NewProp_bDontAddIfAlreadyOwned = { "bDontAddIfAlreadyOwned", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArsenalStatics_eventAddLooseGameplayTagsCount_Parms), &Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::NewProp_bDontAddIfAlreadyOwned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDontAddIfAlreadyOwned_MetaData), NewProp_bDontAddIfAlreadyOwned_MetaData) };
void Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArsenalStatics_eventAddLooseGameplayTagsCount_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArsenalStatics_eventAddLooseGameplayTagsCount_Parms), &Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::NewProp_bShouldReplicate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::NewProp_bDontAddIfAlreadyOwned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "AddLooseGameplayTagsCount", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::ArsenalStatics_eventAddLooseGameplayTagsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::ArsenalStatics_eventAddLooseGameplayTagsCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execAddLooseGameplayTagsCount)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_GameplayTags);
	P_GET_UBOOL(Z_Param_bShouldReplicate);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_GET_UBOOL(Z_Param_bDontAddIfAlreadyOwned);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UArsenalStatics::AddLooseGameplayTagsCount(Z_Param_Actor,Z_Param_Out_GameplayTags,Z_Param_bShouldReplicate,Z_Param_Count,Z_Param_bDontAddIfAlreadyOwned);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function AddLooseGameplayTagsCount

// Begin Class UArsenalStatics Function CheckPathExists
struct Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics
{
	struct ArsenalStatics_eventCheckPathExists_Parms
	{
		FVector PathStart;
		FVector PathEnd;
		AActor* PathfindingContext;
		TSubclassOf<UNavigationQueryFilter> FilterClass;
		bool bUseFastCheck;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "CPP_Default_bUseFastCheck", "true" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathStart_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFastCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathfindingContext;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
	static void NewProp_bUseFastCheck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFastCheck;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::NewProp_PathStart = { "PathStart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventCheckPathExists_Parms, PathStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathStart_MetaData), NewProp_PathStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::NewProp_PathEnd = { "PathEnd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventCheckPathExists_Parms, PathEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathEnd_MetaData), NewProp_PathEnd_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::NewProp_PathfindingContext = { "PathfindingContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventCheckPathExists_Parms, PathfindingContext), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventCheckPathExists_Parms, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::NewProp_bUseFastCheck_SetBit(void* Obj)
{
	((ArsenalStatics_eventCheckPathExists_Parms*)Obj)->bUseFastCheck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::NewProp_bUseFastCheck = { "bUseFastCheck", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArsenalStatics_eventCheckPathExists_Parms), &Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::NewProp_bUseFastCheck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFastCheck_MetaData), NewProp_bUseFastCheck_MetaData) };
void Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArsenalStatics_eventCheckPathExists_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArsenalStatics_eventCheckPathExists_Parms), &Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::NewProp_PathStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::NewProp_PathEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::NewProp_PathfindingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::NewProp_FilterClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::NewProp_bUseFastCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "CheckPathExists", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::ArsenalStatics_eventCheckPathExists_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::ArsenalStatics_eventCheckPathExists_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_CheckPathExists()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_CheckPathExists_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execCheckPathExists)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_PathEnd);
	P_GET_OBJECT(AActor,Z_Param_PathfindingContext);
	P_GET_OBJECT(UClass,Z_Param_FilterClass);
	P_GET_UBOOL(Z_Param_bUseFastCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UArsenalStatics::CheckPathExists(Z_Param_Out_PathStart,Z_Param_Out_PathEnd,Z_Param_PathfindingContext,Z_Param_FilterClass,Z_Param_bUseFastCheck);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function CheckPathExists

// Begin Class UArsenalStatics Function GetActorFactions
struct Z_Construct_UFunction_UArsenalStatics_GetActorFactions_Statics
{
	struct ArsenalStatics_eventGetActorFactions_Parms
	{
		AActor* Actor;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "//Get the factions from the given actor\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Get the factions from the given actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetActorFactions_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetActorFactions_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArsenalStatics_GetActorFactions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetActorFactions_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetActorFactions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetActorFactions_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetActorFactions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetActorFactions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetActorFactions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetActorFactions", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetActorFactions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetActorFactions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetActorFactions_Statics::ArsenalStatics_eventGetActorFactions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetActorFactions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetActorFactions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetActorFactions_Statics::ArsenalStatics_eventGetActorFactions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetActorFactions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetActorFactions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetActorFactions)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=UArsenalStatics::GetActorFactions(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetActorFactions

// Begin Class UArsenalStatics Function GetAttitude
struct Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics
{
	struct ArsenalStatics_eventGetAttitude_Parms
	{
		const AActor* TestActor;
		const AActor* Target;
		TEnumAsByte<ETeamAttitude::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::NewProp_TestActor = { "TestActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetAttitude_Parms, TestActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestActor_MetaData), NewProp_TestActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetAttitude_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetAttitude_Parms, ReturnValue), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(0, nullptr) }; // 2991328252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::NewProp_TestActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetAttitude", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::ArsenalStatics_eventGetAttitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::ArsenalStatics_eventGetAttitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetAttitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetAttitude)
{
	P_GET_OBJECT(AActor,Z_Param_TestActor);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ETeamAttitude::Type>*)Z_Param__Result=UArsenalStatics::GetAttitude(Z_Param_TestActor,Z_Param_Target);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetAttitude

// Begin Class UArsenalStatics Function GetCharacterCreatorMapName
struct Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics
{
	struct ArsenalStatics_eventGetCharacterCreatorMapName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Return the charactor creator map name defined in the Narrative Pro settings. \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Return the charactor creator map name defined in the Narrative Pro settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetCharacterCreatorMapName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetCharacterCreatorMapName", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::ArsenalStatics_eventGetCharacterCreatorMapName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::ArsenalStatics_eventGetCharacterCreatorMapName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetCharacterCreatorMapName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UArsenalStatics::GetCharacterCreatorMapName();
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetCharacterCreatorMapName

// Begin Class UArsenalStatics Function GetCombatSettings
struct Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics
{
	struct ArsenalStatics_eventGetCombatSettings_Parms
	{
		UNarrativeCombatDeveloperSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "//BP getter for combat Settings. \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "BP getter for combat Settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetCombatSettings_Parms, ReturnValue), Z_Construct_UClass_UNarrativeCombatDeveloperSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetCombatSettings", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::ArsenalStatics_eventGetCombatSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::ArsenalStatics_eventGetCombatSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetCombatSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetCombatSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeCombatDeveloperSettings**)Z_Param__Result=UArsenalStatics::GetCombatSettings();
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetCombatSettings

// Begin Class UArsenalStatics Function GetGameEntryMapName
struct Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics
{
	struct ArsenalStatics_eventGetGameEntryMapName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Return the game entry map name defined in the Narrative Pro settings. \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Return the game entry map name defined in the Narrative Pro settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetGameEntryMapName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetGameEntryMapName", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::ArsenalStatics_eventGetGameEntryMapName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::ArsenalStatics_eventGetGameEntryMapName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetGameEntryMapName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UArsenalStatics::GetGameEntryMapName();
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetGameEntryMapName

// Begin Class UArsenalStatics Function GetGameplayDifficultyLevel
struct Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics
{
	struct ArsenalStatics_eventGetGameplayDifficultyLevel_Parms
	{
		ENarrativeGameplayDifficulty ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Return the current gameplay difficulty level\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Return the current gameplay difficulty level" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetGameplayDifficultyLevel_Parms, ReturnValue), Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty, METADATA_PARAMS(0, nullptr) }; // 4013433520
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetGameplayDifficultyLevel", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::ArsenalStatics_eventGetGameplayDifficultyLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::ArsenalStatics_eventGetGameplayDifficultyLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetGameplayDifficultyLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ENarrativeGameplayDifficulty*)Z_Param__Result=UArsenalStatics::GetGameplayDifficultyLevel();
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetGameplayDifficultyLevel

// Begin Class UArsenalStatics Function GetGameplayHUD
struct Z_Construct_UFunction_UArsenalStatics_GetGameplayHUD_Statics
{
	struct ArsenalStatics_eventGetGameplayHUD_Parms
	{
		const UObject* WorldContextObject;
		UNarrativeGameplayHUD* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//Quickly get the gameplay HUD from the local player. \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Quickly get the gameplay HUD from the local player." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetGameplayHUD_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetGameplayHUD_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetGameplayHUD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetGameplayHUD_Parms, ReturnValue), Z_Construct_UClass_UNarrativeGameplayHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetGameplayHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetGameplayHUD_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetGameplayHUD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameplayHUD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetGameplayHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetGameplayHUD", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetGameplayHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameplayHUD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetGameplayHUD_Statics::ArsenalStatics_eventGetGameplayHUD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameplayHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetGameplayHUD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetGameplayHUD_Statics::ArsenalStatics_eventGetGameplayHUD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetGameplayHUD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetGameplayHUD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetGameplayHUD)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeGameplayHUD**)Z_Param__Result=UArsenalStatics::GetGameplayHUD(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetGameplayHUD

// Begin Class UArsenalStatics Function GetGameResolution
struct Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics
{
	struct ArsenalStatics_eventGetGameResolution_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Resolution" },
		{ "Comment", "//Return the current screen resolution\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Return the current screen resolution" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetGameResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetGameResolution", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::ArsenalStatics_eventGetGameResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::ArsenalStatics_eventGetGameResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetGameResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetGameResolution)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UArsenalStatics::GetGameResolution();
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetGameResolution

// Begin Class UArsenalStatics Function GetNarrativeGameMode
struct Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics
{
	struct ArsenalStatics_eventGetNarrativeGameMode_Parms
	{
		const UObject* WorldContextObject;
		ANarrativeGameMode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//Get the narrative game mode\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Get the narrative game mode" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetNarrativeGameMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetNarrativeGameMode_Parms, ReturnValue), Z_Construct_UClass_ANarrativeGameMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetNarrativeGameMode", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::ArsenalStatics_eventGetNarrativeGameMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::ArsenalStatics_eventGetNarrativeGameMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetNarrativeGameMode)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANarrativeGameMode**)Z_Param__Result=UArsenalStatics::GetNarrativeGameMode(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetNarrativeGameMode

// Begin Class UArsenalStatics Function GetNarrativeGameState
struct Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics
{
	struct ArsenalStatics_eventGetNarrativeGameState_Parms
	{
		const UObject* WorldContextObject;
		ANarrativeGameState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//Get the narrative game state\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Get the narrative game state" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetNarrativeGameState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetNarrativeGameState_Parms, ReturnValue), Z_Construct_UClass_ANarrativeGameState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetNarrativeGameState", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::ArsenalStatics_eventGetNarrativeGameState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::ArsenalStatics_eventGetNarrativeGameState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetNarrativeGameState)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANarrativeGameState**)Z_Param__Result=UArsenalStatics::GetNarrativeGameState(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetNarrativeGameState

// Begin Class UArsenalStatics Function GetNarrativeGameUserSettings
struct Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics
{
	struct ArsenalStatics_eventGetNarrativeGameUserSettings_Parms
	{
		UNarrativeGameUserSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Return the narrative game user settings\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Return the narrative game user settings" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetNarrativeGameUserSettings_Parms, ReturnValue), Z_Construct_UClass_UNarrativeGameUserSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetNarrativeGameUserSettings", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::ArsenalStatics_eventGetNarrativeGameUserSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::ArsenalStatics_eventGetNarrativeGameUserSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetNarrativeGameUserSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeGameUserSettings**)Z_Param__Result=UArsenalStatics::GetNarrativeGameUserSettings();
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetNarrativeGameUserSettings

// Begin Class UArsenalStatics Function GetNarrativeProSettings
struct Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics
{
	struct ArsenalStatics_eventGetNarrativeProSettings_Parms
	{
		UArsenalSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Return the narrative pro settings with the values configured in your DefaultEngine.ini file.  \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Return the narrative pro settings with the values configured in your DefaultEngine.ini file." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetNarrativeProSettings_Parms, ReturnValue), Z_Construct_UClass_UArsenalSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetNarrativeProSettings", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::ArsenalStatics_eventGetNarrativeProSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::ArsenalStatics_eventGetNarrativeProSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetNarrativeProSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArsenalSettings**)Z_Param__Result=UArsenalStatics::GetNarrativeProSettings();
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetNarrativeProSettings

// Begin Class UArsenalStatics Function GetNarrativeUISettings
struct Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics
{
	struct ArsenalStatics_eventGetNarrativeUISettings_Parms
	{
		UNarrativeUIDeveloperSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "//BP getter for UI Settings.  \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "BP getter for UI Settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetNarrativeUISettings_Parms, ReturnValue), Z_Construct_UClass_UNarrativeUIDeveloperSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetNarrativeUISettings", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::ArsenalStatics_eventGetNarrativeUISettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::ArsenalStatics_eventGetNarrativeUISettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetNarrativeUISettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeUIDeveloperSettings**)Z_Param__Result=UArsenalStatics::GetNarrativeUISettings();
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetNarrativeUISettings

// Begin Class UArsenalStatics Function GetTimeOfDay
struct Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics
{
	struct ArsenalStatics_eventGetTimeOfDay_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//Get the ingame time of day \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Get the ingame time of day" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetTimeOfDay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetTimeOfDay_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetTimeOfDay", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::ArsenalStatics_eventGetTimeOfDay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::ArsenalStatics_eventGetTimeOfDay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetTimeOfDay)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UArsenalStatics::GetTimeOfDay(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetTimeOfDay

// Begin Class UArsenalStatics Function GetTimeOfDayAsString
struct Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics
{
	struct ArsenalStatics_eventGetTimeOfDayAsString_Parms
	{
		const UObject* WorldContextObject;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//Get the ingame time of day, formatted as a string ie 16:35\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Get the ingame time of day, formatted as a string ie 16:35" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetTimeOfDayAsString_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetTimeOfDayAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetTimeOfDayAsString", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::ArsenalStatics_eventGetTimeOfDayAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::ArsenalStatics_eventGetTimeOfDayAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetTimeOfDayAsString)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UArsenalStatics::GetTimeOfDayAsString(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetTimeOfDayAsString

// Begin Class UArsenalStatics Function GetTimeOfDaySettings
struct Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics
{
	struct ArsenalStatics_eventGetTimeOfDaySettings_Parms
	{
		UNarrativeTimeOfDaySettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Return the time of day settings with the values configured in your DefaultGame.ini file.  \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Return the time of day settings with the values configured in your DefaultGame.ini file." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetTimeOfDaySettings_Parms, ReturnValue), Z_Construct_UClass_UNarrativeTimeOfDaySettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetTimeOfDaySettings", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::ArsenalStatics_eventGetTimeOfDaySettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::ArsenalStatics_eventGetTimeOfDaySettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetTimeOfDaySettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeTimeOfDaySettings**)Z_Param__Result=UArsenalStatics::GetTimeOfDaySettings();
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetTimeOfDaySettings

// Begin Class UArsenalStatics Function GetTotalAccumulatedTime
struct Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics
{
	struct ArsenalStatics_eventGetTotalAccumulatedTime_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//Get the total accumulated time since the player started playing the game, where 2400 is one full ingame day. \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Get the total accumulated time since the player started playing the game, where 2400 is one full ingame day." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetTotalAccumulatedTime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetTotalAccumulatedTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetTotalAccumulatedTime", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::ArsenalStatics_eventGetTotalAccumulatedTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::ArsenalStatics_eventGetTotalAccumulatedTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetTotalAccumulatedTime)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UArsenalStatics::GetTotalAccumulatedTime(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetTotalAccumulatedTime

// Begin Class UArsenalStatics Function IsObjectInEditorViewportWorld
struct Z_Construct_UFunction_UArsenalStatics_IsObjectInEditorViewportWorld_Statics
{
	struct ArsenalStatics_eventIsObjectInEditorViewportWorld_Parms
	{
		UObject* Object;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//Lets us check whether a given objects world type is editor or PIE etc \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Lets us check whether a given objects world type is editor or PIE etc" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_IsObjectInEditorViewportWorld_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventIsObjectInEditorViewportWorld_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UArsenalStatics_IsObjectInEditorViewportWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArsenalStatics_eventIsObjectInEditorViewportWorld_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArsenalStatics_IsObjectInEditorViewportWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArsenalStatics_eventIsObjectInEditorViewportWorld_Parms), &Z_Construct_UFunction_UArsenalStatics_IsObjectInEditorViewportWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_IsObjectInEditorViewportWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_IsObjectInEditorViewportWorld_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_IsObjectInEditorViewportWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsObjectInEditorViewportWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_IsObjectInEditorViewportWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "IsObjectInEditorViewportWorld", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_IsObjectInEditorViewportWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsObjectInEditorViewportWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_IsObjectInEditorViewportWorld_Statics::ArsenalStatics_eventIsObjectInEditorViewportWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsObjectInEditorViewportWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_IsObjectInEditorViewportWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_IsObjectInEditorViewportWorld_Statics::ArsenalStatics_eventIsObjectInEditorViewportWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_IsObjectInEditorViewportWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_IsObjectInEditorViewportWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execIsObjectInEditorViewportWorld)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UArsenalStatics::IsObjectInEditorViewportWorld(Z_Param_Object);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function IsObjectInEditorViewportWorld

// Begin Class UArsenalStatics Function IsObjectOwnedByNPC
struct Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC_Statics
{
	struct ArsenalStatics_eventIsObjectOwnedByNPC_Parms
	{
		const UObject* TestObject;
		UNPCDefinition* NPCDefinition;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Development" },
		{ "Comment", "//Test is the object is owned by an NPC with the specified definition\n" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Test is the object is owned by an NPC with the specified definition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCDefinition;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC_Statics::NewProp_TestObject = { "TestObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventIsObjectOwnedByNPC_Parms, TestObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestObject_MetaData), NewProp_TestObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC_Statics::NewProp_NPCDefinition = { "NPCDefinition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventIsObjectOwnedByNPC_Parms, NPCDefinition), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArsenalStatics_eventIsObjectOwnedByNPC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArsenalStatics_eventIsObjectOwnedByNPC_Parms), &Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC_Statics::NewProp_TestObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC_Statics::NewProp_NPCDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "IsObjectOwnedByNPC", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC_Statics::ArsenalStatics_eventIsObjectOwnedByNPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC_Statics::ArsenalStatics_eventIsObjectOwnedByNPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execIsObjectOwnedByNPC)
{
	P_GET_OBJECT(UObject,Z_Param_TestObject);
	P_GET_OBJECT(UNPCDefinition,Z_Param_NPCDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UArsenalStatics::IsObjectOwnedByNPC(Z_Param_TestObject,Z_Param_NPCDefinition);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function IsObjectOwnedByNPC

// Begin Class UArsenalStatics Function IsSameTeam
struct Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics
{
	struct ArsenalStatics_eventIsSameTeam_Parms
	{
		const AActor* TestActor;
		const AActor* Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "//Checks we're the same team, not just that we're friendly with each other.\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Checks we're the same team, not just that we're friendly with each other." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::NewProp_TestActor = { "TestActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventIsSameTeam_Parms, TestActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestActor_MetaData), NewProp_TestActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventIsSameTeam_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
void Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArsenalStatics_eventIsSameTeam_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArsenalStatics_eventIsSameTeam_Parms), &Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::NewProp_TestActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "IsSameTeam", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::ArsenalStatics_eventIsSameTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::ArsenalStatics_eventIsSameTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_IsSameTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execIsSameTeam)
{
	P_GET_OBJECT(AActor,Z_Param_TestActor);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UArsenalStatics::IsSameTeam(Z_Param_TestActor,Z_Param_Target);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function IsSameTeam

// Begin Class UArsenalStatics Function IsTimeInRange
struct Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics
{
	struct ArsenalStatics_eventIsTimeInRange_Parms
	{
		float Time;
		float RangeStart;
		float RangeEnd;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//check if the time of day provided falls in the given range - handles looping over to the next day \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "check if the time of day provided falls in the given range - handles looping over to the next day" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeStart_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeEnd;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventIsTimeInRange_Parms, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventIsTimeInRange_Parms, RangeStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeStart_MetaData), NewProp_RangeStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventIsTimeInRange_Parms, RangeEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeEnd_MetaData), NewProp_RangeEnd_MetaData) };
void Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArsenalStatics_eventIsTimeInRange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArsenalStatics_eventIsTimeInRange_Parms), &Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::NewProp_RangeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::NewProp_RangeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "IsTimeInRange", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::ArsenalStatics_eventIsTimeInRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::ArsenalStatics_eventIsTimeInRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_IsTimeInRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execIsTimeInRange)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RangeStart);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RangeEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UArsenalStatics::IsTimeInRange(Z_Param_Time,Z_Param_RangeStart,Z_Param_RangeEnd);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function IsTimeInRange

// Begin Class UArsenalStatics Function IsWithEditor
struct Z_Construct_UFunction_UArsenalStatics_IsWithEditor_Statics
{
	struct ArsenalStatics_eventIsWithEditor_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//Lets us check whether we're currently with the editor, or false if we're in a packaged game\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Lets us check whether we're currently with the editor, or false if we're in a packaged game" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UArsenalStatics_IsWithEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArsenalStatics_eventIsWithEditor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArsenalStatics_IsWithEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArsenalStatics_eventIsWithEditor_Parms), &Z_Construct_UFunction_UArsenalStatics_IsWithEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_IsWithEditor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_IsWithEditor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsWithEditor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_IsWithEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "IsWithEditor", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_IsWithEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsWithEditor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_IsWithEditor_Statics::ArsenalStatics_eventIsWithEditor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsWithEditor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_IsWithEditor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_IsWithEditor_Statics::ArsenalStatics_eventIsWithEditor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_IsWithEditor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_IsWithEditor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execIsWithEditor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UArsenalStatics::IsWithEditor();
	P_NATIVE_END;
}
// End Class UArsenalStatics Function IsWithEditor

// Begin Class UArsenalStatics Function PushHUDNotification
struct Z_Construct_UFunction_UArsenalStatics_PushHUDNotification_Statics
{
	struct ArsenalStatics_eventPushHUDNotification_Parms
	{
		const UObject* WorldContextObject;
		FText Message;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Common UI" },
		{ "Comment", "//Add a notification to the Narrative HUD, provided one has been created \n" },
		{ "CPP_Default_Duration", "5.000000" },
		{ "DisplayName", "Show Narrative HUD Notification" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Add a notification to the Narrative HUD, provided one has been created" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_PushHUDNotification_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventPushHUDNotification_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UArsenalStatics_PushHUDNotification_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventPushHUDNotification_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArsenalStatics_PushHUDNotification_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventPushHUDNotification_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_PushHUDNotification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_PushHUDNotification_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_PushHUDNotification_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_PushHUDNotification_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_PushHUDNotification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_PushHUDNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "PushHUDNotification", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_PushHUDNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_PushHUDNotification_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_PushHUDNotification_Statics::ArsenalStatics_eventPushHUDNotification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_PushHUDNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_PushHUDNotification_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_PushHUDNotification_Statics::ArsenalStatics_eventPushHUDNotification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_PushHUDNotification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_PushHUDNotification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execPushHUDNotification)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FTextProperty,Z_Param_Message);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	UArsenalStatics::PushHUDNotification(Z_Param_WorldContextObject,Z_Param_Message,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function PushHUDNotification

// Begin Class UArsenalStatics Function PushMajorHUDNotification
struct Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics
{
	struct ArsenalStatics_eventPushMajorHUDNotification_Parms
	{
		const UObject* WorldContextObject;
		FText Message;
		FText Subtitle;
		float Duration;
		bool bOverrideCurrentNotification;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Common UI" },
		{ "Comment", "//Add a major notification to the Narrative HUD, provided one has been created \n" },
		{ "CPP_Default_bOverrideCurrentNotification", "true" },
		{ "CPP_Default_Duration", "5.000000" },
		{ "DisplayName", "Show Major Narrative HUD Notification" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Add a major notification to the Narrative HUD, provided one has been created" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCurrentNotification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Subtitle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_bOverrideCurrentNotification_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCurrentNotification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventPushMajorHUDNotification_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventPushMajorHUDNotification_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventPushMajorHUDNotification_Parms, Subtitle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventPushMajorHUDNotification_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
void Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::NewProp_bOverrideCurrentNotification_SetBit(void* Obj)
{
	((ArsenalStatics_eventPushMajorHUDNotification_Parms*)Obj)->bOverrideCurrentNotification = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::NewProp_bOverrideCurrentNotification = { "bOverrideCurrentNotification", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArsenalStatics_eventPushMajorHUDNotification_Parms), &Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::NewProp_bOverrideCurrentNotification_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCurrentNotification_MetaData), NewProp_bOverrideCurrentNotification_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::NewProp_Subtitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::NewProp_bOverrideCurrentNotification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "PushMajorHUDNotification", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::ArsenalStatics_eventPushMajorHUDNotification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::ArsenalStatics_eventPushMajorHUDNotification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execPushMajorHUDNotification)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FTextProperty,Z_Param_Message);
	P_GET_PROPERTY(FTextProperty,Z_Param_Subtitle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_UBOOL(Z_Param_bOverrideCurrentNotification);
	P_FINISH;
	P_NATIVE_BEGIN;
	UArsenalStatics::PushMajorHUDNotification(Z_Param_WorldContextObject,Z_Param_Message,Z_Param_Subtitle,Z_Param_Duration,Z_Param_bOverrideCurrentNotification);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function PushMajorHUDNotification

// Begin Class UArsenalStatics Function RemoveFactionsFromActor
struct Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics
{
	struct ArsenalStatics_eventRemoveFactionsFromActor_Parms
	{
		AActor* Actor;
		FGameplayTagContainer Factions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "//remove the actor from the given factions, provided it implements the team interface. \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "remove the actor from the given factions, provided it implements the team interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Factions_MetaData[] = {
		{ "Categories", "Narrative.Factions" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Factions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventRemoveFactionsFromActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::NewProp_Factions = { "Factions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventRemoveFactionsFromActor_Parms, Factions), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Factions_MetaData), NewProp_Factions_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::NewProp_Factions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "RemoveFactionsFromActor", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::ArsenalStatics_eventRemoveFactionsFromActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::ArsenalStatics_eventRemoveFactionsFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execRemoveFactionsFromActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Factions);
	P_FINISH;
	P_NATIVE_BEGIN;
	UArsenalStatics::RemoveFactionsFromActor(Z_Param_Actor,Z_Param_Out_Factions);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function RemoveFactionsFromActor

// Begin Class UArsenalStatics Function RemoveLooseGameplayTagsCount
struct Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics
{
	struct ArsenalStatics_eventRemoveLooseGameplayTagsCount_Parms
	{
		AActor* Actor;
		FGameplayTagContainer GameplayTags;
		bool bShouldReplicate;
		int32 Count;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GAS" },
		{ "Comment", "//Add a number of gameplay tags to our ASC. Can skip adding if we already have the tag. \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Add a number of gameplay tags to our ASC. Can skip adding if we already have the tag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static void NewProp_bShouldReplicate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldReplicate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventRemoveLooseGameplayTagsCount_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventRemoveLooseGameplayTagsCount_Parms, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
void Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::NewProp_bShouldReplicate_SetBit(void* Obj)
{
	((ArsenalStatics_eventRemoveLooseGameplayTagsCount_Parms*)Obj)->bShouldReplicate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::NewProp_bShouldReplicate = { "bShouldReplicate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArsenalStatics_eventRemoveLooseGameplayTagsCount_Parms), &Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::NewProp_bShouldReplicate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventRemoveLooseGameplayTagsCount_Parms, Count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArsenalStatics_eventRemoveLooseGameplayTagsCount_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArsenalStatics_eventRemoveLooseGameplayTagsCount_Parms), &Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::NewProp_bShouldReplicate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "RemoveLooseGameplayTagsCount", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::ArsenalStatics_eventRemoveLooseGameplayTagsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::ArsenalStatics_eventRemoveLooseGameplayTagsCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execRemoveLooseGameplayTagsCount)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_GameplayTags);
	P_GET_UBOOL(Z_Param_bShouldReplicate);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UArsenalStatics::RemoveLooseGameplayTagsCount(Z_Param_Actor,Z_Param_Out_GameplayTags,Z_Param_bShouldReplicate,Z_Param_Count);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function RemoveLooseGameplayTagsCount

// Begin Class UArsenalStatics Function ReplaceInputVariables
struct Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics
{
	struct ArsenalStatics_eventReplaceInputVariables_Parms
	{
		ANarrativePlayerController* PC;
		FText TextToReplace;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wildcards" },
		{ "Comment", "//Given some text, replace any {Input.Interact} style inputs with their rich text platform specific icon equivalents, ie {Input.Attack} becomes <img id=Input.Xbox.Attack/>\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Given some text, replace any {Input.Interact} style inputs with their rich text platform specific icon equivalents, ie {Input.Attack} becomes <img id=Input.Xbox.Attack/>" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TextToReplace;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventReplaceInputVariables_Parms, PC), Z_Construct_UClass_ANarrativePlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::NewProp_TextToReplace = { "TextToReplace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventReplaceInputVariables_Parms, TextToReplace), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventReplaceInputVariables_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::NewProp_PC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::NewProp_TextToReplace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "ReplaceInputVariables", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::ArsenalStatics_eventReplaceInputVariables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::ArsenalStatics_eventReplaceInputVariables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execReplaceInputVariables)
{
	P_GET_OBJECT(ANarrativePlayerController,Z_Param_PC);
	P_GET_PROPERTY(FTextProperty,Z_Param_TextToReplace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=UArsenalStatics::ReplaceInputVariables(Z_Param_PC,Z_Param_TextToReplace);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function ReplaceInputVariables

// Begin Class UArsenalStatics Function SortObjectArray_Comparator
struct Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics
{
	struct ArsenalStatics_eventSortObjectArray_Comparator_Parms
	{
		TArray<UObject*> ObjectArray;
		FScriptDelegate Comparator;
		bool bReverse;
		TArray<UObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "Comment", "//Sorts an array using a function so BP can easily sort object arrays!\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Sorts an array using a function so BP can easily sort object arrays!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectArray_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectArray;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Comparator;
	static void NewProp_bReverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::NewProp_ObjectArray_Inner = { "ObjectArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::NewProp_ObjectArray = { "ObjectArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventSortObjectArray_Comparator_Parms, ObjectArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectArray_MetaData), NewProp_ObjectArray_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::NewProp_Comparator = { "Comparator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventSortObjectArray_Comparator_Parms, Comparator), Z_Construct_UDelegateFunction_NarrativeArsenal_ObjectComparator__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 339748443
void Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::NewProp_bReverse_SetBit(void* Obj)
{
	((ArsenalStatics_eventSortObjectArray_Comparator_Parms*)Obj)->bReverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArsenalStatics_eventSortObjectArray_Comparator_Parms), &Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverse_MetaData), NewProp_bReverse_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventSortObjectArray_Comparator_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::NewProp_ObjectArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::NewProp_ObjectArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::NewProp_Comparator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::NewProp_bReverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "SortObjectArray_Comparator", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::ArsenalStatics_eventSortObjectArray_Comparator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::ArsenalStatics_eventSortObjectArray_Comparator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execSortObjectArray_Comparator)
{
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_ObjectArray);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Comparator);
	P_GET_UBOOL(Z_Param_bReverse);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UObject*>*)Z_Param__Result=UArsenalStatics::SortObjectArray_Comparator(Z_Param_Out_ObjectArray,FObjectComparator(Z_Param_Comparator),Z_Param_bReverse);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function SortObjectArray_Comparator

// Begin Class UArsenalStatics Function TimeToString
struct Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics
{
	struct ArsenalStatics_eventTimeToString_Parms
	{
		float Time;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//Convert the float time into a 24 hour string\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Convert the float time into a 24 hour string" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventTimeToString_Parms, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventTimeToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "TimeToString", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::ArsenalStatics_eventTimeToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::ArsenalStatics_eventTimeToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_TimeToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execTimeToString)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UArsenalStatics::TimeToString(Z_Param_Time);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function TimeToString

// Begin Class UArsenalStatics
void UArsenalStatics::StaticRegisterNativesUArsenalStatics()
{
	UClass* Class = UArsenalStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddFactionsToActor", &UArsenalStatics::execAddFactionsToActor },
		{ "AddLooseGameplayTagsCount", &UArsenalStatics::execAddLooseGameplayTagsCount },
		{ "CheckPathExists", &UArsenalStatics::execCheckPathExists },
		{ "GetActorFactions", &UArsenalStatics::execGetActorFactions },
		{ "GetAttitude", &UArsenalStatics::execGetAttitude },
		{ "GetCharacterCreatorMapName", &UArsenalStatics::execGetCharacterCreatorMapName },
		{ "GetCombatSettings", &UArsenalStatics::execGetCombatSettings },
		{ "GetGameEntryMapName", &UArsenalStatics::execGetGameEntryMapName },
		{ "GetGameplayDifficultyLevel", &UArsenalStatics::execGetGameplayDifficultyLevel },
		{ "GetGameplayHUD", &UArsenalStatics::execGetGameplayHUD },
		{ "GetGameResolution", &UArsenalStatics::execGetGameResolution },
		{ "GetNarrativeGameMode", &UArsenalStatics::execGetNarrativeGameMode },
		{ "GetNarrativeGameState", &UArsenalStatics::execGetNarrativeGameState },
		{ "GetNarrativeGameUserSettings", &UArsenalStatics::execGetNarrativeGameUserSettings },
		{ "GetNarrativeProSettings", &UArsenalStatics::execGetNarrativeProSettings },
		{ "GetNarrativeUISettings", &UArsenalStatics::execGetNarrativeUISettings },
		{ "GetTimeOfDay", &UArsenalStatics::execGetTimeOfDay },
		{ "GetTimeOfDayAsString", &UArsenalStatics::execGetTimeOfDayAsString },
		{ "GetTimeOfDaySettings", &UArsenalStatics::execGetTimeOfDaySettings },
		{ "GetTotalAccumulatedTime", &UArsenalStatics::execGetTotalAccumulatedTime },
		{ "IsObjectInEditorViewportWorld", &UArsenalStatics::execIsObjectInEditorViewportWorld },
		{ "IsObjectOwnedByNPC", &UArsenalStatics::execIsObjectOwnedByNPC },
		{ "IsSameTeam", &UArsenalStatics::execIsSameTeam },
		{ "IsTimeInRange", &UArsenalStatics::execIsTimeInRange },
		{ "IsWithEditor", &UArsenalStatics::execIsWithEditor },
		{ "PushHUDNotification", &UArsenalStatics::execPushHUDNotification },
		{ "PushMajorHUDNotification", &UArsenalStatics::execPushMajorHUDNotification },
		{ "RemoveFactionsFromActor", &UArsenalStatics::execRemoveFactionsFromActor },
		{ "RemoveLooseGameplayTagsCount", &UArsenalStatics::execRemoveLooseGameplayTagsCount },
		{ "ReplaceInputVariables", &UArsenalStatics::execReplaceInputVariables },
		{ "SortObjectArray_Comparator", &UArsenalStatics::execSortObjectArray_Comparator },
		{ "TimeToString", &UArsenalStatics::execTimeToString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArsenalStatics);
UClass* Z_Construct_UClass_UArsenalStatics_NoRegister()
{
	return UArsenalStatics::StaticClass();
}
struct Z_Construct_UClass_UArsenalStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Useful BP exposed functions for Narrative Pro. \n */" },
		{ "IncludePath", "ArsenalStatics.h" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Useful BP exposed functions for Narrative Pro." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor, "AddFactionsToActor" }, // 3100570937
		{ &Z_Construct_UFunction_UArsenalStatics_AddLooseGameplayTagsCount, "AddLooseGameplayTagsCount" }, // 2166776055
		{ &Z_Construct_UFunction_UArsenalStatics_CheckPathExists, "CheckPathExists" }, // 1714005706
		{ &Z_Construct_UFunction_UArsenalStatics_GetActorFactions, "GetActorFactions" }, // 1154556212
		{ &Z_Construct_UFunction_UArsenalStatics_GetAttitude, "GetAttitude" }, // 3736357463
		{ &Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName, "GetCharacterCreatorMapName" }, // 1264302251
		{ &Z_Construct_UFunction_UArsenalStatics_GetCombatSettings, "GetCombatSettings" }, // 2673802078
		{ &Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName, "GetGameEntryMapName" }, // 3448834121
		{ &Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel, "GetGameplayDifficultyLevel" }, // 2440246040
		{ &Z_Construct_UFunction_UArsenalStatics_GetGameplayHUD, "GetGameplayHUD" }, // 3379221448
		{ &Z_Construct_UFunction_UArsenalStatics_GetGameResolution, "GetGameResolution" }, // 306135454
		{ &Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode, "GetNarrativeGameMode" }, // 2261127101
		{ &Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState, "GetNarrativeGameState" }, // 1094295193
		{ &Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings, "GetNarrativeGameUserSettings" }, // 338520600
		{ &Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings, "GetNarrativeProSettings" }, // 2359277252
		{ &Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings, "GetNarrativeUISettings" }, // 494267421
		{ &Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay, "GetTimeOfDay" }, // 2061560295
		{ &Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString, "GetTimeOfDayAsString" }, // 1282030102
		{ &Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings, "GetTimeOfDaySettings" }, // 2265504151
		{ &Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime, "GetTotalAccumulatedTime" }, // 172786774
		{ &Z_Construct_UFunction_UArsenalStatics_IsObjectInEditorViewportWorld, "IsObjectInEditorViewportWorld" }, // 2508028225
		{ &Z_Construct_UFunction_UArsenalStatics_IsObjectOwnedByNPC, "IsObjectOwnedByNPC" }, // 2207708607
		{ &Z_Construct_UFunction_UArsenalStatics_IsSameTeam, "IsSameTeam" }, // 2741074797
		{ &Z_Construct_UFunction_UArsenalStatics_IsTimeInRange, "IsTimeInRange" }, // 3413024601
		{ &Z_Construct_UFunction_UArsenalStatics_IsWithEditor, "IsWithEditor" }, // 3751118720
		{ &Z_Construct_UFunction_UArsenalStatics_PushHUDNotification, "PushHUDNotification" }, // 3684879987
		{ &Z_Construct_UFunction_UArsenalStatics_PushMajorHUDNotification, "PushMajorHUDNotification" }, // 3881337441
		{ &Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor, "RemoveFactionsFromActor" }, // 475974797
		{ &Z_Construct_UFunction_UArsenalStatics_RemoveLooseGameplayTagsCount, "RemoveLooseGameplayTagsCount" }, // 2984847907
		{ &Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables, "ReplaceInputVariables" }, // 490044143
		{ &Z_Construct_UFunction_UArsenalStatics_SortObjectArray_Comparator, "SortObjectArray_Comparator" }, // 1346261444
		{ &Z_Construct_UFunction_UArsenalStatics_TimeToString, "TimeToString" }, // 3424684644
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArsenalStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArsenalStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArsenalStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArsenalStatics_Statics::ClassParams = {
	&UArsenalStatics::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArsenalStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UArsenalStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArsenalStatics()
{
	if (!Z_Registration_Info_UClass_UArsenalStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArsenalStatics.OuterSingleton, Z_Construct_UClass_UArsenalStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArsenalStatics.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UArsenalStatics>()
{
	return UArsenalStatics::StaticClass();
}
UArsenalStatics::UArsenalStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArsenalStatics);
UArsenalStatics::~UArsenalStatics() {}
// End Class UArsenalStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArsenalStatics, UArsenalStatics::StaticClass, TEXT("UArsenalStatics"), &Z_Registration_Info_UClass_UArsenalStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArsenalStatics), 2103838506U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_2035743583(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
