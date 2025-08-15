// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/NarrativeCharacterSubsystem.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativeNPCCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCharacterSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterDefinition_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCharacterSubsystem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCharacterSubsystem_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCDefinition_NoRegister();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterArray();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FNPCArray();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FNPCSpawnParams();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Delegate FOnRequestedNPCSpawned
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnRequestedNPCSpawned_Parms
	{
		const UNPCDefinition* NPCData;
		ANarrativeNPCCharacter* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Called when a requested NPC was spawned. This is because spawning is deferred since we do it async, we don't do it immediately \n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeCharacterSubsystem.h" },
		{ "ToolTip", "Called when a requested NPC was spawned. This is because spawning is deferred since we do it async, we don't do it immediately" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::NewProp_NPCData = { "NPCData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnRequestedNPCSpawned_Parms, NPCData), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCData_MetaData), NewProp_NPCData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnRequestedNPCSpawned_Parms, Character), Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::NewProp_NPCData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnRequestedNPCSpawned__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnRequestedNPCSpawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnRequestedNPCSpawned_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestedNPCSpawned_DelegateWrapper(const FMulticastScriptDelegate& OnRequestedNPCSpawned, const UNPCDefinition* NPCData, ANarrativeNPCCharacter* Character)
{
	struct _Script_NarrativeArsenal_eventOnRequestedNPCSpawned_Parms
	{
		const UNPCDefinition* NPCData;
		ANarrativeNPCCharacter* Character;
	};
	_Script_NarrativeArsenal_eventOnRequestedNPCSpawned_Parms Parms;
	Parms.NPCData=NPCData;
	Parms.Character=Character;
	OnRequestedNPCSpawned.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRequestedNPCSpawned

// Begin ScriptStruct FCharacterArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterArray;
class UScriptStruct* FCharacterArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterArray, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("CharacterArray"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterArray.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FCharacterArray>()
{
	return FCharacterArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//Wraps a TArray of NPCs. We need to wrap as TMap cant have TArray as value, but can have struct. \n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeCharacterSubsystem.h" },
		{ "ToolTip", "Wraps a TArray of NPCs. We need to wrap as TMap cant have TArray as value, but can have struct." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"CharacterArray",
	nullptr,
	0,
	sizeof(FCharacterArray),
	alignof(FCharacterArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterArray()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterArray.InnerSingleton, Z_Construct_UScriptStruct_FCharacterArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterArray.InnerSingleton;
}
// End ScriptStruct FCharacterArray

// Begin ScriptStruct FNPCArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NPCArray;
class UScriptStruct* FNPCArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NPCArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NPCArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNPCArray, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("NPCArray"));
	}
	return Z_Registration_Info_UScriptStruct_NPCArray.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FNPCArray>()
{
	return FNPCArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNPCArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//Wraps a TArray of NPCs. We need to wrap as TMap cant have TArray as value, but can have struct. \n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeCharacterSubsystem.h" },
		{ "ToolTip", "Wraps a TArray of NPCs. We need to wrap as TMap cant have TArray as value, but can have struct." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNPCArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNPCArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"NPCArray",
	nullptr,
	0,
	sizeof(FNPCArray),
	alignof(FNPCArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNPCArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNPCArray()
{
	if (!Z_Registration_Info_UScriptStruct_NPCArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NPCArray.InnerSingleton, Z_Construct_UScriptStruct_FNPCArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NPCArray.InnerSingleton;
}
// End ScriptStruct FNPCArray

// Begin Class UNarrativeCharacterSubsystem Function DestroyNPC
struct Z_Construct_UFunction_UNarrativeCharacterSubsystem_DestroyNPC_Statics
{
	struct NarrativeCharacterSubsystem_eventDestroyNPC_Parms
	{
		ANarrativeNPCCharacter* NPC;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Subsystem" },
		{ "Comment", "//Despawn an NPC. \n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeCharacterSubsystem.h" },
		{ "ToolTip", "Despawn an NPC." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPC;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_DestroyNPC_Statics::NewProp_NPC = { "NPC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventDestroyNPC_Parms, NPC), Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeCharacterSubsystem_DestroyNPC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeCharacterSubsystem_eventDestroyNPC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_DestroyNPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacterSubsystem_eventDestroyNPC_Parms), &Z_Construct_UFunction_UNarrativeCharacterSubsystem_DestroyNPC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterSubsystem_DestroyNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_DestroyNPC_Statics::NewProp_NPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_DestroyNPC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_DestroyNPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_DestroyNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterSubsystem, nullptr, "DestroyNPC", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterSubsystem_DestroyNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_DestroyNPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_DestroyNPC_Statics::NarrativeCharacterSubsystem_eventDestroyNPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_DestroyNPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterSubsystem_DestroyNPC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_DestroyNPC_Statics::NarrativeCharacterSubsystem_eventDestroyNPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterSubsystem_DestroyNPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterSubsystem_DestroyNPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterSubsystem::execDestroyNPC)
{
	P_GET_OBJECT(ANarrativeNPCCharacter,Z_Param_NPC);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DestroyNPC(Z_Param_NPC);
	P_NATIVE_END;
}
// End Class UNarrativeCharacterSubsystem Function DestroyNPC

// Begin Class UNarrativeCharacterSubsystem Function FindCharacter
struct Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacter_Statics
{
	struct NarrativeCharacterSubsystem_eventFindCharacter_Parms
	{
		const UCharacterDefinition* CharacterDefinition;
		ANarrativeCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Subsystem" },
		{ "Comment", "/** Return the first character in the world with this definition. Much, much more efficient than a GetActorOfClass.\n\x09""Extremely efficient as characters are cached via a TMap lookup. */" },
		{ "ModuleRelativePath", "Public/AI/NarrativeCharacterSubsystem.h" },
		{ "ToolTip", "Return the first character in the world with this definition. Much, much more efficient than a GetActorOfClass.\n      Extremely efficient as characters are cached via a TMap lookup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterDefinition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacter_Statics::NewProp_CharacterDefinition = { "CharacterDefinition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventFindCharacter_Parms, CharacterDefinition), Z_Construct_UClass_UCharacterDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDefinition_MetaData), NewProp_CharacterDefinition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventFindCharacter_Parms, ReturnValue), Z_Construct_UClass_ANarrativeCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacter_Statics::NewProp_CharacterDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterSubsystem, nullptr, "FindCharacter", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacter_Statics::NarrativeCharacterSubsystem_eventFindCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacter_Statics::NarrativeCharacterSubsystem_eventFindCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterSubsystem::execFindCharacter)
{
	P_GET_OBJECT(UCharacterDefinition,Z_Param_CharacterDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANarrativeCharacter**)Z_Param__Result=P_THIS->FindCharacter(Z_Param_CharacterDefinition);
	P_NATIVE_END;
}
// End Class UNarrativeCharacterSubsystem Function FindCharacter

// Begin Class UNarrativeCharacterSubsystem Function FindCharacters
struct Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacters_Statics
{
	struct NarrativeCharacterSubsystem_eventFindCharacters_Parms
	{
		const UCharacterDefinition* CharacterDefinition;
		TArray<ANarrativeCharacter*> OutActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Subsystem" },
		{ "Comment", "/** Request all Characters of the given type. Much, much more efficient than a GetAllActorsOfClass. \n\x09""Extremely efficient as NPCs are cached via a TMap lookup. */" },
		{ "ModuleRelativePath", "Public/AI/NarrativeCharacterSubsystem.h" },
		{ "ToolTip", "Request all Characters of the given type. Much, much more efficient than a GetAllActorsOfClass.\n      Extremely efficient as NPCs are cached via a TMap lookup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterDefinition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacters_Statics::NewProp_CharacterDefinition = { "CharacterDefinition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventFindCharacters_Parms, CharacterDefinition), Z_Construct_UClass_UCharacterDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDefinition_MetaData), NewProp_CharacterDefinition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacters_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ANarrativeCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacters_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventFindCharacters_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacters_Statics::NewProp_CharacterDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacters_Statics::NewProp_OutActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacters_Statics::NewProp_OutActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterSubsystem, nullptr, "FindCharacters", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacters_Statics::NarrativeCharacterSubsystem_eventFindCharacters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacters_Statics::NarrativeCharacterSubsystem_eventFindCharacters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterSubsystem::execFindCharacters)
{
	P_GET_OBJECT(UCharacterDefinition,Z_Param_CharacterDefinition);
	P_GET_TARRAY_REF(ANarrativeCharacter*,Z_Param_Out_OutActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindCharacters(Z_Param_CharacterDefinition,Z_Param_Out_OutActors);
	P_NATIVE_END;
}
// End Class UNarrativeCharacterSubsystem Function FindCharacters

// Begin Class UNarrativeCharacterSubsystem Function FindNPC
struct Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC_Statics
{
	struct NarrativeCharacterSubsystem_eventFindNPC_Parms
	{
		const UNPCDefinition* NPCData;
		bool bOutSucceeded;
		ANarrativeNPCCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Subsystem" },
		{ "Comment", "/** Return the first NPC in the world with this type. Much, much more efficient than a GetActorOfClass.\n\x09""Extremely efficient as NPCs are cached via a TMap lookup. */" },
		{ "ModuleRelativePath", "Public/AI/NarrativeCharacterSubsystem.h" },
		{ "ToolTip", "Return the first NPC in the world with this type. Much, much more efficient than a GetActorOfClass.\n      Extremely efficient as NPCs are cached via a TMap lookup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCData;
	static void NewProp_bOutSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSucceeded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC_Statics::NewProp_NPCData = { "NPCData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventFindNPC_Parms, NPCData), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCData_MetaData), NewProp_NPCData_MetaData) };
void Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC_Statics::NewProp_bOutSucceeded_SetBit(void* Obj)
{
	((NarrativeCharacterSubsystem_eventFindNPC_Parms*)Obj)->bOutSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC_Statics::NewProp_bOutSucceeded = { "bOutSucceeded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacterSubsystem_eventFindNPC_Parms), &Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC_Statics::NewProp_bOutSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventFindNPC_Parms, ReturnValue), Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC_Statics::NewProp_NPCData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC_Statics::NewProp_bOutSucceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterSubsystem, nullptr, "FindNPC", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC_Statics::NarrativeCharacterSubsystem_eventFindNPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC_Statics::NarrativeCharacterSubsystem_eventFindNPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterSubsystem::execFindNPC)
{
	P_GET_OBJECT(UNPCDefinition,Z_Param_NPCData);
	P_GET_UBOOL_REF(Z_Param_Out_bOutSucceeded);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANarrativeNPCCharacter**)Z_Param__Result=P_THIS->FindNPC(Z_Param_NPCData,Z_Param_Out_bOutSucceeded);
	P_NATIVE_END;
}
// End Class UNarrativeCharacterSubsystem Function FindNPC

// Begin Class UNarrativeCharacterSubsystem Function FindNPCs
struct Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPCs_Statics
{
	struct NarrativeCharacterSubsystem_eventFindNPCs_Parms
	{
		const UNPCDefinition* NPCData;
		TArray<ANarrativeNPCCharacter*> OutActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Subsystem" },
		{ "Comment", "/** Request all NPCs of the given type. Much, much more efficient than a GetAllActorsOfClass. \n\x09""Extremely efficient as NPCs are cached via a TMap lookup. */" },
		{ "ModuleRelativePath", "Public/AI/NarrativeCharacterSubsystem.h" },
		{ "ToolTip", "Request all NPCs of the given type. Much, much more efficient than a GetAllActorsOfClass.\n      Extremely efficient as NPCs are cached via a TMap lookup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPCs_Statics::NewProp_NPCData = { "NPCData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventFindNPCs_Parms, NPCData), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCData_MetaData), NewProp_NPCData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPCs_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPCs_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventFindNPCs_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPCs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPCs_Statics::NewProp_NPCData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPCs_Statics::NewProp_OutActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPCs_Statics::NewProp_OutActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPCs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPCs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterSubsystem, nullptr, "FindNPCs", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPCs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPCs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPCs_Statics::NarrativeCharacterSubsystem_eventFindNPCs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPCs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPCs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPCs_Statics::NarrativeCharacterSubsystem_eventFindNPCs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPCs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPCs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterSubsystem::execFindNPCs)
{
	P_GET_OBJECT(UNPCDefinition,Z_Param_NPCData);
	P_GET_TARRAY_REF(ANarrativeNPCCharacter*,Z_Param_Out_OutActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindNPCs(Z_Param_NPCData,Z_Param_Out_OutActors);
	P_NATIVE_END;
}
// End Class UNarrativeCharacterSubsystem Function FindNPCs

// Begin Class UNarrativeCharacterSubsystem Function FindOrSpawnNPC
struct Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindOrSpawnNPC_Statics
{
	struct NarrativeCharacterSubsystem_eventFindOrSpawnNPC_Parms
	{
		UNPCDefinition* NPCData;
		FTransform Transform;
		ANarrativeNPCCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Subsystem" },
		{ "Comment", "/** Same as spawn NPC, but will just return the NPC should it already exist in the level.  */" },
		{ "CPP_Default_Transform", "()" },
		{ "ModuleRelativePath", "Public/AI/NarrativeCharacterSubsystem.h" },
		{ "ToolTip", "Same as spawn NPC, but will just return the NPC should it already exist in the level." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindOrSpawnNPC_Statics::NewProp_NPCData = { "NPCData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventFindOrSpawnNPC_Parms, NPCData), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindOrSpawnNPC_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventFindOrSpawnNPC_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindOrSpawnNPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventFindOrSpawnNPC_Parms, ReturnValue), Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindOrSpawnNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindOrSpawnNPC_Statics::NewProp_NPCData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindOrSpawnNPC_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindOrSpawnNPC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindOrSpawnNPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindOrSpawnNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterSubsystem, nullptr, "FindOrSpawnNPC", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindOrSpawnNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindOrSpawnNPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindOrSpawnNPC_Statics::NarrativeCharacterSubsystem_eventFindOrSpawnNPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindOrSpawnNPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindOrSpawnNPC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindOrSpawnNPC_Statics::NarrativeCharacterSubsystem_eventFindOrSpawnNPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindOrSpawnNPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindOrSpawnNPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterSubsystem::execFindOrSpawnNPC)
{
	P_GET_OBJECT(UNPCDefinition,Z_Param_NPCData);
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANarrativeNPCCharacter**)Z_Param__Result=P_THIS->FindOrSpawnNPC(Z_Param_NPCData,Z_Param_Transform);
	P_NATIVE_END;
}
// End Class UNarrativeCharacterSubsystem Function FindOrSpawnNPC

// Begin Class UNarrativeCharacterSubsystem Function IsCharacterSpawned
struct Z_Construct_UFunction_UNarrativeCharacterSubsystem_IsCharacterSpawned_Statics
{
	struct NarrativeCharacterSubsystem_eventIsCharacterSpawned_Parms
	{
		const UCharacterDefinition* CharacterDefinition;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Subsystem" },
		{ "Comment", "/**Return whether a given character exists in the world*/" },
		{ "ModuleRelativePath", "Public/AI/NarrativeCharacterSubsystem.h" },
		{ "ToolTip", "Return whether a given character exists in the world" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterDefinition;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_IsCharacterSpawned_Statics::NewProp_CharacterDefinition = { "CharacterDefinition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventIsCharacterSpawned_Parms, CharacterDefinition), Z_Construct_UClass_UCharacterDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDefinition_MetaData), NewProp_CharacterDefinition_MetaData) };
void Z_Construct_UFunction_UNarrativeCharacterSubsystem_IsCharacterSpawned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeCharacterSubsystem_eventIsCharacterSpawned_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_IsCharacterSpawned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacterSubsystem_eventIsCharacterSpawned_Parms), &Z_Construct_UFunction_UNarrativeCharacterSubsystem_IsCharacterSpawned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterSubsystem_IsCharacterSpawned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_IsCharacterSpawned_Statics::NewProp_CharacterDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_IsCharacterSpawned_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_IsCharacterSpawned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_IsCharacterSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterSubsystem, nullptr, "IsCharacterSpawned", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterSubsystem_IsCharacterSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_IsCharacterSpawned_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_IsCharacterSpawned_Statics::NarrativeCharacterSubsystem_eventIsCharacterSpawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_IsCharacterSpawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterSubsystem_IsCharacterSpawned_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_IsCharacterSpawned_Statics::NarrativeCharacterSubsystem_eventIsCharacterSpawned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterSubsystem_IsCharacterSpawned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterSubsystem_IsCharacterSpawned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterSubsystem::execIsCharacterSpawned)
{
	P_GET_OBJECT(UCharacterDefinition,Z_Param_CharacterDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCharacterSpawned(Z_Param_CharacterDefinition);
	P_NATIVE_END;
}
// End Class UNarrativeCharacterSubsystem Function IsCharacterSpawned

// Begin Class UNarrativeCharacterSubsystem Function OnActorDestroyed
struct Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorDestroyed_Statics
{
	struct NarrativeCharacterSubsystem_eventOnActorDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/NarrativeCharacterSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventOnActorDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterSubsystem, nullptr, "OnActorDestroyed", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorDestroyed_Statics::NarrativeCharacterSubsystem_eventOnActorDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorDestroyed_Statics::NarrativeCharacterSubsystem_eventOnActorDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterSubsystem::execOnActorDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// End Class UNarrativeCharacterSubsystem Function OnActorDestroyed

// Begin Class UNarrativeCharacterSubsystem Function OnActorSpawned
struct Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorSpawned_Statics
{
	struct NarrativeCharacterSubsystem_eventOnActorSpawned_Parms
	{
		AActor* SpawnedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/NarrativeCharacterSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorSpawned_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventOnActorSpawned_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorSpawned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorSpawned_Statics::NewProp_SpawnedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorSpawned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterSubsystem, nullptr, "OnActorSpawned", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorSpawned_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorSpawned_Statics::NarrativeCharacterSubsystem_eventOnActorSpawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorSpawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorSpawned_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorSpawned_Statics::NarrativeCharacterSubsystem_eventOnActorSpawned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorSpawned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorSpawned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterSubsystem::execOnActorSpawned)
{
	P_GET_OBJECT(AActor,Z_Param_SpawnedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorSpawned(Z_Param_SpawnedActor);
	P_NATIVE_END;
}
// End Class UNarrativeCharacterSubsystem Function OnActorSpawned

// Begin Class UNarrativeCharacterSubsystem Function OnNPCClassLoaded
struct Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnNPCClassLoaded_Statics
{
	struct NarrativeCharacterSubsystem_eventOnNPCClassLoaded_Parms
	{
		FPrimaryAssetId LoadedId;
		FTransform SpawnTransform;
		FNPCSpawnParams SpawnParams;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Callback for when the NPC class is loaded and we can actually spawn it in. \n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeCharacterSubsystem.h" },
		{ "ToolTip", "Callback for when the NPC class is loaded and we can actually spawn it in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnNPCClassLoaded_Statics::NewProp_LoadedId = { "LoadedId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventOnNPCClassLoaded_Parms, LoadedId), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnNPCClassLoaded_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventOnNPCClassLoaded_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTransform_MetaData), NewProp_SpawnTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnNPCClassLoaded_Statics::NewProp_SpawnParams = { "SpawnParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventOnNPCClassLoaded_Parms, SpawnParams), Z_Construct_UScriptStruct_FNPCSpawnParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnParams_MetaData), NewProp_SpawnParams_MetaData) }; // 3899460127
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnNPCClassLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnNPCClassLoaded_Statics::NewProp_LoadedId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnNPCClassLoaded_Statics::NewProp_SpawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnNPCClassLoaded_Statics::NewProp_SpawnParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnNPCClassLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnNPCClassLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterSubsystem, nullptr, "OnNPCClassLoaded", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnNPCClassLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnNPCClassLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnNPCClassLoaded_Statics::NarrativeCharacterSubsystem_eventOnNPCClassLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnNPCClassLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnNPCClassLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnNPCClassLoaded_Statics::NarrativeCharacterSubsystem_eventOnNPCClassLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnNPCClassLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnNPCClassLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterSubsystem::execOnNPCClassLoaded)
{
	P_GET_STRUCT(FPrimaryAssetId,Z_Param_LoadedId);
	P_GET_STRUCT(FTransform,Z_Param_SpawnTransform);
	P_GET_STRUCT_REF(FNPCSpawnParams,Z_Param_Out_SpawnParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNPCClassLoaded(Z_Param_LoadedId,Z_Param_SpawnTransform,Z_Param_Out_SpawnParams);
	P_NATIVE_END;
}
// End Class UNarrativeCharacterSubsystem Function OnNPCClassLoaded

// Begin Class UNarrativeCharacterSubsystem Function SpawnNPC
struct Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC_Statics
{
	struct NarrativeCharacterSubsystem_eventSpawnNPC_Parms
	{
		UNPCDefinition* NPCData;
		FTransform Transform;
		FNPCSpawnParams SpawnParams;
		ANarrativeNPCCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Subsystem" },
		{ "Comment", "/**Spawn an NPC in. \n\x09@param Transform is optional, and is only used if the actor doesnt exist in the world and needs spawning */" },
		{ "CPP_Default_SpawnParams", "()" },
		{ "CPP_Default_Transform", "()" },
		{ "ModuleRelativePath", "Public/AI/NarrativeCharacterSubsystem.h" },
		{ "ToolTip", "Spawn an NPC in.\n       @param Transform is optional, and is only used if the actor doesnt exist in the world and needs spawning" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnParams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC_Statics::NewProp_NPCData = { "NPCData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventSpawnNPC_Parms, NPCData), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventSpawnNPC_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC_Statics::NewProp_SpawnParams = { "SpawnParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventSpawnNPC_Parms, SpawnParams), Z_Construct_UScriptStruct_FNPCSpawnParams, METADATA_PARAMS(0, nullptr) }; // 3899460127
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacterSubsystem_eventSpawnNPC_Parms, ReturnValue), Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC_Statics::NewProp_NPCData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC_Statics::NewProp_SpawnParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCharacterSubsystem, nullptr, "SpawnNPC", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC_Statics::NarrativeCharacterSubsystem_eventSpawnNPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC_Statics::NarrativeCharacterSubsystem_eventSpawnNPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCharacterSubsystem::execSpawnNPC)
{
	P_GET_OBJECT(UNPCDefinition,Z_Param_NPCData);
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_GET_STRUCT(FNPCSpawnParams,Z_Param_SpawnParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANarrativeNPCCharacter**)Z_Param__Result=P_THIS->SpawnNPC(Z_Param_NPCData,Z_Param_Transform,Z_Param_SpawnParams);
	P_NATIVE_END;
}
// End Class UNarrativeCharacterSubsystem Function SpawnNPC

// Begin Class UNarrativeCharacterSubsystem
void UNarrativeCharacterSubsystem::StaticRegisterNativesUNarrativeCharacterSubsystem()
{
	UClass* Class = UNarrativeCharacterSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroyNPC", &UNarrativeCharacterSubsystem::execDestroyNPC },
		{ "FindCharacter", &UNarrativeCharacterSubsystem::execFindCharacter },
		{ "FindCharacters", &UNarrativeCharacterSubsystem::execFindCharacters },
		{ "FindNPC", &UNarrativeCharacterSubsystem::execFindNPC },
		{ "FindNPCs", &UNarrativeCharacterSubsystem::execFindNPCs },
		{ "FindOrSpawnNPC", &UNarrativeCharacterSubsystem::execFindOrSpawnNPC },
		{ "IsCharacterSpawned", &UNarrativeCharacterSubsystem::execIsCharacterSpawned },
		{ "OnActorDestroyed", &UNarrativeCharacterSubsystem::execOnActorDestroyed },
		{ "OnActorSpawned", &UNarrativeCharacterSubsystem::execOnActorSpawned },
		{ "OnNPCClassLoaded", &UNarrativeCharacterSubsystem::execOnNPCClassLoaded },
		{ "SpawnNPC", &UNarrativeCharacterSubsystem::execSpawnNPC },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeCharacterSubsystem);
UClass* Z_Construct_UClass_UNarrativeCharacterSubsystem_NoRegister()
{
	return UNarrativeCharacterSubsystem::StaticClass();
}
struct Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Character subsystem for Narrative. Allows us to easily load an Character/NPC, find an NPC in the world, ensures we don't spawn multiple NPC instances, etc. \n */" },
		{ "IncludePath", "AI/NarrativeCharacterSubsystem.h" },
		{ "ModuleRelativePath", "Public/AI/NarrativeCharacterSubsystem.h" },
		{ "ToolTip", "Character subsystem for Narrative. Allows us to easily load an Character/NPC, find an NPC in the world, ensures we don't spawn multiple NPC instances, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNPCSpawned_MetaData[] = {
		{ "Category", "NPC Subsystem" },
		{ "ModuleRelativePath", "Public/AI/NarrativeCharacterSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMap_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Maps CharacterDefinitions to spawned characters of that type, so we can efficiently access them without expensive GetAllActorsOfClass which might return hundreds of characters we'd need to sort through \n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeCharacterSubsystem.h" },
		{ "ToolTip", "Maps CharacterDefinitions to spawned characters of that type, so we can efficiently access them without expensive GetAllActorsOfClass which might return hundreds of characters we'd need to sort through" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCMap_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Specialized NPC version of CharacterMap to avoid casting \n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeCharacterSubsystem.h" },
		{ "ToolTip", "Specialized NPC version of CharacterMap to avoid casting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNPCSpawned;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NPCMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NPCMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeCharacterSubsystem_DestroyNPC, "DestroyNPC" }, // 216896324
		{ &Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacter, "FindCharacter" }, // 2221718178
		{ &Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindCharacters, "FindCharacters" }, // 146414906
		{ &Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPC, "FindNPC" }, // 4088524821
		{ &Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindNPCs, "FindNPCs" }, // 316709876
		{ &Z_Construct_UFunction_UNarrativeCharacterSubsystem_FindOrSpawnNPC, "FindOrSpawnNPC" }, // 3528145514
		{ &Z_Construct_UFunction_UNarrativeCharacterSubsystem_IsCharacterSpawned, "IsCharacterSpawned" }, // 2539324461
		{ &Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorDestroyed, "OnActorDestroyed" }, // 361873766
		{ &Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnActorSpawned, "OnActorSpawned" }, // 2055727203
		{ &Z_Construct_UFunction_UNarrativeCharacterSubsystem_OnNPCClassLoaded, "OnNPCClassLoaded" }, // 2015527239
		{ &Z_Construct_UFunction_UNarrativeCharacterSubsystem_SpawnNPC, "SpawnNPC" }, // 2701229062
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeCharacterSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::NewProp_OnNPCSpawned = { "OnNPCSpawned", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterSubsystem, OnNPCSpawned), Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNPCSpawned_MetaData), NewProp_OnNPCSpawned_MetaData) }; // 1196137208
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::NewProp_CharacterMap_ValueProp = { "CharacterMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCharacterArray, METADATA_PARAMS(0, nullptr) }; // 625417761
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::NewProp_CharacterMap_Key_KeyProp = { "CharacterMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCharacterDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::NewProp_CharacterMap = { "CharacterMap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterSubsystem, CharacterMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMap_MetaData), NewProp_CharacterMap_MetaData) }; // 625417761
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::NewProp_NPCMap_ValueProp = { "NPCMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FNPCArray, METADATA_PARAMS(0, nullptr) }; // 1730142132
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::NewProp_NPCMap_Key_KeyProp = { "NPCMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::NewProp_NPCMap = { "NPCMap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCharacterSubsystem, NPCMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCMap_MetaData), NewProp_NPCMap_MetaData) }; // 1730142132
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::NewProp_OnNPCSpawned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::NewProp_CharacterMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::NewProp_CharacterMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::NewProp_CharacterMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::NewProp_NPCMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::NewProp_NPCMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::NewProp_NPCMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::ClassParams = {
	&UNarrativeCharacterSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeCharacterSubsystem()
{
	if (!Z_Registration_Info_UClass_UNarrativeCharacterSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeCharacterSubsystem.OuterSingleton, Z_Construct_UClass_UNarrativeCharacterSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeCharacterSubsystem.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeCharacterSubsystem>()
{
	return UNarrativeCharacterSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeCharacterSubsystem);
UNarrativeCharacterSubsystem::~UNarrativeCharacterSubsystem() {}
// End Class UNarrativeCharacterSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeCharacterSubsystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharacterArray::StaticStruct, Z_Construct_UScriptStruct_FCharacterArray_Statics::NewStructOps, TEXT("CharacterArray"), &Z_Registration_Info_UScriptStruct_CharacterArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterArray), 625417761U) },
		{ FNPCArray::StaticStruct, Z_Construct_UScriptStruct_FNPCArray_Statics::NewStructOps, TEXT("NPCArray"), &Z_Registration_Info_UScriptStruct_NPCArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNPCArray), 1730142132U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeCharacterSubsystem, UNarrativeCharacterSubsystem::StaticClass, TEXT("UNarrativeCharacterSubsystem"), &Z_Registration_Info_UClass_UNarrativeCharacterSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeCharacterSubsystem), 1616584022U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeCharacterSubsystem_h_3536940401(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeCharacterSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeCharacterSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeCharacterSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeCharacterSubsystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
