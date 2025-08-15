// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Navigation/POIActor.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePOIActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_APOIActor();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_APOIActor_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UPOIRenderingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class APOIActor Function CreatePOIVolume
#if WITH_EDITOR
struct Z_Construct_UFunction_APOIActor_CreatePOIVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Editor Tools" },
		{ "ModuleRelativePath", "Public/Navigation/POIActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APOIActor_CreatePOIVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APOIActor, nullptr, "CreatePOIVolume", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APOIActor_CreatePOIVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_APOIActor_CreatePOIVolume_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APOIActor_CreatePOIVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APOIActor_CreatePOIVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(APOIActor::execCreatePOIVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreatePOIVolume();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class APOIActor Function CreatePOIVolume

// Begin Class APOIActor
void APOIActor::StaticRegisterNativesAPOIActor()
{
#if WITH_EDITOR
	UClass* Class = APOIActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreatePOIVolume", &APOIActor::execCreatePOIVolume },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APOIActor);
UClass* Z_Construct_UClass_APOIActor_NoRegister()
{
	return APOIActor::StaticClass();
}
struct Z_Construct_UClass_APOIActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * These actors easily allow designers to create POIs that show up on the map. They are also world partitioned and by default will become discovered\n * when your overlap them - so add any overlap volumes you want to your POI to define its discovery bounds. \n */" },
		{ "IncludePath", "Navigation/POIActor.h" },
		{ "ModuleRelativePath", "Public/Navigation/POIActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "These actors easily allow designers to create POIs that show up on the map. They are also world partitioned and by default will become discovered\nwhen your overlap them - so add any overlap volumes you want to your POI to define its discovery bounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POITag_MetaData[] = {
		{ "Categories", "Narrative.POIs" },
		{ "Category", "Point Of Interest" },
		{ "Comment", "/** The tag for this location*/" },
		{ "ModuleRelativePath", "Public/Navigation/POIActor.h" },
		{ "ToolTip", "The tag for this location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateMapMarker_MetaData[] = {
		{ "Category", "Point Of Interest" },
		{ "Comment", "/** Whether this POI needs a map marker or not */" },
		{ "ModuleRelativePath", "Public/Navigation/POIActor.h" },
		{ "ToolTip", "Whether this POI needs a map marker or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsFastTravel_MetaData[] = {
		{ "Category", "Point Of Interest" },
		{ "Comment", "/** Whether this POI supports being fast travelled to or not  */" },
		{ "ModuleRelativePath", "Public/Navigation/POIActor.h" },
		{ "ToolTip", "Whether this POI supports being fast travelled to or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POIDisplayName_MetaData[] = {
		{ "Category", "Point Of Interest" },
		{ "Comment", "/** The display name for this poi when we display it in the UI */" },
		{ "ModuleRelativePath", "Public/Navigation/POIActor.h" },
		{ "ToolTip", "The display name for this poi when we display it in the UI" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POIIcon_MetaData[] = {
		{ "Category", "Point Of Interest" },
		{ "Comment", "/** The POI marker to display on the map  */" },
		{ "ModuleRelativePath", "Public/Navigation/POIActor.h" },
		{ "ToolTip", "The POI marker to display on the map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedPOIs_MetaData[] = {
		{ "Category", "Point Of Interest" },
		{ "Comment", "/** POIs this POIActor is linked to - used when NPCs do high-level navigation. */" },
		{ "ModuleRelativePath", "Public/Navigation/POIActor.h" },
		{ "ToolTip", "POIs this POIActor is linked to - used when NPCs do high-level navigation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FastTravelCapsule_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//Used to define where fast travelling places our character\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Navigation/POIActor.h" },
		{ "ToolTip", "Used to define where fast travelling places our character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FastTravelCapsuleArrow_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Display" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Navigation/POIActor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Navigation/POIActor.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_POITag;
	static void NewProp_bCreateMapMarker_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateMapMarker;
	static void NewProp_bSupportsFastTravel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsFastTravel;
	static const UECodeGen_Private::FTextPropertyParams NewProp_POIDisplayName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_POIIcon;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LinkedPOIs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LinkedPOIs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FastTravelCapsule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FastTravelCapsuleArrow;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderingComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APOIActor_CreatePOIVolume, "CreatePOIVolume" }, // 759532125
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APOIActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APOIActor_Statics::NewProp_POITag = { "POITag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIActor, POITag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POITag_MetaData), NewProp_POITag_MetaData) }; // 1298103297
void Z_Construct_UClass_APOIActor_Statics::NewProp_bCreateMapMarker_SetBit(void* Obj)
{
	((APOIActor*)Obj)->bCreateMapMarker = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APOIActor_Statics::NewProp_bCreateMapMarker = { "bCreateMapMarker", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APOIActor), &Z_Construct_UClass_APOIActor_Statics::NewProp_bCreateMapMarker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateMapMarker_MetaData), NewProp_bCreateMapMarker_MetaData) };
void Z_Construct_UClass_APOIActor_Statics::NewProp_bSupportsFastTravel_SetBit(void* Obj)
{
	((APOIActor*)Obj)->bSupportsFastTravel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APOIActor_Statics::NewProp_bSupportsFastTravel = { "bSupportsFastTravel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APOIActor), &Z_Construct_UClass_APOIActor_Statics::NewProp_bSupportsFastTravel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsFastTravel_MetaData), NewProp_bSupportsFastTravel_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_APOIActor_Statics::NewProp_POIDisplayName = { "POIDisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIActor, POIDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POIDisplayName_MetaData), NewProp_POIDisplayName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APOIActor_Statics::NewProp_POIIcon = { "POIIcon", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIActor, POIIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POIIcon_MetaData), NewProp_POIIcon_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_APOIActor_Statics::NewProp_LinkedPOIs_Inner = { "LinkedPOIs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APOIActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APOIActor_Statics::NewProp_LinkedPOIs = { "LinkedPOIs", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIActor, LinkedPOIs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedPOIs_MetaData), NewProp_LinkedPOIs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APOIActor_Statics::NewProp_FastTravelCapsule = { "FastTravelCapsule", nullptr, (EPropertyFlags)0x011400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIActor, FastTravelCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FastTravelCapsule_MetaData), NewProp_FastTravelCapsule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APOIActor_Statics::NewProp_FastTravelCapsuleArrow = { "FastTravelCapsuleArrow", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIActor, FastTravelCapsuleArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FastTravelCapsuleArrow_MetaData), NewProp_FastTravelCapsuleArrow_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APOIActor_Statics::NewProp_RenderingComponent = { "RenderingComponent", nullptr, (EPropertyFlags)0x0010000802080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APOIActor, RenderingComponent), Z_Construct_UClass_UPOIRenderingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderingComponent_MetaData), NewProp_RenderingComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APOIActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIActor_Statics::NewProp_POITag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIActor_Statics::NewProp_bCreateMapMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIActor_Statics::NewProp_bSupportsFastTravel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIActor_Statics::NewProp_POIDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIActor_Statics::NewProp_POIIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIActor_Statics::NewProp_LinkedPOIs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIActor_Statics::NewProp_LinkedPOIs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIActor_Statics::NewProp_FastTravelCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIActor_Statics::NewProp_FastTravelCapsuleArrow,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APOIActor_Statics::NewProp_RenderingComponent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APOIActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APOIActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATargetPoint,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APOIActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APOIActor_Statics::ClassParams = {
	&APOIActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_APOIActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_APOIActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APOIActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APOIActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APOIActor()
{
	if (!Z_Registration_Info_UClass_APOIActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APOIActor.OuterSingleton, Z_Construct_UClass_APOIActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APOIActor.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<APOIActor>()
{
	return APOIActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APOIActor);
APOIActor::~APOIActor() {}
// End Class APOIActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_POIActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APOIActor, APOIActor::StaticClass, TEXT("APOIActor"), &Z_Registration_Info_UClass_APOIActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APOIActor), 1611328442U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_POIActor_h_1639147605(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_POIActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_POIActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
