// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Navigation/MapMarker.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapMarker() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UMapMarker();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UMapMarker_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnRefreshRequired__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnSelected__DelegateSignature();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationMarkerSettings();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FZoneDrawData();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Delegate FOnRefreshRequired
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnRefreshRequired__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnRefreshRequired__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnRefreshRequired__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnRefreshRequired__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnRefreshRequired__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnRefreshRequired__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnRefreshRequired__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRefreshRequired_DelegateWrapper(const FMulticastScriptDelegate& OnRefreshRequired)
{
	OnRefreshRequired.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnRefreshRequired

// Begin Delegate FOnSelected
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnSelected__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnSelected_Parms
	{
		UNarrativeNavigationComponent* Selector;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Selector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnSelected__DelegateSignature_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnSelected_Parms, Selector), Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selector_MetaData), NewProp_Selector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnSelected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnSelected__DelegateSignature_Statics::NewProp_Selector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnSelected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnSelected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnSelected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnSelected__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnSelected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnSelected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnSelected__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnSelected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnSelected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSelected_DelegateWrapper(const FMulticastScriptDelegate& OnSelected, UNarrativeNavigationComponent* Selector)
{
	struct _Script_NarrativeArsenal_eventOnSelected_Parms
	{
		UNarrativeNavigationComponent* Selector;
	};
	_Script_NarrativeArsenal_eventOnSelected_Parms Parms;
	Parms.Selector=Selector;
	OnSelected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSelected

// Begin ScriptStruct FZoneDrawData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneDrawData;
class UScriptStruct* FZoneDrawData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneDrawData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneDrawData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneDrawData, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("ZoneDrawData"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneDrawData.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FZoneDrawData>()
{
	return FZoneDrawData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FZoneDrawData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "Map Points" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneDrawData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneDrawData_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FZoneDrawData_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneDrawData, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneDrawData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneDrawData_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneDrawData_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneDrawData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneDrawData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"ZoneDrawData",
	Z_Construct_UScriptStruct_FZoneDrawData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneDrawData_Statics::PropPointers),
	sizeof(FZoneDrawData),
	alignof(FZoneDrawData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneDrawData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FZoneDrawData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FZoneDrawData()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneDrawData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneDrawData.InnerSingleton, Z_Construct_UScriptStruct_FZoneDrawData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ZoneDrawData.InnerSingleton;
}
// End ScriptStruct FZoneDrawData

// Begin ScriptStruct FNavigationMarkerSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavigationMarkerSettings;
class UScriptStruct* FNavigationMarkerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavigationMarkerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavigationMarkerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationMarkerSettings, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("NavigationMarkerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_NavigationMarkerSettings.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FNavigationMarkerSettings>()
{
	return FNavigationMarkerSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocationDisplayName_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocationIcon_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_IconTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_IconSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_IconOffset_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_bShowActorRotation_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerTitleText_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//The display name to use for this location \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "The display name to use for this location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerSubtitleText_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//The display name to use for this location \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "The display name to use for this location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationIcon_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//The icon to use for this location \n" },
		{ "EditCondition", "bOverride_LocationIcon" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "The icon to use for this location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconTint_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//Tint for the icon\n" },
		{ "EditCondition", "bOverride_IconTint" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "Tint for the icon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconSize_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//The icons size on the compass, map, screen marker, whereever the icon is being used \n" },
		{ "EditCondition", "bOverride_IconSize" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "The icons size on the compass, map, screen marker, whereever the icon is being used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconOffset_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//Add an offset in the actors space - more efficient than making markers scene components with a transform \n" },
		{ "EditCondition", "bOverride_IconOffset" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "Add an offset in the actors space - more efficient than making markers scene components with a transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowActorRotation_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//Whether this markers rotation should be shown on the map, for any navigator widgets that use this feature\n" },
		{ "EditCondition", "bOverride_bShowActorRotation" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "Whether this markers rotation should be shown on the map, for any navigator widgets that use this feature" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_LocationDisplayName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocationDisplayName;
	static void NewProp_bOverride_LocationIcon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocationIcon;
	static void NewProp_bOverride_IconTint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_IconTint;
	static void NewProp_bOverride_IconSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_IconSize;
	static void NewProp_bOverride_IconOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_IconOffset;
	static void NewProp_bOverride_bShowActorRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_bShowActorRotation;
	static const UECodeGen_Private::FTextPropertyParams NewProp_MarkerTitleText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_MarkerSubtitleText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationIcon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconTint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconOffset;
	static void NewProp_bShowActorRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowActorRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationMarkerSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_LocationDisplayName_SetBit(void* Obj)
{
	((FNavigationMarkerSettings*)Obj)->bOverride_LocationDisplayName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_LocationDisplayName = { "bOverride_LocationDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationMarkerSettings), &Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_LocationDisplayName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LocationDisplayName_MetaData), NewProp_bOverride_LocationDisplayName_MetaData) };
void Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_LocationIcon_SetBit(void* Obj)
{
	((FNavigationMarkerSettings*)Obj)->bOverride_LocationIcon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_LocationIcon = { "bOverride_LocationIcon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationMarkerSettings), &Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_LocationIcon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LocationIcon_MetaData), NewProp_bOverride_LocationIcon_MetaData) };
void Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconTint_SetBit(void* Obj)
{
	((FNavigationMarkerSettings*)Obj)->bOverride_IconTint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconTint = { "bOverride_IconTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationMarkerSettings), &Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconTint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_IconTint_MetaData), NewProp_bOverride_IconTint_MetaData) };
void Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconSize_SetBit(void* Obj)
{
	((FNavigationMarkerSettings*)Obj)->bOverride_IconSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconSize = { "bOverride_IconSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationMarkerSettings), &Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_IconSize_MetaData), NewProp_bOverride_IconSize_MetaData) };
void Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconOffset_SetBit(void* Obj)
{
	((FNavigationMarkerSettings*)Obj)->bOverride_IconOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconOffset = { "bOverride_IconOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationMarkerSettings), &Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_IconOffset_MetaData), NewProp_bOverride_IconOffset_MetaData) };
void Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_bShowActorRotation_SetBit(void* Obj)
{
	((FNavigationMarkerSettings*)Obj)->bOverride_bShowActorRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_bShowActorRotation = { "bOverride_bShowActorRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationMarkerSettings), &Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_bShowActorRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_bShowActorRotation_MetaData), NewProp_bOverride_bShowActorRotation_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_MarkerTitleText = { "MarkerTitleText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavigationMarkerSettings, MarkerTitleText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerTitleText_MetaData), NewProp_MarkerTitleText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_MarkerSubtitleText = { "MarkerSubtitleText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavigationMarkerSettings, MarkerSubtitleText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerSubtitleText_MetaData), NewProp_MarkerSubtitleText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_LocationIcon = { "LocationIcon", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavigationMarkerSettings, LocationIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationIcon_MetaData), NewProp_LocationIcon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_IconTint = { "IconTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavigationMarkerSettings, IconTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconTint_MetaData), NewProp_IconTint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_IconSize = { "IconSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavigationMarkerSettings, IconSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconSize_MetaData), NewProp_IconSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_IconOffset = { "IconOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavigationMarkerSettings, IconOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconOffset_MetaData), NewProp_IconOffset_MetaData) };
void Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bShowActorRotation_SetBit(void* Obj)
{
	((FNavigationMarkerSettings*)Obj)->bShowActorRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bShowActorRotation = { "bShowActorRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNavigationMarkerSettings), &Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bShowActorRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowActorRotation_MetaData), NewProp_bShowActorRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_LocationDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_LocationIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_IconOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bOverride_bShowActorRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_MarkerTitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_MarkerSubtitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_LocationIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_IconTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_IconSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_IconOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewProp_bShowActorRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"NavigationMarkerSettings",
	Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::PropPointers),
	sizeof(FNavigationMarkerSettings),
	alignof(FNavigationMarkerSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavigationMarkerSettings()
{
	if (!Z_Registration_Info_UScriptStruct_NavigationMarkerSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavigationMarkerSettings.InnerSingleton, Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NavigationMarkerSettings.InnerSingleton;
}
// End ScriptStruct FNavigationMarkerSettings

// Begin Class UMapMarker Function AddDomains
struct Z_Construct_UFunction_UMapMarker_AddDomains_Statics
{
	struct MapMarker_eventAddDomains_Parms
	{
		FGameplayTagContainer NewMarkerDomains;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "// addd domains \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "addd domains" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMarkerDomains_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewMarkerDomains;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapMarker_AddDomains_Statics::NewProp_NewMarkerDomains = { "NewMarkerDomains", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarker_eventAddDomains_Parms, NewMarkerDomains), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMarkerDomains_MetaData), NewProp_NewMarkerDomains_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarker_AddDomains_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_AddDomains_Statics::NewProp_NewMarkerDomains,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_AddDomains_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarker_AddDomains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarker, nullptr, "AddDomains", nullptr, nullptr, Z_Construct_UFunction_UMapMarker_AddDomains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_AddDomains_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapMarker_AddDomains_Statics::MapMarker_eventAddDomains_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_AddDomains_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarker_AddDomains_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapMarker_AddDomains_Statics::MapMarker_eventAddDomains_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarker_AddDomains()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarker_AddDomains_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarker::execAddDomains)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_NewMarkerDomains);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDomains(Z_Param_Out_NewMarkerDomains);
	P_NATIVE_END;
}
// End Class UMapMarker Function AddDomains

// Begin Class UMapMarker Function CanInteract
struct MapMarker_eventCanInteract_Parms
{
	UNarrativeNavigationComponent* Selector;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MapMarker_eventCanInteract_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UMapMarker_CanInteract = FName(TEXT("CanInteract"));
bool UMapMarker::CanInteract(UNarrativeNavigationComponent* Selector) const
{
	UFunction* Func = FindFunctionChecked(NAME_UMapMarker_CanInteract);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MapMarker_eventCanInteract_Parms Parms;
		Parms.Selector=Selector;
		const_cast<UMapMarker*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UMapMarker*>(this)->CanInteract_Implementation(Selector);
	}
}
struct Z_Construct_UFunction_UMapMarker_CanInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "//Handle what the marker should be clickable or hoverable, or if it is just an icon with no interaction\n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "Handle what the marker should be clickable or hoverable, or if it is just an icon with no interaction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Selector;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapMarker_CanInteract_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarker_eventCanInteract_Parms, Selector), Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selector_MetaData), NewProp_Selector_MetaData) };
void Z_Construct_UFunction_UMapMarker_CanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapMarker_eventCanInteract_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapMarker_CanInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMarker_eventCanInteract_Parms), &Z_Construct_UFunction_UMapMarker_CanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarker_CanInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_CanInteract_Statics::NewProp_Selector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_CanInteract_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_CanInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarker_CanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarker, nullptr, "CanInteract", nullptr, nullptr, Z_Construct_UFunction_UMapMarker_CanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_CanInteract_Statics::PropPointers), sizeof(MapMarker_eventCanInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_CanInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarker_CanInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(MapMarker_eventCanInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarker_CanInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarker_CanInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarker::execCanInteract)
{
	P_GET_OBJECT(UNarrativeNavigationComponent,Z_Param_Selector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanInteract_Implementation(Z_Param_Selector);
	P_NATIVE_END;
}
// End Class UMapMarker Function CanInteract

// Begin Class UMapMarker Function GetMarkerActionText
struct MapMarker_eventGetMarkerActionText_Parms
{
	UNarrativeNavigationComponent* Selector;
	FText ReturnValue;
};
static const FName NAME_UMapMarker_GetMarkerActionText = FName(TEXT("GetMarkerActionText"));
FText UMapMarker::GetMarkerActionText(UNarrativeNavigationComponent* Selector) const
{
	UFunction* Func = FindFunctionChecked(NAME_UMapMarker_GetMarkerActionText);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MapMarker_eventGetMarkerActionText_Parms Parms;
		Parms.Selector=Selector;
		const_cast<UMapMarker*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UMapMarker*>(this)->GetMarkerActionText_Implementation(Selector);
	}
}
struct Z_Construct_UFunction_UMapMarker_GetMarkerActionText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "//Text for what happens when we click on the marker \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "Text for what happens when we click on the marker" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Selector;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapMarker_GetMarkerActionText_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarker_eventGetMarkerActionText_Parms, Selector), Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selector_MetaData), NewProp_Selector_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMapMarker_GetMarkerActionText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarker_eventGetMarkerActionText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarker_GetMarkerActionText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_GetMarkerActionText_Statics::NewProp_Selector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_GetMarkerActionText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_GetMarkerActionText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarker_GetMarkerActionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarker, nullptr, "GetMarkerActionText", nullptr, nullptr, Z_Construct_UFunction_UMapMarker_GetMarkerActionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_GetMarkerActionText_Statics::PropPointers), sizeof(MapMarker_eventGetMarkerActionText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_GetMarkerActionText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarker_GetMarkerActionText_Statics::Function_MetaDataParams) };
static_assert(sizeof(MapMarker_eventGetMarkerActionText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarker_GetMarkerActionText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarker_GetMarkerActionText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarker::execGetMarkerActionText)
{
	P_GET_OBJECT(UNarrativeNavigationComponent,Z_Param_Selector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetMarkerActionText_Implementation(Z_Param_Selector);
	P_NATIVE_END;
}
// End Class UMapMarker Function GetMarkerActionText

// Begin Class UMapMarker Function GetMarkerColor
struct MapMarker_eventGetMarkerColor_Parms
{
	UNarrativeNavigationComponent* Selector;
	FGameplayTag NavigatorType;
	FLinearColor ReturnValue;

	/** Constructor, initializes return property only **/
	MapMarker_eventGetMarkerColor_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_UMapMarker_GetMarkerColor = FName(TEXT("GetMarkerColor"));
FLinearColor UMapMarker::GetMarkerColor(UNarrativeNavigationComponent* Selector, FGameplayTag const& NavigatorType) const
{
	UFunction* Func = FindFunctionChecked(NAME_UMapMarker_GetMarkerColor);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MapMarker_eventGetMarkerColor_Parms Parms;
		Parms.Selector=Selector;
		Parms.NavigatorType=NavigatorType;
		const_cast<UMapMarker*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UMapMarker*>(this)->GetMarkerColor_Implementation(Selector, NavigatorType);
	}
}
struct Z_Construct_UFunction_UMapMarker_GetMarkerColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "//Display color for the marker, override if you need dynamic \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "Display color for the marker, override if you need dynamic" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigatorType_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Selector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavigatorType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapMarker_GetMarkerColor_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarker_eventGetMarkerColor_Parms, Selector), Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selector_MetaData), NewProp_Selector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapMarker_GetMarkerColor_Statics::NewProp_NavigatorType = { "NavigatorType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarker_eventGetMarkerColor_Parms, NavigatorType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigatorType_MetaData), NewProp_NavigatorType_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapMarker_GetMarkerColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarker_eventGetMarkerColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarker_GetMarkerColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_GetMarkerColor_Statics::NewProp_Selector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_GetMarkerColor_Statics::NewProp_NavigatorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_GetMarkerColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_GetMarkerColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarker_GetMarkerColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarker, nullptr, "GetMarkerColor", nullptr, nullptr, Z_Construct_UFunction_UMapMarker_GetMarkerColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_GetMarkerColor_Statics::PropPointers), sizeof(MapMarker_eventGetMarkerColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_GetMarkerColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarker_GetMarkerColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(MapMarker_eventGetMarkerColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarker_GetMarkerColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarker_GetMarkerColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarker::execGetMarkerColor)
{
	P_GET_OBJECT(UNarrativeNavigationComponent,Z_Param_Selector);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NavigatorType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetMarkerColor_Implementation(Z_Param_Selector,Z_Param_Out_NavigatorType);
	P_NATIVE_END;
}
// End Class UMapMarker Function GetMarkerColor

// Begin Class UMapMarker Function GetMarkerDisplayText
struct MapMarker_eventGetMarkerDisplayText_Parms
{
	UNarrativeNavigationComponent* Selector;
	FGameplayTag NavigatorType;
	FText OutSubtitleText;
	FText ReturnValue;
};
static const FName NAME_UMapMarker_GetMarkerDisplayText = FName(TEXT("GetMarkerDisplayText"));
FText UMapMarker::GetMarkerDisplayText(UNarrativeNavigationComponent* Selector, FGameplayTag const& NavigatorType, FText& OutSubtitleText) const
{
	UFunction* Func = FindFunctionChecked(NAME_UMapMarker_GetMarkerDisplayText);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MapMarker_eventGetMarkerDisplayText_Parms Parms;
		Parms.Selector=Selector;
		Parms.NavigatorType=NavigatorType;
		Parms.OutSubtitleText=OutSubtitleText;
		const_cast<UMapMarker*>(this)->ProcessEvent(Func,&Parms);
		OutSubtitleText=Parms.OutSubtitleText;
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UMapMarker*>(this)->GetMarkerDisplayText_Implementation(Selector, NavigatorType, OutSubtitleText);
	}
}
struct Z_Construct_UFunction_UMapMarker_GetMarkerDisplayText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "//Display text for the marker, override if you need dynamic \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "Display text for the marker, override if you need dynamic" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigatorType_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Selector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavigatorType;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutSubtitleText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapMarker_GetMarkerDisplayText_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarker_eventGetMarkerDisplayText_Parms, Selector), Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selector_MetaData), NewProp_Selector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapMarker_GetMarkerDisplayText_Statics::NewProp_NavigatorType = { "NavigatorType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarker_eventGetMarkerDisplayText_Parms, NavigatorType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigatorType_MetaData), NewProp_NavigatorType_MetaData) }; // 1298103297
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMapMarker_GetMarkerDisplayText_Statics::NewProp_OutSubtitleText = { "OutSubtitleText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarker_eventGetMarkerDisplayText_Parms, OutSubtitleText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMapMarker_GetMarkerDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarker_eventGetMarkerDisplayText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarker_GetMarkerDisplayText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_GetMarkerDisplayText_Statics::NewProp_Selector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_GetMarkerDisplayText_Statics::NewProp_NavigatorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_GetMarkerDisplayText_Statics::NewProp_OutSubtitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_GetMarkerDisplayText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_GetMarkerDisplayText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarker_GetMarkerDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarker, nullptr, "GetMarkerDisplayText", nullptr, nullptr, Z_Construct_UFunction_UMapMarker_GetMarkerDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_GetMarkerDisplayText_Statics::PropPointers), sizeof(MapMarker_eventGetMarkerDisplayText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_GetMarkerDisplayText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarker_GetMarkerDisplayText_Statics::Function_MetaDataParams) };
static_assert(sizeof(MapMarker_eventGetMarkerDisplayText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarker_GetMarkerDisplayText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarker_GetMarkerDisplayText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarker::execGetMarkerDisplayText)
{
	P_GET_OBJECT(UNarrativeNavigationComponent,Z_Param_Selector);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NavigatorType);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutSubtitleText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetMarkerDisplayText_Implementation(Z_Param_Selector,Z_Param_Out_NavigatorType,Z_Param_Out_OutSubtitleText);
	P_NATIVE_END;
}
// End Class UMapMarker Function GetMarkerDisplayText

// Begin Class UMapMarker Function GetMarkerSettings
struct Z_Construct_UFunction_UMapMarker_GetMarkerSettings_Statics
{
	struct MapMarker_eventGetMarkerSettings_Parms
	{
		FGameplayTag NavigatorType;
		FNavigationMarkerSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "//Grab the settings for the nav marker and any overrides - this is just called once on init for marker icons\n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "Grab the settings for the nav marker and any overrides - this is just called once on init for marker icons" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigatorType_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavigatorType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapMarker_GetMarkerSettings_Statics::NewProp_NavigatorType = { "NavigatorType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarker_eventGetMarkerSettings_Parms, NavigatorType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigatorType_MetaData), NewProp_NavigatorType_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapMarker_GetMarkerSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarker_eventGetMarkerSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FNavigationMarkerSettings, METADATA_PARAMS(0, nullptr) }; // 280316562
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarker_GetMarkerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_GetMarkerSettings_Statics::NewProp_NavigatorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_GetMarkerSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_GetMarkerSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarker_GetMarkerSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarker, nullptr, "GetMarkerSettings", nullptr, nullptr, Z_Construct_UFunction_UMapMarker_GetMarkerSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_GetMarkerSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapMarker_GetMarkerSettings_Statics::MapMarker_eventGetMarkerSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_GetMarkerSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarker_GetMarkerSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapMarker_GetMarkerSettings_Statics::MapMarker_eventGetMarkerSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarker_GetMarkerSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarker_GetMarkerSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarker::execGetMarkerSettings)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NavigatorType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNavigationMarkerSettings*)Z_Param__Result=P_THIS->GetMarkerSettings(Z_Param_Out_NavigatorType);
	P_NATIVE_END;
}
// End Class UMapMarker Function GetMarkerSettings

// Begin Class UMapMarker Function GetMarkerTransform
struct Z_Construct_UFunction_UMapMarker_GetMarkerTransform_Statics
{
	struct MapMarker_eventGetMarkerTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "//Gets the transform of the marker\n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "Gets the transform of the marker" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapMarker_GetMarkerTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarker_eventGetMarkerTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarker_GetMarkerTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_GetMarkerTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_GetMarkerTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarker_GetMarkerTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarker, nullptr, "GetMarkerTransform", nullptr, nullptr, Z_Construct_UFunction_UMapMarker_GetMarkerTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_GetMarkerTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapMarker_GetMarkerTransform_Statics::MapMarker_eventGetMarkerTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_GetMarkerTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarker_GetMarkerTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapMarker_GetMarkerTransform_Statics::MapMarker_eventGetMarkerTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarker_GetMarkerTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarker_GetMarkerTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarker::execGetMarkerTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetMarkerTransform();
	P_NATIVE_END;
}
// End Class UMapMarker Function GetMarkerTransform

// Begin Class UMapMarker Function GetMarkerZOrder
struct Z_Construct_UFunction_UMapMarker_GetMarkerZOrder_Statics
{
	struct MapMarker_eventGetMarkerZOrder_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "//Gets the desired Zorder of the marker\n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "Gets the desired Zorder of the marker" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapMarker_GetMarkerZOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarker_eventGetMarkerZOrder_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarker_GetMarkerZOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_GetMarkerZOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_GetMarkerZOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarker_GetMarkerZOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarker, nullptr, "GetMarkerZOrder", nullptr, nullptr, Z_Construct_UFunction_UMapMarker_GetMarkerZOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_GetMarkerZOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapMarker_GetMarkerZOrder_Statics::MapMarker_eventGetMarkerZOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_GetMarkerZOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarker_GetMarkerZOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapMarker_GetMarkerZOrder_Statics::MapMarker_eventGetMarkerZOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarker_GetMarkerZOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarker_GetMarkerZOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarker::execGetMarkerZOrder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMarkerZOrder();
	P_NATIVE_END;
}
// End Class UMapMarker Function GetMarkerZOrder

// Begin Class UMapMarker Function OnOwnerDestroyed
struct Z_Construct_UFunction_UMapMarker_OnOwnerDestroyed_Statics
{
	struct MapMarker_eventOnOwnerDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapMarker_OnOwnerDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarker_eventOnOwnerDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarker_OnOwnerDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_OnOwnerDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_OnOwnerDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarker_OnOwnerDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarker, nullptr, "OnOwnerDestroyed", nullptr, nullptr, Z_Construct_UFunction_UMapMarker_OnOwnerDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_OnOwnerDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapMarker_OnOwnerDestroyed_Statics::MapMarker_eventOnOwnerDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_OnOwnerDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarker_OnOwnerDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapMarker_OnOwnerDestroyed_Statics::MapMarker_eventOnOwnerDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarker_OnOwnerDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarker_OnOwnerDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarker::execOnOwnerDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOwnerDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// End Class UMapMarker Function OnOwnerDestroyed

// Begin Class UMapMarker Function OnSelect
struct MapMarker_eventOnSelect_Parms
{
	UNarrativeNavigationComponent* Selector;
};
static const FName NAME_UMapMarker_OnSelect = FName(TEXT("OnSelect"));
void UMapMarker::OnSelect(UNarrativeNavigationComponent* Selector)
{
	UFunction* Func = FindFunctionChecked(NAME_UMapMarker_OnSelect);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MapMarker_eventOnSelect_Parms Parms;
		Parms.Selector=Selector;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnSelect_Implementation(Selector);
	}
}
struct Z_Construct_UFunction_UMapMarker_OnSelect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "//Handle what the marker should do when clicked in the map\n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "Handle what the marker should do when clicked in the map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Selector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapMarker_OnSelect_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarker_eventOnSelect_Parms, Selector), Z_Construct_UClass_UNarrativeNavigationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selector_MetaData), NewProp_Selector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarker_OnSelect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_OnSelect_Statics::NewProp_Selector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_OnSelect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarker_OnSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarker, nullptr, "OnSelect", nullptr, nullptr, Z_Construct_UFunction_UMapMarker_OnSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_OnSelect_Statics::PropPointers), sizeof(MapMarker_eventOnSelect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_OnSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarker_OnSelect_Statics::Function_MetaDataParams) };
static_assert(sizeof(MapMarker_eventOnSelect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarker_OnSelect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarker_OnSelect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarker::execOnSelect)
{
	P_GET_OBJECT(UNarrativeNavigationComponent,Z_Param_Selector);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSelect_Implementation(Z_Param_Selector);
	P_NATIVE_END;
}
// End Class UMapMarker Function OnSelect

// Begin Class UMapMarker Function RefreshMarker
struct Z_Construct_UFunction_UMapMarker_RefreshMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "//Call this function whenever you've changed some settings on the marker! It will inform the UI widgets they need to refresh themselves. \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "Call this function whenever you've changed some settings on the marker! It will inform the UI widgets they need to refresh themselves." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarker_RefreshMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarker, nullptr, "RefreshMarker", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_RefreshMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarker_RefreshMarker_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMapMarker_RefreshMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarker_RefreshMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarker::execRefreshMarker)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshMarker();
	P_NATIVE_END;
}
// End Class UMapMarker Function RefreshMarker

// Begin Class UMapMarker Function RegisterMarker
struct Z_Construct_UFunction_UMapMarker_RegisterMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Marker" },
		{ "Comment", "//Add or remove the marker from all navigators. To remove from a specific navigator, use the Add/RemoveDomain functions. \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "Add or remove the marker from all navigators. To remove from a specific navigator, use the Add/RemoveDomain functions." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarker_RegisterMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarker, nullptr, "RegisterMarker", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_RegisterMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarker_RegisterMarker_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMapMarker_RegisterMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarker_RegisterMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarker::execRegisterMarker)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterMarker();
	P_NATIVE_END;
}
// End Class UMapMarker Function RegisterMarker

// Begin Class UMapMarker Function RemoveDomains
struct Z_Construct_UFunction_UMapMarker_RemoveDomains_Statics
{
	struct MapMarker_eventRemoveDomains_Parms
	{
		FGameplayTagContainer RemoveDomains;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "//remove domains \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "remove domains" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveDomains_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveDomains;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapMarker_RemoveDomains_Statics::NewProp_RemoveDomains = { "RemoveDomains", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarker_eventRemoveDomains_Parms, RemoveDomains), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveDomains_MetaData), NewProp_RemoveDomains_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarker_RemoveDomains_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_RemoveDomains_Statics::NewProp_RemoveDomains,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_RemoveDomains_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarker_RemoveDomains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarker, nullptr, "RemoveDomains", nullptr, nullptr, Z_Construct_UFunction_UMapMarker_RemoveDomains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_RemoveDomains_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapMarker_RemoveDomains_Statics::MapMarker_eventRemoveDomains_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_RemoveDomains_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarker_RemoveDomains_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapMarker_RemoveDomains_Statics::MapMarker_eventRemoveDomains_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarker_RemoveDomains()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarker_RemoveDomains_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarker::execRemoveDomains)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_RemoveDomains);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveDomains(Z_Param_Out_RemoveDomains);
	P_NATIVE_END;
}
// End Class UMapMarker Function RemoveDomains

// Begin Class UMapMarker Function RemoveMarker
struct Z_Construct_UFunction_UMapMarker_RemoveMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Marker" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarker_RemoveMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarker, nullptr, "RemoveMarker", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_RemoveMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarker_RemoveMarker_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMapMarker_RemoveMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarker_RemoveMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarker::execRemoveMarker)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveMarker();
	P_NATIVE_END;
}
// End Class UMapMarker Function RemoveMarker

// Begin Class UMapMarker Function SetDefaultDomains
struct Z_Construct_UFunction_UMapMarker_SetDefaultDomains_Statics
{
	struct MapMarker_eventSetDefaultDomains_Parms
	{
		FGameplayTagContainer NewMarkerDomain;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMarkerDomain_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewMarkerDomain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapMarker_SetDefaultDomains_Statics::NewProp_NewMarkerDomain = { "NewMarkerDomain", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarker_eventSetDefaultDomains_Parms, NewMarkerDomain), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMarkerDomain_MetaData), NewProp_NewMarkerDomain_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarker_SetDefaultDomains_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_SetDefaultDomains_Statics::NewProp_NewMarkerDomain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_SetDefaultDomains_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarker_SetDefaultDomains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarker, nullptr, "SetDefaultDomains", nullptr, nullptr, Z_Construct_UFunction_UMapMarker_SetDefaultDomains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_SetDefaultDomains_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapMarker_SetDefaultDomains_Statics::MapMarker_eventSetDefaultDomains_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_SetDefaultDomains_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarker_SetDefaultDomains_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapMarker_SetDefaultDomains_Statics::MapMarker_eventSetDefaultDomains_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarker_SetDefaultDomains()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarker_SetDefaultDomains_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarker::execSetDefaultDomains)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_NewMarkerDomain);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultDomains(Z_Param_Out_NewMarkerDomain);
	P_NATIVE_END;
}
// End Class UMapMarker Function SetDefaultDomains

// Begin Class UMapMarker Function SetDomains
struct Z_Construct_UFunction_UMapMarker_SetDomains_Statics
{
	struct MapMarker_eventSetDomains_Parms
	{
		FGameplayTagContainer NewMarkerDomain;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Marker" },
		{ "Comment", "// Check if this marker should be shown in the given location \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "Check if this marker should be shown in the given location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMarkerDomain_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewMarkerDomain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapMarker_SetDomains_Statics::NewProp_NewMarkerDomain = { "NewMarkerDomain", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarker_eventSetDomains_Parms, NewMarkerDomain), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMarkerDomain_MetaData), NewProp_NewMarkerDomain_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarker_SetDomains_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarker_SetDomains_Statics::NewProp_NewMarkerDomain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_SetDomains_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarker_SetDomains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarker, nullptr, "SetDomains", nullptr, nullptr, Z_Construct_UFunction_UMapMarker_SetDomains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_SetDomains_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapMarker_SetDomains_Statics::MapMarker_eventSetDomains_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarker_SetDomains_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarker_SetDomains_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapMarker_SetDomains_Statics::MapMarker_eventSetDomains_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarker_SetDomains()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarker_SetDomains_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarker::execSetDomains)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_NewMarkerDomain);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDomains(Z_Param_Out_NewMarkerDomain);
	P_NATIVE_END;
}
// End Class UMapMarker Function SetDomains

// Begin Class UMapMarker
void UMapMarker::StaticRegisterNativesUMapMarker()
{
	UClass* Class = UMapMarker::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDomains", &UMapMarker::execAddDomains },
		{ "CanInteract", &UMapMarker::execCanInteract },
		{ "GetMarkerActionText", &UMapMarker::execGetMarkerActionText },
		{ "GetMarkerColor", &UMapMarker::execGetMarkerColor },
		{ "GetMarkerDisplayText", &UMapMarker::execGetMarkerDisplayText },
		{ "GetMarkerSettings", &UMapMarker::execGetMarkerSettings },
		{ "GetMarkerTransform", &UMapMarker::execGetMarkerTransform },
		{ "GetMarkerZOrder", &UMapMarker::execGetMarkerZOrder },
		{ "OnOwnerDestroyed", &UMapMarker::execOnOwnerDestroyed },
		{ "OnSelect", &UMapMarker::execOnSelect },
		{ "RefreshMarker", &UMapMarker::execRefreshMarker },
		{ "RegisterMarker", &UMapMarker::execRegisterMarker },
		{ "RemoveDomains", &UMapMarker::execRemoveDomains },
		{ "RemoveMarker", &UMapMarker::execRemoveMarker },
		{ "SetDefaultDomains", &UMapMarker::execSetDefaultDomains },
		{ "SetDomains", &UMapMarker::execSetDomains },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapMarker);
UClass* Z_Construct_UClass_UMapMarker_NoRegister()
{
	return UMapMarker::StaticClass();
}
struct Z_Construct_UClass_UMapMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for a navigation marker in Narrative Navigator. \n */" },
		{ "IncludePath", "Navigation/MapMarker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for a navigation marker in Narrative Navigator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMarkerSettings_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//The properties the navigation marker should use \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "The properties the navigation marker should use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldMapOverrideSettings_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//If the world map needs any settings changed from the defaults, override them in here! \n" },
		{ "DisplayName", "Override Settings (World Map)" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "If the world map needs any settings changed from the defaults, override them in here!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapOverrideSettings_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//If the minimap needs any settings changed from the defaults, override them in here! \n" },
		{ "DisplayName", "Override Settings (Minimap)" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "If the minimap needs any settings changed from the defaults, override them in here!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompassOverrideSettings_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//If the compass needs any settings changed from the defaults, override them in here! \n" },
		{ "DisplayName", "Override Settings (Compass)" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "If the compass needs any settings changed from the defaults, override them in here!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenspaceOverrideSettings_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//If the screen space marker need any settings changed from the defaults, override them in here! \n" },
		{ "DisplayName", "Override Settings (Screen Space)" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "If the screen space marker need any settings changed from the defaults, override them in here!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerTransform_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//Where the marker should show up in the world \n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "Where the marker should show up in the world" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorOwner_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//The actor this marker represents \n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "The actor this marker represents" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMarkerActionText_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//Text the marker should show as its action text in the world map when hovered\n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "Text the marker should show as its action text in the world map when hovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPinToMapEdge_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//Whether this marker should always be on the edge of the map, rather than going beyond the maps border \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "Whether this marker should always be on the edge of the map, rather than going beyond the maps border" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerStartFadeOutDistance_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//Compass only - The distance at which the compass begins to fade the marker out\n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "Compass only - The distance at which the compass begins to fade the marker out" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerStartFadeInDistance_MetaData[] = {
		{ "Category", "Marker Setup" },
		{ "Comment", "//Compass - only The distance at which we the compass begins to fade the marker in\n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "Compass - only The distance at which we the compass begins to fade the marker in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerDomain_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
		{ "Category", "Marker Setup" },
		{ "Comment", "//What navigation widgets will this navigation marker show up on?\n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "What navigation widgets will this navigation marker show up on?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRefreshRequired_MetaData[] = {
		{ "Category", "Marker" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSelected_MetaData[] = {
		{ "Category", "Marker" },
		{ "Comment", "//Called when the marker is selected in the world map \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapMarker.h" },
		{ "ToolTip", "Called when the marker is selected in the world map" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultMarkerSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldMapOverrideSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinimapOverrideSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompassOverrideSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenspaceOverrideSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorOwner;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultMarkerActionText;
	static void NewProp_bPinToMapEdge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPinToMapEdge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkerStartFadeOutDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkerStartFadeInDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerDomain;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRefreshRequired;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapMarker_AddDomains, "AddDomains" }, // 171887712
		{ &Z_Construct_UFunction_UMapMarker_CanInteract, "CanInteract" }, // 948755980
		{ &Z_Construct_UFunction_UMapMarker_GetMarkerActionText, "GetMarkerActionText" }, // 2877190922
		{ &Z_Construct_UFunction_UMapMarker_GetMarkerColor, "GetMarkerColor" }, // 3599287337
		{ &Z_Construct_UFunction_UMapMarker_GetMarkerDisplayText, "GetMarkerDisplayText" }, // 1030065782
		{ &Z_Construct_UFunction_UMapMarker_GetMarkerSettings, "GetMarkerSettings" }, // 4102370067
		{ &Z_Construct_UFunction_UMapMarker_GetMarkerTransform, "GetMarkerTransform" }, // 2750848403
		{ &Z_Construct_UFunction_UMapMarker_GetMarkerZOrder, "GetMarkerZOrder" }, // 2067647889
		{ &Z_Construct_UFunction_UMapMarker_OnOwnerDestroyed, "OnOwnerDestroyed" }, // 1212692888
		{ &Z_Construct_UFunction_UMapMarker_OnSelect, "OnSelect" }, // 106556415
		{ &Z_Construct_UFunction_UMapMarker_RefreshMarker, "RefreshMarker" }, // 4175435178
		{ &Z_Construct_UFunction_UMapMarker_RegisterMarker, "RegisterMarker" }, // 1765305810
		{ &Z_Construct_UFunction_UMapMarker_RemoveDomains, "RemoveDomains" }, // 3182185542
		{ &Z_Construct_UFunction_UMapMarker_RemoveMarker, "RemoveMarker" }, // 1375522445
		{ &Z_Construct_UFunction_UMapMarker_SetDefaultDomains, "SetDefaultDomains" }, // 1477307416
		{ &Z_Construct_UFunction_UMapMarker_SetDomains, "SetDomains" }, // 1719521560
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapMarker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapMarker_Statics::NewProp_DefaultMarkerSettings = { "DefaultMarkerSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarker, DefaultMarkerSettings), Z_Construct_UScriptStruct_FNavigationMarkerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMarkerSettings_MetaData), NewProp_DefaultMarkerSettings_MetaData) }; // 280316562
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapMarker_Statics::NewProp_WorldMapOverrideSettings = { "WorldMapOverrideSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarker, WorldMapOverrideSettings), Z_Construct_UScriptStruct_FNavigationMarkerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldMapOverrideSettings_MetaData), NewProp_WorldMapOverrideSettings_MetaData) }; // 280316562
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapMarker_Statics::NewProp_MinimapOverrideSettings = { "MinimapOverrideSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarker, MinimapOverrideSettings), Z_Construct_UScriptStruct_FNavigationMarkerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapOverrideSettings_MetaData), NewProp_MinimapOverrideSettings_MetaData) }; // 280316562
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapMarker_Statics::NewProp_CompassOverrideSettings = { "CompassOverrideSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarker, CompassOverrideSettings), Z_Construct_UScriptStruct_FNavigationMarkerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompassOverrideSettings_MetaData), NewProp_CompassOverrideSettings_MetaData) }; // 280316562
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapMarker_Statics::NewProp_ScreenspaceOverrideSettings = { "ScreenspaceOverrideSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarker, ScreenspaceOverrideSettings), Z_Construct_UScriptStruct_FNavigationMarkerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenspaceOverrideSettings_MetaData), NewProp_ScreenspaceOverrideSettings_MetaData) }; // 280316562
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapMarker_Statics::NewProp_MarkerTransform = { "MarkerTransform", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarker, MarkerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerTransform_MetaData), NewProp_MarkerTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapMarker_Statics::NewProp_ActorOwner = { "ActorOwner", nullptr, (EPropertyFlags)0x0115000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarker, ActorOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorOwner_MetaData), NewProp_ActorOwner_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMapMarker_Statics::NewProp_DefaultMarkerActionText = { "DefaultMarkerActionText", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarker, DefaultMarkerActionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMarkerActionText_MetaData), NewProp_DefaultMarkerActionText_MetaData) };
void Z_Construct_UClass_UMapMarker_Statics::NewProp_bPinToMapEdge_SetBit(void* Obj)
{
	((UMapMarker*)Obj)->bPinToMapEdge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapMarker_Statics::NewProp_bPinToMapEdge = { "bPinToMapEdge", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapMarker), &Z_Construct_UClass_UMapMarker_Statics::NewProp_bPinToMapEdge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPinToMapEdge_MetaData), NewProp_bPinToMapEdge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapMarker_Statics::NewProp_MarkerStartFadeOutDistance = { "MarkerStartFadeOutDistance", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarker, MarkerStartFadeOutDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerStartFadeOutDistance_MetaData), NewProp_MarkerStartFadeOutDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapMarker_Statics::NewProp_MarkerStartFadeInDistance = { "MarkerStartFadeInDistance", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarker, MarkerStartFadeInDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerStartFadeInDistance_MetaData), NewProp_MarkerStartFadeInDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapMarker_Statics::NewProp_MarkerDomain = { "MarkerDomain", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarker, MarkerDomain), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerDomain_MetaData), NewProp_MarkerDomain_MetaData) }; // 3352185621
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapMarker_Statics::NewProp_OnRefreshRequired = { "OnRefreshRequired", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarker, OnRefreshRequired), Z_Construct_UDelegateFunction_NarrativeArsenal_OnRefreshRequired__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRefreshRequired_MetaData), NewProp_OnRefreshRequired_MetaData) }; // 1146001216
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapMarker_Statics::NewProp_OnSelected = { "OnSelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarker, OnSelected), Z_Construct_UDelegateFunction_NarrativeArsenal_OnSelected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSelected_MetaData), NewProp_OnSelected_MetaData) }; // 2586720033
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarker_Statics::NewProp_DefaultMarkerSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarker_Statics::NewProp_WorldMapOverrideSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarker_Statics::NewProp_MinimapOverrideSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarker_Statics::NewProp_CompassOverrideSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarker_Statics::NewProp_ScreenspaceOverrideSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarker_Statics::NewProp_MarkerTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarker_Statics::NewProp_ActorOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarker_Statics::NewProp_DefaultMarkerActionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarker_Statics::NewProp_bPinToMapEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarker_Statics::NewProp_MarkerStartFadeOutDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarker_Statics::NewProp_MarkerStartFadeInDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarker_Statics::NewProp_MarkerDomain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarker_Statics::NewProp_OnRefreshRequired,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarker_Statics::NewProp_OnSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapMarker_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMapMarker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapMarker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapMarker_Statics::ClassParams = {
	&UMapMarker::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMapMarker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMapMarker_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapMarker_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapMarker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMapMarker()
{
	if (!Z_Registration_Info_UClass_UMapMarker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapMarker.OuterSingleton, Z_Construct_UClass_UMapMarker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapMarker.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UMapMarker>()
{
	return UMapMarker::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMapMarker);
UMapMarker::~UMapMarker() {}
// End Class UMapMarker

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FZoneDrawData::StaticStruct, Z_Construct_UScriptStruct_FZoneDrawData_Statics::NewStructOps, TEXT("ZoneDrawData"), &Z_Registration_Info_UScriptStruct_ZoneDrawData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneDrawData), 3145113311U) },
		{ FNavigationMarkerSettings::StaticStruct, Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics::NewStructOps, TEXT("NavigationMarkerSettings"), &Z_Registration_Info_UScriptStruct_NavigationMarkerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavigationMarkerSettings), 280316562U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapMarker, UMapMarker::StaticClass, TEXT("UMapMarker"), &Z_Registration_Info_UClass_UMapMarker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapMarker), 4002581668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h_3764893463(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
