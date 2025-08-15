// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Spawners/NPCSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCSpawner() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANPCSpawner();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANPCSpawner_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ASpawnerBase();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class ANPCSpawner Function GetSpawnedNPCs
struct Z_Construct_UFunction_ANPCSpawner_GetSpawnedNPCs_Statics
{
	struct NPCSpawner_eventGetSpawnedNPCs_Parms
	{
		TArray<ANarrativeNPCCharacter*> OutNPCs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Spawner" },
		{ "Comment", "//Get all the NPCs spawned here - TODO we can make this more efficient by caching NPCs. \n" },
		{ "ModuleRelativePath", "Public/Spawners/NPCSpawner.h" },
		{ "ToolTip", "Get all the NPCs spawned here - TODO we can make this more efficient by caching NPCs." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutNPCs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNPCs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPCSpawner_GetSpawnedNPCs_Statics::NewProp_OutNPCs_Inner = { "OutNPCs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANPCSpawner_GetSpawnedNPCs_Statics::NewProp_OutNPCs = { "OutNPCs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCSpawner_eventGetSpawnedNPCs_Parms, OutNPCs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCSpawner_GetSpawnedNPCs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCSpawner_GetSpawnedNPCs_Statics::NewProp_OutNPCs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCSpawner_GetSpawnedNPCs_Statics::NewProp_OutNPCs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCSpawner_GetSpawnedNPCs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCSpawner_GetSpawnedNPCs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCSpawner, nullptr, "GetSpawnedNPCs", nullptr, nullptr, Z_Construct_UFunction_ANPCSpawner_GetSpawnedNPCs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCSpawner_GetSpawnedNPCs_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANPCSpawner_GetSpawnedNPCs_Statics::NPCSpawner_eventGetSpawnedNPCs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCSpawner_GetSpawnedNPCs_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCSpawner_GetSpawnedNPCs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANPCSpawner_GetSpawnedNPCs_Statics::NPCSpawner_eventGetSpawnedNPCs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANPCSpawner_GetSpawnedNPCs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCSpawner_GetSpawnedNPCs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPCSpawner::execGetSpawnedNPCs)
{
	P_GET_TARRAY_REF(ANarrativeNPCCharacter*,Z_Param_Out_OutNPCs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSpawnedNPCs(Z_Param_Out_OutNPCs);
	P_NATIVE_END;
}
// End Class ANPCSpawner Function GetSpawnedNPCs

// Begin Class ANPCSpawner
void ANPCSpawner::StaticRegisterNativesANPCSpawner()
{
	UClass* Class = ANPCSpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSpawnedNPCs", &ANPCSpawner::execGetSpawnedNPCs },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCSpawner);
UClass* Z_Construct_UClass_ANPCSpawner_NoRegister()
{
	return ANPCSpawner::StaticClass();
}
struct Z_Construct_UClass_ANPCSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A world partition managed actor that spawns/despawns NPCs from a list. Remembers if NPCs have died, and\n * also won't clean up NPCs that are near your player, ie followers etc. \n */" },
		{ "IncludePath", "Spawners/NPCSpawner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Spawners/NPCSpawner.h" },
		{ "ToolTip", "A world partition managed actor that spawns/despawns NPCs from a list. Remembers if NPCs have died, and\nalso won't clean up NPCs that are near your player, ie followers etc." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPCSpawner_GetSpawnedNPCs, "GetSpawnedNPCs" }, // 2309130967
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANPCSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASpawnerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCSpawner_Statics::ClassParams = {
	&ANPCSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPCSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANPCSpawner()
{
	if (!Z_Registration_Info_UClass_ANPCSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCSpawner.OuterSingleton, Z_Construct_UClass_ANPCSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANPCSpawner.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ANPCSpawner>()
{
	return ANPCSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCSpawner);
ANPCSpawner::~ANPCSpawner() {}
// End Class ANPCSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_NPCSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANPCSpawner, ANPCSpawner::StaticClass, TEXT("ANPCSpawner"), &Z_Registration_Info_UClass_ANPCSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCSpawner), 2966802789U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_NPCSpawner_h_2743878729(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_NPCSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_NPCSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
