// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativeNPCCharacter.h"
#include "NarrativeArsenal/Public/Items/InventoryComponent.h"
#include "NarrativeSaveSystem/Public/NarrativeSave.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeNPCCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeCharacter();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCCharacter();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCController_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterAppearanceBase_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivityComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivityConfiguration_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivitySchedule_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCDefinition_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCInteractable_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCSpawnComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTriggerSet_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FLootTableRoll();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FNPCSpawnInfo();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FNPCSpawnParams();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FTaggedDialogue();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableActor_NoRegister();
NARRATIVESAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNarrativeActorRecord();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FTaggedDialogue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TaggedDialogue;
class UScriptStruct* FTaggedDialogue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TaggedDialogue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TaggedDialogue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaggedDialogue, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("TaggedDialogue"));
	}
	return Z_Registration_Info_UScriptStruct_TaggedDialogue.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FTaggedDialogue>()
{
	return FTaggedDialogue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTaggedDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Represents a tagged dialogue - this is essentially a dialogue that can be kicked off via a tag \"TaggedDialogue.Taunt, TaggedDialogue.Greet, etc. \"\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Represents a tagged dialogue - this is essentially a dialogue that can be kicked off via a tag \"TaggedDialogue.Taunt, TaggedDialogue.Greet, etc. \"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Categories", "Narrative.TaggedDialogue" },
		{ "Category", "Tagged Dialogue" },
		{ "Comment", "/** The tag that will kick off this dialogue. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "The tag that will kick off this dialogue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[] = {
		{ "Category", "Tagged Dialogue" },
		{ "Comment", "/** The dialogue to begin */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "The dialogue to begin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[] = {
		{ "Category", "Tagged Dialogue" },
		{ "Comment", "/** The amount of time we should cooldown before playing this dialogue again. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "The amount of time we should cooldown before playing this dialogue again." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Tagged Dialogue" },
		{ "Comment", "/** Tagged dialogue wont play unless we're within this range from it */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Tagged dialogue wont play unless we're within this range from it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[] = {
		{ "Category", "Tagged Dialogue" },
		{ "Comment", "/** Tags that will be required for the NPC to begin this tagged dialogue */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Tags that will be required for the NPC to begin this tagged dialogue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockedTags_MetaData[] = {
		{ "Category", "Tagged Dialogue" },
		{ "Comment", "/** Tags that if owned by the NPC, will prevent this dialogue beginning. For example, we wouldn't want to greet a player if we were fighting someone. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Tags that if owned by the NPC, will prevent this dialogue beginning. For example, we wouldn't want to greet a player if we were fighting someone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastPlayTime_MetaData[] = {
		{ "Category", "Tagged Dialogue" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockedTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastPlayTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaggedDialogue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedDialogue, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedDialogue, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dialogue_MetaData), NewProp_Dialogue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedDialogue, Cooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cooldown_MetaData), NewProp_Cooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedDialogue, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedDialogue, RequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredTags_MetaData), NewProp_RequiredTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_BlockedTags = { "BlockedTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedDialogue, BlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockedTags_MetaData), NewProp_BlockedTags_MetaData) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_LastPlayTime = { "LastPlayTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaggedDialogue, LastPlayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastPlayTime_MetaData), NewProp_LastPlayTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaggedDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_Cooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_RequiredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_BlockedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewProp_LastPlayTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaggedDialogue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"TaggedDialogue",
	Z_Construct_UScriptStruct_FTaggedDialogue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedDialogue_Statics::PropPointers),
	sizeof(FTaggedDialogue),
	alignof(FTaggedDialogue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaggedDialogue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTaggedDialogue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTaggedDialogue()
{
	if (!Z_Registration_Info_UScriptStruct_TaggedDialogue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TaggedDialogue.InnerSingleton, Z_Construct_UScriptStruct_FTaggedDialogue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TaggedDialogue.InnerSingleton;
}
// End ScriptStruct FTaggedDialogue

// Begin ScriptStruct FNPCSpawnParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NPCSpawnParams;
class UScriptStruct* FNPCSpawnParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NPCSpawnParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NPCSpawnParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNPCSpawnParams, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("NPCSpawnParams"));
	}
	return Z_Registration_Info_UScriptStruct_NPCSpawnParams.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FNPCSpawnParams>()
{
	return FNPCSpawnParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNPCSpawnParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Params for overriding the default options set up in the NPC definition. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Params for overriding the default options set up in the NPC definition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_NPCName_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCName_MetaData[] = {
		{ "Category", "NPC Overrides" },
		{ "Comment", "//The icon to use for this location \n" },
		{ "EditCondition", "bOverride_NPCName" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "The icon to use for this location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LevelRange_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLevel_MetaData[] = {
		{ "Category", "NPC Overrides" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The NPCs level will be randomized between these values. */" },
		{ "EditCondition", "bOverride_LevelRange" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "The NPCs level will be randomized between these values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevel_MetaData[] = {
		{ "Category", "NPC Overrides" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The NPCs level will be randomized between these values. */" },
		{ "EditCondition", "bOverride_LevelRange" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "The NPCs level will be randomized between these values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DefaultFactions_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFactions_MetaData[] = {
		{ "Categories", "Narrative.Factions" },
		{ "Category", "Factions" },
		{ "Comment", "/**The factions this character will be in by default - you can set the characters faction to something else later if desired. */" },
		{ "EditCondition", "bOverride_DefaultFactions" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "The factions this character will be in by default - you can set the characters faction to something else later if desired." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DefaultOwnedTags_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOwnedTags_MetaData[] = {
		{ "Categories", "Narrative.State" },
		{ "Category", "Tags" },
		{ "Comment", "/** Add any custom tags the character needs in here, for example State.Invulnerable if you want the character to never take damage, or LockMovement to make the character locked in place. */" },
		{ "EditCondition", "bOverride_DefaultOwnedTags" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Add any custom tags the character needs in here, for example State.Invulnerable if you want the character to never take damage, or LockMovement to make the character locked in place." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ActivityConfiguration_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivityConfiguration_MetaData[] = {
		{ "Category", "NPC Overrides" },
		{ "Comment", "/** The NPCs activity config. */" },
		{ "EditCondition", "bOverride_ActivityConfiguration" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "The NPCs activity config." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DefaultItemLoadout_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultItemLoadout_MetaData[] = {
		{ "Category", "NPC Overrides" },
		{ "Comment", "/** The items we should grant the character by default. */" },
		{ "EditCondition", "bOverride_DefaultItemLoadout" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "The items we should grant the character by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DefaultAppearance_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAppearance_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**The characters default appearance we want to override to*/" },
		{ "EditCondition", "bOverride_DefaultAppearance" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "The characters default appearance we want to override to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_TriggerSets_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerSets_MetaData[] = {
		{ "Category", "Triggers" },
		{ "Comment", "/** The triggers we want to use as the override */" },
		{ "EditCondition", "bOverride_TriggerSets" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "The triggers we want to use as the override" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_NPCName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_NPCName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NPCName;
	static void NewProp_bOverride_LevelRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LevelRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevel;
	static void NewProp_bOverride_DefaultFactions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DefaultFactions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultFactions;
	static void NewProp_bOverride_DefaultOwnedTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DefaultOwnedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultOwnedTags;
	static void NewProp_bOverride_ActivityConfiguration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ActivityConfiguration;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ActivityConfiguration;
	static void NewProp_bOverride_DefaultItemLoadout_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DefaultItemLoadout;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultItemLoadout_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultItemLoadout;
	static void NewProp_bOverride_DefaultAppearance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DefaultAppearance;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultAppearance;
	static void NewProp_bOverride_TriggerSets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_TriggerSets;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TriggerSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TriggerSets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNPCSpawnParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_NPCName_SetBit(void* Obj)
{
	((FNPCSpawnParams*)Obj)->bOverride_NPCName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_NPCName = { "bOverride_NPCName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNPCSpawnParams), &Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_NPCName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_NPCName_MetaData), NewProp_bOverride_NPCName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_NPCName = { "NPCName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCSpawnParams, NPCName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCName_MetaData), NewProp_NPCName_MetaData) };
void Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_LevelRange_SetBit(void* Obj)
{
	((FNPCSpawnParams*)Obj)->bOverride_LevelRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_LevelRange = { "bOverride_LevelRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNPCSpawnParams), &Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_LevelRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LevelRange_MetaData), NewProp_bOverride_LevelRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_MinLevel = { "MinLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCSpawnParams, MinLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLevel_MetaData), NewProp_MinLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_MaxLevel = { "MaxLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCSpawnParams, MaxLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLevel_MetaData), NewProp_MaxLevel_MetaData) };
void Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_DefaultFactions_SetBit(void* Obj)
{
	((FNPCSpawnParams*)Obj)->bOverride_DefaultFactions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_DefaultFactions = { "bOverride_DefaultFactions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNPCSpawnParams), &Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_DefaultFactions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_DefaultFactions_MetaData), NewProp_bOverride_DefaultFactions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_DefaultFactions = { "DefaultFactions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCSpawnParams, DefaultFactions), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFactions_MetaData), NewProp_DefaultFactions_MetaData) }; // 3352185621
void Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_DefaultOwnedTags_SetBit(void* Obj)
{
	((FNPCSpawnParams*)Obj)->bOverride_DefaultOwnedTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_DefaultOwnedTags = { "bOverride_DefaultOwnedTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNPCSpawnParams), &Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_DefaultOwnedTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_DefaultOwnedTags_MetaData), NewProp_bOverride_DefaultOwnedTags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_DefaultOwnedTags = { "DefaultOwnedTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCSpawnParams, DefaultOwnedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultOwnedTags_MetaData), NewProp_DefaultOwnedTags_MetaData) }; // 3352185621
void Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_ActivityConfiguration_SetBit(void* Obj)
{
	((FNPCSpawnParams*)Obj)->bOverride_ActivityConfiguration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_ActivityConfiguration = { "bOverride_ActivityConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNPCSpawnParams), &Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_ActivityConfiguration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ActivityConfiguration_MetaData), NewProp_bOverride_ActivityConfiguration_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_ActivityConfiguration = { "ActivityConfiguration", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCSpawnParams, ActivityConfiguration), Z_Construct_UClass_UNPCActivityConfiguration_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivityConfiguration_MetaData), NewProp_ActivityConfiguration_MetaData) };
void Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_DefaultItemLoadout_SetBit(void* Obj)
{
	((FNPCSpawnParams*)Obj)->bOverride_DefaultItemLoadout = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_DefaultItemLoadout = { "bOverride_DefaultItemLoadout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNPCSpawnParams), &Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_DefaultItemLoadout_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_DefaultItemLoadout_MetaData), NewProp_bOverride_DefaultItemLoadout_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_DefaultItemLoadout_Inner = { "DefaultItemLoadout", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootTableRoll, METADATA_PARAMS(0, nullptr) }; // 1127129110
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_DefaultItemLoadout = { "DefaultItemLoadout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCSpawnParams, DefaultItemLoadout), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultItemLoadout_MetaData), NewProp_DefaultItemLoadout_MetaData) }; // 1127129110
void Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_DefaultAppearance_SetBit(void* Obj)
{
	((FNPCSpawnParams*)Obj)->bOverride_DefaultAppearance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_DefaultAppearance = { "bOverride_DefaultAppearance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNPCSpawnParams), &Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_DefaultAppearance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_DefaultAppearance_MetaData), NewProp_bOverride_DefaultAppearance_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_DefaultAppearance = { "DefaultAppearance", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCSpawnParams, DefaultAppearance), Z_Construct_UClass_UCharacterAppearanceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAppearance_MetaData), NewProp_DefaultAppearance_MetaData) };
void Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_TriggerSets_SetBit(void* Obj)
{
	((FNPCSpawnParams*)Obj)->bOverride_TriggerSets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_TriggerSets = { "bOverride_TriggerSets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNPCSpawnParams), &Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_TriggerSets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_TriggerSets_MetaData), NewProp_bOverride_TriggerSets_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_TriggerSets_Inner = { "TriggerSets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTriggerSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_TriggerSets = { "TriggerSets", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCSpawnParams, TriggerSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerSets_MetaData), NewProp_TriggerSets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_NPCName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_NPCName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_LevelRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_MinLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_MaxLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_DefaultFactions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_DefaultFactions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_DefaultOwnedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_DefaultOwnedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_ActivityConfiguration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_ActivityConfiguration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_DefaultItemLoadout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_DefaultItemLoadout_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_DefaultItemLoadout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_DefaultAppearance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_DefaultAppearance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_bOverride_TriggerSets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_TriggerSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewProp_TriggerSets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"NPCSpawnParams",
	Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::PropPointers),
	sizeof(FNPCSpawnParams),
	alignof(FNPCSpawnParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNPCSpawnParams()
{
	if (!Z_Registration_Info_UScriptStruct_NPCSpawnParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NPCSpawnParams.InnerSingleton, Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NPCSpawnParams.InnerSingleton;
}
// End ScriptStruct FNPCSpawnParams

// Begin ScriptStruct FNPCSpawnInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NPCSpawnInfo;
class UScriptStruct* FNPCSpawnInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NPCSpawnInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NPCSpawnInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNPCSpawnInfo, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("NPCSpawnInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NPCSpawnInfo.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FNPCSpawnInfo>()
{
	return FNPCSpawnInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Information about where the NPC spawned, what owns it\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Information about where the NPC spawned, what owns it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningSpawnerGUID_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** GUID of the spawner that created us. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "GUID of the spawner that created us." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnName_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** Name of our spawn in that spawner. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Name of our spawn in that spawner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningSpawn_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** Weak ptr to our spawn, only valid if WP still has our spawn loaded in. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Weak ptr to our spawn, only valid if WP still has our spawn loaded in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnAssignedSaveGUID_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** The save GUID our spawner assigned us. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "The save GUID our spawner assigned us." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** Transform of our spawn, so we know roughly in which directly to run back to our settlement*/" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Transform of our spawn, so we know roughly in which directly to run back to our settlement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnParams_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/**The spawn params that were passed in by whatever spawned us */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "The spawn params that were passed in by whatever spawned us" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwningSpawnerGUID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpawnName;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OwningSpawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnAssignedSaveGUID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNPCSpawnInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::NewProp_OwningSpawnerGUID = { "OwningSpawnerGUID", nullptr, (EPropertyFlags)0x0010000001020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCSpawnInfo, OwningSpawnerGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningSpawnerGUID_MetaData), NewProp_OwningSpawnerGUID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::NewProp_SpawnName = { "SpawnName", nullptr, (EPropertyFlags)0x0010000001020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCSpawnInfo, SpawnName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnName_MetaData), NewProp_SpawnName_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::NewProp_OwningSpawn = { "OwningSpawn", nullptr, (EPropertyFlags)0x00140000000a201d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCSpawnInfo, OwningSpawn), Z_Construct_UClass_UNPCSpawnComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningSpawn_MetaData), NewProp_OwningSpawn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::NewProp_SpawnAssignedSaveGUID = { "SpawnAssignedSaveGUID", nullptr, (EPropertyFlags)0x0010000001020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCSpawnInfo, SpawnAssignedSaveGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnAssignedSaveGUID_MetaData), NewProp_SpawnAssignedSaveGUID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000001020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCSpawnInfo, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTransform_MetaData), NewProp_SpawnTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::NewProp_SpawnParams = { "SpawnParams", nullptr, (EPropertyFlags)0x0010000001020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCSpawnInfo, SpawnParams), Z_Construct_UScriptStruct_FNPCSpawnParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnParams_MetaData), NewProp_SpawnParams_MetaData) }; // 3899460127
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::NewProp_OwningSpawnerGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::NewProp_SpawnName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::NewProp_OwningSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::NewProp_SpawnAssignedSaveGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::NewProp_SpawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::NewProp_SpawnParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"NPCSpawnInfo",
	Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::PropPointers),
	sizeof(FNPCSpawnInfo),
	alignof(FNPCSpawnInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNPCSpawnInfo()
{
	if (!Z_Registration_Info_UScriptStruct_NPCSpawnInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NPCSpawnInfo.InnerSingleton, Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NPCSpawnInfo.InnerSingleton;
}
// End ScriptStruct FNPCSpawnInfo

// Begin Class ANarrativeNPCCharacter Function ApplyActivityConfig
struct NarrativeNPCCharacter_eventApplyActivityConfig_Parms
{
	UNPCActivityConfiguration* NPCActivityConfig;
};
static const FName NAME_ANarrativeNPCCharacter_ApplyActivityConfig = FName(TEXT("ApplyActivityConfig"));
void ANarrativeNPCCharacter::ApplyActivityConfig(UNPCActivityConfiguration* NPCActivityConfig)
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeNPCCharacter_ApplyActivityConfig);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeNPCCharacter_eventApplyActivityConfig_Parms Parms;
		Parms.NPCActivityConfig=NPCActivityConfig;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ApplyActivityConfig_Implementation(NPCActivityConfig);
	}
}
struct Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivityConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//Called when our activity config is ready \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Called when our activity config is ready" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCActivityConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivityConfig_Statics::NewProp_NPCActivityConfig = { "NPCActivityConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventApplyActivityConfig_Parms, NPCActivityConfig), Z_Construct_UClass_UNPCActivityConfiguration_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivityConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivityConfig_Statics::NewProp_NPCActivityConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivityConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivityConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "ApplyActivityConfig", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivityConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivityConfig_Statics::PropPointers), sizeof(NarrativeNPCCharacter_eventApplyActivityConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivityConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivityConfig_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeNPCCharacter_eventApplyActivityConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivityConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivityConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execApplyActivityConfig)
{
	P_GET_OBJECT(UNPCActivityConfiguration,Z_Param_NPCActivityConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyActivityConfig_Implementation(Z_Param_NPCActivityConfig);
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function ApplyActivityConfig

// Begin Class ANarrativeNPCCharacter Function ApplyActivitySchedules
struct NarrativeNPCCharacter_eventApplyActivitySchedules_Parms
{
	TArray<TSoftObjectPtr<UNPCActivitySchedule> > ActivitySchedules;
};
static const FName NAME_ANarrativeNPCCharacter_ApplyActivitySchedules = FName(TEXT("ApplyActivitySchedules"));
void ANarrativeNPCCharacter::ApplyActivitySchedules(TArray<TSoftObjectPtr<UNPCActivitySchedule> > const& ActivitySchedules)
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeNPCCharacter_ApplyActivitySchedules);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeNPCCharacter_eventApplyActivitySchedules_Parms Parms;
		Parms.ActivitySchedules=ActivitySchedules;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ApplyActivitySchedules_Implementation(ActivitySchedules);
	}
}
struct Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivitySchedules_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//App\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "App" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivitySchedules_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ActivitySchedules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivitySchedules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivitySchedules_Statics::NewProp_ActivitySchedules_Inner = { "ActivitySchedules", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNPCActivitySchedule_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivitySchedules_Statics::NewProp_ActivitySchedules = { "ActivitySchedules", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventApplyActivitySchedules_Parms, ActivitySchedules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivitySchedules_MetaData), NewProp_ActivitySchedules_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivitySchedules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivitySchedules_Statics::NewProp_ActivitySchedules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivitySchedules_Statics::NewProp_ActivitySchedules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivitySchedules_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivitySchedules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "ApplyActivitySchedules", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivitySchedules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivitySchedules_Statics::PropPointers), sizeof(NarrativeNPCCharacter_eventApplyActivitySchedules_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivitySchedules_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivitySchedules_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeNPCCharacter_eventApplyActivitySchedules_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivitySchedules()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivitySchedules_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execApplyActivitySchedules)
{
	P_GET_TARRAY_REF(TSoftObjectPtr<UNPCActivitySchedule>,Z_Param_Out_ActivitySchedules);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyActivitySchedules_Implementation(Z_Param_Out_ActivitySchedules);
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function ApplyActivitySchedules

// Begin Class ANarrativeNPCCharacter Function ApplyDialogue
struct NarrativeNPCCharacter_eventApplyDialogue_Parms
{
	TSubclassOf<UDialogue> NPCDialogue;
};
static const FName NAME_ANarrativeNPCCharacter_ApplyDialogue = FName(TEXT("ApplyDialogue"));
void ANarrativeNPCCharacter::ApplyDialogue(TSubclassOf<UDialogue> NPCDialogue)
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeNPCCharacter_ApplyDialogue);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeNPCCharacter_eventApplyDialogue_Parms Parms;
		Parms.NPCDialogue=NPCDialogue;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ApplyDialogue_Implementation(NPCDialogue);
	}
}
struct Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//Called when our dialogue is set \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Called when our dialogue is set" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NPCDialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyDialogue_Statics::NewProp_NPCDialogue = { "NPCDialogue", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventApplyDialogue_Parms, NPCDialogue), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyDialogue_Statics::NewProp_NPCDialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "ApplyDialogue", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyDialogue_Statics::PropPointers), sizeof(NarrativeNPCCharacter_eventApplyDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeNPCCharacter_eventApplyDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execApplyDialogue)
{
	P_GET_OBJECT(UClass,Z_Param_NPCDialogue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDialogue_Implementation(Z_Param_NPCDialogue);
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function ApplyDialogue

// Begin Class ANarrativeNPCCharacter Function ExecutePlayTaggedDialogue
struct NarrativeNPCCharacter_eventExecutePlayTaggedDialogue_Parms
{
	FTaggedDialogue Dialogue;
	AActor* DialogueInstigator;
};
static const FName NAME_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue = FName(TEXT("ExecutePlayTaggedDialogue"));
void ANarrativeNPCCharacter::ExecutePlayTaggedDialogue(FTaggedDialogue Dialogue, AActor* DialogueInstigator)
{
	NarrativeNPCCharacter_eventExecutePlayTaggedDialogue_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.DialogueInstigator=DialogueInstigator;
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC" },
		{ "Comment", "//Notify the NPC a tagged dialogue should try play - this is blueprint implementable \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Notify the NPC a tagged dialogue should try play - this is blueprint implementable" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueInstigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventExecutePlayTaggedDialogue_Parms, Dialogue), Z_Construct_UScriptStruct_FTaggedDialogue, METADATA_PARAMS(0, nullptr) }; // 225624026
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::NewProp_DialogueInstigator = { "DialogueInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventExecutePlayTaggedDialogue_Parms, DialogueInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::NewProp_DialogueInstigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "ExecutePlayTaggedDialogue", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::PropPointers), sizeof(NarrativeNPCCharacter_eventExecutePlayTaggedDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeNPCCharacter_eventExecutePlayTaggedDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANarrativeNPCCharacter Function ExecutePlayTaggedDialogue

// Begin Class ANarrativeNPCCharacter Function GetActivityComponent
struct Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics
{
	struct NarrativeNPCCharacter_eventGetActivityComponent_Parms
	{
		UNPCActivityComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventGetActivityComponent_Parms, ReturnValue), Z_Construct_UClass_UNPCActivityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "GetActivityComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::NarrativeNPCCharacter_eventGetActivityComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::NarrativeNPCCharacter_eventGetActivityComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execGetActivityComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNPCActivityComponent**)Z_Param__Result=P_THIS->GetActivityComponent();
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function GetActivityComponent

// Begin Class ANarrativeNPCCharacter Function GetNPCController
struct Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics
{
	struct NarrativeNPCCharacter_eventGetNPCController_Parms
	{
		ANarrativeNPCController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventGetNPCController_Parms, ReturnValue), Z_Construct_UClass_ANarrativeNPCController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "GetNPCController", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::NarrativeNPCCharacter_eventGetNPCController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::NarrativeNPCCharacter_eventGetNPCController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execGetNPCController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANarrativeNPCController**)Z_Param__Result=P_THIS->GetNPCController();
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function GetNPCController

// Begin Class ANarrativeNPCCharacter Function GetNPCDefinition
struct Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCDefinition_Statics
{
	struct NarrativeNPCCharacter_eventGetNPCDefinition_Parms
	{
		UNPCDefinition* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//Get the npc definition from the character\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Get the npc definition from the character" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventGetNPCDefinition_Parms, ReturnValue), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCDefinition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "GetNPCDefinition", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCDefinition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCDefinition_Statics::NarrativeNPCCharacter_eventGetNPCDefinition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCDefinition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCDefinition_Statics::NarrativeNPCCharacter_eventGetNPCDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execGetNPCDefinition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNPCDefinition**)Z_Param__Result=P_THIS->GetNPCDefinition();
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function GetNPCDefinition

// Begin Class ANarrativeNPCCharacter Function GetNPCName
struct Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics
{
	struct NarrativeNPCCharacter_eventGetNPCName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC" },
		{ "Comment", "//Grab the NPCs name\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Grab the NPCs name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventGetNPCName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "GetNPCName", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::NarrativeNPCCharacter_eventGetNPCName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::NarrativeNPCCharacter_eventGetNPCName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execGetNPCName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetNPCName();
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function GetNPCName

// Begin Class ANarrativeNPCCharacter Function GetTradingInventoryComponent
struct Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics
{
	struct NarrativeNPCCharacter_eventGetTradingInventoryComponent_Parms
	{
		UNarrativeInventoryComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventGetTradingInventoryComponent_Parms, ReturnValue), Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "GetTradingInventoryComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::NarrativeNPCCharacter_eventGetTradingInventoryComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::NarrativeNPCCharacter_eventGetTradingInventoryComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execGetTradingInventoryComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeInventoryComponent**)Z_Param__Result=P_THIS->GetTradingInventoryComponent();
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function GetTradingInventoryComponent

// Begin Class ANarrativeNPCCharacter Function HandleSpawnParamOverridesLoaded
struct Z_Construct_UFunction_ANarrativeNPCCharacter_HandleSpawnParamOverridesLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Called if we need to load overrides, which will defer CDef loading.  \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Called if we need to load overrides, which will defer CDef loading." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_HandleSpawnParamOverridesLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "HandleSpawnParamOverridesLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_HandleSpawnParamOverridesLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_HandleSpawnParamOverridesLoaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_HandleSpawnParamOverridesLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_HandleSpawnParamOverridesLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execHandleSpawnParamOverridesLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSpawnParamOverridesLoaded();
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function HandleSpawnParamOverridesLoaded

// Begin Class ANarrativeNPCCharacter Function NPCDataReady
static const FName NAME_ANarrativeNPCCharacter_NPCDataReady = FName(TEXT("NPCDataReady"));
void ANarrativeNPCCharacter::NPCDataReady()
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeNPCCharacter_NPCDataReady);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ANarrativeNPCCharacter_NPCDataReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_NPCDataReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "NPCDataReady", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_NPCDataReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_NPCDataReady_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_NPCDataReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_NPCDataReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANarrativeNPCCharacter Function NPCDataReady

// Begin Class ANarrativeNPCCharacter Function OnRep_NPCDefinition
struct Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "OnRep_NPCDefinition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCDefinition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execOnRep_NPCDefinition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_NPCDefinition();
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function OnRep_NPCDefinition

// Begin Class ANarrativeNPCCharacter Function OnRep_NPCFactions
struct Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCFactions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCFactions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "OnRep_NPCFactions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCFactions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCFactions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCFactions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCFactions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execOnRep_NPCFactions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_NPCFactions();
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function OnRep_NPCFactions

// Begin Class ANarrativeNPCCharacter Function PlayTaggedDialogue
struct Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics
{
	struct NarrativeNPCCharacter_eventPlayTaggedDialogue_Parms
	{
		FGameplayTag Tag;
		AActor* DialogueInstigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC" },
		{ "Comment", "//Notify the NPC a tagged dialogue should try play, like a greeting, farewell, taunt, etc. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Notify the NPC a tagged dialogue should try play, like a greeting, farewell, taunt, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Categories", "Narrative.TaggedDialogue" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueInstigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventPlayTaggedDialogue_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::NewProp_DialogueInstigator = { "DialogueInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventPlayTaggedDialogue_Parms, DialogueInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::NewProp_DialogueInstigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "PlayTaggedDialogue", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::NarrativeNPCCharacter_eventPlayTaggedDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::NarrativeNPCCharacter_eventPlayTaggedDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execPlayTaggedDialogue)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_OBJECT(AActor,Z_Param_DialogueInstigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayTaggedDialogue(Z_Param_Tag,Z_Param_DialogueInstigator);
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function PlayTaggedDialogue

// Begin Class ANarrativeNPCCharacter Function ShouldBeAggressiveTowardsTarget
struct NarrativeNPCCharacter_eventShouldBeAggressiveTowardsTarget_Parms
{
	const AActor* Target;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeNPCCharacter_eventShouldBeAggressiveTowardsTarget_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget = FName(TEXT("ShouldBeAggressiveTowardsTarget"));
bool ANarrativeNPCCharacter::ShouldBeAggressiveTowardsTarget(const AActor* Target) const
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeNPCCharacter_eventShouldBeAggressiveTowardsTarget_Parms Parms;
		Parms.Target=Target;
		const_cast<ANarrativeNPCCharacter*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<ANarrativeNPCCharacter*>(this)->ShouldBeAggressiveTowardsTarget_Implementation(Target);
	}
}
struct Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hostiles" },
		{ "Comment", "/**Allows a chance to let us be hostile towards any perceived target if you return true, even if they aren't in a hostile faction. \n\x09This would let you do things like have friendly NPCs turn on the player if you've damaged them enough, etc. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Allows a chance to let us be hostile towards any perceived target if you return true, even if they aren't in a hostile faction.\n       This would let you do things like have friendly NPCs turn on the player if you've damaged them enough, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCCharacter_eventShouldBeAggressiveTowardsTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
void Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeNPCCharacter_eventShouldBeAggressiveTowardsTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeNPCCharacter_eventShouldBeAggressiveTowardsTarget_Parms), &Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeNPCCharacter, nullptr, "ShouldBeAggressiveTowardsTarget", nullptr, nullptr, Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::PropPointers), sizeof(NarrativeNPCCharacter_eventShouldBeAggressiveTowardsTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeNPCCharacter_eventShouldBeAggressiveTowardsTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeNPCCharacter::execShouldBeAggressiveTowardsTarget)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldBeAggressiveTowardsTarget_Implementation(Z_Param_Target);
	P_NATIVE_END;
}
// End Class ANarrativeNPCCharacter Function ShouldBeAggressiveTowardsTarget

// Begin Class ANarrativeNPCCharacter
void ANarrativeNPCCharacter::StaticRegisterNativesANarrativeNPCCharacter()
{
	UClass* Class = ANarrativeNPCCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyActivityConfig", &ANarrativeNPCCharacter::execApplyActivityConfig },
		{ "ApplyActivitySchedules", &ANarrativeNPCCharacter::execApplyActivitySchedules },
		{ "ApplyDialogue", &ANarrativeNPCCharacter::execApplyDialogue },
		{ "GetActivityComponent", &ANarrativeNPCCharacter::execGetActivityComponent },
		{ "GetNPCController", &ANarrativeNPCCharacter::execGetNPCController },
		{ "GetNPCDefinition", &ANarrativeNPCCharacter::execGetNPCDefinition },
		{ "GetNPCName", &ANarrativeNPCCharacter::execGetNPCName },
		{ "GetTradingInventoryComponent", &ANarrativeNPCCharacter::execGetTradingInventoryComponent },
		{ "HandleSpawnParamOverridesLoaded", &ANarrativeNPCCharacter::execHandleSpawnParamOverridesLoaded },
		{ "OnRep_NPCDefinition", &ANarrativeNPCCharacter::execOnRep_NPCDefinition },
		{ "OnRep_NPCFactions", &ANarrativeNPCCharacter::execOnRep_NPCFactions },
		{ "PlayTaggedDialogue", &ANarrativeNPCCharacter::execPlayTaggedDialogue },
		{ "ShouldBeAggressiveTowardsTarget", &ANarrativeNPCCharacter::execShouldBeAggressiveTowardsTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANarrativeNPCCharacter);
UClass* Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister()
{
	return ANarrativeNPCCharacter::StaticClass();
}
struct Z_Construct_UClass_ANarrativeNPCCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for a NarrativeCharacter that is AI Controlled. \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for a NarrativeCharacter that is AI Controlled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TradingInventoryComponent_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "Comment", "//NPCs have a seperate inventory for trading from. \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "NPCs have a seperate inventory for trading from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCInteractableComponent_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AICRecord_MetaData[] = {
		{ "Comment", "//In order to link NPCs and their AIController save records, we have NPCs store their AIC record. That works nicely. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "In order to link NPCs and their AIController save records, we have NPCs store their AIC record. That works nicely." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCDefinition_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** The NPCs data asset - this is set automatically by the NPC subsystem when it detects the NPC has spawned in */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "The NPCs data asset - this is set automatically by the NPC subsystem when it detects the NPC has spawned in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningSettlement_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** References the settlement that last spawned us, if one did.  */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "References the settlement that last spawned us, if one did." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInfo_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** Owning spawn ID */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Owning spawn ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCLevel_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** This NPCs level - NPCs levels are defined by their NPC asset */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "This NPCs level - NPCs levels are defined by their NPC asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCFactions_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** This NPCs faction - can be changed at anytime and will be saved to disk */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "This NPCs faction - can be changed at anytime and will be saved to disk" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAggressiveOnTakeDamage_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** If true, this NPC will start attacking anyone that causes damage to them, provided they aren't in the same faction. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "If true, this NPC will start attacking anyone that causes damage to them, provided they aren't in the same faction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaggedDialogues_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** If true, this NPC will start attacking anyone that causes damage to them, provided they aren't in the same faction. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "If true, this NPC will start attacking anyone that causes damage to them, provided they aren't in the same faction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hostiles_MetaData[] = {
		{ "Category", "NPC" },
		{ "Comment", "/** Consider anything in this list a \"hostile override\" - that is to say even if the actor is neutral or even friendly, we'll treat them as a hostile and attack.\n\x09We need this because there are occasions where we want friendlies to attack each other, maybe during a quest. We also often want to attack neutrals that have attacked us. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeNPCCharacter.h" },
		{ "ToolTip", "Consider anything in this list a \"hostile override\" - that is to say even if the actor is neutral or even friendly, we'll treat them as a hostile and attack.\n      We need this because there are occasions where we want friendlies to attack each other, maybe during a quest. We also often want to attack neutrals that have attacked us." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TradingInventoryComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCInteractableComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AICRecord;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCDefinition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwningSettlement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnInfo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NPCLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NPCFactions;
	static void NewProp_bAggressiveOnTakeDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAggressiveOnTakeDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaggedDialogues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TaggedDialogues;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hostiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Hostiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivityConfig, "ApplyActivityConfig" }, // 634650307
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyActivitySchedules, "ApplyActivitySchedules" }, // 943442168
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_ApplyDialogue, "ApplyDialogue" }, // 258436103
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_ExecutePlayTaggedDialogue, "ExecutePlayTaggedDialogue" }, // 3171141339
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_GetActivityComponent, "GetActivityComponent" }, // 901961117
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCController, "GetNPCController" }, // 1467414764
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCDefinition, "GetNPCDefinition" }, // 783236216
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_GetNPCName, "GetNPCName" }, // 624923137
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_GetTradingInventoryComponent, "GetTradingInventoryComponent" }, // 4133761756
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_HandleSpawnParamOverridesLoaded, "HandleSpawnParamOverridesLoaded" }, // 3309239937
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_NPCDataReady, "NPCDataReady" }, // 2407415416
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCDefinition, "OnRep_NPCDefinition" }, // 1519978764
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_OnRep_NPCFactions, "OnRep_NPCFactions" }, // 4038828497
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_PlayTaggedDialogue, "PlayTaggedDialogue" }, // 291977788
		{ &Z_Construct_UFunction_ANarrativeNPCCharacter_ShouldBeAggressiveTowardsTarget, "ShouldBeAggressiveTowardsTarget" }, // 2381852121
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANarrativeNPCCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, InventoryComponent), Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryComponent_MetaData), NewProp_InventoryComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_TradingInventoryComponent = { "TradingInventoryComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, TradingInventoryComponent), Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TradingInventoryComponent_MetaData), NewProp_TradingInventoryComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_NPCInteractableComponent = { "NPCInteractableComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, NPCInteractableComponent), Z_Construct_UClass_UNPCInteractable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCInteractableComponent_MetaData), NewProp_NPCInteractableComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_AICRecord = { "AICRecord", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, AICRecord), Z_Construct_UScriptStruct_FNarrativeActorRecord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AICRecord_MetaData), NewProp_AICRecord_MetaData) }; // 1167937850
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_NPCDefinition = { "NPCDefinition", "OnRep_NPCDefinition", (EPropertyFlags)0x0124080100000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, NPCDefinition), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCDefinition_MetaData), NewProp_NPCDefinition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_OwningSettlement = { "OwningSettlement", nullptr, (EPropertyFlags)0x0020080001020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, OwningSettlement), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningSettlement_MetaData), NewProp_OwningSettlement_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_SpawnInfo = { "SpawnInfo", nullptr, (EPropertyFlags)0x0020088001020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, SpawnInfo), Z_Construct_UScriptStruct_FNPCSpawnInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnInfo_MetaData), NewProp_SpawnInfo_MetaData) }; // 1698069148
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_NPCLevel = { "NPCLevel", nullptr, (EPropertyFlags)0x0020080001020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, NPCLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCLevel_MetaData), NewProp_NPCLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_NPCFactions = { "NPCFactions", "OnRep_NPCFactions", (EPropertyFlags)0x0020080101020035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, NPCFactions), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCFactions_MetaData), NewProp_NPCFactions_MetaData) }; // 3352185621
void Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_bAggressiveOnTakeDamage_SetBit(void* Obj)
{
	((ANarrativeNPCCharacter*)Obj)->bAggressiveOnTakeDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_bAggressiveOnTakeDamage = { "bAggressiveOnTakeDamage", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANarrativeNPCCharacter), &Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_bAggressiveOnTakeDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAggressiveOnTakeDamage_MetaData), NewProp_bAggressiveOnTakeDamage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_TaggedDialogues_Inner = { "TaggedDialogues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTaggedDialogue, METADATA_PARAMS(0, nullptr) }; // 225624026
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_TaggedDialogues = { "TaggedDialogues", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, TaggedDialogues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaggedDialogues_MetaData), NewProp_TaggedDialogues_MetaData) }; // 225624026
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_Hostiles_Inner = { "Hostiles", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_Hostiles = { "Hostiles", nullptr, (EPropertyFlags)0x0124080000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeNPCCharacter, Hostiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hostiles_MetaData), NewProp_Hostiles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANarrativeNPCCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_InventoryComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_TradingInventoryComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_NPCInteractableComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_AICRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_NPCDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_OwningSettlement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_SpawnInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_NPCLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_NPCFactions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_bAggressiveOnTakeDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_TaggedDialogues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_TaggedDialogues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_Hostiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeNPCCharacter_Statics::NewProp_Hostiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeNPCCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANarrativeNPCCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANarrativeCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeNPCCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNarrativeSavableActor_NoRegister, (int32)VTABLE_OFFSET(ANarrativeNPCCharacter, INarrativeSavableActor), false },  // 319030605
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANarrativeNPCCharacter_Statics::ClassParams = {
	&ANarrativeNPCCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANarrativeNPCCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeNPCCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeNPCCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANarrativeNPCCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANarrativeNPCCharacter()
{
	if (!Z_Registration_Info_UClass_ANarrativeNPCCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANarrativeNPCCharacter.OuterSingleton, Z_Construct_UClass_ANarrativeNPCCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANarrativeNPCCharacter.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ANarrativeNPCCharacter>()
{
	return ANarrativeNPCCharacter::StaticClass();
}
void ANarrativeNPCCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_NPCDefinition(TEXT("NPCDefinition"));
	static const FName Name_NPCLevel(TEXT("NPCLevel"));
	static const FName Name_NPCFactions(TEXT("NPCFactions"));
	const bool bIsValid = true
		&& Name_NPCDefinition == ClassReps[(int32)ENetFields_Private::NPCDefinition].Property->GetFName()
		&& Name_NPCLevel == ClassReps[(int32)ENetFields_Private::NPCLevel].Property->GetFName()
		&& Name_NPCFactions == ClassReps[(int32)ENetFields_Private::NPCFactions].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANarrativeNPCCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANarrativeNPCCharacter);
ANarrativeNPCCharacter::~ANarrativeNPCCharacter() {}
// End Class ANarrativeNPCCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTaggedDialogue::StaticStruct, Z_Construct_UScriptStruct_FTaggedDialogue_Statics::NewStructOps, TEXT("TaggedDialogue"), &Z_Registration_Info_UScriptStruct_TaggedDialogue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTaggedDialogue), 225624026U) },
		{ FNPCSpawnParams::StaticStruct, Z_Construct_UScriptStruct_FNPCSpawnParams_Statics::NewStructOps, TEXT("NPCSpawnParams"), &Z_Registration_Info_UScriptStruct_NPCSpawnParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNPCSpawnParams), 3899460127U) },
		{ FNPCSpawnInfo::StaticStruct, Z_Construct_UScriptStruct_FNPCSpawnInfo_Statics::NewStructOps, TEXT("NPCSpawnInfo"), &Z_Registration_Info_UScriptStruct_NPCSpawnInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNPCSpawnInfo), 1698069148U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANarrativeNPCCharacter, ANarrativeNPCCharacter::StaticClass, TEXT("ANarrativeNPCCharacter"), &Z_Registration_Info_UClass_ANarrativeNPCCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANarrativeNPCCharacter), 3910000507U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_1394395015(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
