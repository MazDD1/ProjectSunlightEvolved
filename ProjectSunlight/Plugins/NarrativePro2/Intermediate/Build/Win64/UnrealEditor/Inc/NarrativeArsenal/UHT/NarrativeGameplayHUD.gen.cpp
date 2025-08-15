// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Widgets/NarrativeGameplayHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeGameplayHUD() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetStack_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativePlayerController_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeGameplayHUD();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeGameplayHUD_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeMenu_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeGameplayHUD Function OpenMenu
struct Z_Construct_UFunction_UNarrativeGameplayHUD_OpenMenu_Statics
{
	struct NarrativeGameplayHUD_eventOpenMenu_Parms
	{
		TSubclassOf<UNarrativeMenu> MenuClass;
		UNarrativeMenu* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Notifications" },
		{ "Comment", "//Open a menu of some kind.  \n" },
		{ "DeterminesOutputType", "MenuClass" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeGameplayHUD.h" },
		{ "ToolTip", "Open a menu of some kind." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MenuClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeGameplayHUD_OpenMenu_Statics::NewProp_MenuClass = { "MenuClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameplayHUD_eventOpenMenu_Parms, MenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNarrativeMenu_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeGameplayHUD_OpenMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameplayHUD_eventOpenMenu_Parms, ReturnValue), Z_Construct_UClass_UNarrativeMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameplayHUD_OpenMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameplayHUD_OpenMenu_Statics::NewProp_MenuClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameplayHUD_OpenMenu_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayHUD_OpenMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameplayHUD_OpenMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameplayHUD, nullptr, "OpenMenu", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameplayHUD_OpenMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayHUD_OpenMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameplayHUD_OpenMenu_Statics::NarrativeGameplayHUD_eventOpenMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayHUD_OpenMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameplayHUD_OpenMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameplayHUD_OpenMenu_Statics::NarrativeGameplayHUD_eventOpenMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameplayHUD_OpenMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameplayHUD_OpenMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameplayHUD::execOpenMenu)
{
	P_GET_OBJECT(UClass,Z_Param_MenuClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeMenu**)Z_Param__Result=P_THIS->OpenMenu(Z_Param_MenuClass);
	P_NATIVE_END;
}
// End Class UNarrativeGameplayHUD Function OpenMenu

// Begin Class UNarrativeGameplayHUD Function SetHUDHidden
struct NarrativeGameplayHUD_eventSetHUDHidden_Parms
{
	bool bHideHUD;
	bool bHideEvenEssentialWidgets;
};
static const FName NAME_UNarrativeGameplayHUD_SetHUDHidden = FName(TEXT("SetHUDHidden"));
void UNarrativeGameplayHUD::SetHUDHidden(bool bHideHUD, bool bHideEvenEssentialWidgets)
{
	NarrativeGameplayHUD_eventSetHUDHidden_Parms Parms;
	Parms.bHideHUD=bHideHUD ? true : false;
	Parms.bHideEvenEssentialWidgets=bHideEvenEssentialWidgets ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeGameplayHUD_SetHUDHidden);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNarrativeGameplayHUD_SetHUDHidden_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Notifications" },
		{ "Comment", "/*Set whether the hide should be hidden or not\n\x09@param bHideEvenEssentialWidgets whether this should effect even essential widgets, like the dialogue options etc. */" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeGameplayHUD.h" },
		{ "ToolTip", "Set whether the hide should be hidden or not\n       @param bHideEvenEssentialWidgets whether this should effect even essential widgets, like the dialogue options etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideHUD_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideEvenEssentialWidgets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bHideHUD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideHUD;
	static void NewProp_bHideEvenEssentialWidgets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideEvenEssentialWidgets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeGameplayHUD_SetHUDHidden_Statics::NewProp_bHideHUD_SetBit(void* Obj)
{
	((NarrativeGameplayHUD_eventSetHUDHidden_Parms*)Obj)->bHideHUD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeGameplayHUD_SetHUDHidden_Statics::NewProp_bHideHUD = { "bHideHUD", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeGameplayHUD_eventSetHUDHidden_Parms), &Z_Construct_UFunction_UNarrativeGameplayHUD_SetHUDHidden_Statics::NewProp_bHideHUD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideHUD_MetaData), NewProp_bHideHUD_MetaData) };
void Z_Construct_UFunction_UNarrativeGameplayHUD_SetHUDHidden_Statics::NewProp_bHideEvenEssentialWidgets_SetBit(void* Obj)
{
	((NarrativeGameplayHUD_eventSetHUDHidden_Parms*)Obj)->bHideEvenEssentialWidgets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeGameplayHUD_SetHUDHidden_Statics::NewProp_bHideEvenEssentialWidgets = { "bHideEvenEssentialWidgets", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeGameplayHUD_eventSetHUDHidden_Parms), &Z_Construct_UFunction_UNarrativeGameplayHUD_SetHUDHidden_Statics::NewProp_bHideEvenEssentialWidgets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideEvenEssentialWidgets_MetaData), NewProp_bHideEvenEssentialWidgets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameplayHUD_SetHUDHidden_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameplayHUD_SetHUDHidden_Statics::NewProp_bHideHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameplayHUD_SetHUDHidden_Statics::NewProp_bHideEvenEssentialWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayHUD_SetHUDHidden_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameplayHUD_SetHUDHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameplayHUD, nullptr, "SetHUDHidden", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameplayHUD_SetHUDHidden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayHUD_SetHUDHidden_Statics::PropPointers), sizeof(NarrativeGameplayHUD_eventSetHUDHidden_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayHUD_SetHUDHidden_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameplayHUD_SetHUDHidden_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeGameplayHUD_eventSetHUDHidden_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameplayHUD_SetHUDHidden()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameplayHUD_SetHUDHidden_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UNarrativeGameplayHUD Function SetHUDHidden

// Begin Class UNarrativeGameplayHUD Function ShowMajorNotification
struct NarrativeGameplayHUD_eventShowMajorNotification_Parms
{
	FText NotificationText;
	FText MajorNotificationSubtext;
	float Duration;
	bool bOverrideCurrentNotification;
};
static const FName NAME_UNarrativeGameplayHUD_ShowMajorNotification = FName(TEXT("ShowMajorNotification"));
void UNarrativeGameplayHUD::ShowMajorNotification(FText const& NotificationText, FText const& MajorNotificationSubtext, const float Duration, bool bOverrideCurrentNotification)
{
	NarrativeGameplayHUD_eventShowMajorNotification_Parms Parms;
	Parms.NotificationText=NotificationText;
	Parms.MajorNotificationSubtext=MajorNotificationSubtext;
	Parms.Duration=Duration;
	Parms.bOverrideCurrentNotification=bOverrideCurrentNotification ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeGameplayHUD_ShowMajorNotification);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Notifications" },
		{ "Comment", "//Show a major notification\n" },
		{ "CPP_Default_bOverrideCurrentNotification", "true" },
		{ "CPP_Default_Duration", "5.000000" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeGameplayHUD.h" },
		{ "ToolTip", "Show a major notification" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationText_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MajorNotificationSubtext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCurrentNotification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NotificationText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_MajorNotificationSubtext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_bOverrideCurrentNotification_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCurrentNotification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification_Statics::NewProp_NotificationText = { "NotificationText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameplayHUD_eventShowMajorNotification_Parms, NotificationText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationText_MetaData), NewProp_NotificationText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification_Statics::NewProp_MajorNotificationSubtext = { "MajorNotificationSubtext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameplayHUD_eventShowMajorNotification_Parms, MajorNotificationSubtext), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MajorNotificationSubtext_MetaData), NewProp_MajorNotificationSubtext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameplayHUD_eventShowMajorNotification_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
void Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification_Statics::NewProp_bOverrideCurrentNotification_SetBit(void* Obj)
{
	((NarrativeGameplayHUD_eventShowMajorNotification_Parms*)Obj)->bOverrideCurrentNotification = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification_Statics::NewProp_bOverrideCurrentNotification = { "bOverrideCurrentNotification", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeGameplayHUD_eventShowMajorNotification_Parms), &Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification_Statics::NewProp_bOverrideCurrentNotification_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCurrentNotification_MetaData), NewProp_bOverrideCurrentNotification_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification_Statics::NewProp_NotificationText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification_Statics::NewProp_MajorNotificationSubtext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification_Statics::NewProp_bOverrideCurrentNotification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameplayHUD, nullptr, "ShowMajorNotification", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification_Statics::PropPointers), sizeof(NarrativeGameplayHUD_eventShowMajorNotification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeGameplayHUD_eventShowMajorNotification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UNarrativeGameplayHUD Function ShowMajorNotification

// Begin Class UNarrativeGameplayHUD Function ShowNotification
struct NarrativeGameplayHUD_eventShowNotification_Parms
{
	FText NotificationText;
	float Duration;
};
static const FName NAME_UNarrativeGameplayHUD_ShowNotification = FName(TEXT("ShowNotification"));
void UNarrativeGameplayHUD::ShowNotification(FText const& NotificationText, const float Duration)
{
	NarrativeGameplayHUD_eventShowNotification_Parms Parms;
	Parms.NotificationText=NotificationText;
	Parms.Duration=Duration;
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeGameplayHUD_ShowNotification);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNarrativeGameplayHUD_ShowNotification_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Notifications" },
		{ "Comment", "//Show a notification - the UMG widget handles implementing this. bOverrideCurrentNotification is only relevant for major notifications - minors are shown in a stack. \n" },
		{ "CPP_Default_Duration", "5.000000" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeGameplayHUD.h" },
		{ "ToolTip", "Show a notification - the UMG widget handles implementing this. bOverrideCurrentNotification is only relevant for major notifications - minors are shown in a stack." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationText_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NotificationText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeGameplayHUD_ShowNotification_Statics::NewProp_NotificationText = { "NotificationText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameplayHUD_eventShowNotification_Parms, NotificationText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationText_MetaData), NewProp_NotificationText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeGameplayHUD_ShowNotification_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameplayHUD_eventShowNotification_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameplayHUD_ShowNotification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameplayHUD_ShowNotification_Statics::NewProp_NotificationText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameplayHUD_ShowNotification_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayHUD_ShowNotification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameplayHUD_ShowNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameplayHUD, nullptr, "ShowNotification", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameplayHUD_ShowNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayHUD_ShowNotification_Statics::PropPointers), sizeof(NarrativeGameplayHUD_eventShowNotification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameplayHUD_ShowNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameplayHUD_ShowNotification_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeGameplayHUD_eventShowNotification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameplayHUD_ShowNotification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameplayHUD_ShowNotification_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UNarrativeGameplayHUD Function ShowNotification

// Begin Class UNarrativeGameplayHUD
void UNarrativeGameplayHUD::StaticRegisterNativesUNarrativeGameplayHUD()
{
	UClass* Class = UNarrativeGameplayHUD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OpenMenu", &UNarrativeGameplayHUD::execOpenMenu },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeGameplayHUD);
UClass* Z_Construct_UClass_UNarrativeGameplayHUD_NoRegister()
{
	return UNarrativeGameplayHUD::StaticClass();
}
struct Z_Construct_UClass_UNarrativeGameplayHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for gameplay HUD with narrative. \n */" },
		{ "IncludePath", "Widgets/NarrativeGameplayHUD.h" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeGameplayHUD.h" },
		{ "ToolTip", "Base class for gameplay HUD with narrative." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptStack_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Common UI" },
		{ "Comment", "//stack used for showing prompts to the user\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeGameplayHUD.h" },
		{ "ToolTip", "stack used for showing prompts to the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStack_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Common UI" },
		{ "Comment", "//stack used for showing widget menus to the user\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeGameplayHUD.h" },
		{ "ToolTip", "stack used for showing widget menus to the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPC_MetaData[] = {
		{ "Category", "Common UI" },
		{ "Comment", "//The narrative player controller that owns this widget\n" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeGameplayHUD.h" },
		{ "ToolTip", "The narrative player controller that owns this widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EssentialWidgets_MetaData[] = {
		{ "Category", "Common UI" },
		{ "Comment", "//Widgets in here will not be hidden when we ask the UI to hide, usually during cinematics. \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeGameplayHUD.h" },
		{ "ToolTip", "Widgets in here will not be hidden when we ask the UI to hide, usually during cinematics." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptStack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetStack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EssentialWidgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EssentialWidgets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeGameplayHUD_OpenMenu, "OpenMenu" }, // 1252235634
		{ &Z_Construct_UFunction_UNarrativeGameplayHUD_SetHUDHidden, "SetHUDHidden" }, // 294957342
		{ &Z_Construct_UFunction_UNarrativeGameplayHUD_ShowMajorNotification, "ShowMajorNotification" }, // 3091263831
		{ &Z_Construct_UFunction_UNarrativeGameplayHUD_ShowNotification, "ShowNotification" }, // 1898397599
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeGameplayHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeGameplayHUD_Statics::NewProp_PromptStack = { "PromptStack", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeGameplayHUD, PromptStack), Z_Construct_UClass_UCommonActivatableWidgetStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptStack_MetaData), NewProp_PromptStack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeGameplayHUD_Statics::NewProp_WidgetStack = { "WidgetStack", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeGameplayHUD, WidgetStack), Z_Construct_UClass_UCommonActivatableWidgetStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStack_MetaData), NewProp_WidgetStack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeGameplayHUD_Statics::NewProp_OwnerPC = { "OwnerPC", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeGameplayHUD, OwnerPC), Z_Construct_UClass_ANarrativePlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPC_MetaData), NewProp_OwnerPC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeGameplayHUD_Statics::NewProp_EssentialWidgets_Inner = { "EssentialWidgets", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeGameplayHUD_Statics::NewProp_EssentialWidgets = { "EssentialWidgets", nullptr, (EPropertyFlags)0x012408800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeGameplayHUD, EssentialWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EssentialWidgets_MetaData), NewProp_EssentialWidgets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeGameplayHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeGameplayHUD_Statics::NewProp_PromptStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeGameplayHUD_Statics::NewProp_WidgetStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeGameplayHUD_Statics::NewProp_OwnerPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeGameplayHUD_Statics::NewProp_EssentialWidgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeGameplayHUD_Statics::NewProp_EssentialWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeGameplayHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeGameplayHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeGameplayHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeGameplayHUD_Statics::ClassParams = {
	&UNarrativeGameplayHUD::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeGameplayHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeGameplayHUD_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeGameplayHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeGameplayHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeGameplayHUD()
{
	if (!Z_Registration_Info_UClass_UNarrativeGameplayHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeGameplayHUD.OuterSingleton, Z_Construct_UClass_UNarrativeGameplayHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeGameplayHUD.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeGameplayHUD>()
{
	return UNarrativeGameplayHUD::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeGameplayHUD);
UNarrativeGameplayHUD::~UNarrativeGameplayHUD() {}
// End Class UNarrativeGameplayHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Widgets_NarrativeGameplayHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeGameplayHUD, UNarrativeGameplayHUD::StaticClass, TEXT("UNarrativeGameplayHUD"), &Z_Registration_Info_UClass_UNarrativeGameplayHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeGameplayHUD), 3743941987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Widgets_NarrativeGameplayHUD_h_1105588606(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Widgets_NarrativeGameplayHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Widgets_NarrativeGameplayHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
