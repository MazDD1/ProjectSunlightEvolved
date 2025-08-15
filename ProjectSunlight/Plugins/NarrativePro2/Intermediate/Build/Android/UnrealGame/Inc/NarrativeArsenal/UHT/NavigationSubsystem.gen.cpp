// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Navigation/NavigationSubsystem.h"
#include "NarrativeArsenal/Public/Navigation/MapTileBounds.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_AMapTileBounds_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNavigationSubsystem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNavigationSubsystem_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FPOIData();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNavigationSubsystem Function GetPointOfInterest
struct Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics
{
	struct NavigationSubsystem_eventGetPointOfInterest_Parms
	{
		FPOIData OutPointOfInterest;
		FGameplayTag POITag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Point of Interest" },
		{ "Comment", "//Return a POI that has previously been cached. \n" },
		{ "ModuleRelativePath", "Public/Navigation/NavigationSubsystem.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::NewProp_OutPointOfInterest = { "OutPointOfInterest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationSubsystem_eventGetPointOfInterest_Parms, OutPointOfInterest), Z_Construct_UScriptStruct_FPOIData, METADATA_PARAMS(0, nullptr) }; // 3949940213
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::NewProp_POITag = { "POITag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationSubsystem_eventGetPointOfInterest_Parms, POITag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POITag_MetaData), NewProp_POITag_MetaData) }; // 1298103297
void Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavigationSubsystem_eventGetPointOfInterest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavigationSubsystem_eventGetPointOfInterest_Parms), &Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::NewProp_OutPointOfInterest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::NewProp_POITag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSubsystem, nullptr, "GetPointOfInterest", nullptr, nullptr, Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::NavigationSubsystem_eventGetPointOfInterest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::NavigationSubsystem_eventGetPointOfInterest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationSubsystem::execGetPointOfInterest)
{
	P_GET_STRUCT_REF(FPOIData,Z_Param_Out_OutPointOfInterest);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_POITag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPointOfInterest(Z_Param_Out_OutPointOfInterest,Z_Param_Out_POITag);
	P_NATIVE_END;
}
// End Class UNavigationSubsystem Function GetPointOfInterest

// Begin Class UNavigationSubsystem
void UNavigationSubsystem::StaticRegisterNativesUNavigationSubsystem()
{
	UClass* Class = UNavigationSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPointOfInterest", &UNavigationSubsystem::execGetPointOfInterest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationSubsystem);
UClass* Z_Construct_UClass_UNavigationSubsystem_NoRegister()
{
	return UNavigationSubsystem::StaticClass();
}
struct Z_Construct_UClass_UNavigationSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Subsystem for navigator, at the moment just used for caching POIs. \n */" },
		{ "IncludePath", "Navigation/NavigationSubsystem.h" },
		{ "ModuleRelativePath", "Public/Navigation/NavigationSubsystem.h" },
		{ "ToolTip", "Subsystem for navigator, at the moment just used for caching POIs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POILookupMap_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "//Quick lookup map for pois\n" },
		{ "ModuleRelativePath", "Public/Navigation/NavigationSubsystem.h" },
		{ "ToolTip", "Quick lookup map for pois" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapTileBounds_MetaData[] = {
		{ "Category", "Map Configuration" },
		{ "Comment", "//The bounds we've found in the world, should one exist \n" },
		{ "ModuleRelativePath", "Public/Navigation/NavigationSubsystem.h" },
		{ "ToolTip", "The bounds we've found in the world, should one exist" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_POILookupMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_POILookupMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_POILookupMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapTileBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavigationSubsystem_GetPointOfInterest, "GetPointOfInterest" }, // 3645289354
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationSubsystem_Statics::NewProp_POILookupMap_ValueProp = { "POILookupMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPOIData, METADATA_PARAMS(0, nullptr) }; // 3949940213
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationSubsystem_Statics::NewProp_POILookupMap_Key_KeyProp = { "POILookupMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNavigationSubsystem_Statics::NewProp_POILookupMap = { "POILookupMap", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationSubsystem, POILookupMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POILookupMap_MetaData), NewProp_POILookupMap_MetaData) }; // 1298103297 3949940213
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavigationSubsystem_Statics::NewProp_MapTileBounds = { "MapTileBounds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationSubsystem, MapTileBounds), Z_Construct_UClass_AMapTileBounds_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapTileBounds_MetaData), NewProp_MapTileBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSubsystem_Statics::NewProp_POILookupMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSubsystem_Statics::NewProp_POILookupMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSubsystem_Statics::NewProp_POILookupMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSubsystem_Statics::NewProp_MapTileBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavigationSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationSubsystem_Statics::ClassParams = {
	&UNavigationSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNavigationSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigationSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigationSubsystem()
{
	if (!Z_Registration_Info_UClass_UNavigationSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationSubsystem.OuterSingleton, Z_Construct_UClass_UNavigationSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigationSubsystem.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNavigationSubsystem>()
{
	return UNavigationSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationSubsystem);
UNavigationSubsystem::~UNavigationSubsystem() {}
// End Class UNavigationSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NavigationSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationSubsystem, UNavigationSubsystem::StaticClass, TEXT("UNavigationSubsystem"), &Z_Registration_Info_UClass_UNavigationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationSubsystem), 2430280677U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NavigationSubsystem_h_1776989621(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NavigationSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NavigationSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
