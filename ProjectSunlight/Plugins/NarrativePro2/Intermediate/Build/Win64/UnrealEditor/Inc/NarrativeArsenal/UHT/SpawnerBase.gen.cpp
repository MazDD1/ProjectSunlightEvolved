// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Spawners/SpawnerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnerBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ASpawnerBase();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ASpawnerBase_NoRegister();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class ASpawnerBase Function RemoveActors
struct Z_Construct_UFunction_ASpawnerBase_RemoveActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Public/Spawners/SpawnerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnerBase_RemoveActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnerBase, nullptr, "RemoveActors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnerBase_RemoveActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnerBase_RemoveActors_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASpawnerBase_RemoveActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnerBase_RemoveActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnerBase::execRemoveActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveActors();
	P_NATIVE_END;
}
// End Class ASpawnerBase Function RemoveActors

// Begin Class ASpawnerBase Function SpawnActors
struct Z_Construct_UFunction_ASpawnerBase_SpawnActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Public/Spawners/SpawnerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnerBase_SpawnActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnerBase, nullptr, "SpawnActors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnerBase_SpawnActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnerBase_SpawnActors_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASpawnerBase_SpawnActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnerBase_SpawnActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnerBase::execSpawnActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnActors();
	P_NATIVE_END;
}
// End Class ASpawnerBase Function SpawnActors

// Begin Class ASpawnerBase
void ASpawnerBase::StaticRegisterNativesASpawnerBase()
{
	UClass* Class = ASpawnerBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RemoveActors", &ASpawnerBase::execRemoveActors },
		{ "SpawnActors", &ASpawnerBase::execSpawnActors },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnerBase);
UClass* Z_Construct_UClass_ASpawnerBase_NoRegister()
{
	return ASpawnerBase::StaticClass();
}
struct Z_Construct_UClass_ASpawnerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\nA big problem with world partition is that it doesn't work well on dynamically spawned actors. Spawners address this by existing in the world\nand thus being managed by world partition. They save their spawned actors to a save record and so remember which of their actors to respawn.\n\nie if we had a Pickup Spawner, and the player took the pickups, the spawner wouldn't respawn the pickups as it would see which pickups were taken in its saved records.\n\nSpawners replace settlements for spawning NPCs in Narrative 1.2. */" },
		{ "IncludePath", "Spawners/SpawnerBase.h" },
		{ "ModuleRelativePath", "Public/Spawners/SpawnerBase.h" },
		{ "ToolTip", "A big problem with world partition is that it doesn't work well on dynamically spawned actors. Spawners address this by existing in the world\nand thus being managed by world partition. They save their spawned actors to a save record and so remember which of their actors to respawn.\n\nie if we had a Pickup Spawner, and the player took the pickups, the spawner wouldn't respawn the pickups as it would see which pickups were taken in its saved records.\n\nSpawners replace settlements for spawning NPCs in Narrative 1.2." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnerRoot_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//Root component - we want the settlement to have a transform \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Spawners/SpawnerBase.h" },
		{ "ToolTip", "Root component - we want the settlement to have a transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnerSaveGUID_MetaData[] = {
		{ "Category", "Spawner Configuration" },
		{ "Comment", "//The GUID that the save system uses to identify and save the settlement\n" },
		{ "ModuleRelativePath", "Public/Spawners/SpawnerBase.h" },
		{ "ToolTip", "The GUID that the save system uses to identify and save the settlement" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Display" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Spawners/SpawnerBase.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActivateOnBeginPlay_MetaData[] = {
		{ "Category", "Spawner Configuration" },
		{ "Comment", "//Whether the spawner is enabled or not \n" },
		{ "ModuleRelativePath", "Public/Spawners/SpawnerBase.h" },
		{ "ToolTip", "Whether the spawner is enabled or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnerRoot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnerSaveGUID;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bActivateOnBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivateOnBeginPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnerBase_RemoveActors, "RemoveActors" }, // 1427280989
		{ &Z_Construct_UFunction_ASpawnerBase_SpawnActors, "SpawnActors" }, // 4138700481
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnerBase_Statics::NewProp_SpawnerRoot = { "SpawnerRoot", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnerBase, SpawnerRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnerRoot_MetaData), NewProp_SpawnerRoot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpawnerBase_Statics::NewProp_SpawnerSaveGUID = { "SpawnerSaveGUID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnerBase, SpawnerSaveGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnerSaveGUID_MetaData), NewProp_SpawnerSaveGUID_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnerBase_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x01440008000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnerBase, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_ASpawnerBase_Statics::NewProp_bActivateOnBeginPlay_SetBit(void* Obj)
{
	((ASpawnerBase*)Obj)->bActivateOnBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpawnerBase_Statics::NewProp_bActivateOnBeginPlay = { "bActivateOnBeginPlay", nullptr, (EPropertyFlags)0x0020080001000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASpawnerBase), &Z_Construct_UClass_ASpawnerBase_Statics::NewProp_bActivateOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActivateOnBeginPlay_MetaData), NewProp_bActivateOnBeginPlay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerBase_Statics::NewProp_SpawnerRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerBase_Statics::NewProp_SpawnerSaveGUID,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerBase_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerBase_Statics::NewProp_bActivateOnBeginPlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawnerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASpawnerBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNarrativeSavableActor_NoRegister, (int32)VTABLE_OFFSET(ASpawnerBase, INarrativeSavableActor), false },  // 319030605
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnerBase_Statics::ClassParams = {
	&ASpawnerBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpawnerBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawnerBase()
{
	if (!Z_Registration_Info_UClass_ASpawnerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnerBase.OuterSingleton, Z_Construct_UClass_ASpawnerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawnerBase.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ASpawnerBase>()
{
	return ASpawnerBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnerBase);
ASpawnerBase::~ASpawnerBase() {}
// End Class ASpawnerBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_SpawnerBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnerBase, ASpawnerBase::StaticClass, TEXT("ASpawnerBase"), &Z_Registration_Info_UClass_ASpawnerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnerBase), 2963340817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_SpawnerBase_h_1250725113(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_SpawnerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_SpawnerBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
