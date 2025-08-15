// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativePlayerController.h"
#include "NarrativeArsenal/Public/Navigation/MapTileBounds.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativePlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativePlayerCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativePlayerController();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativePlayerController_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeGameplayHUD_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTeamAgentInterface_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCDefinition_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UPlayerInteractionComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTalesComponent_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FNPCTether();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FPOIData();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FNPCTether
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NPCTether;
class UScriptStruct* FNPCTether::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NPCTether.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NPCTether.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNPCTether, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("NPCTether"));
	}
	return Z_Registration_Info_UScriptStruct_NPCTether.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FNPCTether>()
{
	return FNPCTether::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNPCTether_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**When an NPC spawn gets streamed out, it can optionally keep the NPC around by \"tethering\" it to our player controller.\nThat way we can save those NPCs to disk, even though their spawns are no longer streamed in to the world. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
		{ "ToolTip", "When an NPC spawn gets streamed out, it can optionally keep the NPC around by \"tethering\" it to our player controller.\nThat way we can save those NPCs to disk, even though their spawns are no longer streamed in to the world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCCharacter_MetaData[] = {
		{ "Category", "Tethered NPC" },
		{ "Comment", "//The currently spawned in NPC\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
		{ "ToolTip", "The currently spawned in NPC" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCDef_MetaData[] = {
		{ "Category", "Tethered NPC" },
		{ "Comment", "//The NPC Definition for the NPC\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
		{ "ToolTip", "The NPC Definition for the NPC" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCSaveGUID_MetaData[] = {
		{ "Category", "Tethered NPC" },
		{ "Comment", "//We need to store the NPCs save GUID so we can restore it after spawning the NPC, and their save record is fetched correctly. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
		{ "ToolTip", "We need to store the NPCs save GUID so we can restore it after spawning the NPC, and their save record is fetched correctly." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCDef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NPCSaveGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNPCTether>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNPCTether_Statics::NewProp_NPCCharacter = { "NPCCharacter", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCTether, NPCCharacter), Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCCharacter_MetaData), NewProp_NPCCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNPCTether_Statics::NewProp_NPCDef = { "NPCDef", nullptr, (EPropertyFlags)0x0114000001020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCTether, NPCDef), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCDef_MetaData), NewProp_NPCDef_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNPCTether_Statics::NewProp_NPCSaveGUID = { "NPCSaveGUID", nullptr, (EPropertyFlags)0x0010000001020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCTether, NPCSaveGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCSaveGUID_MetaData), NewProp_NPCSaveGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNPCTether_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCTether_Statics::NewProp_NPCCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCTether_Statics::NewProp_NPCDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCTether_Statics::NewProp_NPCSaveGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCTether_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNPCTether_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"NPCTether",
	Z_Construct_UScriptStruct_FNPCTether_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCTether_Statics::PropPointers),
	sizeof(FNPCTether),
	alignof(FNPCTether),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCTether_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNPCTether_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNPCTether()
{
	if (!Z_Registration_Info_UScriptStruct_NPCTether.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NPCTether.InnerSingleton, Z_Construct_UScriptStruct_FNPCTether_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NPCTether.InnerSingleton;
}
// End ScriptStruct FNPCTether

// Begin Class ANarrativePlayerController Function FastTravelToPOI
struct NarrativePlayerController_eventFastTravelToPOI_Parms
{
	FPOIData POI;
};
static const FName NAME_ANarrativePlayerController_FastTravelToPOI = FName(TEXT("FastTravelToPOI"));
void ANarrativePlayerController::FastTravelToPOI(FPOIData const& POI)
{
	NarrativePlayerController_eventFastTravelToPOI_Parms Parms;
	Parms.POI=POI;
	UFunction* Func = FindFunctionChecked(NAME_ANarrativePlayerController_FastTravelToPOI);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Fast Travel" },
		{ "Comment", "//POI marker calls this to perform fast travelling, which we implement in BP \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
		{ "ToolTip", "POI marker calls this to perform fast travelling, which we implement in BP" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_POI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::NewProp_POI = { "POI", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventFastTravelToPOI_Parms, POI), Z_Construct_UScriptStruct_FPOIData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POI_MetaData), NewProp_POI_MetaData) }; // 3949940213
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::NewProp_POI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "FastTravelToPOI", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::PropPointers), sizeof(NarrativePlayerController_eventFastTravelToPOI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativePlayerController_eventFastTravelToPOI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANarrativePlayerController Function FastTravelToPOI

// Begin Class ANarrativePlayerController Function GetControlledCharacter
struct Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics
{
	struct NarrativePlayerController_eventGetControlledCharacter_Parms
	{
		ANarrativePlayerCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//Return the controlled narrative char\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
		{ "ToolTip", "Return the controlled narrative char" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventGetControlledCharacter_Parms, ReturnValue), Z_Construct_UClass_ANarrativePlayerCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "GetControlledCharacter", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::NarrativePlayerController_eventGetControlledCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::NarrativePlayerController_eventGetControlledCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerController::execGetControlledCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANarrativePlayerCharacter**)Z_Param__Result=P_THIS->GetControlledCharacter();
	P_NATIVE_END;
}
// End Class ANarrativePlayerController Function GetControlledCharacter

// Begin Class ANarrativePlayerController Function GetInteractionComponent
struct Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics
{
	struct NarrativePlayerController_eventGetInteractionComponent_Parms
	{
		UPlayerInteractionComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventGetInteractionComponent_Parms, ReturnValue), Z_Construct_UClass_UPlayerInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "GetInteractionComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::NarrativePlayerController_eventGetInteractionComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::NarrativePlayerController_eventGetInteractionComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerController::execGetInteractionComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayerInteractionComponent**)Z_Param__Result=P_THIS->GetInteractionComponent();
	P_NATIVE_END;
}
// End Class ANarrativePlayerController Function GetInteractionComponent

// Begin Class ANarrativePlayerController Function GetNarrativeGameplayHUD
struct Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeGameplayHUD_Statics
{
	struct NarrativePlayerController_eventGetNarrativeGameplayHUD_Parms
	{
		UNarrativeGameplayHUD* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeGameplayHUD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventGetNarrativeGameplayHUD_Parms, ReturnValue), Z_Construct_UClass_UNarrativeGameplayHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeGameplayHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeGameplayHUD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeGameplayHUD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeGameplayHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "GetNarrativeGameplayHUD", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeGameplayHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeGameplayHUD_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeGameplayHUD_Statics::NarrativePlayerController_eventGetNarrativeGameplayHUD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeGameplayHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeGameplayHUD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeGameplayHUD_Statics::NarrativePlayerController_eventGetNarrativeGameplayHUD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeGameplayHUD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeGameplayHUD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerController::execGetNarrativeGameplayHUD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeGameplayHUD**)Z_Param__Result=P_THIS->GetNarrativeGameplayHUD();
	P_NATIVE_END;
}
// End Class ANarrativePlayerController Function GetNarrativeGameplayHUD

// Begin Class ANarrativePlayerController Function GetNarrativeInputDeviceName
struct Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics
{
	struct NarrativePlayerController_eventGetNarrativeInputDeviceName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Input" },
		{ "Comment", "//Basically just return the input device name in a way the narrative input icon data table understands. Keyboard, Xbox, PS5, etc. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
		{ "ToolTip", "Basically just return the input device name in a way the narrative input icon data table understands. Keyboard, Xbox, PS5, etc." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventGetNarrativeInputDeviceName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "GetNarrativeInputDeviceName", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::NarrativePlayerController_eventGetNarrativeInputDeviceName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::NarrativePlayerController_eventGetNarrativeInputDeviceName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerController::execGetNarrativeInputDeviceName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetNarrativeInputDeviceName();
	P_NATIVE_END;
}
// End Class ANarrativePlayerController Function GetNarrativeInputDeviceName

// Begin Class ANarrativePlayerController Function GetTalesComponent
struct Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics
{
	struct NarrativePlayerController_eventGetTalesComponent_Parms
	{
		UTalesComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventGetTalesComponent_Parms, ReturnValue), Z_Construct_UClass_UTalesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "GetTalesComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::NarrativePlayerController_eventGetTalesComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::NarrativePlayerController_eventGetTalesComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerController::execGetTalesComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTalesComponent**)Z_Param__Result=P_THIS->GetTalesComponent();
	P_NATIVE_END;
}
// End Class ANarrativePlayerController Function GetTalesComponent

// Begin Class ANarrativePlayerController Function HandleDamageActor
struct NarrativePlayerController_eventHandleDamageActor_Parms
{
	AActor* DamagedActor;
	float DamageAmount;
};
static const FName NAME_ANarrativePlayerController_HandleDamageActor = FName(TEXT("HandleDamageActor"));
void ANarrativePlayerController::HandleDamageActor(AActor* DamagedActor, const float DamageAmount)
{
	NarrativePlayerController_eventHandleDamageActor_Parms Parms;
	Parms.DamagedActor=DamagedActor;
	Parms.DamageAmount=DamageAmount;
	UFunction* Func = FindFunctionChecked(NAME_ANarrativePlayerController_HandleDamageActor);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|FX" },
		{ "Comment", "//Do whatever we like when we damage an actor, by default we put damage text up. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
		{ "ToolTip", "Do whatever we like when we damage an actor, by default we put damage text up." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventHandleDamageActor_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventHandleDamageActor_Parms, DamageAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageAmount_MetaData), NewProp_DamageAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "HandleDamageActor", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::PropPointers), sizeof(NarrativePlayerController_eventHandleDamageActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativePlayerController_eventHandleDamageActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANarrativePlayerController Function HandleDamageActor

// Begin Class ANarrativePlayerController Function HandleDeath
struct NarrativePlayerController_eventHandleDeath_Parms
{
	AActor* KilledActor;
	UNarrativeAbilitySystemComponent* KilledActorASC;
};
static const FName NAME_ANarrativePlayerController_HandleDeath = FName(TEXT("HandleDeath"));
void ANarrativePlayerController::HandleDeath(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC)
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativePlayerController_HandleDeath);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativePlayerController_eventHandleDeath_Parms Parms;
		Parms.KilledActor=KilledActor;
		Parms.KilledActorASC=KilledActorASC;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleDeath_Implementation(KilledActor, KilledActorASC);
	}
}
struct Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//Gives our playercontroller a chance to react to death.\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
		{ "ToolTip", "Gives our playercontroller a chance to react to death." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KilledActorASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KilledActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KilledActorASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::NewProp_KilledActor = { "KilledActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventHandleDeath_Parms, KilledActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::NewProp_KilledActorASC = { "KilledActorASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventHandleDeath_Parms, KilledActorASC), Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KilledActorASC_MetaData), NewProp_KilledActorASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::NewProp_KilledActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::NewProp_KilledActorASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "HandleDeath", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::PropPointers), sizeof(NarrativePlayerController_eventHandleDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativePlayerController_eventHandleDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_HandleDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_HandleDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerController::execHandleDeath)
{
	P_GET_OBJECT(AActor,Z_Param_KilledActor);
	P_GET_OBJECT(UNarrativeAbilitySystemComponent,Z_Param_KilledActorASC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDeath_Implementation(Z_Param_KilledActor,Z_Param_KilledActorASC);
	P_NATIVE_END;
}
// End Class ANarrativePlayerController Function HandleDeath

// Begin Class ANarrativePlayerController Function IsUsingGamepad
struct Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics
{
	struct NarrativePlayerController_eventIsUsingGamepad_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Input" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativePlayerController_eventIsUsingGamepad_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativePlayerController_eventIsUsingGamepad_Parms), &Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "IsUsingGamepad", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::NarrativePlayerController_eventIsUsingGamepad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::NarrativePlayerController_eventIsUsingGamepad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerController::execIsUsingGamepad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsUsingGamepad();
	P_NATIVE_END;
}
// End Class ANarrativePlayerController Function IsUsingGamepad

// Begin Class ANarrativePlayerController Function NotifyDealtDamage
struct NarrativePlayerController_eventNotifyDealtDamage_Parms
{
	AActor* DamagedActor;
	float DamageAmount;
};
static const FName NAME_ANarrativePlayerController_NotifyDealtDamage = FName(TEXT("NotifyDealtDamage"));
void ANarrativePlayerController::NotifyDealtDamage(AActor* DamagedActor, const float DamageAmount)
{
	NarrativePlayerController_eventNotifyDealtDamage_Parms Parms;
	Parms.DamagedActor=DamagedActor;
	Parms.DamageAmount=DamageAmount;
	UFunction* Func = FindFunctionChecked(NAME_ANarrativePlayerController_NotifyDealtDamage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventNotifyDealtDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventNotifyDealtDamage_Parms, DamageAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageAmount_MetaData), NewProp_DamageAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "NotifyDealtDamage", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::PropPointers), sizeof(NarrativePlayerController_eventNotifyDealtDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativePlayerController_eventNotifyDealtDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerController::execNotifyDealtDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyDealtDamage_Implementation(Z_Param_DamagedActor,Z_Param_DamageAmount);
	P_NATIVE_END;
}
// End Class ANarrativePlayerController Function NotifyDealtDamage

// Begin Class ANarrativePlayerController Function OnTetheredNPCDestroyed
struct Z_Construct_UFunction_ANarrativePlayerController_OnTetheredNPCDestroyed_Statics
{
	struct NarrativePlayerController_eventOnTetheredNPCDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativePlayerController_OnTetheredNPCDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativePlayerController_eventOnTetheredNPCDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativePlayerController_OnTetheredNPCDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativePlayerController_OnTetheredNPCDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_OnTetheredNPCDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativePlayerController_OnTetheredNPCDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativePlayerController, nullptr, "OnTetheredNPCDestroyed", nullptr, nullptr, Z_Construct_UFunction_ANarrativePlayerController_OnTetheredNPCDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_OnTetheredNPCDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativePlayerController_OnTetheredNPCDestroyed_Statics::NarrativePlayerController_eventOnTetheredNPCDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativePlayerController_OnTetheredNPCDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativePlayerController_OnTetheredNPCDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativePlayerController_OnTetheredNPCDestroyed_Statics::NarrativePlayerController_eventOnTetheredNPCDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativePlayerController_OnTetheredNPCDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativePlayerController_OnTetheredNPCDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativePlayerController::execOnTetheredNPCDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTetheredNPCDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// End Class ANarrativePlayerController Function OnTetheredNPCDestroyed

// Begin Class ANarrativePlayerController
void ANarrativePlayerController::StaticRegisterNativesANarrativePlayerController()
{
	UClass* Class = ANarrativePlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetControlledCharacter", &ANarrativePlayerController::execGetControlledCharacter },
		{ "GetInteractionComponent", &ANarrativePlayerController::execGetInteractionComponent },
		{ "GetNarrativeGameplayHUD", &ANarrativePlayerController::execGetNarrativeGameplayHUD },
		{ "GetNarrativeInputDeviceName", &ANarrativePlayerController::execGetNarrativeInputDeviceName },
		{ "GetTalesComponent", &ANarrativePlayerController::execGetTalesComponent },
		{ "HandleDeath", &ANarrativePlayerController::execHandleDeath },
		{ "IsUsingGamepad", &ANarrativePlayerController::execIsUsingGamepad },
		{ "NotifyDealtDamage", &ANarrativePlayerController::execNotifyDealtDamage },
		{ "OnTetheredNPCDestroyed", &ANarrativePlayerController::execOnTetheredNPCDestroyed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANarrativePlayerController);
UClass* Z_Construct_UClass_ANarrativePlayerController_NoRegister()
{
	return ANarrativePlayerController::StaticClass();
}
struct Z_Construct_UClass_ANarrativePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for Player Controllers in Narrative Pro. Typically possesses an ANarrativePlayerCharacter. \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "UnrealFramework/NarrativePlayerController.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for Player Controllers in Narrative Pro. Typically possesses an ANarrativePlayerCharacter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCTethers_MetaData[] = {
		{ "Category", "Tethered NPC" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayHUDClass_MetaData[] = {
		{ "Category", "Narrative|UI" },
		{ "Comment", "//This is the gameplay HUD class we'll create the HUD with. TODO consider moving to player definition to allow per def customization of this? \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
		{ "ToolTip", "This is the gameplay HUD class we'll create the HUD with. TODO consider moving to player definition to allow per def customization of this?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayHUD_MetaData[] = {
		{ "Category", "Narrative|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComponent_MetaData[] = {
		{ "Category", "Narrative|Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TalesComponent_MetaData[] = {
		{ "Category", "Narrative|Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationComponent_MetaData[] = {
		{ "Category", "Narrative|Navigation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NPCTethers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCTethers;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayHUDClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameplayHUD;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TalesComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavigationComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANarrativePlayerController_FastTravelToPOI, "FastTravelToPOI" }, // 3645156928
		{ &Z_Construct_UFunction_ANarrativePlayerController_GetControlledCharacter, "GetControlledCharacter" }, // 3042072637
		{ &Z_Construct_UFunction_ANarrativePlayerController_GetInteractionComponent, "GetInteractionComponent" }, // 3196819243
		{ &Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeGameplayHUD, "GetNarrativeGameplayHUD" }, // 3090342569
		{ &Z_Construct_UFunction_ANarrativePlayerController_GetNarrativeInputDeviceName, "GetNarrativeInputDeviceName" }, // 3070293221
		{ &Z_Construct_UFunction_ANarrativePlayerController_GetTalesComponent, "GetTalesComponent" }, // 3978111508
		{ &Z_Construct_UFunction_ANarrativePlayerController_HandleDamageActor, "HandleDamageActor" }, // 1317687572
		{ &Z_Construct_UFunction_ANarrativePlayerController_HandleDeath, "HandleDeath" }, // 1371155628
		{ &Z_Construct_UFunction_ANarrativePlayerController_IsUsingGamepad, "IsUsingGamepad" }, // 923549832
		{ &Z_Construct_UFunction_ANarrativePlayerController_NotifyDealtDamage, "NotifyDealtDamage" }, // 2571440435
		{ &Z_Construct_UFunction_ANarrativePlayerController_OnTetheredNPCDestroyed, "OnTetheredNPCDestroyed" }, // 3193107568
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANarrativePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_NPCTethers_Inner = { "NPCTethers", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNPCTether, METADATA_PARAMS(0, nullptr) }; // 1022915853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_NPCTethers = { "NPCTethers", nullptr, (EPropertyFlags)0x0010000001020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerController, NPCTethers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCTethers_MetaData), NewProp_NPCTethers_MetaData) }; // 1022915853
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_GameplayHUDClass = { "GameplayHUDClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerController, GameplayHUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNarrativeGameplayHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayHUDClass_MetaData), NewProp_GameplayHUDClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_GameplayHUD = { "GameplayHUD", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerController, GameplayHUD), Z_Construct_UClass_UNarrativeGameplayHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayHUD_MetaData), NewProp_GameplayHUD_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_InteractionComponent = { "InteractionComponent", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerController, InteractionComponent), Z_Construct_UClass_UPlayerInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComponent_MetaData), NewProp_InteractionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_TalesComponent = { "TalesComponent", nullptr, (EPropertyFlags)0x012408000009201d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerController, TalesComponent), Z_Construct_UClass_UTalesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TalesComponent_MetaData), NewProp_TalesComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_NavigationComponent = { "NavigationComponent", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativePlayerController, NavigationComponent), Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationComponent_MetaData), NewProp_NavigationComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANarrativePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_NPCTethers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_NPCTethers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_GameplayHUDClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_GameplayHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_InteractionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_TalesComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativePlayerController_Statics::NewProp_NavigationComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANarrativePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANarrativePlayerController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNarrativeSavableActor_NoRegister, (int32)VTABLE_OFFSET(ANarrativePlayerController, INarrativeSavableActor), false },  // 319030605
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativePlayerController, IAbilitySystemInterface), false },  // 2272790346
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativePlayerController, IGameplayTagAssetInterface), false },  // 2592985258
	{ Z_Construct_UClass_UNarrativeTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativePlayerController, INarrativeTeamAgentInterface), false },  // 1034205614
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANarrativePlayerController_Statics::ClassParams = {
	&ANarrativePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANarrativePlayerController_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativePlayerController_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANarrativePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANarrativePlayerController()
{
	if (!Z_Registration_Info_UClass_ANarrativePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANarrativePlayerController.OuterSingleton, Z_Construct_UClass_ANarrativePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANarrativePlayerController.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ANarrativePlayerController>()
{
	return ANarrativePlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANarrativePlayerController);
ANarrativePlayerController::~ANarrativePlayerController() {}
// End Class ANarrativePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerController_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNPCTether::StaticStruct, Z_Construct_UScriptStruct_FNPCTether_Statics::NewStructOps, TEXT("NPCTether"), &Z_Registration_Info_UScriptStruct_NPCTether, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNPCTether), 1022915853U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANarrativePlayerController, ANarrativePlayerController::StaticClass, TEXT("ANarrativePlayerController"), &Z_Registration_Info_UClass_ANarrativePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANarrativePlayerController), 3450665766U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerController_h_1308696628(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerController_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePlayerController_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
