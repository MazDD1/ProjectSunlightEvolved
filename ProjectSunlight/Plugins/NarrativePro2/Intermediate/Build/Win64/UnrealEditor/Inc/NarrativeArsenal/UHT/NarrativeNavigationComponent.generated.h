// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Navigation/NarrativeNavigationComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCustomWaypointMarker;
class UMapMarker;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FPOIData;
#ifdef NARRATIVEARSENAL_NarrativeNavigationComponent_generated_h
#error "NarrativeNavigationComponent.generated.h already included, missing '#pragma once' in NarrativeNavigationComponent.h"
#endif
#define NARRATIVEARSENAL_NarrativeNavigationComponent_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NarrativeNavigationComponent_h_14_DELEGATE \
NARRATIVEARSENAL_API void FOnMarkerAdded_DelegateWrapper(const FMulticastScriptDelegate& OnMarkerAdded, UMapMarker* Marker);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NarrativeNavigationComponent_h_15_DELEGATE \
NARRATIVEARSENAL_API void FOnMarkerRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnMarkerRemoved, UMapMarker* Marker);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NarrativeNavigationComponent_h_16_DELEGATE \
NARRATIVEARSENAL_API void FOnDiscoverPointOfInterest_DelegateWrapper(const FMulticastScriptDelegate& OnDiscoverPointOfInterest, FGameplayTag const& POITag);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NarrativeNavigationComponent_h_17_DELEGATE \
NARRATIVEARSENAL_API void FOnFastTravelRequested_DelegateWrapper(const FMulticastScriptDelegate& OnFastTravelRequested, FPOIData const& POI);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NarrativeNavigationComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveCustomWaypoint); \
	DECLARE_FUNCTION(execPlaceCustomWaypoint); \
	DECLARE_FUNCTION(execHasDiscoveredPOI); \
	DECLARE_FUNCTION(execDiscoverPOI); \
	DECLARE_FUNCTION(execSetMapLayer); \
	DECLARE_FUNCTION(execGetNearestPOIToPoint); \
	DECLARE_FUNCTION(execGetPointOfInterest); \
	DECLARE_FUNCTION(execSelectMarker); \
	DECLARE_FUNCTION(execRemoveMarker); \
	DECLARE_FUNCTION(execAddMarker);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NarrativeNavigationComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeNavigationComponent(); \
	friend struct Z_Construct_UClass_UNarrativeNavigationComponent_Statics; \
public: \
	DECLARE_CLASS(UNarrativeNavigationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeNavigationComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNarrativeNavigationComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DiscoveredPOIs=NETFIELD_REP_START, \
		NETFIELD_REP_END=DiscoveredPOIs	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NarrativeNavigationComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeNavigationComponent(UNarrativeNavigationComponent&&); \
	UNarrativeNavigationComponent(const UNarrativeNavigationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeNavigationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeNavigationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativeNavigationComponent) \
	NO_API virtual ~UNarrativeNavigationComponent();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NarrativeNavigationComponent_h_23_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NarrativeNavigationComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NarrativeNavigationComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NarrativeNavigationComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NarrativeNavigationComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UNarrativeNavigationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_NarrativeNavigationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
