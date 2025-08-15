// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Spawners/NPCSpawnComponent.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativeNPCCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCSpawnComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCDefinition_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCGoalItem_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCSpawnComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCSpawnComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USpawnComponent();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FNPCSpawnParams();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNPCSpawnComponent Function SpawnedNPCDied
struct Z_Construct_UFunction_UNPCSpawnComponent_SpawnedNPCDied_Statics
{
	struct NPCSpawnComponent_eventSpawnedNPCDied_Parms
	{
		AActor* KilledActor;
		UNarrativeAbilitySystemComponent* KilledActorASC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Spawners/NPCSpawnComponent.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCSpawnComponent_SpawnedNPCDied_Statics::NewProp_KilledActor = { "KilledActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCSpawnComponent_eventSpawnedNPCDied_Parms, KilledActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCSpawnComponent_SpawnedNPCDied_Statics::NewProp_KilledActorASC = { "KilledActorASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCSpawnComponent_eventSpawnedNPCDied_Parms, KilledActorASC), Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KilledActorASC_MetaData), NewProp_KilledActorASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCSpawnComponent_SpawnedNPCDied_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCSpawnComponent_SpawnedNPCDied_Statics::NewProp_KilledActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCSpawnComponent_SpawnedNPCDied_Statics::NewProp_KilledActorASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCSpawnComponent_SpawnedNPCDied_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCSpawnComponent_SpawnedNPCDied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCSpawnComponent, nullptr, "SpawnedNPCDied", nullptr, nullptr, Z_Construct_UFunction_UNPCSpawnComponent_SpawnedNPCDied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCSpawnComponent_SpawnedNPCDied_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNPCSpawnComponent_SpawnedNPCDied_Statics::NPCSpawnComponent_eventSpawnedNPCDied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCSpawnComponent_SpawnedNPCDied_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCSpawnComponent_SpawnedNPCDied_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNPCSpawnComponent_SpawnedNPCDied_Statics::NPCSpawnComponent_eventSpawnedNPCDied_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCSpawnComponent_SpawnedNPCDied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCSpawnComponent_SpawnedNPCDied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCSpawnComponent::execSpawnedNPCDied)
{
	P_GET_OBJECT(AActor,Z_Param_KilledActor);
	P_GET_OBJECT(UNarrativeAbilitySystemComponent,Z_Param_KilledActorASC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnedNPCDied(Z_Param_KilledActor,Z_Param_KilledActorASC);
	P_NATIVE_END;
}
// End Class UNPCSpawnComponent Function SpawnedNPCDied

// Begin Class UNPCSpawnComponent
void UNPCSpawnComponent::StaticRegisterNativesUNPCSpawnComponent()
{
	UClass* Class = UNPCSpawnComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnedNPCDied", &UNPCSpawnComponent::execSpawnedNPCDied },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCSpawnComponent);
UClass* Z_Construct_UClass_UNPCSpawnComponent_NoRegister()
{
	return UNPCSpawnComponent::StaticClass();
}
struct Z_Construct_UClass_UNPCSpawnComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Spawners" },
		{ "Comment", "/**\n * Spawns an NPC when asked by our spawner. \n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Spawners/NPCSpawnComponent.h" },
		{ "ModuleRelativePath", "Public/Spawners/NPCSpawnComponent.h" },
		{ "ToolTip", "Spawns an NPC when asked by our spawner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UntetherDistance_MetaData[] = {
		{ "Category", "NPC Spawn Component" },
		{ "Comment", "//NPCs within this range of the player wont get despawned; we'll instead tether them to the player \n" },
		{ "ModuleRelativePath", "Public/Spawners/NPCSpawnComponent.h" },
		{ "ToolTip", "NPCs within this range of the player wont get despawned; we'll instead tether them to the player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDontSpawnIfPreviouslyKilled_MetaData[] = {
		{ "Category", "NPC Spawn Component" },
		{ "Comment", "//If true, we wont spawn the NPC in any more if it was previously killed. \n" },
		{ "ModuleRelativePath", "Public/Spawners/NPCSpawnComponent.h" },
		{ "ToolTip", "If true, we wont spawn the NPC in any more if it was previously killed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCToSpawn_MetaData[] = {
		{ "Category", "NPC Spawn Component" },
		{ "Comment", "//The NPC we want the spawn to spawn in \n" },
		{ "ModuleRelativePath", "Public/Spawners/NPCSpawnComponent.h" },
		{ "ToolTip", "The NPC we want the spawn to spawn in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnParams_MetaData[] = {
		{ "Category", "NPC Spawn Component" },
		{ "Comment", "//Optional spawn params we can use in the spawning process\n" },
		{ "ModuleRelativePath", "Public/Spawners/NPCSpawnComponent.h" },
		{ "ToolTip", "Optional spawn params we can use in the spawning process" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalGoal_MetaData[] = {
		{ "Category", "NPC Spawn Component" },
		{ "Comment", "//Optional goal to assign to the NPC when it spawns in \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Spawners/NPCSpawnComponent.h" },
		{ "ToolTip", "Optional goal to assign to the NPC when it spawns in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCSaveGUID_MetaData[] = {
		{ "Category", "NPC Spawn Component" },
		{ "Comment", "/**The save GUID to assign to the NPC, so that its stats, items, etc are saved. You only need to set this if the NPC is non-unique\n\x09""and you actually want it to save. */" },
		{ "ModuleRelativePath", "Public/Spawners/NPCSpawnComponent.h" },
		{ "ToolTip", "The save GUID to assign to the NPC, so that its stats, items, etc are saved. You only need to set this if the NPC is non-unique\n       and you actually want it to save." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasKilled_MetaData[] = {
		{ "Category", "NPC Spawn Component" },
		{ "Comment", "//Whether the NPC this spawn created has been killed in the past. If they were we shouldnt spawn them \n" },
		{ "ModuleRelativePath", "Public/Spawners/NPCSpawnComponent.h" },
		{ "ToolTip", "Whether the NPC this spawn created has been killed in the past. If they were we shouldnt spawn them" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTetheredToPlayer_MetaData[] = {
		{ "Category", "NPC Spawn Component" },
		{ "Comment", "//Whether the NPC was tethered to the player\n" },
		{ "ModuleRelativePath", "Public/Spawners/NPCSpawnComponent.h" },
		{ "ToolTip", "Whether the NPC was tethered to the player" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UntetherDistance;
	static void NewProp_bDontSpawnIfPreviouslyKilled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDontSpawnIfPreviouslyKilled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCToSpawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnParams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalGoal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NPCSaveGUID;
	static void NewProp_bWasKilled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasKilled;
	static void NewProp_bTetheredToPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTetheredToPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNPCSpawnComponent_SpawnedNPCDied, "SpawnedNPCDied" }, // 1139542762
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCSpawnComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_UntetherDistance = { "UntetherDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCSpawnComponent, UntetherDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UntetherDistance_MetaData), NewProp_UntetherDistance_MetaData) };
void Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_bDontSpawnIfPreviouslyKilled_SetBit(void* Obj)
{
	((UNPCSpawnComponent*)Obj)->bDontSpawnIfPreviouslyKilled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_bDontSpawnIfPreviouslyKilled = { "bDontSpawnIfPreviouslyKilled", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNPCSpawnComponent), &Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_bDontSpawnIfPreviouslyKilled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDontSpawnIfPreviouslyKilled_MetaData), NewProp_bDontSpawnIfPreviouslyKilled_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_NPCToSpawn = { "NPCToSpawn", nullptr, (EPropertyFlags)0x0114000001000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCSpawnComponent, NPCToSpawn), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCToSpawn_MetaData), NewProp_NPCToSpawn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_SpawnParams = { "SpawnParams", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCSpawnComponent, SpawnParams), Z_Construct_UScriptStruct_FNPCSpawnParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnParams_MetaData), NewProp_SpawnParams_MetaData) }; // 3899460127
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_OptionalGoal = { "OptionalGoal", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCSpawnComponent, OptionalGoal), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalGoal_MetaData), NewProp_OptionalGoal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_NPCSaveGUID = { "NPCSaveGUID", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCSpawnComponent, NPCSaveGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCSaveGUID_MetaData), NewProp_NPCSaveGUID_MetaData) };
void Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_bWasKilled_SetBit(void* Obj)
{
	((UNPCSpawnComponent*)Obj)->bWasKilled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_bWasKilled = { "bWasKilled", nullptr, (EPropertyFlags)0x0020080001000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNPCSpawnComponent), &Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_bWasKilled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasKilled_MetaData), NewProp_bWasKilled_MetaData) };
void Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_bTetheredToPlayer_SetBit(void* Obj)
{
	((UNPCSpawnComponent*)Obj)->bTetheredToPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_bTetheredToPlayer = { "bTetheredToPlayer", nullptr, (EPropertyFlags)0x0020080001000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNPCSpawnComponent), &Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_bTetheredToPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTetheredToPlayer_MetaData), NewProp_bTetheredToPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCSpawnComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_UntetherDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_bDontSpawnIfPreviouslyKilled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_NPCToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_SpawnParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_OptionalGoal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_NPCSaveGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_bWasKilled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCSpawnComponent_Statics::NewProp_bTetheredToPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCSpawnComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNPCSpawnComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USpawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCSpawnComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCSpawnComponent_Statics::ClassParams = {
	&UNPCSpawnComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNPCSpawnComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNPCSpawnComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCSpawnComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNPCSpawnComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNPCSpawnComponent()
{
	if (!Z_Registration_Info_UClass_UNPCSpawnComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCSpawnComponent.OuterSingleton, Z_Construct_UClass_UNPCSpawnComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNPCSpawnComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNPCSpawnComponent>()
{
	return UNPCSpawnComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCSpawnComponent);
UNPCSpawnComponent::~UNPCSpawnComponent() {}
// End Class UNPCSpawnComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_NPCSpawnComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNPCSpawnComponent, UNPCSpawnComponent::StaticClass, TEXT("UNPCSpawnComponent"), &Z_Registration_Info_UClass_UNPCSpawnComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCSpawnComponent), 4209275083U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_NPCSpawnComponent_h_668874186(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_NPCSpawnComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_NPCSpawnComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
