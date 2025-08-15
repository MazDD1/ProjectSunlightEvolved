// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Navigation/MapMarker.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNarrativeNavigationComponent;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FLinearColor;
struct FNavigationMarkerSettings;
#ifdef NARRATIVEARSENAL_MapMarker_generated_h
#error "MapMarker.generated.h already included, missing '#pragma once' in MapMarker.h"
#endif
#define NARRATIVEARSENAL_MapMarker_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h_10_DELEGATE \
NARRATIVEARSENAL_API void FOnRefreshRequired_DelegateWrapper(const FMulticastScriptDelegate& OnRefreshRequired);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h_11_DELEGATE \
NARRATIVEARSENAL_API void FOnSelected_DelegateWrapper(const FMulticastScriptDelegate& OnSelected, UNarrativeNavigationComponent* Selector);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FZoneDrawData_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FZoneDrawData>();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FNavigationMarkerSettings>();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMarkerZOrder); \
	DECLARE_FUNCTION(execGetMarkerTransform); \
	DECLARE_FUNCTION(execRemoveDomains); \
	DECLARE_FUNCTION(execAddDomains); \
	DECLARE_FUNCTION(execSetDomains); \
	DECLARE_FUNCTION(execSetDefaultDomains); \
	DECLARE_FUNCTION(execOnSelect); \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execGetMarkerColor); \
	DECLARE_FUNCTION(execGetMarkerDisplayText); \
	DECLARE_FUNCTION(execGetMarkerActionText); \
	DECLARE_FUNCTION(execRefreshMarker); \
	DECLARE_FUNCTION(execGetMarkerSettings); \
	DECLARE_FUNCTION(execOnOwnerDestroyed); \
	DECLARE_FUNCTION(execRemoveMarker); \
	DECLARE_FUNCTION(execRegisterMarker);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h_102_CALLBACK_WRAPPERS
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapMarker(); \
	friend struct Z_Construct_UClass_UMapMarker_Statics; \
public: \
	DECLARE_CLASS(UMapMarker, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UMapMarker)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h_102_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMapMarker(UMapMarker&&); \
	UMapMarker(const UMapMarker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapMarker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapMarker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapMarker) \
	NO_API virtual ~UMapMarker();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h_99_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h_102_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h_102_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UMapMarker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Navigation_MapMarker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
