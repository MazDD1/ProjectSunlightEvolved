// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Navigation/MapTileBounds.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapTileBounds() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_AMapTileBounds();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_AMapTileBounds_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UMapTileRenderingComponent_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FMapTile();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FMapTileSet();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FPOIData();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FMapTile
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapTile;
class UScriptStruct* FMapTile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapTile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapTile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapTile, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("MapTile"));
	}
	return Z_Registration_Info_UScriptStruct_MapTile.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FMapTile>()
{
	return FMapTile::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMapTile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileImage_MetaData[] = {
		{ "Category", "Map Tiles" },
		{ "Comment", "//Tile image\n" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
		{ "ToolTip", "Tile image" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileLocation_MetaData[] = {
		{ "Category", "Map Tiles" },
		{ "Comment", "//World location of the tile \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
		{ "ToolTip", "World location of the tile" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapTile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMapTile_Statics::NewProp_TileImage = { "TileImage", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapTile, TileImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileImage_MetaData), NewProp_TileImage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapTile_Statics::NewProp_TileLocation = { "TileLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapTile, TileLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileLocation_MetaData), NewProp_TileLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapTile_Statics::NewProp_TileImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapTile_Statics::NewProp_TileLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapTile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"MapTile",
	Z_Construct_UScriptStruct_FMapTile_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapTile_Statics::PropPointers),
	sizeof(FMapTile),
	alignof(FMapTile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapTile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMapTile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMapTile()
{
	if (!Z_Registration_Info_UScriptStruct_MapTile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapTile.InnerSingleton, Z_Construct_UScriptStruct_FMapTile_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MapTile.InnerSingleton;
}
// End ScriptStruct FMapTile

// Begin ScriptStruct FMapTileSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapTileSet;
class UScriptStruct* FMapTileSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapTileSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapTileSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapTileSet, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("MapTileSet"));
	}
	return Z_Registration_Info_UScriptStruct_MapTileSet.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FMapTileSet>()
{
	return FMapTileSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMapTileSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileLayer_MetaData[] = {
		{ "Category", "Map Tiles" },
		{ "Comment", "//A tag identifying the layer this tile set is in\n" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
		{ "ToolTip", "A tag identifying the layer this tile set is in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridWidth_MetaData[] = {
		{ "Category", "Map Tiles" },
		{ "Comment", "//Probably not required any more, this is the dimensions of the tile set. \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
		{ "ToolTip", "Probably not required any more, this is the dimensions of the tile set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileImageSize_MetaData[] = {
		{ "Category", "Map Tiles" },
		{ "Comment", "//The resolution we should draw each tile in this set at \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
		{ "ToolTip", "The resolution we should draw each tile in this set at" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tiles_MetaData[] = {
		{ "Category", "Map Tiles" },
		{ "Comment", "//The tiles in the set. \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
		{ "ToolTip", "The tiles in the set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileLayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileImageSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapTileSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapTileSet_Statics::NewProp_TileLayer = { "TileLayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapTileSet, TileLayer), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileLayer_MetaData), NewProp_TileLayer_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapTileSet_Statics::NewProp_GridWidth = { "GridWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapTileSet, GridWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridWidth_MetaData), NewProp_GridWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMapTileSet_Statics::NewProp_TileImageSize = { "TileImageSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapTileSet, TileImageSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileImageSize_MetaData), NewProp_TileImageSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapTileSet_Statics::NewProp_Tiles_Inner = { "Tiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMapTile, METADATA_PARAMS(0, nullptr) }; // 1968216510
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMapTileSet_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapTileSet, Tiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tiles_MetaData), NewProp_Tiles_MetaData) }; // 1968216510
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapTileSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapTileSet_Statics::NewProp_TileLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapTileSet_Statics::NewProp_GridWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapTileSet_Statics::NewProp_TileImageSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapTileSet_Statics::NewProp_Tiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapTileSet_Statics::NewProp_Tiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapTileSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapTileSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"MapTileSet",
	Z_Construct_UScriptStruct_FMapTileSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapTileSet_Statics::PropPointers),
	sizeof(FMapTileSet),
	alignof(FMapTileSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapTileSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMapTileSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMapTileSet()
{
	if (!Z_Registration_Info_UScriptStruct_MapTileSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapTileSet.InnerSingleton, Z_Construct_UScriptStruct_FMapTileSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MapTileSet.InnerSingleton;
}
// End ScriptStruct FMapTileSet

// Begin ScriptStruct FPOIData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_POIData;
class UScriptStruct* FPOIData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_POIData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_POIData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPOIData, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("POIData"));
	}
	return Z_Registration_Info_UScriptStruct_POIData.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FPOIData>()
{
	return FPOIData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPOIData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POITag_MetaData[] = {
		{ "Categories", "Navigator.PointOfInterest" },
		{ "Category", "Point of Interest" },
		{ "Comment", "//The POI Tag ID \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
		{ "ToolTip", "The POI Tag ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedPOIs_MetaData[] = {
		{ "Categories", "Navigator.PointOfInterest" },
		{ "Category", "Point of Interest" },
		{ "Comment", "//The POIs we're linked to - this is considered by the high level navigation graph \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
		{ "ToolTip", "The POIs we're linked to - this is considered by the high level navigation graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POILocation_MetaData[] = {
		{ "Category", "Point of Interest" },
		{ "Comment", "//Fixed location the POI can refer to - useful for POIs that don't move around. \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
		{ "ToolTip", "Fixed location the POI can refer to - useful for POIs that don't move around." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POIFastTravelSpot_MetaData[] = {
		{ "Category", "Point of Interest" },
		{ "Comment", "//Transform fast travelling to the POI should drop us at.\n" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
		{ "ToolTip", "Transform fast travelling to the POI should drop us at." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsMapMarker_MetaData[] = {
		{ "Category", "Point of Interest" },
		{ "Comment", "//Whether the POI needs a map marker or if it just exists as data. \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
		{ "ToolTip", "Whether the POI needs a map marker or if it just exists as data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsFastTravel_MetaData[] = {
		{ "Category", "Point of Interest" },
		{ "Comment", "//Whether the POI supports being fast travelled to \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
		{ "ToolTip", "Whether the POI supports being fast travelled to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDiscoverable_MetaData[] = {
		{ "Category", "Point of Interest" },
		{ "Comment", "//Whether the POI is considered discoverable, like a city, camp, etc. Icon will be greyed out until POI is discovered. \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
		{ "ToolTip", "Whether the POI is considered discoverable, like a city, camp, etc. Icon will be greyed out until POI is discovered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapMarkerIcon_MetaData[] = {
		{ "Category", "Point Of Interest" },
		{ "Comment", "/** The POI marker to display on the map  */" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
		{ "ToolTip", "The POI marker to display on the map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POIDisplayName_MetaData[] = {
		{ "Category", "Point of Interest" },
		{ "Comment", "//The display name the POI should show, for example if we discover a POI. \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
		{ "ToolTip", "The display name the POI should show, for example if we discover a POI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POISubtitle_MetaData[] = {
		{ "Category", "Point of Interest" },
		{ "Comment", "//The subtitle for the POI on the map \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
		{ "ToolTip", "The subtitle for the POI on the map" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_POITag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinkedPOIs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LinkedPOIs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_POILocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_POIFastTravelSpot;
	static void NewProp_bNeedsMapMarker_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsMapMarker;
	static void NewProp_bSupportsFastTravel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsFastTravel;
	static void NewProp_bIsDiscoverable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDiscoverable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapMarkerIcon;
	static const UECodeGen_Private::FTextPropertyParams NewProp_POIDisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_POISubtitle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPOIData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_POITag = { "POITag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIData, POITag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POITag_MetaData), NewProp_POITag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_LinkedPOIs_Inner = { "LinkedPOIs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_LinkedPOIs = { "LinkedPOIs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIData, LinkedPOIs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedPOIs_MetaData), NewProp_LinkedPOIs_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_POILocation = { "POILocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIData, POILocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POILocation_MetaData), NewProp_POILocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_POIFastTravelSpot = { "POIFastTravelSpot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIData, POIFastTravelSpot), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POIFastTravelSpot_MetaData), NewProp_POIFastTravelSpot_MetaData) };
void Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_bNeedsMapMarker_SetBit(void* Obj)
{
	((FPOIData*)Obj)->bNeedsMapMarker = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_bNeedsMapMarker = { "bNeedsMapMarker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPOIData), &Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_bNeedsMapMarker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeedsMapMarker_MetaData), NewProp_bNeedsMapMarker_MetaData) };
void Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_bSupportsFastTravel_SetBit(void* Obj)
{
	((FPOIData*)Obj)->bSupportsFastTravel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_bSupportsFastTravel = { "bSupportsFastTravel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPOIData), &Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_bSupportsFastTravel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsFastTravel_MetaData), NewProp_bSupportsFastTravel_MetaData) };
void Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_bIsDiscoverable_SetBit(void* Obj)
{
	((FPOIData*)Obj)->bIsDiscoverable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_bIsDiscoverable = { "bIsDiscoverable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPOIData), &Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_bIsDiscoverable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDiscoverable_MetaData), NewProp_bIsDiscoverable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_MapMarkerIcon = { "MapMarkerIcon", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIData, MapMarkerIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapMarkerIcon_MetaData), NewProp_MapMarkerIcon_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_POIDisplayName = { "POIDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIData, POIDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POIDisplayName_MetaData), NewProp_POIDisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_POISubtitle = { "POISubtitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPOIData, POISubtitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POISubtitle_MetaData), NewProp_POISubtitle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPOIData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_POITag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_LinkedPOIs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_LinkedPOIs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_POILocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_POIFastTravelSpot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_bNeedsMapMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_bSupportsFastTravel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_bIsDiscoverable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_MapMarkerIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_POIDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPOIData_Statics::NewProp_POISubtitle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPOIData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPOIData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"POIData",
	Z_Construct_UScriptStruct_FPOIData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPOIData_Statics::PropPointers),
	sizeof(FPOIData),
	alignof(FPOIData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPOIData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPOIData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPOIData()
{
	if (!Z_Registration_Info_UScriptStruct_POIData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_POIData.InnerSingleton, Z_Construct_UScriptStruct_FPOIData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_POIData.InnerSingleton;
}
// End ScriptStruct FPOIData

// Begin Class AMapTileBounds
void AMapTileBounds::StaticRegisterNativesAMapTileBounds()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapTileBounds);
UClass* Z_Construct_UClass_AMapTileBounds_NoRegister()
{
	return AMapTileBounds::StaticClass();
}
struct Z_Construct_UClass_AMapTileBounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Navigation/MapTileBounds.h" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSet_MetaData[] = {
		{ "Category", "Map Tiles" },
		{ "Comment", "//The tiles the tile generator has created \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
		{ "ToolTip", "The tiles the tile generator has created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POIs_MetaData[] = {
		{ "Category", "Map Tiles" },
		{ "Comment", "//All POIs found in the world are cached in here so we can create map markers for them \n" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
		{ "ToolTip", "All POIs found in the world are cached in here so we can create map markers for them" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapWidth_MetaData[] = {
		{ "Category", "Map Bounds" },
		{ "Comment", "/** The width our map should be, in unreal units (cm)*/" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
		{ "ToolTip", "The width our map should be, in unreal units (cm)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumTiles_MetaData[] = {
		{ "Category", "Map Bounds" },
		{ "Comment", "/*The number of 1024x1024 tiles that should make up the map. For smaller maps you could use a single tile - for large open world maps you'll want more\n\x09or your map will become blurry and low resolution. */" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
		{ "ToolTip", "The number of 1024x1024 tiles that should make up the map. For smaller maps you could use a single tile - for large open world maps you'll want more\n       or your map will become blurry and low resolution." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapTileBounds_MetaData[] = {
		{ "Category", "Map Bounds" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Navigation/MapTileBounds.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_POIs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_POIs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MapWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTiles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapTileBounds;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderingComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapTileBounds>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapTileBounds_Statics::NewProp_TileSet = { "TileSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapTileBounds, TileSet), Z_Construct_UScriptStruct_FMapTileSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSet_MetaData), NewProp_TileSet_MetaData) }; // 614205945
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapTileBounds_Statics::NewProp_POIs_Inner = { "POIs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPOIData, METADATA_PARAMS(0, nullptr) }; // 3949940213
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapTileBounds_Statics::NewProp_POIs = { "POIs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapTileBounds, POIs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POIs_MetaData), NewProp_POIs_MetaData) }; // 3949940213
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapTileBounds_Statics::NewProp_MapWidth = { "MapWidth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapTileBounds, MapWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapWidth_MetaData), NewProp_MapWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapTileBounds_Statics::NewProp_NumTiles = { "NumTiles", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapTileBounds, NumTiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumTiles_MetaData), NewProp_NumTiles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapTileBounds_Statics::NewProp_MapTileBounds = { "MapTileBounds", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapTileBounds, MapTileBounds), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapTileBounds_MetaData), NewProp_MapTileBounds_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapTileBounds_Statics::NewProp_RenderingComponent = { "RenderingComponent", nullptr, (EPropertyFlags)0x0020080802080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapTileBounds, RenderingComponent), Z_Construct_UClass_UMapTileRenderingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderingComponent_MetaData), NewProp_RenderingComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapTileBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapTileBounds_Statics::NewProp_TileSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapTileBounds_Statics::NewProp_POIs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapTileBounds_Statics::NewProp_POIs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapTileBounds_Statics::NewProp_MapWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapTileBounds_Statics::NewProp_NumTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapTileBounds_Statics::NewProp_MapTileBounds,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapTileBounds_Statics::NewProp_RenderingComponent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapTileBounds_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapTileBounds_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapTileBounds_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapTileBounds_Statics::ClassParams = {
	&AMapTileBounds::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMapTileBounds_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapTileBounds_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapTileBounds_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapTileBounds_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapTileBounds()
{
	if (!Z_Registration_Info_UClass_AMapTileBounds.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapTileBounds.OuterSingleton, Z_Construct_UClass_AMapTileBounds_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapTileBounds.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<AMapTileBounds>()
{
	return AMapTileBounds::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapTileBounds);
AMapTileBounds::~AMapTileBounds() {}
// End Class AMapTileBounds

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapTileBounds_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMapTile::StaticStruct, Z_Construct_UScriptStruct_FMapTile_Statics::NewStructOps, TEXT("MapTile"), &Z_Registration_Info_UScriptStruct_MapTile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapTile), 1968216510U) },
		{ FMapTileSet::StaticStruct, Z_Construct_UScriptStruct_FMapTileSet_Statics::NewStructOps, TEXT("MapTileSet"), &Z_Registration_Info_UScriptStruct_MapTileSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapTileSet), 614205945U) },
		{ FPOIData::StaticStruct, Z_Construct_UScriptStruct_FPOIData_Statics::NewStructOps, TEXT("POIData"), &Z_Registration_Info_UScriptStruct_POIData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPOIData), 3949940213U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapTileBounds, AMapTileBounds::StaticClass, TEXT("AMapTileBounds"), &Z_Registration_Info_UClass_AMapTileBounds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapTileBounds), 273515475U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapTileBounds_h_1795052524(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapTileBounds_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapTileBounds_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapTileBounds_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapTileBounds_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
