// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Spawners/SpawnComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USpawnComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_USpawnComponent_NoRegister();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class USpawnComponent Function RemoveActor
struct Z_Construct_UFunction_USpawnComponent_RemoveActor_Statics
{
	struct SpawnComponent_eventRemoveActor_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawn Component" },
		{ "ModuleRelativePath", "Public/Spawners/SpawnComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpawnComponent_RemoveActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpawnComponent_eventRemoveActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpawnComponent_RemoveActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpawnComponent_eventRemoveActor_Parms), &Z_Construct_UFunction_USpawnComponent_RemoveActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpawnComponent_RemoveActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpawnComponent_RemoveActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnComponent_RemoveActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpawnComponent_RemoveActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpawnComponent, nullptr, "RemoveActor", nullptr, nullptr, Z_Construct_UFunction_USpawnComponent_RemoveActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnComponent_RemoveActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpawnComponent_RemoveActor_Statics::SpawnComponent_eventRemoveActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnComponent_RemoveActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpawnComponent_RemoveActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpawnComponent_RemoveActor_Statics::SpawnComponent_eventRemoveActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpawnComponent_RemoveActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpawnComponent_RemoveActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpawnComponent::execRemoveActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveActor();
	P_NATIVE_END;
}
// End Class USpawnComponent Function RemoveActor

// Begin Class USpawnComponent
void USpawnComponent::StaticRegisterNativesUSpawnComponent()
{
	UClass* Class = USpawnComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RemoveActor", &USpawnComponent::execRemoveActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnComponent);
UClass* Z_Construct_UClass_USpawnComponent_NoRegister()
{
	return USpawnComponent::StaticClass();
}
struct Z_Construct_UClass_USpawnComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Spawners" },
		{ "Comment", "/**Lives on a spawner, and will spawn an actor at its transform when requested. */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Spawners/SpawnComponent.h" },
		{ "ModuleRelativePath", "Public/Spawners/SpawnComponent.h" },
		{ "ToolTip", "Lives on a spawner, and will spawn an actor at its transform when requested." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActor_MetaData[] = {
		{ "Category", "Spawn Component" },
		{ "Comment", "//Holds a reference to the spawned actor\n" },
		{ "ModuleRelativePath", "Public/Spawners/SpawnComponent.h" },
		{ "ToolTip", "Holds a reference to the spawned actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpawnComponent_RemoveActor, "RemoveActor" }, // 3279152556
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USpawnComponent_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnComponent, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedActor_MetaData), NewProp_SpawnedActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpawnComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnComponent_Statics::NewProp_SpawnedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpawnComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USpawnComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNarrativeSavableComponent_NoRegister, (int32)VTABLE_OFFSET(USpawnComponent, INarrativeSavableComponent), false },  // 1573843113
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnComponent_Statics::ClassParams = {
	&USpawnComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USpawnComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USpawnComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USpawnComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpawnComponent()
{
	if (!Z_Registration_Info_UClass_USpawnComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnComponent.OuterSingleton, Z_Construct_UClass_USpawnComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpawnComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<USpawnComponent>()
{
	return USpawnComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnComponent);
USpawnComponent::~USpawnComponent() {}
// End Class USpawnComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_SpawnComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpawnComponent, USpawnComponent::StaticClass, TEXT("USpawnComponent"), &Z_Registration_Info_UClass_USpawnComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnComponent), 270303934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_SpawnComponent_h_3220390285(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_SpawnComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Spawners_SpawnComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
