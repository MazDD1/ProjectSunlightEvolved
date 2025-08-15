// Copyright Narrative Tools 2024. 


#include "NarrativeGameplayTags.h"

#include "Containers/Array.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagsManager.h"
#include "Logging/LogCategory.h"
#include "Logging/LogMacros.h"
#include "Trace/Detail/Channel.h"
#include "UObject/NameTypes.h"

FNarrativeGameplayTags FNarrativeGameplayTags::GameplayTags;

void FNarrativeGameplayTags::InitializeNativeTags()
{
	UGameplayTagsManager& Manager = UGameplayTagsManager::Get();

	GameplayTags.AddAllTags(Manager);

	// Notify manager that we are done adding native tags.
	Manager.DoneAddingNativeTags();
}

void FNarrativeGameplayTags::AddAllTags(UGameplayTagsManager& Manager)
{
	AddTag(Ability_ActivateFail_IsDead, "Ability.ActivateFail.IsDead", "Ability failed to activate because its owner is dead.");
	AddTag(Ability_ActivateFail_Cooldown, "Ability.ActivateFail.Cooldown", "Ability failed to activate because it is on cool down.");
	AddTag(Ability_ActivateFail_Cost, "Ability.ActivateFail.Cost", "Ability failed to activate because it did not pass the cost checks.");
	AddTag(Ability_ActivateFail_TagsBlocked, "Ability.ActivateFail.TagsBlocked", "Ability failed to activate because tags are blocking it.");
	AddTag(Ability_ActivateFail_TagsMissing, "Ability.ActivateFail.TagsMissing", "Ability failed to activate because tags are missing.");
	AddTag(Ability_ActivateFail_Networking, "Ability.ActivateFail.Networking", "Ability failed to activate because it did not pass the network checks.");
	AddTag(Ability_ActivateFail_ActivationGroup, "Ability.ActivateFail.ActivationGroup", "Ability failed to activate because of its activation group.");

	AddTag(Ability_WeaponFire, "Abilities.Attacks.WeaponFire", "Weapon firing ability tag.");
	AddTag(Ability_MeleeAttack, "Abilities.Attacks.MeleeAttack", "Melee attack ability tag.");
	AddTag(Ability_MeleeAttack, "Abilities.Attacks.MagicAttack", "Magic attack ability tag.");
	AddTag(Ability_Death, "Abilities.Death", "Death ability tag.");
	AddTag(Ability_Aim, "Abilities.Aim", "Aim ability tag.");
	AddTag(Ability_Reload, "Abilities.Reload", "Reload ability tag.");
	AddTag(Ability_WeaponBash, "Abilities.WeaponBash", "WeaponBash ability tag.");
	AddTag(Ability_Jump, "Abilities.Jump", "Jump ability tag.");
	AddTag(Ability_Crouch, "Abilities.Crouch", "Crouch ability tag.");
	AddTag(Ability_Sprint, "Abilities.Sprint", "Sprint ability tag.");
	AddTag(Ability_Dodge, "Abilities.Dodge", "Dodge ability tag.");
	AddTag(Ability_Block, "Abilities.Block", "Block ability tag.");
	AddTag(Ability_WieldWeapon, "Abilities.WieldWeapon", "WieldWeapon ability tag.");
	AddTag(Ability_Interact_Sit, "Abilities.Interact.Sit", "Tag for the sit interaction ability.");

	AddTag(Camera_Perspective_FirstPerson, "Camera.Perspective.FirstPerson", "Applied to the player character when we're in first person mode.");
	AddTag(Camera_Perspective_ThirdPerson, "Camera.Perspective.ThirdPerson", "Applied to the player character when we're in Third person mode.");

	//Unfortunately users need to define these manually as GameplayCues cant use native tags 
	//AddTag(GameplayCue_TakeDamage, "GameplayCue.TakeDamage", "TakeDamage gameplaycue tag. ");
	//AddTag(GameplayCue_Weapon_Fire, "GameplayCue.Weapon.Fire", "Weapon Fire gameplaycue tag. ");
	//AddTag(GameplayCue_Weapon_Impact, "GameplayCue.Weapon.Impact", "Weapon Impact gameplaycue tag. ");
	
	AddTag(CharacterCreator_Scalars, "Narrative.CharacterCreator.Scalars", "Scalar TagIDs are added as subtags of this tag. ");
	AddTag(CharacterCreator_Vectors, "Narrative.CharacterCreator.Vectors", "Vector TagIDs are added as subtags of this tag. ");
	AddTag(CharacterCreator_Form_Male, "Narrative.CharacterCreator.Forms.Male", "The default male form that comes with the character creator. ");
	AddTag(CharacterCreator_Form_Female, "Narrative.CharacterCreator.Forms.Female", "The default female form that comes with the character creator. ");

	AddTag(Attachment_Slot_Scope, "Narrative.Equipment.Weapon.AttachSlot.Scope", "Tag for the weapon scope attachment slot");
	AddTag(Attachment_Slot_Muzzle, "Narrative.Equipment.Weapon.AttachSlot.Muzzle", "Tag for the weapon Muzzle attachment slot");

	AddTag(Equipment_Slot_Body, "Narrative.Equipment.Slot.Mesh.Body", "Tag for the body equipment slot. This is different from the BaseBody which defines the skeleton. ");
	AddTag(Equipment_Slot_Helmet, "Narrative.Equipment.Slot.Mesh.Helmet", "Tag for the helmet equipment slot.");
	AddTag(Equipment_Slot_Torso, "Narrative.Equipment.Slot.Mesh.Torso", "Tag for the Torso equipment slot.");
	AddTag(Equipment_Slot_Legs, "Narrative.Equipment.Slot.Mesh.Legs", "Tag for the Legs equipment slot.");
	AddTag(Equipment_Slot_Feet, "Narrative.Equipment.Slot.Mesh.Feet", "Tag for the Feet equipment slot.");
	AddTag(Equipment_Slot_Hands, "Narrative.Equipment.Slot.Mesh.Hands", "Tag for the Hands equipment slot.");
	AddTag(Equipment_Slot_Weapon_Back, "Narrative.Equipment.Slot.Weapon.Back", "Tag for the weapon slot where the weapon equips to the players back. ");
	AddTag(Equipment_Slot_Weapon_Hip, "Narrative.Equipment.Slot.Weapon.Hip", "Tag for the weapon slot where the weapon equips to the players hip. ");
	AddTag(Equipment_Slot_Backpack, "Narrative.Equipment.Slot.Mesh.Backpack", "Tag for the Backpack equipment slot.");
	AddTag(Equipment_Slot_Necklace, "Narrative.Equipment.Slot.Mesh.Necklace", "Tag for the Necklace equipment slot.");
	AddTag(Equipment_Slot_Throwable, "Narrative.Equipment.Slot.Mesh.Throwable", "Tag for the Throwable equipment slot.");
	AddTag(Equipment_Slot_Glasses, "Narrative.Equipment.Slot.Mesh.Glasses", "Tag for the Glasses equipment slot.");

	//We support groom versions for mesh slots, but may remove support for this as grooms arent really game ready anyways... 
	AddTag(Equipment_Slot_Groom_Eyebrows, "Narrative.Equipment.Slot.Groom.Eyebrows", "Tag for the Eyebrows equipment slot.");
	AddTag(Equipment_Slot_Groom_Hair, "Narrative.Equipment.Slot.Groom.Hair", "Tag for the Hair equipment slot.");
	AddTag(Equipment_Slot_Groom_Beard, "Narrative.Equipment.Slot.Groom.Beard", "Tag for the Beard equipment slot.");
	AddTag(Equipment_Slot_Groom_Fuzz, "Narrative.Equipment.Slot.Groom.Fuzz", "Tag for the Fuzz equipment slot.");
	AddTag(Equipment_Slot_Groom_Moustache, "Narrative.Equipment.Slot.Groom.Moustache", "Tag for the Moustache equipment slot.");
	AddTag(Equipment_Slot_Groom_Eyelashes, "Narrative.Equipment.Slot.Groom.Eyelashes", "Tag for the Eyelashes equipment slot.");

	//Mesh versions for facial hair - these are the ones that will likely be used by peoples games 
	AddTag(Equipment_Slot_Mesh_Eyebrows, "Narrative.Equipment.Slot.Mesh.Eyebrows", "Tag for the Eyebrows equipment slot.");
	AddTag(Equipment_Slot_Mesh_Hair, "Narrative.Equipment.Slot.Mesh.Hair", "Tag for the Hair equipment slot.");
	AddTag(Equipment_Slot_Mesh_Beard, "Narrative.Equipment.Slot.Mesh.Beard", "Tag for the Beard equipment slot.");
	AddTag(Equipment_Slot_Mesh_Fuzz, "Narrative.Equipment.Slot.Mesh.Fuzz", "Tag for the Fuzz equipment slot.");
	AddTag(Equipment_Slot_Mesh_Moustache, "Narrative.Equipment.Slot.Mesh.Moustache", "Tag for the Moustache equipment slot.");
	AddTag(Equipment_Slot_Mesh_Eyelashes, "Narrative.Equipment.Slot.Mesh.Eyelashes", "Tag for the Eyelashes equipment slot.");

	
	AddTag(Equipment_Slot_Character_Mesh, "Narrative.Equipment.Slot.Mesh.CharacterMesh", "The default skeletal mesh that exists on ACharacter. - ie Character.GetMesh()");
	AddTag(Equipment_Slot_Face, "Narrative.Equipment.Slot.Mesh.Face", "Tag for the Face equipment slot.");

	AddTag(Narrative_AnimSets_Flinch_Back, "Narrative.AnimSets.Flinch.Back", "Anim Set for flinching when hit from the back. ");
	AddTag(Narrative_AnimSets_Flinch_Left, "Narrative.AnimSets.Flinch.Left", "Anim Set for flinching when hit from the Left. ");
	AddTag(Narrative_AnimSets_Flinch_Right, "Narrative.AnimSets.Flinch.Right", "Anim Set for flinching when hit from the Right. ");
	AddTag(Narrative_AnimSets_Flinch_Forward, "Narrative.AnimSets.Flinch.Forward", "Anim Set for flinching when hit from the Forward. ");

	AddTag(Narrative_AnimSets_Stumble_Back, "Narrative.AnimSets.Stumble.Back", "Anim Set for stumbling when hit from the back. ");
	AddTag(Narrative_AnimSets_Stumble_Left, "Narrative.AnimSets.Stumble.Left", "Anim Set for stumbling when hit from the Left. ");
	AddTag(Narrative_AnimSets_Stumble_Right, "Narrative.AnimSets.Stumble.Right", "Anim Set for stumbling when hit from the Right. ");
	AddTag(Narrative_AnimSets_Stumble_Forward, "Narrative.AnimSets.Stumble.Forward", "Anim Set for stumbling when hit from the Forward. ");

	AddTag(Narrative_AnimSets_Attack_Unarmed_Light, "Narrative.AnimSets.Attacks.Unarmed.Light", "Anim Set for a normal unarmed punch attack.");
	AddTag(Narrative_AnimSets_Attack_Unarmed_Heavy, "Narrative.AnimSets.Attacks.Unarmed.Heavy", "Anim Set for a heavy unarmed punch attack.");

	AddTag(State_NPC_Activity_Idle, "Narrative.State.NPC.Activity.Idle", "Tag added to NPCs whilst they are running the idle activity.");
	AddTag(State_NPC_Activity_Following, "Narrative.State.NPC.Activity.Following", "Tag added to NPCs whilst they are running the FollowCharacter activity.");
	AddTag(State_NPC_Activity_Attacking, "Narrative.State.NPC.Activity.Attacking", "Tag added to NPCs whilst they are running the attacking activity.");

	AddTag(State_NPC_IsBusy, "Narrative.State.NPC.IsBusy", "Tag added to NPCs whilst they are busy and can't talk.");
	AddTag(State_NPC_IsAggressive, "Narrative.State.NPC.Aggressive", "Tag is added to NPCs that are aggressive towards someone.");
	AddTag(State_NPC_DisableAggro, "Narrative.State.NPC.DisableAggro", "When added to NPCs aggro will be disabled.");
	AddTag(State_Weapon_IsReloading, "Narrative.State.Weapon.Reloading", "Tag is added whilst character is reloading.");
	AddTag(State_Weapon_IsFiring, "Narrative.State.Weapon.Firing", "Tag is added whilst character is firing.");
	AddTag(State_Weapon_IsAiming, "Narrative.State.Weapon.Aiming", "Tag is added whilst character is aiming.");
	AddTag(State_Weapon_Equipping, "Narrative.State.Weapon.Equipping", "Tag is added whilst we our pulling our weapon out, but haven't yet equipped it.");
	AddTag(State_Weapon_Equipped, "Narrative.State.Weapon.Equipped", "Tag is added whilst our weapon out and ready to fire.");
	AddTag(State_Weapon_BlockFiring, "Narrative.State.Weapon.BlockFiring", "Tag will block fire ability.");
	AddTag(State_Weapon_Blocking, "Narrative.State.Weapon.Blocking", "True if we're blocking with a weapon that supports it.");
	AddTag(State_Weapon_ForceHolster, "Narrative.State.Weapon.ForceHolster", "Character contains code to force unequip the weapon whenever this tag is added. Handles re-equipping when tag is removed. ");
	AddTag(State_IsDead, "Narrative.State.IsDead", "Tag is added to characters that are dead. ");
	AddTag(State_Busy, "Narrative.State.Busy", "Tag is added to characters that are seated, stunned, etc. Will lock movement, prevent attacking, etc.");
	AddTag(State_Movement_Lock, "Narrative.State.Movement.Lock", "When added to a narrative character the move component will lock us in place. ");
	AddTag(State_Movement_Falling, "Narrative.State.Movement.Falling", "Added to character whilst character is falling so abilities and other GAS related things can check this via tag. ");
	AddTag(State_Movement_Swimming, "Narrative.State.Movement.Swimming", "Added to character whilst character is Swimming so abilities and other GAS related things can check this via tag. ");
	AddTag(State_Movement_Walking, "Narrative.State.Movement.Walking", "When added to a narrative character the movement will make us walk. ");
	AddTag(State_InvisibleToEnemies, "Narrative.State.InvisibleToEnemies", "Enemies will ignore this person if they have this tag.");
	AddTag(State_Invulnerable, "Narrative.State.Invulnerable", "If this tag is added to the owner damage will be nullified.");
	AddTag(State_BlockFastTravel, "Narrative.State.BlockFastTravel", "If the player has this tag we'll deny them the ability to fast travel.");
	AddTag(State_BlockSaving, "Narrative.State.BlockSaving", "If the player has this tag we'll deny them the ability to save their game.");
	AddTag(State_Interacting, "Narrative.State.Interacting", "Tag is added to characters that are interacting with something, a bench, a lever, etc. Added whilst interact abilities are running.");

	AddTag(TaggedDialogue_Greet, "Narrative.TaggedDialogue.Greet", "Fires the NPCs greet dialogue. 'Hello', 'How are you doing friend?' etc ");
	AddTag(TaggedDialogue_Farewell, "Narrative.TaggedDialogue.Farewell", "Fires the NPCs farewell dialogue. 'Farewell', 'See you later!' etc");
	AddTag(TaggedDialogue_Taunt, "Narrative.TaggedDialogue.Taunt", "Fires the NPCs taunt dialogue");
	AddTag(TaggedDialogue_BeginAttacking, "Narrative.TaggedDialogue.BeginAttacking", "Fires the NPCs begin attacking dialogue. 'You're going to regret coming here!', 'Its over for you!' ");
	AddTag(TaggedDialogue_Investigate_HeardSound_StartSearch, "Narrative.TaggedDialogue.Investigate.HeardSound.StartSearch", "Tagged dialogue we fire when an NPC starts investigating a sound - 'What was that!' ");
	AddTag(TaggedDialogue_Investigate_HeardSound_CouldntFindAnything, "Narrative.TaggedDialogue.Investigate.HeardSound.CouldntFindAnything", "Tagged dialogue we fire when an NPC started investigating a sound but couldnt find anything ");
	AddTag(TaggedDialogue_Investigate_HeardSound_FoundEnemy, "Narrative.TaggedDialogue.Investigate.HeardSound.FoundEnemy", "Tagged dialogue we fire when an NPC starts investigating a sound and finds an enemy ");
	AddTag(TaggedDialogue_Investigate_SearchForEnemy_StartSearch, "Narrative.TaggedDialogue.Investigate.SearchForEnemy.StartSearch", "Tagged dialogue we fire when an NPC starts searching for an enemy they lost sight of");
	AddTag(TaggedDialogue_Investigate_SearchForEnemy_FoundEnemy, "Narrative.TaggedDialogue.Investigate.SearchForEnemy.FoundEnemy", "Tagged dialogue we fire when an NPC finds an enemy after searching for them");
	AddTag(TaggedDialogue_Investigate_SearchForEnemy_CouldntFindEnemy, "Narrative.TaggedDialogue.Investigate.SearchForEnemy.CouldntFindEnemy", "Tagged dialogue we fire when an NPC couldnt find an NPC it tried searching for.");
	AddTag(TaggedDialogue_DidntFindEnemy, "Narrative.TaggedDialogue.DidntFindEnemy", "Fires the NPCs failed search for NPC, if an NPC cant find the footsteps. 'Huh, I guess I was just hearing things.' ");
	AddTag(TaggedDialogue_FriendlyFire, "Narrative.TaggedDialogue.FriendlyFire", "Fires the NPCs friendly fire dialogue, when you shoot a friendly. 'Ow, stop that!', etc. ");

	AddTag(GameplayEvent_KilledEnemy, "GameplayEvent.KilledEnemy", "Event that fires when we kill someone.");
	AddTag(GameplayEvent_NotifyHolster, "GameplayEvent.NotifyHolster", "Event that fires from the holster montage to indicate we should swap the weapon.");
	AddTag(GameplayEvent_Death, "GameplayEvent.Death", "Event that fires on death. This event only fires on the server.");
	AddTag(GameplayEvent_ToggleWield_On, "GameplayEvent.ToggleWield.On", "Event that fires when the player wants to wield a weapon. The weapon is passed via instigator tags.");
	AddTag(GameplayEvent_ToggleWield_Off, "GameplayEvent.ToggleWield.Off", "Event that fires when the player wants to unwield a weapon. The weapon is passed via instigator tags.");
	AddTag(GameplayEvent_Reload, "GameplayEvent.Reload", "Event that fires on Reload. ");
	AddTag(GameplayEvent_MeleeHit, "GameplayEvent.AttackApex", "Event that is sent when an abilities attack montage reaches its apex, ie when the wand should cast, sword should hit, etc.");
	AddTag(GameplayEvent_EndAttack, "GameplayEvent.EndAttack", "Event that fires from attack montage when the attack is done. This may be before the montage ends. ");
	AddTag(GameplayEvent_NotifyInteract, "GameplayEvent.NotifyInteract", "Event that fires from interact montage when our interactable needs to do something. ie lever pulled, switch pressed, etc.");
	AddTag(GameplayEvent_WantsEndInteract, "GameplayEvent.WantsEndInteract", "Event that fires when a character wants to end their interaction. ");

	AddTag(SetByCaller_Damage, "SetByCaller.Damage", "SetByCaller tag used by damage gameplay effects.");
	AddTag(SetByCaller_Duration, "SetByCaller.Duration", "SetByCaller tag used to define the duration of looping gameplay effects.");
	AddTag(SetByCaller_AttackDamage, "SetByCaller.AttackDamage", "SetByCaller tag used to add attack damage to our attributes.");
	AddTag(SetByCaller_AttackRating, "SetByCaller.AttackRating", "SetByCaller tag used to add attack rating damage to our attributes.");
	AddTag(SetByCaller_StealthRating, "SetByCaller.StealthRating", "SetByCaller tag used to add stealth rating damage to our attributes.");
	AddTag(SetByCaller_Health, "SetByCaller.Health", "SetByCaller tag used to add health to our attributes");
	AddTag(SetByCaller_MaxHealth, "SetByCaller.MaxHealth", "SetByCaller tag used to add max health to our attributes");
	AddTag(SetByCaller_Armor, "SetByCaller.Armor", "SetByCaller tag used to add armor rating damage to our attributes");
	AddTag(SetByCaller_Stamina, "SetByCaller.Stamina", "SetByCaller tag used to add stamina to our attributes.");
	AddTag(SetByCaller_MaxStamina, "SetByCaller.MaxStamina", "SetByCaller tag used to add max stamina to our attributes.");
	AddTag(SetByCaller_XP, "SetByCaller.XP", "SetByCaller tag used to add XP to our attributes.");
	AddTag(SetByCaller_Sneak, "SetByCaller.Sneak", "SetByCaller tag used to add Sneak to our attributes.");

	AddTag(Narrative_Settlements, "Narrative.Settlements", "Settlements should be added under this subtag.");
	AddTag(Narrative_POIs, "Narrative.POIs", "POIs should be added under this subtag.");
	AddTag(Narrative_Factions, "Narrative.Factions", "Factions should be added as subtags to this tag.");

	//These tags are used by the demo level. Feel free to remove them to clean up your project! 
	AddTag(Narrative_Settlements_Test_DemoHall, "Narrative.Settlements.Demo.DemoHall", "Demo settlement used by the demo level that comes with Narrative Pro.");
	AddTag(Narrative_Settlements_Test_BanditCamp, "Narrative.Settlements.Demo.BanditCamp", "Demo settlement used by the demo level that comes with Narrative Pro.");
	AddTag(Narrative_Settlements_Test_WeaponStore, "Narrative.Settlements.Demo.WeaponStore", "Demo settlement used by the demo level that comes with Narrative Pro.");
	AddTag(Narrative_Factions_Heroes, "Narrative.Factions.Heroes", "Demo heroes faction used by the demo level.");
	AddTag(Narrative_Factions_Bandits, "Narrative.Factions.Bandits", "Demo bandits faction used by the demo level.");

	AddTag(Narrative_Factions_FriendlyAll, "Narrative.Factions.FriendlyAll", "This faction will be Friendly to all factions");
	AddTag(Narrative_Factions_HostileOthers, "Narrative.Factions.HostileOthers", "This faction will be hostile to other factions");
	AddTag(Narrative_Factions_HostileAll, "Narrative.Factions.HostileAll", "This faction will be hostile to other factions");

	AddTag(Narrative_POIs_Test_DemoHall, "Narrative.POIs.Demo.DemoHall", "Demo POI used by the demo level that comes with Narrative Pro.");
	AddTag(Narrative_POIs_Test_BanditCamp, "Narrative.POIs.Demo.BanditCamp", "Demo POI used by the demo level that comes with Narrative Pro.");
	AddTag(Narrative_POIs_Test_WeaponStore, "Narrative.POIs.Demo.WeaponStore", "Demo POI used by the demo level that comes with Narrative Pro.");
}

void FNarrativeGameplayTags::AddTag(FGameplayTag& OutTag, const ANSICHAR* TagName, const ANSICHAR* TagComment)
{
	OutTag = UGameplayTagsManager::Get().AddNativeGameplayTag(FName(TagName), FString(TEXT("(Native) ")) + FString(TagComment));
}

FGameplayTag FNarrativeGameplayTags::FindTagByString(FString TagString, bool bMatchPartialString)
{
	const UGameplayTagsManager& Manager = UGameplayTagsManager::Get();
	FGameplayTag Tag = Manager.RequestGameplayTag(FName(*TagString), false);

	if (!Tag.IsValid() && bMatchPartialString)
	{
		FGameplayTagContainer AllTags;
		Manager.RequestAllGameplayTags(AllTags, true);

		for (const FGameplayTag TestTag : AllTags)
		{
			if (TestTag.ToString().Contains(TagString))
			{
				UE_LOG(LogTemp, Display, TEXT("Could not find exact match for tag [%s] but found partial match on tag [%s]."), *TagString, *TestTag.ToString());
				Tag = TestTag;
				break;
			}
		}
	}

	return Tag;
}
