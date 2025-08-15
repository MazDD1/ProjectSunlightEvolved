// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Weapons/FirearmWeaponVisual.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirearmWeaponVisual() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_AFirearmWeaponVisual();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_AFirearmWeaponVisual_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_AWeaponVisual();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class AFirearmWeaponVisual Function GetADSLocation
struct FirearmWeaponVisual_eventGetADSLocation_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	FirearmWeaponVisual_eventGetADSLocation_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_AFirearmWeaponVisual_GetADSLocation = FName(TEXT("GetADSLocation"));
FVector AFirearmWeaponVisual::GetADSLocation() const
{
	UFunction* Func = FindFunctionChecked(NAME_AFirearmWeaponVisual_GetADSLocation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FirearmWeaponVisual_eventGetADSLocation_Parms Parms;
		const_cast<AFirearmWeaponVisual*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<AFirearmWeaponVisual*>(this)->GetADSLocation_Implementation();
	}
}
struct Z_Construct_UFunction_AFirearmWeaponVisual_GetADSLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Visual" },
		{ "Comment", "//Return the FVector we need to camera to line up with when we're aiming\n" },
		{ "ModuleRelativePath", "Public/Weapons/FirearmWeaponVisual.h" },
		{ "ToolTip", "Return the FVector we need to camera to line up with when we're aiming" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirearmWeaponVisual_GetADSLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirearmWeaponVisual_eventGetADSLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirearmWeaponVisual_GetADSLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirearmWeaponVisual_GetADSLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirearmWeaponVisual_GetADSLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirearmWeaponVisual_GetADSLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirearmWeaponVisual, nullptr, "GetADSLocation", nullptr, nullptr, Z_Construct_UFunction_AFirearmWeaponVisual_GetADSLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirearmWeaponVisual_GetADSLocation_Statics::PropPointers), sizeof(FirearmWeaponVisual_eventGetADSLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirearmWeaponVisual_GetADSLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirearmWeaponVisual_GetADSLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(FirearmWeaponVisual_eventGetADSLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFirearmWeaponVisual_GetADSLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirearmWeaponVisual_GetADSLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirearmWeaponVisual::execGetADSLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetADSLocation_Implementation();
	P_NATIVE_END;
}
// End Class AFirearmWeaponVisual Function GetADSLocation

// Begin Class AFirearmWeaponVisual Function GetADSRelativeLocation
struct Z_Construct_UFunction_AFirearmWeaponVisual_GetADSRelativeLocation_Statics
{
	struct FirearmWeaponVisual_eventGetADSRelativeLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon Visual" },
		{ "Comment", "//Return the location our ADS needs to go to, relative to the root bone \n" },
		{ "ModuleRelativePath", "Public/Weapons/FirearmWeaponVisual.h" },
		{ "ToolTip", "Return the location our ADS needs to go to, relative to the root bone" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirearmWeaponVisual_GetADSRelativeLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirearmWeaponVisual_eventGetADSRelativeLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirearmWeaponVisual_GetADSRelativeLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirearmWeaponVisual_GetADSRelativeLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirearmWeaponVisual_GetADSRelativeLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirearmWeaponVisual_GetADSRelativeLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirearmWeaponVisual, nullptr, "GetADSRelativeLocation", nullptr, nullptr, Z_Construct_UFunction_AFirearmWeaponVisual_GetADSRelativeLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirearmWeaponVisual_GetADSRelativeLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFirearmWeaponVisual_GetADSRelativeLocation_Statics::FirearmWeaponVisual_eventGetADSRelativeLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirearmWeaponVisual_GetADSRelativeLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirearmWeaponVisual_GetADSRelativeLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFirearmWeaponVisual_GetADSRelativeLocation_Statics::FirearmWeaponVisual_eventGetADSRelativeLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFirearmWeaponVisual_GetADSRelativeLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirearmWeaponVisual_GetADSRelativeLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirearmWeaponVisual::execGetADSRelativeLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetADSRelativeLocation();
	P_NATIVE_END;
}
// End Class AFirearmWeaponVisual Function GetADSRelativeLocation

// Begin Class AFirearmWeaponVisual
void AFirearmWeaponVisual::StaticRegisterNativesAFirearmWeaponVisual()
{
	UClass* Class = AFirearmWeaponVisual::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetADSLocation", &AFirearmWeaponVisual::execGetADSLocation },
		{ "GetADSRelativeLocation", &AFirearmWeaponVisual::execGetADSRelativeLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirearmWeaponVisual);
UClass* Z_Construct_UClass_AFirearmWeaponVisual_NoRegister()
{
	return AFirearmWeaponVisual::StaticClass();
}
struct Z_Construct_UClass_AFirearmWeaponVisual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for firearm weapon visual that need aim down sights \n */" },
		{ "IncludePath", "Weapons/FirearmWeaponVisual.h" },
		{ "ModuleRelativePath", "Public/Weapons/FirearmWeaponVisual.h" },
		{ "ToolTip", "Base class for firearm weapon visual that need aim down sights" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ADSSightSocketName_MetaData[] = {
		{ "Category", "Character Visual" },
		{ "Comment", "/** We'll look on the weapon mesh for a socket with this name to provide the ADS location */" },
		{ "ModuleRelativePath", "Public/Weapons/FirearmWeaponVisual.h" },
		{ "ToolTip", "We'll look on the weapon mesh for a socket with this name to provide the ADS location" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ADSSightSocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirearmWeaponVisual_GetADSLocation, "GetADSLocation" }, // 1008310078
		{ &Z_Construct_UFunction_AFirearmWeaponVisual_GetADSRelativeLocation, "GetADSRelativeLocation" }, // 2330719648
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirearmWeaponVisual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFirearmWeaponVisual_Statics::NewProp_ADSSightSocketName = { "ADSSightSocketName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirearmWeaponVisual, ADSSightSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADSSightSocketName_MetaData), NewProp_ADSSightSocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirearmWeaponVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirearmWeaponVisual_Statics::NewProp_ADSSightSocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirearmWeaponVisual_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFirearmWeaponVisual_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeaponVisual,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirearmWeaponVisual_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirearmWeaponVisual_Statics::ClassParams = {
	&AFirearmWeaponVisual::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFirearmWeaponVisual_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFirearmWeaponVisual_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirearmWeaponVisual_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirearmWeaponVisual_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFirearmWeaponVisual()
{
	if (!Z_Registration_Info_UClass_AFirearmWeaponVisual.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirearmWeaponVisual.OuterSingleton, Z_Construct_UClass_AFirearmWeaponVisual_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFirearmWeaponVisual.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<AFirearmWeaponVisual>()
{
	return AFirearmWeaponVisual::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFirearmWeaponVisual);
AFirearmWeaponVisual::~AFirearmWeaponVisual() {}
// End Class AFirearmWeaponVisual

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_FirearmWeaponVisual_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFirearmWeaponVisual, AFirearmWeaponVisual::StaticClass, TEXT("AFirearmWeaponVisual"), &Z_Registration_Info_UClass_AFirearmWeaponVisual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirearmWeaponVisual), 1898475554U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_FirearmWeaponVisual_h_2023231773(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_FirearmWeaponVisual_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Weapons_FirearmWeaponVisual_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
