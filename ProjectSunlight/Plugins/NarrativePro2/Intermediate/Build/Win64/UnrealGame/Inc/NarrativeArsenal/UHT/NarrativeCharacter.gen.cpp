// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativeCharacter.h"
#include "NarrativeArsenal/Public/CharacterCreator/CharacterCreatorAttributes.h"
#include "NarrativeArsenal/Public/GAS/NarrativeCombatAbility.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCharacter() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISightTargetInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeCharacter();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeCharacterVisual_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_AWeaponVisual_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterAppearance_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterAppearanceBase_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterDefinition_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterMapMarker_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEquipmentComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAnimSet_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAttributeSetBase_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCharacterMovement_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeEvent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeGameplayAbility_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTeamAgentInterface_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTrigger_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTriggerSet_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UWeaponItem_NoRegister();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionUpdated__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnTeleported__DelegateSignature();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCombatTraceData();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FMeleeCombatData();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FMeleeComboAnimSet();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FMeleeComboAnimSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeleeComboAnimSet;
class UScriptStruct* FMeleeComboAnimSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeleeComboAnimSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeleeComboAnimSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeleeComboAnimSet, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("MeleeComboAnimSet"));
	}
	return Z_Registration_Info_UScriptStruct_MeleeComboAnimSet.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FMeleeComboAnimSet>()
{
	return FMeleeComboAnimSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeleeComboAnimSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Holds an animation combo set - make sure your montages have attack notifies and warps - see docs for more info. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Holds an animation combo set - make sure your montages have attack notifies and warps - see docs for more info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontages_MetaData[] = {
		{ "Category", "Combat Data" },
		{ "Comment", "//Attack montages for the melee attack\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Attack montages for the melee attack" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeavyAttackMontages_MetaData[] = {
		{ "Category", "Combat Data" },
		{ "Comment", "//Heavy attack montages for the melee attack \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Heavy attack montages for the melee attack" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttackMontages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeavyAttackMontages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HeavyAttackMontages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeleeComboAnimSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeleeComboAnimSet_Statics::NewProp_AttackMontages_Inner = { "AttackMontages", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeleeComboAnimSet_Statics::NewProp_AttackMontages = { "AttackMontages", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeleeComboAnimSet, AttackMontages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontages_MetaData), NewProp_AttackMontages_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeleeComboAnimSet_Statics::NewProp_HeavyAttackMontages_Inner = { "HeavyAttackMontages", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeleeComboAnimSet_Statics::NewProp_HeavyAttackMontages = { "HeavyAttackMontages", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeleeComboAnimSet, HeavyAttackMontages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeavyAttackMontages_MetaData), NewProp_HeavyAttackMontages_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeleeComboAnimSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeComboAnimSet_Statics::NewProp_AttackMontages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeComboAnimSet_Statics::NewProp_AttackMontages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeComboAnimSet_Statics::NewProp_HeavyAttackMontages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeComboAnimSet_Statics::NewProp_HeavyAttackMontages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeComboAnimSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeleeComboAnimSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"MeleeComboAnimSet",
	Z_Construct_UScriptStruct_FMeleeComboAnimSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeComboAnimSet_Statics::PropPointers),
	sizeof(FMeleeComboAnimSet),
	alignof(FMeleeComboAnimSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeComboAnimSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeleeComboAnimSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeleeComboAnimSet()
{
	if (!Z_Registration_Info_UScriptStruct_MeleeComboAnimSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeleeComboAnimSet.InnerSingleton, Z_Construct_UScriptStruct_FMeleeComboAnimSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeleeComboAnimSet.InnerSingleton;
}
// End ScriptStruct FMeleeComboAnimSet

// Begin ScriptStruct FMeleeCombatData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeleeCombatData;
class UScriptStruct* FMeleeCombatData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeleeCombatData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeleeCombatData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeleeCombatData, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("MeleeCombatData"));
	}
	return Z_Registration_Info_UScriptStruct_MeleeCombatData.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FMeleeCombatData>()
{
	return FMeleeCombatData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeleeCombatData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Melee abilities use this to operate, both with unarmed attacks and melee weapons. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Melee abilities use this to operate, both with unarmed attacks and melee weapons." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceData_MetaData[] = {
		{ "Category", "Combat Data" },
		{ "Comment", "//Attacking without a weapon will use this trace data \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Attacking without a weapon will use this trace data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackCombos_MetaData[] = {
		{ "Category", "Combat Data" },
		{ "Comment", "//Combo montages for our melee attacks \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Combo montages for our melee attacks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeavyAttackCombos_MetaData[] = {
		{ "Category", "Combat Data" },
		{ "Comment", "//Combo montages for our heavy melee attacks \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Combo montages for our heavy melee attacks" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackCombos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttackCombos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeavyAttackCombos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HeavyAttackCombos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeleeCombatData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeleeCombatData_Statics::NewProp_TraceData = { "TraceData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeleeCombatData, TraceData), Z_Construct_UScriptStruct_FCombatTraceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceData_MetaData), NewProp_TraceData_MetaData) }; // 179883577
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeleeCombatData_Statics::NewProp_AttackCombos_Inner = { "AttackCombos", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeAnimSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeleeCombatData_Statics::NewProp_AttackCombos = { "AttackCombos", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeleeCombatData, AttackCombos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackCombos_MetaData), NewProp_AttackCombos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeleeCombatData_Statics::NewProp_HeavyAttackCombos_Inner = { "HeavyAttackCombos", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeAnimSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeleeCombatData_Statics::NewProp_HeavyAttackCombos = { "HeavyAttackCombos", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeleeCombatData, HeavyAttackCombos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeavyAttackCombos_MetaData), NewProp_HeavyAttackCombos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeleeCombatData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeCombatData_Statics::NewProp_TraceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeCombatData_Statics::NewProp_AttackCombos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeCombatData_Statics::NewProp_AttackCombos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeCombatData_Statics::NewProp_HeavyAttackCombos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeCombatData_Statics::NewProp_HeavyAttackCombos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeCombatData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeleeCombatData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"MeleeCombatData",
	Z_Construct_UScriptStruct_FMeleeCombatData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeCombatData_Statics::PropPointers),
	sizeof(FMeleeCombatData),
	alignof(FMeleeCombatData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeCombatData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeleeCombatData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeleeCombatData()
{
	if (!Z_Registration_Info_UScriptStruct_MeleeCombatData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeleeCombatData.InnerSingleton, Z_Construct_UScriptStruct_FMeleeCombatData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeleeCombatData.InnerSingleton;
}
// End ScriptStruct FMeleeCombatData

// Begin Delegate FOnFactionUpdated
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionUpdated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnFactionUpdated__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFactionUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnFactionUpdated)
{
	OnFactionUpdated.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnFactionUpdated

// Begin Delegate FOnTeleported
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnTeleported__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnTeleported__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnTeleported__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnTeleported__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnTeleported__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnTeleported__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnTeleported__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTeleported_DelegateWrapper(const FMulticastScriptDelegate& OnTeleported)
{
	OnTeleported.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnTeleported

// Begin Class ANarrativeCharacter Function AddDefaultAbilities
struct Z_Construct_UFunction_ANarrativeCharacter_AddDefaultAbilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug Test" },
		{ "Comment", "// Grant abilities on the Server. The Ability Specs will be replicated to the owning client.\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Grant abilities on the Server. The Ability Specs will be replicated to the owning client." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_AddDefaultAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "AddDefaultAbilities", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_AddDefaultAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_AddDefaultAbilities_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANarrativeCharacter_AddDefaultAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_AddDefaultAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execAddDefaultAbilities)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDefaultAbilities();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function AddDefaultAbilities

// Begin Class ANarrativeCharacter Function AddTrigger
struct Z_Construct_UFunction_ANarrativeCharacter_AddTrigger_Statics
{
	struct NarrativeCharacter_eventAddTrigger_Parms
	{
		UNarrativeTrigger* Template;
		UNarrativeTrigger* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Triggers" },
		{ "Comment", "//Add a trigger by copying the passed in template object \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Add a trigger by copying the passed in template object" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Template;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_AddTrigger_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventAddTrigger_Parms, Template), Z_Construct_UClass_UNarrativeTrigger_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_AddTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventAddTrigger_Parms, ReturnValue), Z_Construct_UClass_UNarrativeTrigger_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_AddTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_AddTrigger_Statics::NewProp_Template,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_AddTrigger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_AddTrigger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_AddTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "AddTrigger", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_AddTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_AddTrigger_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_AddTrigger_Statics::NarrativeCharacter_eventAddTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_AddTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_AddTrigger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_AddTrigger_Statics::NarrativeCharacter_eventAddTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_AddTrigger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_AddTrigger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execAddTrigger)
{
	P_GET_OBJECT(UNarrativeTrigger,Z_Param_Template);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeTrigger**)Z_Param__Result=P_THIS->AddTrigger(Z_Param_Template);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function AddTrigger

// Begin Class ANarrativeCharacter Function ApplyAppearance
struct NarrativeCharacter_eventApplyAppearance_Parms
{
	UCharacterAppearance* DefaultAppearance;
};
static const FName NAME_ANarrativeCharacter_ApplyAppearance = FName(TEXT("ApplyAppearance"));
void ANarrativeCharacter::ApplyAppearance(UCharacterAppearance* DefaultAppearance)
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacter_ApplyAppearance);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeCharacter_eventApplyAppearance_Parms Parms;
		Parms.DefaultAppearance=DefaultAppearance;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ApplyAppearance_Implementation(DefaultAppearance);
	}
}
struct Z_Construct_UFunction_ANarrativeCharacter_ApplyAppearance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//Called when our definitions appearance asset is ready\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Called when our definitions appearance asset is ready" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultAppearance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_ApplyAppearance_Statics::NewProp_DefaultAppearance = { "DefaultAppearance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventApplyAppearance_Parms, DefaultAppearance), Z_Construct_UClass_UCharacterAppearance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_ApplyAppearance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_ApplyAppearance_Statics::NewProp_DefaultAppearance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_ApplyAppearance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_ApplyAppearance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "ApplyAppearance", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_ApplyAppearance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_ApplyAppearance_Statics::PropPointers), sizeof(NarrativeCharacter_eventApplyAppearance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_ApplyAppearance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_ApplyAppearance_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCharacter_eventApplyAppearance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_ApplyAppearance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_ApplyAppearance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execApplyAppearance)
{
	P_GET_OBJECT(UCharacterAppearance,Z_Param_DefaultAppearance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyAppearance_Implementation(Z_Param_DefaultAppearance);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function ApplyAppearance

// Begin Class ANarrativeCharacter Function ApplyTriggerSets
struct NarrativeCharacter_eventApplyTriggerSets_Parms
{
	TArray<UTriggerSet*> DefaultSet;
};
static const FName NAME_ANarrativeCharacter_ApplyTriggerSets = FName(TEXT("ApplyTriggerSets"));
void ANarrativeCharacter::ApplyTriggerSets(TArray<UTriggerSet*> const& DefaultSet)
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacter_ApplyTriggerSets);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeCharacter_eventApplyTriggerSets_Parms Parms;
		Parms.DefaultSet=DefaultSet;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ApplyTriggerSets_Implementation(DefaultSet);
	}
}
struct Z_Construct_UFunction_ANarrativeCharacter_ApplyTriggerSets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//Called when our default trigger sets are ready \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Called when our default trigger sets are ready" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSet_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_ApplyTriggerSets_Statics::NewProp_DefaultSet_Inner = { "DefaultSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTriggerSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANarrativeCharacter_ApplyTriggerSets_Statics::NewProp_DefaultSet = { "DefaultSet", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventApplyTriggerSets_Parms, DefaultSet), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSet_MetaData), NewProp_DefaultSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_ApplyTriggerSets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_ApplyTriggerSets_Statics::NewProp_DefaultSet_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_ApplyTriggerSets_Statics::NewProp_DefaultSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_ApplyTriggerSets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_ApplyTriggerSets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "ApplyTriggerSets", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_ApplyTriggerSets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_ApplyTriggerSets_Statics::PropPointers), sizeof(NarrativeCharacter_eventApplyTriggerSets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_ApplyTriggerSets_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_ApplyTriggerSets_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCharacter_eventApplyTriggerSets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_ApplyTriggerSets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_ApplyTriggerSets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execApplyTriggerSets)
{
	P_GET_TARRAY_REF(UTriggerSet*,Z_Param_Out_DefaultSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyTriggerSets_Implementation(Z_Param_Out_DefaultSet);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function ApplyTriggerSets

// Begin Class ANarrativeCharacter Function CalcSightStrength
struct NarrativeCharacter_eventCalcSightStrength_Parms
{
	FVector Start;
	FVector End;
	const AActor* Looker;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeCharacter_eventCalcSightStrength_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_ANarrativeCharacter_CalcSightStrength = FName(TEXT("CalcSightStrength"));
float ANarrativeCharacter::CalcSightStrength(FVector const& Start, FVector const& End, const AActor* Looker)
{
	NarrativeCharacter_eventCalcSightStrength_Parms Parms;
	Parms.Start=Start;
	Parms.End=End;
	Parms.Looker=Looker;
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacter_CalcSightStrength);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ANarrativeCharacter_CalcSightStrength_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Looker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Looker;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeCharacter_CalcSightStrength_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventCalcSightStrength_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeCharacter_CalcSightStrength_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventCalcSightStrength_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_CalcSightStrength_Statics::NewProp_Looker = { "Looker", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventCalcSightStrength_Parms, Looker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Looker_MetaData), NewProp_Looker_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_CalcSightStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventCalcSightStrength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_CalcSightStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_CalcSightStrength_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_CalcSightStrength_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_CalcSightStrength_Statics::NewProp_Looker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_CalcSightStrength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_CalcSightStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_CalcSightStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "CalcSightStrength", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_CalcSightStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_CalcSightStrength_Statics::PropPointers), sizeof(NarrativeCharacter_eventCalcSightStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_CalcSightStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_CalcSightStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCharacter_eventCalcSightStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_CalcSightStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_CalcSightStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANarrativeCharacter Function CalcSightStrength

// Begin Class ANarrativeCharacter Function GetAttackRange
struct Z_Construct_UFunction_ANarrativeCharacter_GetAttackRange_Statics
{
	struct NarrativeCharacter_eventGetAttackRange_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "Comment", "//Get the range we can attack someone from\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Get the range we can attack someone from" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetAttackRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetAttackRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetAttackRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetAttackRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetAttackRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetAttackRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetAttackRange", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetAttackRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetAttackRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetAttackRange_Statics::NarrativeCharacter_eventGetAttackRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetAttackRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetAttackRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetAttackRange_Statics::NarrativeCharacter_eventGetAttackRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetAttackRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetAttackRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetAttackRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAttackRange();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetAttackRange

// Begin Class ANarrativeCharacter Function GetAttackTraceData
struct Z_Construct_UFunction_ANarrativeCharacter_GetAttackTraceData_Statics
{
	struct NarrativeCharacter_eventGetAttackTraceData_Parms
	{
		FCombatTraceData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "Comment", "//Get the trace data for an attack\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Get the trace data for an attack" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetAttackTraceData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetAttackTraceData_Parms, ReturnValue), Z_Construct_UScriptStruct_FCombatTraceData, METADATA_PARAMS(0, nullptr) }; // 179883577
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetAttackTraceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetAttackTraceData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetAttackTraceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetAttackTraceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetAttackTraceData", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetAttackTraceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetAttackTraceData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetAttackTraceData_Statics::NarrativeCharacter_eventGetAttackTraceData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetAttackTraceData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetAttackTraceData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetAttackTraceData_Statics::NarrativeCharacter_eventGetAttackTraceData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetAttackTraceData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetAttackTraceData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetAttackTraceData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCombatTraceData*)Z_Param__Result=P_THIS->GetAttackTraceData();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetAttackTraceData

// Begin Class ANarrativeCharacter Function GetAttributeSetBase
struct Z_Construct_UFunction_ANarrativeCharacter_GetAttributeSetBase_Statics
{
	struct NarrativeCharacter_eventGetAttributeSetBase_Parms
	{
		UNarrativeAttributeSetBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetAttributeSetBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetAttributeSetBase_Parms, ReturnValue), Z_Construct_UClass_UNarrativeAttributeSetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetAttributeSetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetAttributeSetBase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetAttributeSetBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetAttributeSetBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetAttributeSetBase", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetAttributeSetBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetAttributeSetBase_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetAttributeSetBase_Statics::NarrativeCharacter_eventGetAttributeSetBase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetAttributeSetBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetAttributeSetBase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetAttributeSetBase_Statics::NarrativeCharacter_eventGetAttributeSetBase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetAttributeSetBase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetAttributeSetBase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetAttributeSetBase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeAttributeSetBase**)Z_Param__Result=P_THIS->GetAttributeSetBase();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetAttributeSetBase

// Begin Class ANarrativeCharacter Function GetCharacterDefinition
struct Z_Construct_UFunction_ANarrativeCharacter_GetCharacterDefinition_Statics
{
	struct NarrativeCharacter_eventGetCharacterDefinition_Parms
	{
		UCharacterDefinition* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//Get the character definition from the character\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Get the character definition from the character" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetCharacterDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetCharacterDefinition_Parms, ReturnValue), Z_Construct_UClass_UCharacterDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetCharacterDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetCharacterDefinition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetCharacterDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetCharacterDefinition", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetCharacterDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterDefinition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterDefinition_Statics::NarrativeCharacter_eventGetCharacterDefinition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetCharacterDefinition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterDefinition_Statics::NarrativeCharacter_eventGetCharacterDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetCharacterDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetCharacterDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetCharacterDefinition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCharacterDefinition**)Z_Param__Result=P_THIS->GetCharacterDefinition();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetCharacterDefinition

// Begin Class ANarrativeCharacter Function GetCharacterLevel
struct Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics
{
	struct NarrativeCharacter_eventGetCharacterLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetCharacterLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetCharacterLevel", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::NarrativeCharacter_eventGetCharacterLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::NarrativeCharacter_eventGetCharacterLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetCharacterLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCharacterLevel();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetCharacterLevel

// Begin Class ANarrativeCharacter Function GetCharacterVisual
struct Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisual_Statics
{
	struct NarrativeCharacter_eventGetCharacterVisual_Parms
	{
		ANarrativeCharacterVisual* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetCharacterVisual_Parms, ReturnValue), Z_Construct_UClass_ANarrativeCharacterVisual_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetCharacterVisual", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisual_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisual_Statics::NarrativeCharacter_eventGetCharacterVisual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisual_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisual_Statics::NarrativeCharacter_eventGetCharacterVisual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetCharacterVisual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANarrativeCharacterVisual**)Z_Param__Result=P_THIS->GetCharacterVisual();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetCharacterVisual

// Begin Class ANarrativeCharacter Function GetCharacterVisualClass
struct NarrativeCharacter_eventGetCharacterVisualClass_Parms
{
	UCharacterAppearance* DefaultAppearance;
	TSubclassOf<ANarrativeCharacterVisual> ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeCharacter_eventGetCharacterVisualClass_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ANarrativeCharacter_GetCharacterVisualClass = FName(TEXT("GetCharacterVisualClass"));
TSubclassOf<ANarrativeCharacterVisual> ANarrativeCharacter::GetCharacterVisualClass(UCharacterAppearance* DefaultAppearance) const
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacter_GetCharacterVisualClass);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeCharacter_eventGetCharacterVisualClass_Parms Parms;
		Parms.DefaultAppearance=DefaultAppearance;
		const_cast<ANarrativeCharacter*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<ANarrativeCharacter*>(this)->GetCharacterVisualClass_Implementation(DefaultAppearance);
	}
}
struct Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisualClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultAppearance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisualClass_Statics::NewProp_DefaultAppearance = { "DefaultAppearance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetCharacterVisualClass_Parms, DefaultAppearance), Z_Construct_UClass_UCharacterAppearance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisualClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetCharacterVisualClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_ANarrativeCharacterVisual_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisualClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisualClass_Statics::NewProp_DefaultAppearance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisualClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisualClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisualClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetCharacterVisualClass", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisualClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisualClass_Statics::PropPointers), sizeof(NarrativeCharacter_eventGetCharacterVisualClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisualClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisualClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCharacter_eventGetCharacterVisualClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisualClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisualClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetCharacterVisualClass)
{
	P_GET_OBJECT(UCharacterAppearance,Z_Param_DefaultAppearance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<ANarrativeCharacterVisual>*)Z_Param__Result=P_THIS->GetCharacterVisualClass_Implementation(Z_Param_DefaultAppearance);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetCharacterVisualClass

// Begin Class ANarrativeCharacter Function GetEquipmentComponent
struct Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics
{
	struct NarrativeCharacter_eventGetEquipmentComponent_Parms
	{
		UEquipmentComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetEquipmentComponent_Parms, ReturnValue), Z_Construct_UClass_UEquipmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetEquipmentComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::NarrativeCharacter_eventGetEquipmentComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::NarrativeCharacter_eventGetEquipmentComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetEquipmentComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEquipmentComponent**)Z_Param__Result=P_THIS->GetEquipmentComponent();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetEquipmentComponent

// Begin Class ANarrativeCharacter Function GetEquippedWeaponVisual
struct Z_Construct_UFunction_ANarrativeCharacter_GetEquippedWeaponVisual_Statics
{
	struct NarrativeCharacter_eventGetEquippedWeaponVisual_Parms
	{
		AWeaponVisual* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "Comment", "//Returns the visual of the equipped weapon \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Returns the visual of the equipped weapon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetEquippedWeaponVisual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetEquippedWeaponVisual_Parms, ReturnValue), Z_Construct_UClass_AWeaponVisual_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetEquippedWeaponVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetEquippedWeaponVisual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetEquippedWeaponVisual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetEquippedWeaponVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetEquippedWeaponVisual", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetEquippedWeaponVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetEquippedWeaponVisual_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetEquippedWeaponVisual_Statics::NarrativeCharacter_eventGetEquippedWeaponVisual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetEquippedWeaponVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetEquippedWeaponVisual_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetEquippedWeaponVisual_Statics::NarrativeCharacter_eventGetEquippedWeaponVisual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetEquippedWeaponVisual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetEquippedWeaponVisual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetEquippedWeaponVisual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AWeaponVisual**)Z_Param__Result=P_THIS->GetEquippedWeaponVisual();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetEquippedWeaponVisual

// Begin Class ANarrativeCharacter Function GetFloorLocation
struct Z_Construct_UFunction_ANarrativeCharacter_GetFloorLocation_Statics
{
	struct NarrativeCharacter_eventGetFloorLocation_Parms
	{
		float ZOffset;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Movement" },
		{ "Comment", "//Get the location of the floor, optionally offset by a z\n" },
		{ "CPP_Default_ZOffset", "0.000000" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Get the location of the floor, optionally offset by a z" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetFloorLocation_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetFloorLocation_Parms, ZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOffset_MetaData), NewProp_ZOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetFloorLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetFloorLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetFloorLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetFloorLocation_Statics::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetFloorLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetFloorLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetFloorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetFloorLocation", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetFloorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetFloorLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetFloorLocation_Statics::NarrativeCharacter_eventGetFloorLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetFloorLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetFloorLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetFloorLocation_Statics::NarrativeCharacter_eventGetFloorLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetFloorLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetFloorLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetFloorLocation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetFloorLocation(Z_Param_ZOffset);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetFloorLocation

// Begin Class ANarrativeCharacter Function GetHeadLookAtLocation
struct NarrativeCharacter_eventGetHeadLookAtLocation_Parms
{
	bool bOutWantsLookAt;
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeCharacter_eventGetHeadLookAtLocation_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_ANarrativeCharacter_GetHeadLookAtLocation = FName(TEXT("GetHeadLookAtLocation"));
FVector ANarrativeCharacter::GetHeadLookAtLocation(bool& bOutWantsLookAt) const
{
	NarrativeCharacter_eventGetHeadLookAtLocation_Parms Parms;
	Parms.bOutWantsLookAt=bOutWantsLookAt ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacter_GetHeadLookAtLocation);
		const_cast<ANarrativeCharacter*>(this)->ProcessEvent(Func,&Parms);
	bOutWantsLookAt=Parms.bOutWantsLookAt;
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//Used by AnimBP to ask where the head bone should look at - players and bots can then implement their own seperate functionalities \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Used by AnimBP to ask where the head bone should look at - players and bots can then implement their own seperate functionalities" },
	};
#endif // WITH_METADATA
	static void NewProp_bOutWantsLookAt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutWantsLookAt;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::NewProp_bOutWantsLookAt_SetBit(void* Obj)
{
	((NarrativeCharacter_eventGetHeadLookAtLocation_Parms*)Obj)->bOutWantsLookAt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::NewProp_bOutWantsLookAt = { "bOutWantsLookAt", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacter_eventGetHeadLookAtLocation_Parms), &Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::NewProp_bOutWantsLookAt_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetHeadLookAtLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::NewProp_bOutWantsLookAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetHeadLookAtLocation", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::PropPointers), sizeof(NarrativeCharacter_eventGetHeadLookAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCharacter_eventGetHeadLookAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANarrativeCharacter Function GetHeadLookAtLocation

// Begin Class ANarrativeCharacter Function GetHealth
struct Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics
{
	struct NarrativeCharacter_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::NarrativeCharacter_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::NarrativeCharacter_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetHealth

// Begin Class ANarrativeCharacter Function GetInteractionComponent
struct Z_Construct_UFunction_ANarrativeCharacter_GetInteractionComponent_Statics
{
	struct NarrativeCharacter_eventGetInteractionComponent_Parms
	{
		UNarrativeInteractionComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//Get the interactioncomponent from the character\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Get the interactioncomponent from the character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetInteractionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetInteractionComponent_Parms, ReturnValue), Z_Construct_UClass_UNarrativeInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetInteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetInteractionComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetInteractionComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetInteractionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetInteractionComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetInteractionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetInteractionComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetInteractionComponent_Statics::NarrativeCharacter_eventGetInteractionComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetInteractionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetInteractionComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetInteractionComponent_Statics::NarrativeCharacter_eventGetInteractionComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetInteractionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetInteractionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetInteractionComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeInteractionComponent**)Z_Param__Result=P_THIS->GetInteractionComponent();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetInteractionComponent

// Begin Class ANarrativeCharacter Function GetInventoryComponent
struct Z_Construct_UFunction_ANarrativeCharacter_GetInventoryComponent_Statics
{
	struct NarrativeCharacter_eventGetInventoryComponent_Parms
	{
		UNarrativeInventoryComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//Get the inventory component from this character\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Get the inventory component from this character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetInventoryComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetInventoryComponent_Parms, ReturnValue), Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetInventoryComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetInventoryComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetInventoryComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetInventoryComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetInventoryComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetInventoryComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetInventoryComponent_Statics::NarrativeCharacter_eventGetInventoryComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetInventoryComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetInventoryComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetInventoryComponent_Statics::NarrativeCharacter_eventGetInventoryComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetInventoryComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetInventoryComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetInventoryComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeInventoryComponent**)Z_Param__Result=P_THIS->GetInventoryComponent();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetInventoryComponent

// Begin Class ANarrativeCharacter Function GetMarkerComponent
struct Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics
{
	struct NarrativeCharacter_eventGetMarkerComponent_Parms
	{
		UCharacterMapMarker* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetMarkerComponent_Parms, ReturnValue), Z_Construct_UClass_UCharacterMapMarker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetMarkerComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::NarrativeCharacter_eventGetMarkerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::NarrativeCharacter_eventGetMarkerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetMarkerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCharacterMapMarker**)Z_Param__Result=P_THIS->GetMarkerComponent();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetMarkerComponent

// Begin Class ANarrativeCharacter Function GetMaxHealth
struct Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics
{
	struct NarrativeCharacter_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::NarrativeCharacter_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::NarrativeCharacter_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetMaxHealth

// Begin Class ANarrativeCharacter Function GetMaxStamina
struct Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics
{
	struct NarrativeCharacter_eventGetMaxStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetMaxStamina", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::NarrativeCharacter_eventGetMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::NarrativeCharacter_eventGetMaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetMaxStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxStamina();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetMaxStamina

// Begin Class ANarrativeCharacter Function GetMotionWarpingComponent
struct Z_Construct_UFunction_ANarrativeCharacter_GetMotionWarpingComponent_Statics
{
	struct NarrativeCharacter_eventGetMotionWarpingComponent_Parms
	{
		UMotionWarpingComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetMotionWarpingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetMotionWarpingComponent_Parms, ReturnValue), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetMotionWarpingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetMotionWarpingComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMotionWarpingComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetMotionWarpingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetMotionWarpingComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetMotionWarpingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMotionWarpingComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetMotionWarpingComponent_Statics::NarrativeCharacter_eventGetMotionWarpingComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMotionWarpingComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetMotionWarpingComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetMotionWarpingComponent_Statics::NarrativeCharacter_eventGetMotionWarpingComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetMotionWarpingComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetMotionWarpingComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetMotionWarpingComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMotionWarpingComponent**)Z_Param__Result=P_THIS->GetMotionWarpingComponent();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetMotionWarpingComponent

// Begin Class ANarrativeCharacter Function GetNarrativeCharacterMovement
struct Z_Construct_UFunction_ANarrativeCharacter_GetNarrativeCharacterMovement_Statics
{
	struct NarrativeCharacter_eventGetNarrativeCharacterMovement_Parms
	{
		UNarrativeCharacterMovement* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "Comment", "//Get the Narrative character movement component. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Get the Narrative character movement component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetNarrativeCharacterMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetNarrativeCharacterMovement_Parms, ReturnValue), Z_Construct_UClass_UNarrativeCharacterMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetNarrativeCharacterMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetNarrativeCharacterMovement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetNarrativeCharacterMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetNarrativeCharacterMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetNarrativeCharacterMovement", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetNarrativeCharacterMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetNarrativeCharacterMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetNarrativeCharacterMovement_Statics::NarrativeCharacter_eventGetNarrativeCharacterMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetNarrativeCharacterMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetNarrativeCharacterMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetNarrativeCharacterMovement_Statics::NarrativeCharacter_eventGetNarrativeCharacterMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetNarrativeCharacterMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetNarrativeCharacterMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetNarrativeCharacterMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeCharacterMovement**)Z_Param__Result=P_THIS->GetNarrativeCharacterMovement();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetNarrativeCharacterMovement

// Begin Class ANarrativeCharacter Function GetPercentToNextLevel
struct Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics
{
	struct NarrativeCharacter_eventGetPercentToNextLevel_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetPercentToNextLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetPercentToNextLevel", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::NarrativeCharacter_eventGetPercentToNextLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::NarrativeCharacter_eventGetPercentToNextLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetPercentToNextLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPercentToNextLevel();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetPercentToNextLevel

// Begin Class ANarrativeCharacter Function GetStamina
struct Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics
{
	struct NarrativeCharacter_eventGetStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetStamina", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::NarrativeCharacter_eventGetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::NarrativeCharacter_eventGetStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStamina();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetStamina

// Begin Class ANarrativeCharacter Function GetStealthRating
struct Z_Construct_UFunction_ANarrativeCharacter_GetStealthRating_Statics
{
	struct NarrativeCharacter_eventGetStealthRating_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetStealthRating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetStealthRating_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetStealthRating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetStealthRating_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetStealthRating_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetStealthRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetStealthRating", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetStealthRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetStealthRating_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetStealthRating_Statics::NarrativeCharacter_eventGetStealthRating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetStealthRating_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetStealthRating_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetStealthRating_Statics::NarrativeCharacter_eventGetStealthRating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetStealthRating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetStealthRating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetStealthRating)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStealthRating();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetStealthRating

// Begin Class ANarrativeCharacter Function GetWeapon
struct Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics
{
	struct NarrativeCharacter_eventGetWeapon_Parms
	{
		UWeaponItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "Comment", "//Returns our equipped weapon item. This is the item in our inventory driving our weapon, it holds data like the weapons abilities, spread, damage etc.\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Returns our equipped weapon item. This is the item in our inventory driving our weapon, it holds data like the weapons abilities, spread, damage etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetWeapon_Parms, ReturnValue), Z_Construct_UClass_UWeaponItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetWeapon", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::NarrativeCharacter_eventGetWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::NarrativeCharacter_eventGetWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWeaponItem**)Z_Param__Result=P_THIS->GetWeapon();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetWeapon

// Begin Class ANarrativeCharacter Function GetWeaponVisual
struct Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics
{
	struct NarrativeCharacter_eventGetWeaponVisual_Parms
	{
		FGameplayTag WeaponSlot;
		AWeaponVisual* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "Comment", "//Returns our weapon visual. This just a generic actor that each weapon item defines, and holds the weapons static mesh and FX assets. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Returns our weapon visual. This just a generic actor that each weapon item defines, and holds the weapons static mesh and FX assets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSlot_MetaData[] = {
		{ "Categories", "Narrative.Equipment.Slot.Weapon" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponSlot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::NewProp_WeaponSlot = { "WeaponSlot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetWeaponVisual_Parms, WeaponSlot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSlot_MetaData), NewProp_WeaponSlot_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetWeaponVisual_Parms, ReturnValue), Z_Construct_UClass_AWeaponVisual_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::NewProp_WeaponSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetWeaponVisual", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::NarrativeCharacter_eventGetWeaponVisual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::NarrativeCharacter_eventGetWeaponVisual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetWeaponVisual)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_WeaponSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AWeaponVisual**)Z_Param__Result=P_THIS->GetWeaponVisual(Z_Param_Out_WeaponSlot);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetWeaponVisual

// Begin Class ANarrativeCharacter Function GetXP
struct Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics
{
	struct NarrativeCharacter_eventGetXP_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetXP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetXP", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::NarrativeCharacter_eventGetXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::NarrativeCharacter_eventGetXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetXP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetXP();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetXP

// Begin Class ANarrativeCharacter Function HandleCharacterDefinitionDataLoaded
struct Z_Construct_UFunction_ANarrativeCharacter_HandleCharacterDefinitionDataLoaded_Statics
{
	struct NarrativeCharacter_eventHandleCharacterDefinitionDataLoaded_Parms
	{
		FPrimaryAssetId LoadedId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Called once all our character definition stuff has been applied/loaded from disk. IE default items, factions, etc. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Called once all our character definition stuff has been applied/loaded from disk. IE default items, factions, etc." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeCharacter_HandleCharacterDefinitionDataLoaded_Statics::NewProp_LoadedId = { "LoadedId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventHandleCharacterDefinitionDataLoaded_Parms, LoadedId), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_HandleCharacterDefinitionDataLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_HandleCharacterDefinitionDataLoaded_Statics::NewProp_LoadedId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_HandleCharacterDefinitionDataLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_HandleCharacterDefinitionDataLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "HandleCharacterDefinitionDataLoaded", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_HandleCharacterDefinitionDataLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_HandleCharacterDefinitionDataLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_HandleCharacterDefinitionDataLoaded_Statics::NarrativeCharacter_eventHandleCharacterDefinitionDataLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_HandleCharacterDefinitionDataLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_HandleCharacterDefinitionDataLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_HandleCharacterDefinitionDataLoaded_Statics::NarrativeCharacter_eventHandleCharacterDefinitionDataLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_HandleCharacterDefinitionDataLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_HandleCharacterDefinitionDataLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execHandleCharacterDefinitionDataLoaded)
{
	P_GET_STRUCT(FPrimaryAssetId,Z_Param_LoadedId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCharacterDefinitionDataLoaded(Z_Param_LoadedId);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function HandleCharacterDefinitionDataLoaded

// Begin Class ANarrativeCharacter Function HandleDeath
struct NarrativeCharacter_eventHandleDeath_Parms
{
	AActor* KilledActor;
	UNarrativeAbilitySystemComponent* KilledActorASC;
};
static const FName NAME_ANarrativeCharacter_HandleDeath = FName(TEXT("HandleDeath"));
void ANarrativeCharacter::HandleDeath(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC)
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacter_HandleDeath);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeCharacter_eventHandleDeath_Parms Parms;
		Parms.KilledActor=KilledActor;
		Parms.KilledActorASC=KilledActorASC;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleDeath_Implementation(KilledActor, KilledActorASC);
	}
}
struct Z_Construct_UFunction_ANarrativeCharacter_HandleDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_HandleDeath_Statics::NewProp_KilledActor = { "KilledActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventHandleDeath_Parms, KilledActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_HandleDeath_Statics::NewProp_KilledActorASC = { "KilledActorASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventHandleDeath_Parms, KilledActorASC), Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KilledActorASC_MetaData), NewProp_KilledActorASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_HandleDeath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_HandleDeath_Statics::NewProp_KilledActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_HandleDeath_Statics::NewProp_KilledActorASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_HandleDeath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_HandleDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "HandleDeath", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_HandleDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_HandleDeath_Statics::PropPointers), sizeof(NarrativeCharacter_eventHandleDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_HandleDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_HandleDeath_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCharacter_eventHandleDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_HandleDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_HandleDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execHandleDeath)
{
	P_GET_OBJECT(AActor,Z_Param_KilledActor);
	P_GET_OBJECT(UNarrativeAbilitySystemComponent,Z_Param_KilledActorASC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDeath_Implementation(Z_Param_KilledActor,Z_Param_KilledActorASC);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function HandleDeath

// Begin Class ANarrativeCharacter Function InitNewCharacter
struct NarrativeCharacter_eventInitNewCharacter_Parms
{
	UCharacterDefinition* NewDefinition;
};
static const FName NAME_ANarrativeCharacter_InitNewCharacter = FName(TEXT("InitNewCharacter"));
void ANarrativeCharacter::InitNewCharacter(UCharacterDefinition* NewDefinition)
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacter_InitNewCharacter);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeCharacter_eventInitNewCharacter_Parms Parms;
		Parms.NewDefinition=NewDefinition;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		InitNewCharacter_Implementation(NewDefinition);
	}
}
struct Z_Construct_UFunction_ANarrativeCharacter_InitNewCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//Called when OnDefinitionSet sees we dont have any save data and new initialized for first time. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Called when OnDefinitionSet sees we dont have any save data and new initialized for first time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDefinition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_InitNewCharacter_Statics::NewProp_NewDefinition = { "NewDefinition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventInitNewCharacter_Parms, NewDefinition), Z_Construct_UClass_UCharacterDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_InitNewCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_InitNewCharacter_Statics::NewProp_NewDefinition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_InitNewCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_InitNewCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "InitNewCharacter", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_InitNewCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_InitNewCharacter_Statics::PropPointers), sizeof(NarrativeCharacter_eventInitNewCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_InitNewCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_InitNewCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCharacter_eventInitNewCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_InitNewCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_InitNewCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execInitNewCharacter)
{
	P_GET_OBJECT(UCharacterDefinition,Z_Param_NewDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitNewCharacter_Implementation(Z_Param_NewDefinition);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function InitNewCharacter

// Begin Class ANarrativeCharacter Function IsAlive
struct Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics
{
	struct NarrativeCharacter_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeCharacter_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacter_eventIsAlive_Parms), &Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "IsAlive", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::NarrativeCharacter_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::NarrativeCharacter_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function IsAlive

// Begin Class ANarrativeCharacter Function IsCharacterPendingLoad
struct Z_Construct_UFunction_ANarrativeCharacter_IsCharacterPendingLoad_Statics
{
	struct NarrativeCharacter_eventIsCharacterPendingLoad_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//Check if our character is waiting to be loaded in\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Check if our character is waiting to be loaded in" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANarrativeCharacter_IsCharacterPendingLoad_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeCharacter_eventIsCharacterPendingLoad_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativeCharacter_IsCharacterPendingLoad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacter_eventIsCharacterPendingLoad_Parms), &Z_Construct_UFunction_ANarrativeCharacter_IsCharacterPendingLoad_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_IsCharacterPendingLoad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_IsCharacterPendingLoad_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_IsCharacterPendingLoad_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_IsCharacterPendingLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "IsCharacterPendingLoad", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_IsCharacterPendingLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_IsCharacterPendingLoad_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_IsCharacterPendingLoad_Statics::NarrativeCharacter_eventIsCharacterPendingLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_IsCharacterPendingLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_IsCharacterPendingLoad_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_IsCharacterPendingLoad_Statics::NarrativeCharacter_eventIsCharacterPendingLoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_IsCharacterPendingLoad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_IsCharacterPendingLoad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execIsCharacterPendingLoad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCharacterPendingLoad();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function IsCharacterPendingLoad

// Begin Class ANarrativeCharacter Function IsWeaponHolstered
struct Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics
{
	struct NarrativeCharacter_eventIsWeaponHolstered_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeCharacter_eventIsWeaponHolstered_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacter_eventIsWeaponHolstered_Parms), &Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "IsWeaponHolstered", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::NarrativeCharacter_eventIsWeaponHolstered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::NarrativeCharacter_eventIsWeaponHolstered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execIsWeaponHolstered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsWeaponHolstered();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function IsWeaponHolstered

// Begin Class ANarrativeCharacter Function LevelToXP
struct Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics
{
	struct NarrativeCharacter_eventLevelToXP_Parms
	{
		int32 Level;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventLevelToXP_Parms, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventLevelToXP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "LevelToXP", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::NarrativeCharacter_eventLevelToXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::NarrativeCharacter_eventLevelToXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_LevelToXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execLevelToXP)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->LevelToXP(Z_Param_Level);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function LevelToXP

// Begin Class ANarrativeCharacter Function OnCharacterDefinitionDataLoaded
struct Z_Construct_UFunction_ANarrativeCharacter_OnCharacterDefinitionDataLoaded_Statics
{
	struct NarrativeCharacter_eventOnCharacterDefinitionDataLoaded_Parms
	{
		FPrimaryAssetId LoadedId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Called when our spawned data bundle is loaded \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Called when our spawned data bundle is loaded" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeCharacter_OnCharacterDefinitionDataLoaded_Statics::NewProp_LoadedId = { "LoadedId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventOnCharacterDefinitionDataLoaded_Parms, LoadedId), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_OnCharacterDefinitionDataLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_OnCharacterDefinitionDataLoaded_Statics::NewProp_LoadedId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnCharacterDefinitionDataLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_OnCharacterDefinitionDataLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "OnCharacterDefinitionDataLoaded", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_OnCharacterDefinitionDataLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnCharacterDefinitionDataLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_OnCharacterDefinitionDataLoaded_Statics::NarrativeCharacter_eventOnCharacterDefinitionDataLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnCharacterDefinitionDataLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_OnCharacterDefinitionDataLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_OnCharacterDefinitionDataLoaded_Statics::NarrativeCharacter_eventOnCharacterDefinitionDataLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_OnCharacterDefinitionDataLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_OnCharacterDefinitionDataLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execOnCharacterDefinitionDataLoaded)
{
	P_GET_STRUCT(FPrimaryAssetId,Z_Param_LoadedId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCharacterDefinitionDataLoaded(Z_Param_LoadedId);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function OnCharacterDefinitionDataLoaded

// Begin Class ANarrativeCharacter Function OnCharacterVisualInitialized
struct Z_Construct_UFunction_ANarrativeCharacter_OnCharacterVisualInitialized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_OnCharacterVisualInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "OnCharacterVisualInitialized", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnCharacterVisualInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_OnCharacterVisualInitialized_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANarrativeCharacter_OnCharacterVisualInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_OnCharacterVisualInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execOnCharacterVisualInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCharacterVisualInitialized();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function OnCharacterVisualInitialized

// Begin Class ANarrativeCharacter Function OnDefinitionSet
struct NarrativeCharacter_eventOnDefinitionSet_Parms
{
	UCharacterDefinition* NewDefinition;
};
static const FName NAME_ANarrativeCharacter_OnDefinitionSet = FName(TEXT("OnDefinitionSet"));
void ANarrativeCharacter::OnDefinitionSet(UCharacterDefinition* NewDefinition)
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacter_OnDefinitionSet);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeCharacter_eventOnDefinitionSet_Parms Parms;
		Parms.NewDefinition=NewDefinition;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnDefinitionSet_Implementation(NewDefinition);
	}
}
struct Z_Construct_UFunction_ANarrativeCharacter_OnDefinitionSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//This is called when the NarrativeCharacters definition is updated. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "This is called when the NarrativeCharacters definition is updated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDefinition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_OnDefinitionSet_Statics::NewProp_NewDefinition = { "NewDefinition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventOnDefinitionSet_Parms, NewDefinition), Z_Construct_UClass_UCharacterDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_OnDefinitionSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_OnDefinitionSet_Statics::NewProp_NewDefinition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnDefinitionSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_OnDefinitionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "OnDefinitionSet", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_OnDefinitionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnDefinitionSet_Statics::PropPointers), sizeof(NarrativeCharacter_eventOnDefinitionSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnDefinitionSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_OnDefinitionSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCharacter_eventOnDefinitionSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_OnDefinitionSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_OnDefinitionSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execOnDefinitionSet)
{
	P_GET_OBJECT(UCharacterDefinition,Z_Param_NewDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDefinitionSet_Implementation(Z_Param_NewDefinition);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function OnDefinitionSet

// Begin Class ANarrativeCharacter Function OnEndDialogue
struct NarrativeCharacter_eventOnEndDialogue_Parms
{
	UDialogue* Dialogue;
};
static const FName NAME_ANarrativeCharacter_OnEndDialogue = FName(TEXT("OnEndDialogue"));
void ANarrativeCharacter::OnEndDialogue(UDialogue* Dialogue)
{
	NarrativeCharacter_eventOnEndDialogue_Parms Parms;
	Parms.Dialogue=Dialogue;
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacter_OnEndDialogue);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANarrativeCharacter_OnEndDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//Called when this character finishes being a dialogue avatar. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Called when this character finishes being a dialogue avatar." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_OnEndDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventOnEndDialogue_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_OnEndDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_OnEndDialogue_Statics::NewProp_Dialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnEndDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_OnEndDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "OnEndDialogue", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_OnEndDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnEndDialogue_Statics::PropPointers), sizeof(NarrativeCharacter_eventOnEndDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnEndDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_OnEndDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCharacter_eventOnEndDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_OnEndDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_OnEndDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANarrativeCharacter Function OnEndDialogue

// Begin Class ANarrativeCharacter Function OnEnterDialogue
struct NarrativeCharacter_eventOnEnterDialogue_Parms
{
	UDialogue* Dialogue;
};
static const FName NAME_ANarrativeCharacter_OnEnterDialogue = FName(TEXT("OnEnterDialogue"));
void ANarrativeCharacter::OnEnterDialogue(UDialogue* Dialogue)
{
	NarrativeCharacter_eventOnEnterDialogue_Parms Parms;
	Parms.Dialogue=Dialogue;
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacter_OnEnterDialogue);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANarrativeCharacter_OnEnterDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//Called when this character becomes a dialogue avatar. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Called when this character becomes a dialogue avatar." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_OnEnterDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventOnEnterDialogue_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_OnEnterDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_OnEnterDialogue_Statics::NewProp_Dialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnEnterDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_OnEnterDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "OnEnterDialogue", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_OnEnterDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnEnterDialogue_Statics::PropPointers), sizeof(NarrativeCharacter_eventOnEnterDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnEnterDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_OnEnterDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCharacter_eventOnEnterDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_OnEnterDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_OnEnterDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANarrativeCharacter Function OnEnterDialogue

// Begin Class ANarrativeCharacter Function OnPostCharacterDefinitionDataLoaded
struct Z_Construct_UFunction_ANarrativeCharacter_OnPostCharacterDefinitionDataLoaded_Statics
{
	struct NarrativeCharacter_eventOnPostCharacterDefinitionDataLoaded_Parms
	{
		FPrimaryAssetId LoadedId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Called after OnCharacterDefinitionDataLoaded, for anything that needs to be done after definition data is applied\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Called after OnCharacterDefinitionDataLoaded, for anything that needs to be done after definition data is applied" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeCharacter_OnPostCharacterDefinitionDataLoaded_Statics::NewProp_LoadedId = { "LoadedId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventOnPostCharacterDefinitionDataLoaded_Parms, LoadedId), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_OnPostCharacterDefinitionDataLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_OnPostCharacterDefinitionDataLoaded_Statics::NewProp_LoadedId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnPostCharacterDefinitionDataLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_OnPostCharacterDefinitionDataLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "OnPostCharacterDefinitionDataLoaded", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_OnPostCharacterDefinitionDataLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnPostCharacterDefinitionDataLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_OnPostCharacterDefinitionDataLoaded_Statics::NarrativeCharacter_eventOnPostCharacterDefinitionDataLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnPostCharacterDefinitionDataLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_OnPostCharacterDefinitionDataLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_OnPostCharacterDefinitionDataLoaded_Statics::NarrativeCharacter_eventOnPostCharacterDefinitionDataLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_OnPostCharacterDefinitionDataLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_OnPostCharacterDefinitionDataLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execOnPostCharacterDefinitionDataLoaded)
{
	P_GET_STRUCT(FPrimaryAssetId,Z_Param_LoadedId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPostCharacterDefinitionDataLoaded(Z_Param_LoadedId);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function OnPostCharacterDefinitionDataLoaded

// Begin Class ANarrativeCharacter Function OnRep_EquippedWeapon
struct Z_Construct_UFunction_ANarrativeCharacter_OnRep_EquippedWeapon_Statics
{
	struct NarrativeCharacter_eventOnRep_EquippedWeapon_Parms
	{
		UWeaponItem* OldEquippedWeapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldEquippedWeapon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldEquippedWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_OnRep_EquippedWeapon_Statics::NewProp_OldEquippedWeapon = { "OldEquippedWeapon", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventOnRep_EquippedWeapon_Parms, OldEquippedWeapon), Z_Construct_UClass_UWeaponItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldEquippedWeapon_MetaData), NewProp_OldEquippedWeapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_OnRep_EquippedWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_OnRep_EquippedWeapon_Statics::NewProp_OldEquippedWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnRep_EquippedWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_OnRep_EquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "OnRep_EquippedWeapon", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_OnRep_EquippedWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnRep_EquippedWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_OnRep_EquippedWeapon_Statics::NarrativeCharacter_eventOnRep_EquippedWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnRep_EquippedWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_OnRep_EquippedWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_OnRep_EquippedWeapon_Statics::NarrativeCharacter_eventOnRep_EquippedWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_OnRep_EquippedWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_OnRep_EquippedWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execOnRep_EquippedWeapon)
{
	P_GET_OBJECT(UWeaponItem,Z_Param_OldEquippedWeapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_EquippedWeapon(Z_Param_OldEquippedWeapon);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function OnRep_EquippedWeapon

// Begin Class ANarrativeCharacter Function RemoveTrigger
struct Z_Construct_UFunction_ANarrativeCharacter_RemoveTrigger_Statics
{
	struct NarrativeCharacter_eventRemoveTrigger_Parms
	{
		UNarrativeTrigger* Trigger;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Triggers" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Trigger;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_RemoveTrigger_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventRemoveTrigger_Parms, Trigger), Z_Construct_UClass_UNarrativeTrigger_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ANarrativeCharacter_RemoveTrigger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeCharacter_eventRemoveTrigger_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativeCharacter_RemoveTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacter_eventRemoveTrigger_Parms), &Z_Construct_UFunction_ANarrativeCharacter_RemoveTrigger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_RemoveTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_RemoveTrigger_Statics::NewProp_Trigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_RemoveTrigger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_RemoveTrigger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_RemoveTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "RemoveTrigger", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_RemoveTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_RemoveTrigger_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_RemoveTrigger_Statics::NarrativeCharacter_eventRemoveTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_RemoveTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_RemoveTrigger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_RemoveTrigger_Statics::NarrativeCharacter_eventRemoveTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_RemoveTrigger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_RemoveTrigger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execRemoveTrigger)
{
	P_GET_OBJECT(UNarrativeTrigger,Z_Param_Trigger);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveTrigger(Z_Param_Trigger);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function RemoveTrigger

// Begin Class ANarrativeCharacter Function SetEquippedWeapon
struct Z_Construct_UFunction_ANarrativeCharacter_SetEquippedWeapon_Statics
{
	struct NarrativeCharacter_eventSetEquippedWeapon_Parms
	{
		UWeaponItem* WeaponToEquip;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponToEquip_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponToEquip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_SetEquippedWeapon_Statics::NewProp_WeaponToEquip = { "WeaponToEquip", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventSetEquippedWeapon_Parms, WeaponToEquip), Z_Construct_UClass_UWeaponItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponToEquip_MetaData), NewProp_WeaponToEquip_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_SetEquippedWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_SetEquippedWeapon_Statics::NewProp_WeaponToEquip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SetEquippedWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_SetEquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "SetEquippedWeapon", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_SetEquippedWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SetEquippedWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_SetEquippedWeapon_Statics::NarrativeCharacter_eventSetEquippedWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SetEquippedWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_SetEquippedWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_SetEquippedWeapon_Statics::NarrativeCharacter_eventSetEquippedWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_SetEquippedWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_SetEquippedWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execSetEquippedWeapon)
{
	P_GET_OBJECT(UWeaponItem,Z_Param_WeaponToEquip);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEquippedWeapon(Z_Param_WeaponToEquip);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function SetEquippedWeapon

// Begin Class ANarrativeCharacter Function SetEventActive
struct Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics
{
	struct NarrativeCharacter_eventSetEventActive_Parms
	{
		UNarrativeEvent* Event;
		bool bActivate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeEvents" },
		{ "Comment", "//Executes a NarrativeEvent with this character as the target - return true if we passed conds and event succeeded \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Executes a NarrativeEvent with this character as the target - return true if we passed conds and event succeeded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActivate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Event;
	static void NewProp_bActivate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventSetEventActive_Parms, Event), Z_Construct_UClass_UNarrativeEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics::NewProp_bActivate_SetBit(void* Obj)
{
	((NarrativeCharacter_eventSetEventActive_Parms*)Obj)->bActivate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics::NewProp_bActivate = { "bActivate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacter_eventSetEventActive_Parms), &Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics::NewProp_bActivate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActivate_MetaData), NewProp_bActivate_MetaData) };
void Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeCharacter_eventSetEventActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacter_eventSetEventActive_Parms), &Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics::NewProp_bActivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "SetEventActive", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics::NarrativeCharacter_eventSetEventActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics::NarrativeCharacter_eventSetEventActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_SetEventActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_SetEventActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execSetEventActive)
{
	P_GET_OBJECT(UNarrativeEvent,Z_Param_Event);
	P_GET_UBOOL(Z_Param_bActivate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetEventActive(Z_Param_Event,Z_Param_bActivate);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function SetEventActive

// Begin Class ANarrativeCharacter Function SetWeaponHolstered
struct Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics
{
	struct NarrativeCharacter_eventSetWeaponHolstered_Parms
	{
		bool bHolster;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHolster_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bHolster_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHolster;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::NewProp_bHolster_SetBit(void* Obj)
{
	((NarrativeCharacter_eventSetWeaponHolstered_Parms*)Obj)->bHolster = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::NewProp_bHolster = { "bHolster", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacter_eventSetWeaponHolstered_Parms), &Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::NewProp_bHolster_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHolster_MetaData), NewProp_bHolster_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::NewProp_bHolster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "SetWeaponHolstered", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::NarrativeCharacter_eventSetWeaponHolstered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::NarrativeCharacter_eventSetWeaponHolstered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execSetWeaponHolstered)
{
	P_GET_UBOOL(Z_Param_bHolster);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWeaponHolstered(Z_Param_bHolster);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function SetWeaponHolstered

// Begin Class ANarrativeCharacter Function SpawnCharacterVisual
struct NarrativeCharacter_eventSpawnCharacterVisual_Parms
{
	UCharacterAppearance* DefaultAppearance;
};
static const FName NAME_ANarrativeCharacter_SpawnCharacterVisual = FName(TEXT("SpawnCharacterVisual"));
void ANarrativeCharacter::SpawnCharacterVisual(UCharacterAppearance* DefaultAppearance)
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacter_SpawnCharacterVisual);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeCharacter_eventSpawnCharacterVisual_Parms Parms;
		Parms.DefaultAppearance=DefaultAppearance;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SpawnCharacterVisual_Implementation(DefaultAppearance);
	}
}
struct Z_Construct_UFunction_ANarrativeCharacter_SpawnCharacterVisual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultAppearance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_SpawnCharacterVisual_Statics::NewProp_DefaultAppearance = { "DefaultAppearance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventSpawnCharacterVisual_Parms, DefaultAppearance), Z_Construct_UClass_UCharacterAppearance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_SpawnCharacterVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_SpawnCharacterVisual_Statics::NewProp_DefaultAppearance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SpawnCharacterVisual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_SpawnCharacterVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "SpawnCharacterVisual", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_SpawnCharacterVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SpawnCharacterVisual_Statics::PropPointers), sizeof(NarrativeCharacter_eventSpawnCharacterVisual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SpawnCharacterVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_SpawnCharacterVisual_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCharacter_eventSpawnCharacterVisual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_SpawnCharacterVisual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_SpawnCharacterVisual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execSpawnCharacterVisual)
{
	P_GET_OBJECT(UCharacterAppearance,Z_Param_DefaultAppearance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnCharacterVisual_Implementation(Z_Param_DefaultAppearance);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function SpawnCharacterVisual

// Begin Class ANarrativeCharacter Function XPToLevel
struct Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics
{
	struct NarrativeCharacter_eventXPToLevel_Parms
	{
		float XP;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_XP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::NewProp_XP = { "XP", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventXPToLevel_Parms, XP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XP_MetaData), NewProp_XP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventXPToLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::NewProp_XP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "XPToLevel", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::NarrativeCharacter_eventXPToLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::NarrativeCharacter_eventXPToLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_XPToLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execXPToLevel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_XP);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->XPToLevel(Z_Param_XP);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function XPToLevel

// Begin Class ANarrativeCharacter
void ANarrativeCharacter::StaticRegisterNativesANarrativeCharacter()
{
	UClass* Class = ANarrativeCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDefaultAbilities", &ANarrativeCharacter::execAddDefaultAbilities },
		{ "AddTrigger", &ANarrativeCharacter::execAddTrigger },
		{ "ApplyAppearance", &ANarrativeCharacter::execApplyAppearance },
		{ "ApplyTriggerSets", &ANarrativeCharacter::execApplyTriggerSets },
		{ "GetAttackRange", &ANarrativeCharacter::execGetAttackRange },
		{ "GetAttackTraceData", &ANarrativeCharacter::execGetAttackTraceData },
		{ "GetAttributeSetBase", &ANarrativeCharacter::execGetAttributeSetBase },
		{ "GetCharacterDefinition", &ANarrativeCharacter::execGetCharacterDefinition },
		{ "GetCharacterLevel", &ANarrativeCharacter::execGetCharacterLevel },
		{ "GetCharacterVisual", &ANarrativeCharacter::execGetCharacterVisual },
		{ "GetCharacterVisualClass", &ANarrativeCharacter::execGetCharacterVisualClass },
		{ "GetEquipmentComponent", &ANarrativeCharacter::execGetEquipmentComponent },
		{ "GetEquippedWeaponVisual", &ANarrativeCharacter::execGetEquippedWeaponVisual },
		{ "GetFloorLocation", &ANarrativeCharacter::execGetFloorLocation },
		{ "GetHealth", &ANarrativeCharacter::execGetHealth },
		{ "GetInteractionComponent", &ANarrativeCharacter::execGetInteractionComponent },
		{ "GetInventoryComponent", &ANarrativeCharacter::execGetInventoryComponent },
		{ "GetMarkerComponent", &ANarrativeCharacter::execGetMarkerComponent },
		{ "GetMaxHealth", &ANarrativeCharacter::execGetMaxHealth },
		{ "GetMaxStamina", &ANarrativeCharacter::execGetMaxStamina },
		{ "GetMotionWarpingComponent", &ANarrativeCharacter::execGetMotionWarpingComponent },
		{ "GetNarrativeCharacterMovement", &ANarrativeCharacter::execGetNarrativeCharacterMovement },
		{ "GetPercentToNextLevel", &ANarrativeCharacter::execGetPercentToNextLevel },
		{ "GetStamina", &ANarrativeCharacter::execGetStamina },
		{ "GetStealthRating", &ANarrativeCharacter::execGetStealthRating },
		{ "GetWeapon", &ANarrativeCharacter::execGetWeapon },
		{ "GetWeaponVisual", &ANarrativeCharacter::execGetWeaponVisual },
		{ "GetXP", &ANarrativeCharacter::execGetXP },
		{ "HandleCharacterDefinitionDataLoaded", &ANarrativeCharacter::execHandleCharacterDefinitionDataLoaded },
		{ "HandleDeath", &ANarrativeCharacter::execHandleDeath },
		{ "InitNewCharacter", &ANarrativeCharacter::execInitNewCharacter },
		{ "IsAlive", &ANarrativeCharacter::execIsAlive },
		{ "IsCharacterPendingLoad", &ANarrativeCharacter::execIsCharacterPendingLoad },
		{ "IsWeaponHolstered", &ANarrativeCharacter::execIsWeaponHolstered },
		{ "LevelToXP", &ANarrativeCharacter::execLevelToXP },
		{ "OnCharacterDefinitionDataLoaded", &ANarrativeCharacter::execOnCharacterDefinitionDataLoaded },
		{ "OnCharacterVisualInitialized", &ANarrativeCharacter::execOnCharacterVisualInitialized },
		{ "OnDefinitionSet", &ANarrativeCharacter::execOnDefinitionSet },
		{ "OnPostCharacterDefinitionDataLoaded", &ANarrativeCharacter::execOnPostCharacterDefinitionDataLoaded },
		{ "OnRep_EquippedWeapon", &ANarrativeCharacter::execOnRep_EquippedWeapon },
		{ "RemoveTrigger", &ANarrativeCharacter::execRemoveTrigger },
		{ "SetEquippedWeapon", &ANarrativeCharacter::execSetEquippedWeapon },
		{ "SetEventActive", &ANarrativeCharacter::execSetEventActive },
		{ "SetWeaponHolstered", &ANarrativeCharacter::execSetWeaponHolstered },
		{ "SpawnCharacterVisual", &ANarrativeCharacter::execSpawnCharacterVisual },
		{ "XPToLevel", &ANarrativeCharacter::execXPToLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANarrativeCharacter);
UClass* Z_Construct_UClass_ANarrativeCharacter_NoRegister()
{
	return ANarrativeCharacter::StaticClass();
}
struct Z_Construct_UClass_ANarrativeCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**Base class for characters built on Narrative Pro framework. Sets up some core stuff you probably want - a navigation marker, interactions, inventories, etc. */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UnrealFramework/NarrativeCharacter.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for characters built on Narrative Pro framework. Sets up some core stuff you probably want - a navigation marker, interactions, inventories, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTeleported_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//Broadcast when we telport somewhere - NPCs need this to teleport with our player if they do \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Broadcast when we telport somewhere - NPCs need this to teleport with our player if they do" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapMarker_MetaData[] = {
		{ "Category", "Narrative|Appearance" },
		{ "Comment", "//Our characters map marker\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Our characters map marker" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Appearance_MetaData[] = {
		{ "Category", "Narrative|Appearance" },
		{ "Comment", "//Our characters current appearance asset\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Our characters current appearance asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppearanceAttributeSet_MetaData[] = {
		{ "Category", "Narrative|Appearance" },
		{ "Comment", "//Our characters current customization asset\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Our characters current customization asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharVisual_MetaData[] = {
		{ "Category", "Narrative|Components|Body Meshes" },
		{ "Comment", "/** Our characters visual - this allows us to have n number of meshes in addition to Character.GetMesh() */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Our characters visual - this allows us to have n number of meshes in addition to Character.GetMesh()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComponent_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Narrative|Components|GAS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetBase_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentComp_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributes_MetaData[] = {
		{ "Category", "Narrative|Abilities" },
		{ "Comment", "// Default attributes for a character for initializing on spawn/respawn.\n// This is an instant GE that overrides the values for attributes that get reset on spawn/respawn.\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Default attributes for a character for initializing on spawn/respawn.\nThis is an instant GE that overrides the values for attributes that get reset on spawn/respawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupEffects_MetaData[] = {
		{ "Category", "Narrative|Abilities" },
		{ "Comment", "// These effects are only applied one time on startup\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "These effects are only applied one time on startup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilities_MetaData[] = {
		{ "Category", "Narrative|Abilities" },
		{ "Comment", "// Default abilities to grant the player  \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Default abilities to grant the player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelExponentX_MetaData[] = {
		{ "Category", "Narrative|Abilities" },
		{ "Comment", "//Lowering this number means the base XP required per level is higher \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Lowering this number means the base XP required per level is higher" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelExponentY_MetaData[] = {
		{ "Category", "Narrative|Abilities" },
		{ "Comment", "//Upping this value means higher jumps between levels, ie levels will grow exponentially \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Upping this value means higher jumps between levels, ie levels will grow exponentially" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWeaponHolstered_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** True if the weapon is currently holstered, false otherwise.  */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "True if the weapon is currently holstered, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Our currently equipped weapon */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Our currently equipped weapon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnarmedAnimBP_MetaData[] = {
		{ "Category", "Narrative|Animation" },
		{ "Comment", "// Default unarmed anim layer\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Default unarmed anim layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideAnimBP_MetaData[] = {
		{ "Category", "Narrative|Animation" },
		{ "Comment", "// Current override anim layer \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Current override anim layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnarmedCombatData_MetaData[] = {
		{ "Category", "Narrative|Trace" },
		{ "Comment", "/** Data specifically related to unarmed combat */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Data specifically related to unarmed combat" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnarmedAttackDamage_MetaData[] = {
		{ "Category", "Unarmed Combat Data" },
		{ "Comment", "//Attacking without a weapon will deal this amount of base damage \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Attacking without a weapon will deal this amount of base damage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[] = {
		{ "Category", "Events & Conditions" },
		{ "Comment", "/** TODO move these into a proper asset that lives on CharacterDefinition */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "TODO move these into a proper asset that lives on CharacterDefinition" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeleported;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapMarker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Appearance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppearanceAttributeSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharVisual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSetBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentComp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAttributes;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartupEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupEffects;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultAbilities;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelExponentX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelExponentY;
	static void NewProp_bWeaponHolstered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeaponHolstered;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UnarmedAnimBP;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OverrideAnimBP;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnarmedCombatData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnarmedAttackDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANarrativeCharacter_AddDefaultAbilities, "AddDefaultAbilities" }, // 3448304399
		{ &Z_Construct_UFunction_ANarrativeCharacter_AddTrigger, "AddTrigger" }, // 492222495
		{ &Z_Construct_UFunction_ANarrativeCharacter_ApplyAppearance, "ApplyAppearance" }, // 321804941
		{ &Z_Construct_UFunction_ANarrativeCharacter_ApplyTriggerSets, "ApplyTriggerSets" }, // 3261593955
		{ &Z_Construct_UFunction_ANarrativeCharacter_CalcSightStrength, "CalcSightStrength" }, // 655458961
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetAttackRange, "GetAttackRange" }, // 3873907353
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetAttackTraceData, "GetAttackTraceData" }, // 2407998264
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetAttributeSetBase, "GetAttributeSetBase" }, // 43159813
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetCharacterDefinition, "GetCharacterDefinition" }, // 2803539779
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel, "GetCharacterLevel" }, // 2289865584
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisual, "GetCharacterVisual" }, // 1322360450
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetCharacterVisualClass, "GetCharacterVisualClass" }, // 3705356219
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent, "GetEquipmentComponent" }, // 704330751
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetEquippedWeaponVisual, "GetEquippedWeaponVisual" }, // 3588361575
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetFloorLocation, "GetFloorLocation" }, // 3000141261
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation, "GetHeadLookAtLocation" }, // 2668533721
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetHealth, "GetHealth" }, // 4188271426
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetInteractionComponent, "GetInteractionComponent" }, // 4003862967
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetInventoryComponent, "GetInventoryComponent" }, // 228115275
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent, "GetMarkerComponent" }, // 2925624317
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth, "GetMaxHealth" }, // 3790152558
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina, "GetMaxStamina" }, // 2513410169
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetMotionWarpingComponent, "GetMotionWarpingComponent" }, // 2964703252
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetNarrativeCharacterMovement, "GetNarrativeCharacterMovement" }, // 2158447807
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel, "GetPercentToNextLevel" }, // 3467727690
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetStamina, "GetStamina" }, // 621067486
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetStealthRating, "GetStealthRating" }, // 897895495
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetWeapon, "GetWeapon" }, // 2496643385
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual, "GetWeaponVisual" }, // 1011884169
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetXP, "GetXP" }, // 1230823503
		{ &Z_Construct_UFunction_ANarrativeCharacter_HandleCharacterDefinitionDataLoaded, "HandleCharacterDefinitionDataLoaded" }, // 376394567
		{ &Z_Construct_UFunction_ANarrativeCharacter_HandleDeath, "HandleDeath" }, // 3104774893
		{ &Z_Construct_UFunction_ANarrativeCharacter_InitNewCharacter, "InitNewCharacter" }, // 3442127895
		{ &Z_Construct_UFunction_ANarrativeCharacter_IsAlive, "IsAlive" }, // 3668497127
		{ &Z_Construct_UFunction_ANarrativeCharacter_IsCharacterPendingLoad, "IsCharacterPendingLoad" }, // 1894106136
		{ &Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered, "IsWeaponHolstered" }, // 754076340
		{ &Z_Construct_UFunction_ANarrativeCharacter_LevelToXP, "LevelToXP" }, // 2634821544
		{ &Z_Construct_UFunction_ANarrativeCharacter_OnCharacterDefinitionDataLoaded, "OnCharacterDefinitionDataLoaded" }, // 1140390988
		{ &Z_Construct_UFunction_ANarrativeCharacter_OnCharacterVisualInitialized, "OnCharacterVisualInitialized" }, // 2126986160
		{ &Z_Construct_UFunction_ANarrativeCharacter_OnDefinitionSet, "OnDefinitionSet" }, // 331450645
		{ &Z_Construct_UFunction_ANarrativeCharacter_OnEndDialogue, "OnEndDialogue" }, // 1253597395
		{ &Z_Construct_UFunction_ANarrativeCharacter_OnEnterDialogue, "OnEnterDialogue" }, // 3876024803
		{ &Z_Construct_UFunction_ANarrativeCharacter_OnPostCharacterDefinitionDataLoaded, "OnPostCharacterDefinitionDataLoaded" }, // 1050191988
		{ &Z_Construct_UFunction_ANarrativeCharacter_OnRep_EquippedWeapon, "OnRep_EquippedWeapon" }, // 3962589627
		{ &Z_Construct_UFunction_ANarrativeCharacter_RemoveTrigger, "RemoveTrigger" }, // 3505575524
		{ &Z_Construct_UFunction_ANarrativeCharacter_SetEquippedWeapon, "SetEquippedWeapon" }, // 1294686080
		{ &Z_Construct_UFunction_ANarrativeCharacter_SetEventActive, "SetEventActive" }, // 2368011036
		{ &Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered, "SetWeaponHolstered" }, // 2581977157
		{ &Z_Construct_UFunction_ANarrativeCharacter_SpawnCharacterVisual, "SpawnCharacterVisual" }, // 3572822139
		{ &Z_Construct_UFunction_ANarrativeCharacter_XPToLevel, "XPToLevel" }, // 3551883128
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANarrativeCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_OnTeleported = { "OnTeleported", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, OnTeleported), Z_Construct_UDelegateFunction_NarrativeArsenal_OnTeleported__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTeleported_MetaData), NewProp_OnTeleported_MetaData) }; // 1692752072
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_MapMarker = { "MapMarker", nullptr, (EPropertyFlags)0x0124080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, MapMarker), Z_Construct_UClass_UCharacterMapMarker_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapMarker_MetaData), NewProp_MapMarker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_Appearance = { "Appearance", nullptr, (EPropertyFlags)0x0124080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, Appearance), Z_Construct_UClass_UCharacterAppearanceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Appearance_MetaData), NewProp_Appearance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_AppearanceAttributeSet = { "AppearanceAttributeSet", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, AppearanceAttributeSet), Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppearanceAttributeSet_MetaData), NewProp_AppearanceAttributeSet_MetaData) }; // 1593732500
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_CharVisual = { "CharVisual", nullptr, (EPropertyFlags)0x0124080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, CharVisual), Z_Construct_UClass_ANarrativeCharacterVisual_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharVisual_MetaData), NewProp_CharVisual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_MotionWarpingComponent = { "MotionWarpingComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, MotionWarpingComponent), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionWarpingComponent_MetaData), NewProp_MotionWarpingComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, AbilitySystemComponent), Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_AttributeSetBase = { "AttributeSetBase", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, AttributeSetBase), Z_Construct_UClass_UNarrativeAttributeSetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSetBase_MetaData), NewProp_AttributeSetBase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_EquipmentComp = { "EquipmentComp", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, EquipmentComp), Z_Construct_UClass_UEquipmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentComp_MetaData), NewProp_EquipmentComp_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_DefaultAttributes = { "DefaultAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, DefaultAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttributes_MetaData), NewProp_DefaultAttributes_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_StartupEffects_Inner = { "StartupEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_StartupEffects = { "StartupEffects", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, StartupEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupEffects_MetaData), NewProp_StartupEffects_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_DefaultAbilities_Inner = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UNarrativeGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_DefaultAbilities = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, DefaultAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAbilities_MetaData), NewProp_DefaultAbilities_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_LevelExponentX = { "LevelExponentX", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, LevelExponentX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelExponentX_MetaData), NewProp_LevelExponentX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_LevelExponentY = { "LevelExponentY", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, LevelExponentY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelExponentY_MetaData), NewProp_LevelExponentY_MetaData) };
void Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_bWeaponHolstered_SetBit(void* Obj)
{
	((ANarrativeCharacter*)Obj)->bWeaponHolstered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_bWeaponHolstered = { "bWeaponHolstered", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANarrativeCharacter), &Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_bWeaponHolstered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWeaponHolstered_MetaData), NewProp_bWeaponHolstered_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", "OnRep_EquippedWeapon", (EPropertyFlags)0x01240801000a003d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, EquippedWeapon), Z_Construct_UClass_UWeaponItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedWeapon_MetaData), NewProp_EquippedWeapon_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_UnarmedAnimBP = { "UnarmedAnimBP", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, UnarmedAnimBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnarmedAnimBP_MetaData), NewProp_UnarmedAnimBP_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_OverrideAnimBP = { "OverrideAnimBP", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, OverrideAnimBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideAnimBP_MetaData), NewProp_OverrideAnimBP_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_UnarmedCombatData = { "UnarmedCombatData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, UnarmedCombatData), Z_Construct_UScriptStruct_FCombatTraceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnarmedCombatData_MetaData), NewProp_UnarmedCombatData_MetaData) }; // 179883577
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_UnarmedAttackDamage = { "UnarmedAttackDamage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, UnarmedAttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnarmedAttackDamage_MetaData), NewProp_UnarmedAttackDamage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeTrigger_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triggers_MetaData), NewProp_Triggers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANarrativeCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_OnTeleported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_MapMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_Appearance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_AppearanceAttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_CharVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_MotionWarpingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_AttributeSetBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_EquipmentComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_DefaultAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_StartupEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_StartupEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_DefaultAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_DefaultAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_LevelExponentX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_LevelExponentY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_bWeaponHolstered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_EquippedWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_UnarmedAnimBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_OverrideAnimBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_UnarmedCombatData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_UnarmedAttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_Triggers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_Triggers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANarrativeCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANarrativeCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativeCharacter, IAbilitySystemInterface), false },  // 2272790346
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativeCharacter, IGameplayTagAssetInterface), false },  // 2592985258
	{ Z_Construct_UClass_UNarrativeTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativeCharacter, INarrativeTeamAgentInterface), false },  // 1034205614
	{ Z_Construct_UClass_UAISightTargetInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativeCharacter, IAISightTargetInterface), false },  // 787423504
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANarrativeCharacter_Statics::ClassParams = {
	&ANarrativeCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANarrativeCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANarrativeCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANarrativeCharacter()
{
	if (!Z_Registration_Info_UClass_ANarrativeCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANarrativeCharacter.OuterSingleton, Z_Construct_UClass_ANarrativeCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANarrativeCharacter.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ANarrativeCharacter>()
{
	return ANarrativeCharacter::StaticClass();
}
void ANarrativeCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_EquippedWeapon(TEXT("EquippedWeapon"));
	const bool bIsValid = true
		&& Name_EquippedWeapon == ClassReps[(int32)ENetFields_Private::EquippedWeapon].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANarrativeCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANarrativeCharacter);
ANarrativeCharacter::~ANarrativeCharacter() {}
// End Class ANarrativeCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMeleeComboAnimSet::StaticStruct, Z_Construct_UScriptStruct_FMeleeComboAnimSet_Statics::NewStructOps, TEXT("MeleeComboAnimSet"), &Z_Registration_Info_UScriptStruct_MeleeComboAnimSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeleeComboAnimSet), 3233360722U) },
		{ FMeleeCombatData::StaticStruct, Z_Construct_UScriptStruct_FMeleeCombatData_Statics::NewStructOps, TEXT("MeleeCombatData"), &Z_Registration_Info_UScriptStruct_MeleeCombatData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeleeCombatData), 2534374841U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANarrativeCharacter, ANarrativeCharacter::StaticClass, TEXT("ANarrativeCharacter"), &Z_Registration_Info_UClass_ANarrativeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANarrativeCharacter), 3339400504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_3539063381(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
