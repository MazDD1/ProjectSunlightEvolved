// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Navigation/NarrativeNavigationComponent.h"
#include "NarrativeArsenal/Public/Navigation/MapTileBounds.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeNavigationComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_AMapTileBounds_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCustomWaypointMarker_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UMapMarker_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UMapTileMarker_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeNavigationComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UPOIMapMarker_NoRegister();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnDiscoverPointOfInterest__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnFastTravelRequested__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerAdded__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerRemoved__DelegateSignature();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FPOIData();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Delegate FOnMarkerAdded
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerAdded__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnMarkerAdded_Parms
	{
		UMapMarker* Marker;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Marker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerAdded__DelegateSignature_Statics::NewProp_Marker = { "Marker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnMarkerAdded_Parms, Marker), Z_Construct_UClass_UMapMarker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerAdded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerAdded__DelegateSignature_Statics::NewProp_Marker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerAdded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnMarkerAdded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerAdded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerAdded__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnMarkerAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerAdded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerAdded__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnMarkerAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerAdded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerAdded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMarkerAdded_DelegateWrapper(const FMulticastScriptDelegate& OnMarkerAdded, UMapMarker* Marker)
{
	struct _Script_NarrativeArsenal_eventOnMarkerAdded_Parms
	{
		UMapMarker* Marker;
	};
	_Script_NarrativeArsenal_eventOnMarkerAdded_Parms Parms;
	Parms.Marker=Marker;
	OnMarkerAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMarkerAdded

// Begin Delegate FOnMarkerRemoved
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerRemoved__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnMarkerRemoved_Parms
	{
		UMapMarker* Marker;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Marker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerRemoved__DelegateSignature_Statics::NewProp_Marker = { "Marker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnMarkerRemoved_Parms, Marker), Z_Construct_UClass_UMapMarker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerRemoved__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerRemoved__DelegateSignature_Statics::NewProp_Marker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerRemoved__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnMarkerRemoved__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerRemoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerRemoved__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnMarkerRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerRemoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerRemoved__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerRemoved__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnMarkerRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerRemoved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerRemoved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMarkerRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnMarkerRemoved, UMapMarker* Marker)
{
	struct _Script_NarrativeArsenal_eventOnMarkerRemoved_Parms
	{
		UMapMarker* Marker;
	};
	_Script_NarrativeArsenal_eventOnMarkerRemoved_Parms Parms;
	Parms.Marker=Marker;
	OnMarkerRemoved.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMarkerRemoved

// Begin Delegate FOnDiscoverPointOfInterest
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnDiscoverPointOfInterest__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnDiscoverPointOfInterest_Parms
	{
		FGameplayTag POITag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POITag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_POITag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnDiscoverPointOfInterest__DelegateSignature_Statics::NewProp_POITag = { "POITag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnDiscoverPointOfInterest_Parms, POITag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POITag_MetaData), NewProp_POITag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnDiscoverPointOfInterest__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnDiscoverPointOfInterest__DelegateSignature_Statics::NewProp_POITag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnDiscoverPointOfInterest__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnDiscoverPointOfInterest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnDiscoverPointOfInterest__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnDiscoverPointOfInterest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnDiscoverPointOfInterest__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnDiscoverPointOfInterest__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnDiscoverPointOfInterest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnDiscoverPointOfInterest__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnDiscoverPointOfInterest__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnDiscoverPointOfInterest__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnDiscoverPointOfInterest_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnDiscoverPointOfInterest__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnDiscoverPointOfInterest__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDiscoverPointOfInterest_DelegateWrapper(const FMulticastScriptDelegate& OnDiscoverPointOfInterest, FGameplayTag const& POITag)
{
	struct _Script_NarrativeArsenal_eventOnDiscoverPointOfInterest_Parms
	{
		FGameplayTag POITag;
	};
	_Script_NarrativeArsenal_eventOnDiscoverPointOfInterest_Parms Parms;
	Parms.POITag=POITag;
	OnDiscoverPointOfInterest.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDiscoverPointOfInterest

// Begin Delegate FOnFastTravelRequested
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnFastTravelRequested__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnFastTravelRequested_Parms
	{
		FPOIData POI;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_POI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnFastTravelRequested__DelegateSignature_Statics::NewProp_POI = { "POI", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnFastTravelRequested_Parms, POI), Z_Construct_UScriptStruct_FPOIData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POI_MetaData), NewProp_POI_MetaData) }; // 3949940213
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnFastTravelRequested__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnFastTravelRequested__DelegateSignature_Statics::NewProp_POI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnFastTravelRequested__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnFastTravelRequested__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnFastTravelRequested__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnFastTravelRequested__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnFastTravelRequested__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnFastTravelRequested__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnFastTravelRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnFastTravelRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnFastTravelRequested__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnFastTravelRequested__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnFastTravelRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnFastTravelRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnFastTravelRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFastTravelRequested_DelegateWrapper(const FMulticastScriptDelegate& OnFastTravelRequested, FPOIData const& POI)
{
	struct _Script_NarrativeArsenal_eventOnFastTravelRequested_Parms
	{
		FPOIData POI;
	};
	_Script_NarrativeArsenal_eventOnFastTravelRequested_Parms Parms;
	Parms.POI=POI;
	OnFastTravelRequested.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFastTravelRequested

// Begin Class UNarrativeNavigationComponent Function AddMarker
struct Z_Construct_UFunction_UNarrativeNavigationComponent_AddMarker_Statics
{
	struct NarrativeNavigationComponent_eventAddMarker_Parms
	{
		UMapMarker* MapMarker;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapMarker;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_AddMarker_Statics::NewProp_MapMarker = { "MapMarker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventAddMarker_Parms, MapMarker), Z_Construct_UClass_UMapMarker_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeNavigationComponent_AddMarker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeNavigationComponent_eventAddMarker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_AddMarker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeNavigationComponent_eventAddMarker_Parms), &Z_Construct_UFunction_UNarrativeNavigationComponent_AddMarker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNavigationComponent_AddMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_AddMarker_Statics::NewProp_MapMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_AddMarker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_AddMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNavigationComponent_AddMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNavigationComponent, nullptr, "AddMarker", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNavigationComponent_AddMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_AddMarker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_AddMarker_Statics::NarrativeNavigationComponent_eventAddMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_AddMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNavigationComponent_AddMarker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_AddMarker_Statics::NarrativeNavigationComponent_eventAddMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNavigationComponent_AddMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNavigationComponent_AddMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNavigationComponent::execAddMarker)
{
	P_GET_OBJECT(UMapMarker,Z_Param_MapMarker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddMarker(Z_Param_MapMarker);
	P_NATIVE_END;
}
// End Class UNarrativeNavigationComponent Function AddMarker

// Begin Class UNarrativeNavigationComponent Function DiscoverPOI
struct Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics
{
	struct NarrativeNavigationComponent_eventDiscoverPOI_Parms
	{
		FGameplayTag POITag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//Set a POI as having been \"discovered\" by the player\n" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Set a POI as having been \"discovered\" by the player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POITag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_POITag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::NewProp_POITag = { "POITag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventDiscoverPOI_Parms, POITag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POITag_MetaData), NewProp_POITag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::NewProp_POITag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNavigationComponent, nullptr, "DiscoverPOI", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::NarrativeNavigationComponent_eventDiscoverPOI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::NarrativeNavigationComponent_eventDiscoverPOI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNavigationComponent::execDiscoverPOI)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_POITag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DiscoverPOI(Z_Param_Out_POITag);
	P_NATIVE_END;
}
// End Class UNarrativeNavigationComponent Function DiscoverPOI

// Begin Class UNarrativeNavigationComponent Function GetNearestPOIToPoint
struct Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint_Statics
{
	struct NarrativeNavigationComponent_eventGetNearestPOIToPoint_Parms
	{
		FPOIData OutPointOfInterest;
		FVector TestLocation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Point of Interest" },
		{ "Comment", "//Find POI that is nearest to the given location\n" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Find POI that is nearest to the given location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPointOfInterest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TestLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint_Statics::NewProp_OutPointOfInterest = { "OutPointOfInterest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventGetNearestPOIToPoint_Parms, OutPointOfInterest), Z_Construct_UScriptStruct_FPOIData, METADATA_PARAMS(0, nullptr) }; // 3949940213
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint_Statics::NewProp_TestLocation = { "TestLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventGetNearestPOIToPoint_Parms, TestLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestLocation_MetaData), NewProp_TestLocation_MetaData) };
void Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeNavigationComponent_eventGetNearestPOIToPoint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeNavigationComponent_eventGetNearestPOIToPoint_Parms), &Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint_Statics::NewProp_OutPointOfInterest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint_Statics::NewProp_TestLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNavigationComponent, nullptr, "GetNearestPOIToPoint", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint_Statics::NarrativeNavigationComponent_eventGetNearestPOIToPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint_Statics::NarrativeNavigationComponent_eventGetNearestPOIToPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNavigationComponent::execGetNearestPOIToPoint)
{
	P_GET_STRUCT_REF(FPOIData,Z_Param_Out_OutPointOfInterest);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TestLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetNearestPOIToPoint(Z_Param_Out_OutPointOfInterest,Z_Param_Out_TestLocation);
	P_NATIVE_END;
}
// End Class UNarrativeNavigationComponent Function GetNearestPOIToPoint

// Begin Class UNarrativeNavigationComponent Function GetPointOfInterest
struct Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest_Statics
{
	struct NarrativeNavigationComponent_eventGetPointOfInterest_Parms
	{
		FPOIData OutPointOfInterest;
		FGameplayTag POITag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Point of Interest" },
		{ "Comment", "//Return a POI that has previously been cached. \n" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Return a POI that has previously been cached." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POITag_MetaData[] = {
		{ "Categories", "Navigator.PointOfInterest" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPointOfInterest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_POITag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest_Statics::NewProp_OutPointOfInterest = { "OutPointOfInterest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventGetPointOfInterest_Parms, OutPointOfInterest), Z_Construct_UScriptStruct_FPOIData, METADATA_PARAMS(0, nullptr) }; // 3949940213
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest_Statics::NewProp_POITag = { "POITag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventGetPointOfInterest_Parms, POITag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POITag_MetaData), NewProp_POITag_MetaData) }; // 1298103297
void Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeNavigationComponent_eventGetPointOfInterest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeNavigationComponent_eventGetPointOfInterest_Parms), &Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest_Statics::NewProp_OutPointOfInterest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest_Statics::NewProp_POITag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNavigationComponent, nullptr, "GetPointOfInterest", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest_Statics::NarrativeNavigationComponent_eventGetPointOfInterest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest_Statics::NarrativeNavigationComponent_eventGetPointOfInterest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNavigationComponent::execGetPointOfInterest)
{
	P_GET_STRUCT_REF(FPOIData,Z_Param_Out_OutPointOfInterest);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_POITag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPointOfInterest(Z_Param_Out_OutPointOfInterest,Z_Param_Out_POITag);
	P_NATIVE_END;
}
// End Class UNarrativeNavigationComponent Function GetPointOfInterest

// Begin Class UNarrativeNavigationComponent Function HasDiscoveredPOI
struct Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics
{
	struct NarrativeNavigationComponent_eventHasDiscoveredPOI_Parms
	{
		FGameplayTag POITag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//Check if we've found the given POI in the world\n" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Check if we've found the given POI in the world" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POITag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_POITag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::NewProp_POITag = { "POITag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventHasDiscoveredPOI_Parms, POITag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POITag_MetaData), NewProp_POITag_MetaData) }; // 1298103297
void Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeNavigationComponent_eventHasDiscoveredPOI_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeNavigationComponent_eventHasDiscoveredPOI_Parms), &Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::NewProp_POITag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNavigationComponent, nullptr, "HasDiscoveredPOI", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::NarrativeNavigationComponent_eventHasDiscoveredPOI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::NarrativeNavigationComponent_eventHasDiscoveredPOI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNavigationComponent::execHasDiscoveredPOI)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_POITag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasDiscoveredPOI(Z_Param_Out_POITag);
	P_NATIVE_END;
}
// End Class UNarrativeNavigationComponent Function HasDiscoveredPOI

// Begin Class UNarrativeNavigationComponent Function PlaceCustomWaypoint
struct Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics
{
	struct NarrativeNavigationComponent_eventPlaceCustomWaypoint_Parms
	{
		FTransform Transform;
		UCustomWaypointMarker* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//Place a custom waypoint in the world at the given transform. bAddToSaveFile will ensure the marker is added to our save file \n" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Place a custom waypoint in the world at the given transform. bAddToSaveFile will ensure the marker is added to our save file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventPlaceCustomWaypoint_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventPlaceCustomWaypoint_Parms, ReturnValue), Z_Construct_UClass_UCustomWaypointMarker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNavigationComponent, nullptr, "PlaceCustomWaypoint", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::NarrativeNavigationComponent_eventPlaceCustomWaypoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::NarrativeNavigationComponent_eventPlaceCustomWaypoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNavigationComponent::execPlaceCustomWaypoint)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCustomWaypointMarker**)Z_Param__Result=P_THIS->PlaceCustomWaypoint(Z_Param_Out_Transform);
	P_NATIVE_END;
}
// End Class UNarrativeNavigationComponent Function PlaceCustomWaypoint

// Begin Class UNarrativeNavigationComponent Function RemoveCustomWaypoint
struct Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics
{
	struct NarrativeNavigationComponent_eventRemoveCustomWaypoint_Parms
	{
		UCustomWaypointMarker* Waypoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//Place a custom waypoint in the world at the given transform. bAddToSaveFile will ensure the marker is added to our save file \n" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Place a custom waypoint in the world at the given transform. bAddToSaveFile will ensure the marker is added to our save file" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Waypoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::NewProp_Waypoint = { "Waypoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventRemoveCustomWaypoint_Parms, Waypoint), Z_Construct_UClass_UCustomWaypointMarker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::NewProp_Waypoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNavigationComponent, nullptr, "RemoveCustomWaypoint", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::NarrativeNavigationComponent_eventRemoveCustomWaypoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::NarrativeNavigationComponent_eventRemoveCustomWaypoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNavigationComponent::execRemoveCustomWaypoint)
{
	P_GET_OBJECT(UCustomWaypointMarker,Z_Param_Waypoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveCustomWaypoint(Z_Param_Waypoint);
	P_NATIVE_END;
}
// End Class UNarrativeNavigationComponent Function RemoveCustomWaypoint

// Begin Class UNarrativeNavigationComponent Function RemoveMarker
struct Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveMarker_Statics
{
	struct NarrativeNavigationComponent_eventRemoveMarker_Parms
	{
		UMapMarker* MapMarker;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapMarker;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveMarker_Statics::NewProp_MapMarker = { "MapMarker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventRemoveMarker_Parms, MapMarker), Z_Construct_UClass_UMapMarker_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveMarker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeNavigationComponent_eventRemoveMarker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveMarker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeNavigationComponent_eventRemoveMarker_Parms), &Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveMarker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveMarker_Statics::NewProp_MapMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveMarker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNavigationComponent, nullptr, "RemoveMarker", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveMarker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveMarker_Statics::NarrativeNavigationComponent_eventRemoveMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveMarker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveMarker_Statics::NarrativeNavigationComponent_eventRemoveMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNavigationComponent::execRemoveMarker)
{
	P_GET_OBJECT(UMapMarker,Z_Param_MapMarker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveMarker(Z_Param_MapMarker);
	P_NATIVE_END;
}
// End Class UNarrativeNavigationComponent Function RemoveMarker

// Begin Class UNarrativeNavigationComponent Function SelectMarker
struct Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics
{
	struct NarrativeNavigationComponent_eventSelectMarker_Parms
	{
		UMapMarker* Marker;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Marker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::NewProp_Marker = { "Marker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventSelectMarker_Parms, Marker), Z_Construct_UClass_UMapMarker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::NewProp_Marker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNavigationComponent, nullptr, "SelectMarker", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::NarrativeNavigationComponent_eventSelectMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::NarrativeNavigationComponent_eventSelectMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNavigationComponent::execSelectMarker)
{
	P_GET_OBJECT(UMapMarker,Z_Param_Marker);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectMarker(Z_Param_Marker);
	P_NATIVE_END;
}
// End Class UNarrativeNavigationComponent Function SelectMarker

// Begin Class UNarrativeNavigationComponent Function SetMapLayer
struct Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics
{
	struct NarrativeNavigationComponent_eventSetMapLayer_Parms
	{
		FGameplayTag NewLayer;
		FGameplayTagContainer Domains;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Layers" },
		{ "Comment", "//Set the layer of this map tile for the given domains \n" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Set the layer of this map tile for the given domains" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewLayer_MetaData[] = {
		{ "Categories", "Navigator.MapLayer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Domains_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Domains;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::NewProp_NewLayer = { "NewLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventSetMapLayer_Parms, NewLayer), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewLayer_MetaData), NewProp_NewLayer_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::NewProp_Domains = { "Domains", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNavigationComponent_eventSetMapLayer_Parms, Domains), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Domains_MetaData), NewProp_Domains_MetaData) }; // 3352185621
void Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeNavigationComponent_eventSetMapLayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeNavigationComponent_eventSetMapLayer_Parms), &Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::NewProp_NewLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::NewProp_Domains,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNavigationComponent, nullptr, "SetMapLayer", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::NarrativeNavigationComponent_eventSetMapLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::NarrativeNavigationComponent_eventSetMapLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNavigationComponent::execSetMapLayer)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_NewLayer);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_Domains);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetMapLayer(Z_Param_NewLayer,Z_Param_Domains);
	P_NATIVE_END;
}
// End Class UNarrativeNavigationComponent Function SetMapLayer

// Begin Class UNarrativeNavigationComponent
void UNarrativeNavigationComponent::StaticRegisterNativesUNarrativeNavigationComponent()
{
	UClass* Class = UNarrativeNavigationComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMarker", &UNarrativeNavigationComponent::execAddMarker },
		{ "DiscoverPOI", &UNarrativeNavigationComponent::execDiscoverPOI },
		{ "GetNearestPOIToPoint", &UNarrativeNavigationComponent::execGetNearestPOIToPoint },
		{ "GetPointOfInterest", &UNarrativeNavigationComponent::execGetPointOfInterest },
		{ "HasDiscoveredPOI", &UNarrativeNavigationComponent::execHasDiscoveredPOI },
		{ "PlaceCustomWaypoint", &UNarrativeNavigationComponent::execPlaceCustomWaypoint },
		{ "RemoveCustomWaypoint", &UNarrativeNavigationComponent::execRemoveCustomWaypoint },
		{ "RemoveMarker", &UNarrativeNavigationComponent::execRemoveMarker },
		{ "SelectMarker", &UNarrativeNavigationComponent::execSelectMarker },
		{ "SetMapLayer", &UNarrativeNavigationComponent::execSetMapLayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeNavigationComponent);
UClass* Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister()
{
	return UNarrativeNavigationComponent::StaticClass();
}
struct Z_Construct_UClass_UNarrativeNavigationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/**\nAdd this to your PlayerController.\n\nTo enable navigation, add this to your controller, and you're away.  */" },
		{ "DisplayName", "Navigation Component" },
		{ "IncludePath", "Navigation/NarrativeNavigationComponent.h" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Add this to your PlayerController.\n\nTo enable navigation, add this to your controller, and you're away." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedCustomMarkerTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiscoveredPOIs_MetaData[] = {
		{ "Category", "Point Of Interest" },
		{ "Comment", "/**Contains all the POI's we've found */" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Contains all the POI's we've found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomWaypoints_MetaData[] = {
		{ "Category", "Map Configuration" },
		{ "Comment", "//Our custom waypoints that we've placed. These are serialized to disk. s\n" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Our custom waypoints that we've placed. These are serialized to disk. s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapWidth_MetaData[] = {
		{ "Category", "Map Configuration" },
		{ "Comment", "//How many unreal units wide (cm) is your map image? Enter it here. \n" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "How many unreal units wide (cm) is your map image? Enter it here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapOrigin_MetaData[] = {
		{ "Category", "Map Configuration" },
		{ "Comment", "//What position in the world is the center of your map? Enter that position here. (ie where was the camera located that you took your map shot from)\n" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "What position in the world is the center of your map? Enter that position here. (ie where was the camera located that you took your map shot from)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCustomWaypoints_MetaData[] = {
		{ "Category", "Map Configuration" },
		{ "Comment", "//The max number of custom waypoints we're allowed to place in the world \n" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "The max number of custom waypoints we're allowed to place in the world" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapTileBounds_MetaData[] = {
		{ "Category", "Map Configuration" },
		{ "Comment", "//The bounds we've found in the world, should one exist \n" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "The bounds we've found in the world, should one exist" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Markers_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//All of the markers currently being tracked by this navigation component\n" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "All of the markers currently being tracked by this navigation component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapTiles_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//We cache map tiles seperately for quick access\n" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "We cache map tiles seperately for quick access" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POIMarkers_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//POI markers \n" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "POI markers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POILookupMap_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//Quick lookup map for pois\n" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Quick lookup map for pois" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMarkerAdded_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//Fires when a marker is added to our navigation\n" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Fires when a marker is added to our navigation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMarkerRemoved_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//Fires when a marker is removed from our navigation \n" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Fires when a marker is removed from our navigation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPOIDiscovered_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//Fires when a point of interest has been discovered, in case you want to add a message to the UI or something similar \n" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Fires when a point of interest has been discovered, in case you want to add a message to the UI or something similar" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFastTravelRequested_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//Fires when a fast travel has been requested - each games fast travel implemtation may be game specific. \n" },
		{ "ModuleRelativePath", "Public/Navigation/NarrativeNavigationComponent.h" },
		{ "ToolTip", "Fires when a fast travel has been requested - each games fast travel implemtation may be game specific." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedCustomMarkerTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedCustomMarkerTransforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DiscoveredPOIs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomWaypoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomWaypoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MapWidth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapOrigin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCustomWaypoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapTileBounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Markers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Markers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapTiles_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_MapTiles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_POIMarkers_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_POIMarkers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_POIMarkers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_POILookupMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_POILookupMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_POILookupMap;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMarkerAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMarkerRemoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPOIDiscovered;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFastTravelRequested;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeNavigationComponent_AddMarker, "AddMarker" }, // 212144785
		{ &Z_Construct_UFunction_UNarrativeNavigationComponent_DiscoverPOI, "DiscoverPOI" }, // 884627177
		{ &Z_Construct_UFunction_UNarrativeNavigationComponent_GetNearestPOIToPoint, "GetNearestPOIToPoint" }, // 438362846
		{ &Z_Construct_UFunction_UNarrativeNavigationComponent_GetPointOfInterest, "GetPointOfInterest" }, // 3691272802
		{ &Z_Construct_UFunction_UNarrativeNavigationComponent_HasDiscoveredPOI, "HasDiscoveredPOI" }, // 1787912582
		{ &Z_Construct_UFunction_UNarrativeNavigationComponent_PlaceCustomWaypoint, "PlaceCustomWaypoint" }, // 2211175788
		{ &Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveCustomWaypoint, "RemoveCustomWaypoint" }, // 2782350821
		{ &Z_Construct_UFunction_UNarrativeNavigationComponent_RemoveMarker, "RemoveMarker" }, // 4232061542
		{ &Z_Construct_UFunction_UNarrativeNavigationComponent_SelectMarker, "SelectMarker" }, // 612522078
		{ &Z_Construct_UFunction_UNarrativeNavigationComponent_SetMapLayer, "SetMapLayer" }, // 1295657992
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeNavigationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_SavedCustomMarkerTransforms_Inner = { "SavedCustomMarkerTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_SavedCustomMarkerTransforms = { "SavedCustomMarkerTransforms", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, SavedCustomMarkerTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedCustomMarkerTransforms_MetaData), NewProp_SavedCustomMarkerTransforms_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_DiscoveredPOIs = { "DiscoveredPOIs", nullptr, (EPropertyFlags)0x0020080001000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, DiscoveredPOIs), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiscoveredPOIs_MetaData), NewProp_DiscoveredPOIs_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_CustomWaypoints_Inner = { "CustomWaypoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCustomWaypointMarker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_CustomWaypoints = { "CustomWaypoints", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, CustomWaypoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomWaypoints_MetaData), NewProp_CustomWaypoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MapWidth = { "MapWidth", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, MapWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapWidth_MetaData), NewProp_MapWidth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MapOrigin = { "MapOrigin", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, MapOrigin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapOrigin_MetaData), NewProp_MapOrigin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MaxCustomWaypoints = { "MaxCustomWaypoints", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, MaxCustomWaypoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCustomWaypoints_MetaData), NewProp_MaxCustomWaypoints_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MapTileBounds = { "MapTileBounds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, MapTileBounds), Z_Construct_UClass_AMapTileBounds_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapTileBounds_MetaData), NewProp_MapTileBounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_Markers_Inner = { "Markers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMapMarker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_Markers = { "Markers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, Markers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Markers_MetaData), NewProp_Markers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MapTiles_ElementProp = { "MapTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMapTileMarker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MapTiles = { "MapTiles", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, MapTiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapTiles_MetaData), NewProp_MapTiles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_POIMarkers_ValueProp = { "POIMarkers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPOIMapMarker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_POIMarkers_Key_KeyProp = { "POIMarkers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_POIMarkers = { "POIMarkers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, POIMarkers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POIMarkers_MetaData), NewProp_POIMarkers_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_POILookupMap_ValueProp = { "POILookupMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPOIData, METADATA_PARAMS(0, nullptr) }; // 3949940213
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_POILookupMap_Key_KeyProp = { "POILookupMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_POILookupMap = { "POILookupMap", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, POILookupMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POILookupMap_MetaData), NewProp_POILookupMap_MetaData) }; // 1298103297 3949940213
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_OnMarkerAdded = { "OnMarkerAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, OnMarkerAdded), Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMarkerAdded_MetaData), NewProp_OnMarkerAdded_MetaData) }; // 2264969050
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_OnMarkerRemoved = { "OnMarkerRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, OnMarkerRemoved), Z_Construct_UDelegateFunction_NarrativeArsenal_OnMarkerRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMarkerRemoved_MetaData), NewProp_OnMarkerRemoved_MetaData) }; // 3231078534
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_OnPOIDiscovered = { "OnPOIDiscovered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, OnPOIDiscovered), Z_Construct_UDelegateFunction_NarrativeArsenal_OnDiscoverPointOfInterest__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPOIDiscovered_MetaData), NewProp_OnPOIDiscovered_MetaData) }; // 4014412814
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_OnFastTravelRequested = { "OnFastTravelRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNavigationComponent, OnFastTravelRequested), Z_Construct_UDelegateFunction_NarrativeArsenal_OnFastTravelRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFastTravelRequested_MetaData), NewProp_OnFastTravelRequested_MetaData) }; // 2715084314
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeNavigationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_SavedCustomMarkerTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_SavedCustomMarkerTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_DiscoveredPOIs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_CustomWaypoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_CustomWaypoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MapWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MapOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MaxCustomWaypoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MapTileBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_Markers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_Markers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MapTiles_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_MapTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_POIMarkers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_POIMarkers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_POIMarkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_POILookupMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_POILookupMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_POILookupMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_OnMarkerAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_OnMarkerRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_OnPOIDiscovered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNavigationComponent_Statics::NewProp_OnFastTravelRequested,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeNavigationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeNavigationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeNavigationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNarrativeSavableComponent_NoRegister, (int32)VTABLE_OFFSET(UNarrativeNavigationComponent, INarrativeSavableComponent), false },  // 1573843113
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeNavigationComponent_Statics::ClassParams = {
	&UNarrativeNavigationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeNavigationComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeNavigationComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeNavigationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeNavigationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeNavigationComponent()
{
	if (!Z_Registration_Info_UClass_UNarrativeNavigationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeNavigationComponent.OuterSingleton, Z_Construct_UClass_UNarrativeNavigationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeNavigationComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeNavigationComponent>()
{
	return UNarrativeNavigationComponent::StaticClass();
}
void UNarrativeNavigationComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_DiscoveredPOIs(TEXT("DiscoveredPOIs"));
	const bool bIsValid = true
		&& Name_DiscoveredPOIs == ClassReps[(int32)ENetFields_Private::DiscoveredPOIs].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNarrativeNavigationComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeNavigationComponent);
UNarrativeNavigationComponent::~UNarrativeNavigationComponent() {}
// End Class UNarrativeNavigationComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NarrativeNavigationComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeNavigationComponent, UNarrativeNavigationComponent::StaticClass, TEXT("UNarrativeNavigationComponent"), &Z_Registration_Info_UClass_UNarrativeNavigationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeNavigationComponent), 3532891779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NarrativeNavigationComponent_h_427482948(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NarrativeNavigationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NarrativeNavigationComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
