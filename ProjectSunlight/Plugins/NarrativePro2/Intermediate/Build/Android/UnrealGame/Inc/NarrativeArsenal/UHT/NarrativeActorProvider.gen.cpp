// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/NarrativeActorProvider.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeActorProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeActorProvider();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeActorProvider_ActorOfClass();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeActorProvider_ActorOfClass_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeActorProvider_GUIDLookup();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeActorProvider_GUIDLookup_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeActorProvider_LevelReference();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeActorProvider_LevelReference_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeActorProvider_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeActorProvider_NPC();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeActorProvider_NPC_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeProviderBase();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeProviderBase_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTransformProvider();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTransformProvider_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTransformProvider_POI();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTransformProvider_POI_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTransformProvider_SpecifiedTransform();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTransformProvider_SpecifiedTransform_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCDefinition_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedActorProvider();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedTransformProvider();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FInstancedActorProvider
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancedActorProvider;
class UScriptStruct* FInstancedActorProvider::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedActorProvider.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancedActorProvider.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedActorProvider, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("InstancedActorProvider"));
	}
	return Z_Registration_Info_UScriptStruct_InstancedActorProvider.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FInstancedActorProvider>()
{
	return FInstancedActorProvider::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInstancedActorProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Allows blueprints to create instanced providers!  \n" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "Allows blueprints to create instanced providers!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Provider_MetaData[] = {
		{ "Category", "Provider" },
		{ "Comment", "//The instanced goal\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "The instanced goal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Provider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedActorProvider>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInstancedActorProvider_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancedActorProvider, Provider), Z_Construct_UClass_UNarrativeActorProvider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Provider_MetaData), NewProp_Provider_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstancedActorProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedActorProvider_Statics::NewProp_Provider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedActorProvider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedActorProvider_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"InstancedActorProvider",
	Z_Construct_UScriptStruct_FInstancedActorProvider_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedActorProvider_Statics::PropPointers),
	sizeof(FInstancedActorProvider),
	alignof(FInstancedActorProvider),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedActorProvider_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInstancedActorProvider_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInstancedActorProvider()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedActorProvider.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancedActorProvider.InnerSingleton, Z_Construct_UScriptStruct_FInstancedActorProvider_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InstancedActorProvider.InnerSingleton;
}
// End ScriptStruct FInstancedActorProvider

// Begin ScriptStruct FInstancedTransformProvider
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancedTransformProvider;
class UScriptStruct* FInstancedTransformProvider::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedTransformProvider.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancedTransformProvider.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedTransformProvider, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("InstancedTransformProvider"));
	}
	return Z_Registration_Info_UScriptStruct_InstancedTransformProvider.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FInstancedTransformProvider>()
{
	return FInstancedTransformProvider::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInstancedTransformProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Allows blueprints to create instanced providers!  \n" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "Allows blueprints to create instanced providers!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Provider_MetaData[] = {
		{ "Category", "Provider" },
		{ "Comment", "//The instanced goal\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "The instanced goal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Provider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedTransformProvider>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInstancedTransformProvider_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancedTransformProvider, Provider), Z_Construct_UClass_UNarrativeTransformProvider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Provider_MetaData), NewProp_Provider_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstancedTransformProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedTransformProvider_Statics::NewProp_Provider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedTransformProvider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedTransformProvider_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"InstancedTransformProvider",
	Z_Construct_UScriptStruct_FInstancedTransformProvider_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedTransformProvider_Statics::PropPointers),
	sizeof(FInstancedTransformProvider),
	alignof(FInstancedTransformProvider),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedTransformProvider_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInstancedTransformProvider_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInstancedTransformProvider()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedTransformProvider.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancedTransformProvider.InnerSingleton, Z_Construct_UScriptStruct_FInstancedTransformProvider_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InstancedTransformProvider.InnerSingleton;
}
// End ScriptStruct FInstancedTransformProvider

// Begin Class UNarrativeProviderBase Function GetDescription
struct Z_Construct_UFunction_UNarrativeProviderBase_GetDescription_Statics
{
	struct NarrativeProviderBase_eventGetDescription_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "//Return some text describing what the actor provider is providing\n" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "Return some text describing what the actor provider is providing" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeProviderBase_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeProviderBase_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeProviderBase_GetDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeProviderBase_GetDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeProviderBase_GetDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeProviderBase_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeProviderBase, nullptr, "GetDescription", nullptr, nullptr, Z_Construct_UFunction_UNarrativeProviderBase_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeProviderBase_GetDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeProviderBase_GetDescription_Statics::NarrativeProviderBase_eventGetDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeProviderBase_GetDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeProviderBase_GetDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeProviderBase_GetDescription_Statics::NarrativeProviderBase_eventGetDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeProviderBase_GetDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeProviderBase_GetDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeProviderBase::execGetDescription)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetDescription();
	P_NATIVE_END;
}
// End Class UNarrativeProviderBase Function GetDescription

// Begin Class UNarrativeProviderBase
void UNarrativeProviderBase::StaticRegisterNativesUNarrativeProviderBase()
{
	UClass* Class = UNarrativeProviderBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDescription", &UNarrativeProviderBase::execGetDescription },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeProviderBase);
UClass* Z_Construct_UClass_UNarrativeProviderBase_NoRegister()
{
	return UNarrativeProviderBase::StaticClass();
}
struct Z_Construct_UClass_UNarrativeProviderBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Provider" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides an actor/transform based on some passed in information. Similar to EQSContexts, but more general gameplay oriented. \n */" },
		{ "IncludePath", "NarrativeActorProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "Provides an actor/transform based on some passed in information. Similar to EQSContexts, but more general gameplay oriented." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeProviderBase_GetDescription, "GetDescription" }, // 3641050575
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeProviderBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeProviderBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeProviderBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeProviderBase_Statics::ClassParams = {
	&UNarrativeProviderBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeProviderBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeProviderBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeProviderBase()
{
	if (!Z_Registration_Info_UClass_UNarrativeProviderBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeProviderBase.OuterSingleton, Z_Construct_UClass_UNarrativeProviderBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeProviderBase.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeProviderBase>()
{
	return UNarrativeProviderBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeProviderBase);
UNarrativeProviderBase::~UNarrativeProviderBase() {}
// End Class UNarrativeProviderBase

// Begin Class UNarrativeTransformProvider Function ProvideTransform
struct NarrativeTransformProvider_eventProvideTransform_Parms
{
	const UObject* WorldContextObject;
	FTransform ReturnValue;
};
static const FName NAME_UNarrativeTransformProvider_ProvideTransform = FName(TEXT("ProvideTransform"));
FTransform UNarrativeTransformProvider::ProvideTransform(const UObject* WorldContextObject) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeTransformProvider_ProvideTransform);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeTransformProvider_eventProvideTransform_Parms Parms;
		Parms.WorldContextObject=WorldContextObject;
		const_cast<UNarrativeTransformProvider*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNarrativeTransformProvider*>(this)->ProvideTransform_Implementation(WorldContextObject);
	}
}
struct Z_Construct_UFunction_UNarrativeTransformProvider_ProvideTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "//Provide a transform instead of an actor. By default uses ProvideActors() transform if you dont override this. \n" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "Provide a transform instead of an actor. By default uses ProvideActors() transform if you dont override this." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTransformProvider_ProvideTransform_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeTransformProvider_eventProvideTransform_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeTransformProvider_ProvideTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeTransformProvider_eventProvideTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTransformProvider_ProvideTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTransformProvider_ProvideTransform_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTransformProvider_ProvideTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTransformProvider_ProvideTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTransformProvider_ProvideTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTransformProvider, nullptr, "ProvideTransform", nullptr, nullptr, Z_Construct_UFunction_UNarrativeTransformProvider_ProvideTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTransformProvider_ProvideTransform_Statics::PropPointers), sizeof(NarrativeTransformProvider_eventProvideTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTransformProvider_ProvideTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTransformProvider_ProvideTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeTransformProvider_eventProvideTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeTransformProvider_ProvideTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTransformProvider_ProvideTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeTransformProvider::execProvideTransform)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->ProvideTransform_Implementation(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UNarrativeTransformProvider Function ProvideTransform

// Begin Class UNarrativeTransformProvider
void UNarrativeTransformProvider::StaticRegisterNativesUNarrativeTransformProvider()
{
	UClass* Class = UNarrativeTransformProvider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ProvideTransform", &UNarrativeTransformProvider::execProvideTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeTransformProvider);
UClass* Z_Construct_UClass_UNarrativeTransformProvider_NoRegister()
{
	return UNarrativeTransformProvider::StaticClass();
}
struct Z_Construct_UClass_UNarrativeTransformProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Provider Provider" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides an actor/transform based on some passed in information. Similar to EQSContexts, but more general gameplay oriented. \n */" },
		{ "IncludePath", "NarrativeActorProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "Provides an actor/transform based on some passed in information. Similar to EQSContexts, but more general gameplay oriented." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeTransformProvider_ProvideTransform, "ProvideTransform" }, // 1483217066
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeTransformProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeTransformProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeProviderBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTransformProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeTransformProvider_Statics::ClassParams = {
	&UNarrativeTransformProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTransformProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeTransformProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeTransformProvider()
{
	if (!Z_Registration_Info_UClass_UNarrativeTransformProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeTransformProvider.OuterSingleton, Z_Construct_UClass_UNarrativeTransformProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeTransformProvider.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeTransformProvider>()
{
	return UNarrativeTransformProvider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeTransformProvider);
UNarrativeTransformProvider::~UNarrativeTransformProvider() {}
// End Class UNarrativeTransformProvider

// Begin Class UNarrativeActorProvider Function ProvideActor
struct NarrativeActorProvider_eventProvideActor_Parms
{
	const UObject* WorldContextObject;
	AActor* ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeActorProvider_eventProvideActor_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNarrativeActorProvider_ProvideActor = FName(TEXT("ProvideActor"));
AActor* UNarrativeActorProvider::ProvideActor(const UObject* WorldContextObject) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeActorProvider_ProvideActor);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeActorProvider_eventProvideActor_Parms Parms;
		Parms.WorldContextObject=WorldContextObject;
		const_cast<UNarrativeActorProvider*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNarrativeActorProvider*>(this)->ProvideActor_Implementation(WorldContextObject);
	}
}
struct Z_Construct_UFunction_UNarrativeActorProvider_ProvideActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "//Provide the actor. \n" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "Provide the actor." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeActorProvider_ProvideActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeActorProvider_eventProvideActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeActorProvider_ProvideActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeActorProvider_eventProvideActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeActorProvider_ProvideActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeActorProvider_ProvideActor_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeActorProvider_ProvideActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActorProvider_ProvideActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeActorProvider_ProvideActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeActorProvider, nullptr, "ProvideActor", nullptr, nullptr, Z_Construct_UFunction_UNarrativeActorProvider_ProvideActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActorProvider_ProvideActor_Statics::PropPointers), sizeof(NarrativeActorProvider_eventProvideActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActorProvider_ProvideActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeActorProvider_ProvideActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeActorProvider_eventProvideActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeActorProvider_ProvideActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeActorProvider_ProvideActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeActorProvider::execProvideActor)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->ProvideActor_Implementation(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UNarrativeActorProvider Function ProvideActor

// Begin Class UNarrativeActorProvider
void UNarrativeActorProvider::StaticRegisterNativesUNarrativeActorProvider()
{
	UClass* Class = UNarrativeActorProvider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ProvideActor", &UNarrativeActorProvider::execProvideActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeActorProvider);
UClass* Z_Construct_UClass_UNarrativeActorProvider_NoRegister()
{
	return UNarrativeActorProvider::StaticClass();
}
struct Z_Construct_UClass_UNarrativeActorProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Provider Provider Provider" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides an actor/transform on top of the transform. Similar to EQSContexts, but more general gameplay oriented. \n */" },
		{ "IncludePath", "NarrativeActorProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "Provides an actor/transform on top of the transform. Similar to EQSContexts, but more general gameplay oriented." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeActorProvider_ProvideActor, "ProvideActor" }, // 3485164482
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeActorProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeActorProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeTransformProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActorProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeActorProvider_Statics::ClassParams = {
	&UNarrativeActorProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActorProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeActorProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeActorProvider()
{
	if (!Z_Registration_Info_UClass_UNarrativeActorProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeActorProvider.OuterSingleton, Z_Construct_UClass_UNarrativeActorProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeActorProvider.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeActorProvider>()
{
	return UNarrativeActorProvider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeActorProvider);
UNarrativeActorProvider::~UNarrativeActorProvider() {}
// End Class UNarrativeActorProvider

// Begin Class UNarrativeActorProvider_NPC
void UNarrativeActorProvider_NPC::StaticRegisterNativesUNarrativeActorProvider_NPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeActorProvider_NPC);
UClass* Z_Construct_UClass_UNarrativeActorProvider_NPC_NoRegister()
{
	return UNarrativeActorProvider_NPC::StaticClass();
}
struct Z_Construct_UClass_UNarrativeActorProvider_NPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Provider Provider Provider Provider" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides an NPC\n */" },
		{ "DisplayName", "Find NPC" },
		{ "IncludePath", "NarrativeActorProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "Provides an NPC" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCDefinition_MetaData[] = {
		{ "Category", "Actor Provider" },
		{ "Comment", "//The NPC to provide \n" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "The NPC to provide" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCDefinition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeActorProvider_NPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeActorProvider_NPC_Statics::NewProp_NPCDefinition = { "NPCDefinition", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeActorProvider_NPC, NPCDefinition), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCDefinition_MetaData), NewProp_NPCDefinition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeActorProvider_NPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeActorProvider_NPC_Statics::NewProp_NPCDefinition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActorProvider_NPC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeActorProvider_NPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeActorProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActorProvider_NPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeActorProvider_NPC_Statics::ClassParams = {
	&UNarrativeActorProvider_NPC::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNarrativeActorProvider_NPC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActorProvider_NPC_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActorProvider_NPC_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeActorProvider_NPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeActorProvider_NPC()
{
	if (!Z_Registration_Info_UClass_UNarrativeActorProvider_NPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeActorProvider_NPC.OuterSingleton, Z_Construct_UClass_UNarrativeActorProvider_NPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeActorProvider_NPC.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeActorProvider_NPC>()
{
	return UNarrativeActorProvider_NPC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeActorProvider_NPC);
UNarrativeActorProvider_NPC::~UNarrativeActorProvider_NPC() {}
// End Class UNarrativeActorProvider_NPC

// Begin Class UNarrativeActorProvider_GUIDLookup
void UNarrativeActorProvider_GUIDLookup::StaticRegisterNativesUNarrativeActorProvider_GUIDLookup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeActorProvider_GUIDLookup);
UClass* Z_Construct_UClass_UNarrativeActorProvider_GUIDLookup_NoRegister()
{
	return UNarrativeActorProvider_GUIDLookup::StaticClass();
}
struct Z_Construct_UClass_UNarrativeActorProvider_GUIDLookup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Provider Provider Provider Provider" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Finds an actor in the world with the specified save GUID. \n * \n * Find by level reference is a lot simpler and more intuitive to use - you should use this instead if possible.\n */" },
		{ "DisplayName", "Find Actor By Save GUID" },
		{ "IncludePath", "NarrativeActorProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "Finds an actor in the world with the specified save GUID.\n\nFind by level reference is a lot simpler and more intuitive to use - you should use this instead if possible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GUIDToLookup_MetaData[] = {
		{ "Category", "Actor Provider" },
		{ "Comment", "//The GUID to lookup \n" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "The GUID to lookup" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GUIDToLookup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeActorProvider_GUIDLookup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeActorProvider_GUIDLookup_Statics::NewProp_GUIDToLookup = { "GUIDToLookup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeActorProvider_GUIDLookup, GUIDToLookup), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GUIDToLookup_MetaData), NewProp_GUIDToLookup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeActorProvider_GUIDLookup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeActorProvider_GUIDLookup_Statics::NewProp_GUIDToLookup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActorProvider_GUIDLookup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeActorProvider_GUIDLookup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeActorProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActorProvider_GUIDLookup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeActorProvider_GUIDLookup_Statics::ClassParams = {
	&UNarrativeActorProvider_GUIDLookup::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNarrativeActorProvider_GUIDLookup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActorProvider_GUIDLookup_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActorProvider_GUIDLookup_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeActorProvider_GUIDLookup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeActorProvider_GUIDLookup()
{
	if (!Z_Registration_Info_UClass_UNarrativeActorProvider_GUIDLookup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeActorProvider_GUIDLookup.OuterSingleton, Z_Construct_UClass_UNarrativeActorProvider_GUIDLookup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeActorProvider_GUIDLookup.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeActorProvider_GUIDLookup>()
{
	return UNarrativeActorProvider_GUIDLookup::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeActorProvider_GUIDLookup);
UNarrativeActorProvider_GUIDLookup::~UNarrativeActorProvider_GUIDLookup() {}
// End Class UNarrativeActorProvider_GUIDLookup

// Begin Class UNarrativeActorProvider_LevelReference
void UNarrativeActorProvider_LevelReference::StaticRegisterNativesUNarrativeActorProvider_LevelReference()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeActorProvider_LevelReference);
UClass* Z_Construct_UClass_UNarrativeActorProvider_LevelReference_NoRegister()
{
	return UNarrativeActorProvider_LevelReference::StaticClass();
}
struct Z_Construct_UClass_UNarrativeActorProvider_LevelReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Provider Provider Provider Provider" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Finds an actor in the world with the specified level reference.\n */" },
		{ "DisplayName", "Level Actor" },
		{ "IncludePath", "NarrativeActorProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "Finds an actor in the world with the specified level reference." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftActorReference_MetaData[] = {
		{ "Category", "Actor Provider" },
		{ "Comment", "//The actor reference \n" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "The actor reference" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftActorReference;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeActorProvider_LevelReference>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNarrativeActorProvider_LevelReference_Statics::NewProp_SoftActorReference = { "SoftActorReference", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeActorProvider_LevelReference, SoftActorReference), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftActorReference_MetaData), NewProp_SoftActorReference_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeActorProvider_LevelReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeActorProvider_LevelReference_Statics::NewProp_SoftActorReference,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActorProvider_LevelReference_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeActorProvider_LevelReference_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeActorProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActorProvider_LevelReference_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeActorProvider_LevelReference_Statics::ClassParams = {
	&UNarrativeActorProvider_LevelReference::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNarrativeActorProvider_LevelReference_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActorProvider_LevelReference_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActorProvider_LevelReference_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeActorProvider_LevelReference_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeActorProvider_LevelReference()
{
	if (!Z_Registration_Info_UClass_UNarrativeActorProvider_LevelReference.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeActorProvider_LevelReference.OuterSingleton, Z_Construct_UClass_UNarrativeActorProvider_LevelReference_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeActorProvider_LevelReference.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeActorProvider_LevelReference>()
{
	return UNarrativeActorProvider_LevelReference::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeActorProvider_LevelReference);
UNarrativeActorProvider_LevelReference::~UNarrativeActorProvider_LevelReference() {}
// End Class UNarrativeActorProvider_LevelReference

// Begin Class UNarrativeActorProvider_ActorOfClass
void UNarrativeActorProvider_ActorOfClass::StaticRegisterNativesUNarrativeActorProvider_ActorOfClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeActorProvider_ActorOfClass);
UClass* Z_Construct_UClass_UNarrativeActorProvider_ActorOfClass_NoRegister()
{
	return UNarrativeActorProvider_ActorOfClass::StaticClass();
}
struct Z_Construct_UClass_UNarrativeActorProvider_ActorOfClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Provider Provider Provider Provider" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Finds an actor in the world with the specified class\n */" },
		{ "DisplayName", "Actor of Class" },
		{ "IncludePath", "NarrativeActorProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "Finds an actor in the world with the specified class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClassToFind_MetaData[] = {
		{ "Category", "Actor Provider" },
		{ "Comment", "//The actor reference - TODO probably needs to be soft reffed\n" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "The actor reference - TODO probably needs to be soft reffed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClassToFind;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeActorProvider_ActorOfClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNarrativeActorProvider_ActorOfClass_Statics::NewProp_ActorClassToFind = { "ActorClassToFind", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeActorProvider_ActorOfClass, ActorClassToFind), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClassToFind_MetaData), NewProp_ActorClassToFind_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeActorProvider_ActorOfClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeActorProvider_ActorOfClass_Statics::NewProp_ActorClassToFind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActorProvider_ActorOfClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeActorProvider_ActorOfClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeActorProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActorProvider_ActorOfClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeActorProvider_ActorOfClass_Statics::ClassParams = {
	&UNarrativeActorProvider_ActorOfClass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNarrativeActorProvider_ActorOfClass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActorProvider_ActorOfClass_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActorProvider_ActorOfClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeActorProvider_ActorOfClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeActorProvider_ActorOfClass()
{
	if (!Z_Registration_Info_UClass_UNarrativeActorProvider_ActorOfClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeActorProvider_ActorOfClass.OuterSingleton, Z_Construct_UClass_UNarrativeActorProvider_ActorOfClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeActorProvider_ActorOfClass.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeActorProvider_ActorOfClass>()
{
	return UNarrativeActorProvider_ActorOfClass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeActorProvider_ActorOfClass);
UNarrativeActorProvider_ActorOfClass::~UNarrativeActorProvider_ActorOfClass() {}
// End Class UNarrativeActorProvider_ActorOfClass

// Begin Class UNarrativeTransformProvider_POI
void UNarrativeTransformProvider_POI::StaticRegisterNativesUNarrativeTransformProvider_POI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeTransformProvider_POI);
UClass* Z_Construct_UClass_UNarrativeTransformProvider_POI_NoRegister()
{
	return UNarrativeTransformProvider_POI::StaticClass();
}
struct Z_Construct_UClass_UNarrativeTransformProvider_POI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Provider Provider Provider" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Finds an actor in the world with the specified level reference.\n */" },
		{ "DisplayName", "Point of Interest (Transform)" },
		{ "IncludePath", "NarrativeActorProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "Finds an actor in the world with the specified level reference." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POITag_MetaData[] = {
		{ "Categories", "Narrative.POIs" },
		{ "Category", "Point Of Interest" },
		{ "Comment", "/** The Point of interest we should find to return the transform of */" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "The Point of interest we should find to return the transform of" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_POITag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeTransformProvider_POI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeTransformProvider_POI_Statics::NewProp_POITag = { "POITag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTransformProvider_POI, POITag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POITag_MetaData), NewProp_POITag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeTransformProvider_POI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTransformProvider_POI_Statics::NewProp_POITag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTransformProvider_POI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeTransformProvider_POI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeTransformProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTransformProvider_POI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeTransformProvider_POI_Statics::ClassParams = {
	&UNarrativeTransformProvider_POI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNarrativeTransformProvider_POI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTransformProvider_POI_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTransformProvider_POI_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeTransformProvider_POI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeTransformProvider_POI()
{
	if (!Z_Registration_Info_UClass_UNarrativeTransformProvider_POI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeTransformProvider_POI.OuterSingleton, Z_Construct_UClass_UNarrativeTransformProvider_POI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeTransformProvider_POI.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeTransformProvider_POI>()
{
	return UNarrativeTransformProvider_POI::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeTransformProvider_POI);
UNarrativeTransformProvider_POI::~UNarrativeTransformProvider_POI() {}
// End Class UNarrativeTransformProvider_POI

// Begin Class UNarrativeTransformProvider_SpecifiedTransform
void UNarrativeTransformProvider_SpecifiedTransform::StaticRegisterNativesUNarrativeTransformProvider_SpecifiedTransform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeTransformProvider_SpecifiedTransform);
UClass* Z_Construct_UClass_UNarrativeTransformProvider_SpecifiedTransform_NoRegister()
{
	return UNarrativeTransformProvider_SpecifiedTransform::StaticClass();
}
struct Z_Construct_UClass_UNarrativeTransformProvider_SpecifiedTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Provider Provider Provider" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provide a hardcoded transform to use. \n */" },
		{ "DisplayName", "Specified Transform" },
		{ "IncludePath", "NarrativeActorProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "Provide a hardcoded transform to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecifiedTransform_MetaData[] = {
		{ "Category", "Point Of Interest" },
		{ "Comment", "/** The Point of interest we should find to return the transform of */" },
		{ "ModuleRelativePath", "Public/NarrativeActorProvider.h" },
		{ "ToolTip", "The Point of interest we should find to return the transform of" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpecifiedTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeTransformProvider_SpecifiedTransform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeTransformProvider_SpecifiedTransform_Statics::NewProp_SpecifiedTransform = { "SpecifiedTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTransformProvider_SpecifiedTransform, SpecifiedTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecifiedTransform_MetaData), NewProp_SpecifiedTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeTransformProvider_SpecifiedTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTransformProvider_SpecifiedTransform_Statics::NewProp_SpecifiedTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTransformProvider_SpecifiedTransform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeTransformProvider_SpecifiedTransform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeTransformProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTransformProvider_SpecifiedTransform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeTransformProvider_SpecifiedTransform_Statics::ClassParams = {
	&UNarrativeTransformProvider_SpecifiedTransform::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNarrativeTransformProvider_SpecifiedTransform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTransformProvider_SpecifiedTransform_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTransformProvider_SpecifiedTransform_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeTransformProvider_SpecifiedTransform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeTransformProvider_SpecifiedTransform()
{
	if (!Z_Registration_Info_UClass_UNarrativeTransformProvider_SpecifiedTransform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeTransformProvider_SpecifiedTransform.OuterSingleton, Z_Construct_UClass_UNarrativeTransformProvider_SpecifiedTransform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeTransformProvider_SpecifiedTransform.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeTransformProvider_SpecifiedTransform>()
{
	return UNarrativeTransformProvider_SpecifiedTransform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeTransformProvider_SpecifiedTransform);
UNarrativeTransformProvider_SpecifiedTransform::~UNarrativeTransformProvider_SpecifiedTransform() {}
// End Class UNarrativeTransformProvider_SpecifiedTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_NarrativeActorProvider_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInstancedActorProvider::StaticStruct, Z_Construct_UScriptStruct_FInstancedActorProvider_Statics::NewStructOps, TEXT("InstancedActorProvider"), &Z_Registration_Info_UScriptStruct_InstancedActorProvider, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancedActorProvider), 3502863346U) },
		{ FInstancedTransformProvider::StaticStruct, Z_Construct_UScriptStruct_FInstancedTransformProvider_Statics::NewStructOps, TEXT("InstancedTransformProvider"), &Z_Registration_Info_UScriptStruct_InstancedTransformProvider, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancedTransformProvider), 1359806076U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeProviderBase, UNarrativeProviderBase::StaticClass, TEXT("UNarrativeProviderBase"), &Z_Registration_Info_UClass_UNarrativeProviderBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeProviderBase), 2062907805U) },
		{ Z_Construct_UClass_UNarrativeTransformProvider, UNarrativeTransformProvider::StaticClass, TEXT("UNarrativeTransformProvider"), &Z_Registration_Info_UClass_UNarrativeTransformProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeTransformProvider), 1179089619U) },
		{ Z_Construct_UClass_UNarrativeActorProvider, UNarrativeActorProvider::StaticClass, TEXT("UNarrativeActorProvider"), &Z_Registration_Info_UClass_UNarrativeActorProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeActorProvider), 666145840U) },
		{ Z_Construct_UClass_UNarrativeActorProvider_NPC, UNarrativeActorProvider_NPC::StaticClass, TEXT("UNarrativeActorProvider_NPC"), &Z_Registration_Info_UClass_UNarrativeActorProvider_NPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeActorProvider_NPC), 1959890202U) },
		{ Z_Construct_UClass_UNarrativeActorProvider_GUIDLookup, UNarrativeActorProvider_GUIDLookup::StaticClass, TEXT("UNarrativeActorProvider_GUIDLookup"), &Z_Registration_Info_UClass_UNarrativeActorProvider_GUIDLookup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeActorProvider_GUIDLookup), 1660872675U) },
		{ Z_Construct_UClass_UNarrativeActorProvider_LevelReference, UNarrativeActorProvider_LevelReference::StaticClass, TEXT("UNarrativeActorProvider_LevelReference"), &Z_Registration_Info_UClass_UNarrativeActorProvider_LevelReference, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeActorProvider_LevelReference), 457966599U) },
		{ Z_Construct_UClass_UNarrativeActorProvider_ActorOfClass, UNarrativeActorProvider_ActorOfClass::StaticClass, TEXT("UNarrativeActorProvider_ActorOfClass"), &Z_Registration_Info_UClass_UNarrativeActorProvider_ActorOfClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeActorProvider_ActorOfClass), 1202351186U) },
		{ Z_Construct_UClass_UNarrativeTransformProvider_POI, UNarrativeTransformProvider_POI::StaticClass, TEXT("UNarrativeTransformProvider_POI"), &Z_Registration_Info_UClass_UNarrativeTransformProvider_POI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeTransformProvider_POI), 386252351U) },
		{ Z_Construct_UClass_UNarrativeTransformProvider_SpecifiedTransform, UNarrativeTransformProvider_SpecifiedTransform::StaticClass, TEXT("UNarrativeTransformProvider_SpecifiedTransform"), &Z_Registration_Info_UClass_UNarrativeTransformProvider_SpecifiedTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeTransformProvider_SpecifiedTransform), 3733256705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_NarrativeActorProvider_h_1842150390(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_NarrativeActorProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_NarrativeActorProvider_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_NarrativeActorProvider_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_NarrativeActorProvider_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
