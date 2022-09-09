#pragma once

#include "natives.h"
#include "joaat.h"

enum WeaponHashes : Hash
{
	WEAPON_ADVANCEDRIFLE = RAGE_JOAAT("WEAPON_ADVANCEDRIFLE"),
	WEAPON_APPISTOL = RAGE_JOAAT("WEAPON_APPISTOL"),
	WEAPON_ASSAULTRIFLE = RAGE_JOAAT("WEAPON_ASSAULTRIFLE"),
	WEAPON_ASSAULTRIFLE_MK2 = RAGE_JOAAT("WEAPON_ASSAULTRIFLE_MK2"),
	WEAPON_ASSAULTSHOTGUN = RAGE_JOAAT("WEAPON_ASSAULTSHOTGUN"),
	WEAPON_ASSAULTSMG = RAGE_JOAAT("WEAPON_ASSAULTSMG"),
	WEAPON_BALL = RAGE_JOAAT("WEAPON_BALL"),
	WEAPON_BAT = RAGE_JOAAT("WEAPON_BAT"),
	WEAPON_BATTLEAXE = RAGE_JOAAT("WEAPON_BATTLEAXE"),
	WEAPON_BOTTLE = RAGE_JOAAT("WEAPON_BOTTLE"),
	WEAPON_BULLPUPRIFLE = RAGE_JOAAT("WEAPON_BULLPUPRIFLE"),
	WEAPON_BULLPUPRIFLE_MK2 = RAGE_JOAAT("WEAPON_BULLPUPRIFLE_MK2"),
	WEAPON_BULLPUPSHOTGUN = RAGE_JOAAT("WEAPON_BULLPUPSHOTGUN"),
	WEAPON_BZGAS = RAGE_JOAAT("WEAPON_BZGAS"),
	WEAPON_CARBINERIFLE = RAGE_JOAAT("WEAPON_CARBINERIFLE"),
	WEAPON_CARBINERIFLE_MK2 = RAGE_JOAAT("WEAPON_CARBINERIFLE_MK2"),
	WEAPON_COMBATMG = RAGE_JOAAT("WEAPON_COMBATMG"),
	WEAPON_COMBATMG_MK2 = RAGE_JOAAT("WEAPON_COMBATMG_MK2"),
	WEAPON_COMBATPDW = RAGE_JOAAT("WEAPON_COMBATPDW"),
	WEAPON_COMBATPISTOL = RAGE_JOAAT("WEAPON_COMBATPISTOL"),
	WEAPON_COMPACTLAUNCHER = RAGE_JOAAT("WEAPON_COMPACTLAUNCHER"),
	WEAPON_COMPACTRIFLE = RAGE_JOAAT("WEAPON_COMPACTRIFLE"),
	WEAPON_CROWBAR = RAGE_JOAAT("WEAPON_CROWBAR"),
	WEAPON_DAGGER = RAGE_JOAAT("WEAPON_DAGGER"),
	WEAPON_DOUBLEACTION = RAGE_JOAAT("WEAPON_DOUBLEACTION"),
	WEAPON_FIREEXTINGUISHER = RAGE_JOAAT("WEAPON_FIREEXTINGUISHER"),
	WEAPON_FIREWORK = RAGE_JOAAT("WEAPON_FIREWORK"),
	WEAPON_FLARE = RAGE_JOAAT("WEAPON_FLARE"),
	WEAPON_FLAREGUN = RAGE_JOAAT("WEAPON_FLAREGUN"),
	WEAPON_FLASHLIGHT = RAGE_JOAAT("WEAPON_FLASHLIGHT"),
	WEAPON_GOLFCLUB = RAGE_JOAAT("WEAPON_GOLFCLUB"),
	WEAPON_GRENADE = RAGE_JOAAT("WEAPON_GRENADE"),
	WEAPON_GRENADELAUNCHER = RAGE_JOAAT("WEAPON_GRENADELAUNCHER"),
	WEAPON_GRENADELAUNCHER_SMOKE = RAGE_JOAAT("WEAPON_GRENADELAUNCHER_SMOKE"),
	WEAPON_GUSENBERG = RAGE_JOAAT("WEAPON_GUSENBERG"),
	WEAPON_HAMMER = RAGE_JOAAT("WEAPON_HAMMER"),
	WEAPON_HATCHET = RAGE_JOAAT("WEAPON_HATCHET"),
	WEAPON_HEAVYPISTOL = RAGE_JOAAT("WEAPON_HEAVYPISTOL"),
	WEAPON_HEAVYSHOTGUN = RAGE_JOAAT("WEAPON_HEAVYSHOTGUN"),
	WEAPON_HEAVYSNIPER = RAGE_JOAAT("WEAPON_HEAVYSNIPER"),
	WEAPON_HEAVYSNIPER_MK2 = RAGE_JOAAT("WEAPON_HEAVYSNIPER_MK2"),
	WEAPON_HOMINGLAUNCHER = RAGE_JOAAT("WEAPON_HOMINGLAUNCHER"),
	WEAPON_KNIFE = RAGE_JOAAT("WEAPON_KNIFE"),
	WEAPON_KNUCKLE = RAGE_JOAAT("WEAPON_KNUCKLE"),
	WEAPON_MACHETE = RAGE_JOAAT("WEAPON_MACHETE"),
	WEAPON_MACHINEPISTOL = RAGE_JOAAT("WEAPON_MACHINEPISTOL"),
	WEAPON_MARKSMANPISTOL = RAGE_JOAAT("WEAPON_MARKSMANPISTOL"),
	WEAPON_MARKSMANRIFLE = RAGE_JOAAT("WEAPON_MARKSMANRIFLE"),
	WEAPON_MARKSMANRIFLE_MK2 = RAGE_JOAAT("WEAPON_MARKSMANRIFLE_MK2"),
	WEAPON_MG = RAGE_JOAAT("WEAPON_MG"),
	WEAPON_MICROSMG = RAGE_JOAAT("WEAPON_MICROSMG"),
	WEAPON_MINIGUN = RAGE_JOAAT("WEAPON_MINIGUN"),
	WEAPON_MINISMG = RAGE_JOAAT("WEAPON_MINISMG"),
	WEAPON_MOLOTOV = RAGE_JOAAT("WEAPON_MOLOTOV"),
	WEAPON_MUSKET = RAGE_JOAAT("WEAPON_MUSKET"),
	WEAPON_NIGHTSTICK = RAGE_JOAAT("WEAPON_NIGHTSTICK"),
	WEAPON_PETROLCAN = RAGE_JOAAT("WEAPON_PETROLCAN"),
	WEAPON_PIPEBOMB = RAGE_JOAAT("WEAPON_PIPEBOMB"),
	WEAPON_PISTOL50 = RAGE_JOAAT("WEAPON_PISTOL50"),
	WEAPON_PISTOL = RAGE_JOAAT("WEAPON_PISTOL"),
	WEAPON_PISTOL_MK2 = RAGE_JOAAT("WEAPON_PISTOL_MK2"),
	WEAPON_POOLCUE = RAGE_JOAAT("WEAPON_POOLCUE"),
	WEAPON_PROXMINE = RAGE_JOAAT("WEAPON_PROXMINE"),
	WEAPON_PUMPSHOTGUN = RAGE_JOAAT("WEAPON_PUMPSHOTGUN"),
	WEAPON_PUMPSHOTGUN_MK2 = RAGE_JOAAT("WEAPON_PUMPSHOTGUN_MK2"),
	WEAPON_RAILGUN = RAGE_JOAAT("WEAPON_RAILGUN"),
	WEAPON_RAYCARBINE = RAGE_JOAAT("WEAPON_RAYCARBINE"),
	WEAPON_RAYPISTOL = RAGE_JOAAT("WEAPON_RAYPISTOL"),
	WEAPON_RAYMINIGUN = RAGE_JOAAT("WEAPON_RAYMINIGUN"),
	WEAPON_REVOLVER = RAGE_JOAAT("WEAPON_REVOLVER"),
	WEAPON_REVOLVER_MK2 = RAGE_JOAAT("WEAPON_REVOLVER_MK2"),
	WEAPON_RPG = RAGE_JOAAT("WEAPON_RPG"),
	WEAPON_SAWNOFFSHOTGUN = RAGE_JOAAT("WEAPON_SAWNOFFSHOTGUN"),
	WEAPON_SMG = RAGE_JOAAT("WEAPON_SMG"),
	WEAPON_SMG_MK2 = RAGE_JOAAT("WEAPON_SMG_MK2"),
	WEAPON_SMOKEGRENADE = RAGE_JOAAT("WEAPON_SMOKEGRENADE"),
	WEAPON_SNIPERRIFLE = RAGE_JOAAT("WEAPON_SNIPERRIFLE"),
	WEAPON_SNOWBALL = RAGE_JOAAT("WEAPON_SNOWBALL"),
	WEAPON_SNSPISTOL = RAGE_JOAAT("WEAPON_SNSPISTOL"),
	WEAPON_SNSPISTOL_MK2 = RAGE_JOAAT("WEAPON_SNSPISTOL_MK2"),
	WEAPON_SPECIALCARBINE = RAGE_JOAAT("WEAPON_SPECIALCARBINE"),
	WEAPON_SPECIALCARBINE_MK2 = RAGE_JOAAT("WEAPON_SPECIALCARBINE_MK2"),
	WEAPON_STICKYBOMB = RAGE_JOAAT("WEAPON_STICKYBOMB"),
	WEAPON_STINGER = RAGE_JOAAT("WEAPON_STINGER"),
	WEAPON_STONE_HATCHET = RAGE_JOAAT("WEAPON_STONE_HATCHET"),
	WEAPON_STUNGUN = RAGE_JOAAT("WEAPON_STUNGUN"),
	WEAPON_SWITCHBLADE = RAGE_JOAAT("WEAPON_SWITCHBLADE"),
	WEAPON_UNARMED = RAGE_JOAAT("WEAPON_UNARMED"),
	WEAPON_VINTAGEPISTOL = RAGE_JOAAT("WEAPON_VINTAGEPISTOL"),
	WEAPON_WRENCH = RAGE_JOAAT("WEAPON_WRENCH"),
};

enum Gadgets : Hash
{
	GADGET_OBJECT = RAGE_JOAAT("OBJECT"),
	GADGET_PARACHUTE = RAGE_JOAAT("GADGET_PARACHUTE")
};

enum WeaponComponents : Hash
{
	COMPONENT_ADVANCEDRIFLE_CLIP_01 = RAGE_JOAAT("COMPONENT_ADVANCEDRIFLE_CLIP_01"),
	COMPONENT_ADVANCEDRIFLE_CLIP_02 = RAGE_JOAAT("COMPONENT_ADVANCEDRIFLE_CLIP_02"),
	COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE = RAGE_JOAAT("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"),
	COMPONENT_APPISTOL_CLIP_01 = RAGE_JOAAT("COMPONENT_APPISTOL_CLIP_01"),
	COMPONENT_APPISTOL_CLIP_02 = RAGE_JOAAT("COMPONENT_APPISTOL_CLIP_02"),
	COMPONENT_APPISTOL_VARMOD_LUXE = RAGE_JOAAT("COMPONENT_APPISTOL_VARMOD_LUXE"),
	COMPONENT_ASSAULTRIFLE_CLIP_01 = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_CLIP_01"),
	COMPONENT_ASSAULTRIFLE_CLIP_02 = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_CLIP_02"),
	COMPONENT_ASSAULTRIFLE_CLIP_03 = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_CLIP_03"),
	COMPONENT_ASSAULTRIFLE_MK2_CAMO = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_MK2_CAMO"),
	COMPONENT_ASSAULTRIFLE_MK2_CAMO_02 = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"),
	COMPONENT_ASSAULTRIFLE_MK2_CAMO_03 = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"),
	COMPONENT_ASSAULTRIFLE_MK2_CAMO_04 = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"),
	COMPONENT_ASSAULTRIFLE_MK2_CAMO_05 = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"),
	COMPONENT_ASSAULTRIFLE_MK2_CAMO_06 = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"),
	COMPONENT_ASSAULTRIFLE_MK2_CAMO_07 = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"),
	COMPONENT_ASSAULTRIFLE_MK2_CAMO_08 = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"),
	COMPONENT_ASSAULTRIFLE_MK2_CAMO_09 = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"),
	COMPONENT_ASSAULTRIFLE_MK2_CAMO_10 = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"),
	COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01 = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"),
	COMPONENT_ASSAULTRIFLE_MK2_CLIP_01 = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"),
	COMPONENT_ASSAULTRIFLE_MK2_CLIP_02 = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"),
	COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"),
	COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"),
	COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"),
	COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"),
	COMPONENT_ASSAULTRIFLE_VARMOD_LUXE = RAGE_JOAAT("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"),
	COMPONENT_ASSAULTSHOTGUN_CLIP_01 = RAGE_JOAAT("COMPONENT_ASSAULTSHOTGUN_CLIP_01"),
	COMPONENT_ASSAULTSHOTGUN_CLIP_02 = RAGE_JOAAT("COMPONENT_ASSAULTSHOTGUN_CLIP_02"),
	COMPONENT_ASSAULTSMG_CLIP_01 = RAGE_JOAAT("COMPONENT_ASSAULTSMG_CLIP_01"),
	COMPONENT_ASSAULTSMG_CLIP_02 = RAGE_JOAAT("COMPONENT_ASSAULTSMG_CLIP_02"),
	COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER = RAGE_JOAAT("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"),
	COMPONENT_AT_AR_AFGRIP = RAGE_JOAAT("COMPONENT_AT_AR_AFGRIP"),
	COMPONENT_AT_AR_AFGRIP_02 = RAGE_JOAAT("COMPONENT_AT_AR_AFGRIP_02"),
	COMPONENT_AT_AR_BARREL_01 = RAGE_JOAAT("COMPONENT_AT_AR_BARREL_01"),
	COMPONENT_AT_AR_BARREL_02 = RAGE_JOAAT("COMPONENT_AT_AR_BARREL_02"),
	COMPONENT_AT_AR_FLSH = RAGE_JOAAT("COMPONENT_AT_AR_FLSH"),
	COMPONENT_AT_AR_SUPP = RAGE_JOAAT("COMPONENT_AT_AR_SUPP"),
	COMPONENT_AT_AR_SUPP_02 = RAGE_JOAAT("COMPONENT_AT_AR_SUPP_02"),
	COMPONENT_AT_BP_BARREL_01 = RAGE_JOAAT("COMPONENT_AT_BP_BARREL_01"),
	COMPONENT_AT_BP_BARREL_02 = RAGE_JOAAT("COMPONENT_AT_BP_BARREL_02"),
	COMPONENT_AT_CR_BARREL_01 = RAGE_JOAAT("COMPONENT_AT_CR_BARREL_01"),
	COMPONENT_AT_CR_BARREL_02 = RAGE_JOAAT("COMPONENT_AT_CR_BARREL_02"),
	COMPONENT_AT_MG_BARREL_01 = RAGE_JOAAT("COMPONENT_AT_MG_BARREL_01"),
	COMPONENT_AT_MG_BARREL_02 = RAGE_JOAAT("COMPONENT_AT_MG_BARREL_02"),
	COMPONENT_AT_MRFL_BARREL_01 = RAGE_JOAAT("COMPONENT_AT_MRFL_BARREL_01"),
	COMPONENT_AT_MRFL_BARREL_02 = RAGE_JOAAT("COMPONENT_AT_MRFL_BARREL_02"),
	COMPONENT_AT_MUZZLE_01 = RAGE_JOAAT("COMPONENT_AT_MUZZLE_01"),
	COMPONENT_AT_MUZZLE_02 = RAGE_JOAAT("COMPONENT_AT_MUZZLE_02"),
	COMPONENT_AT_MUZZLE_03 = RAGE_JOAAT("COMPONENT_AT_MUZZLE_03"),
	COMPONENT_AT_MUZZLE_04 = RAGE_JOAAT("COMPONENT_AT_MUZZLE_04"),
	COMPONENT_AT_MUZZLE_05 = RAGE_JOAAT("COMPONENT_AT_MUZZLE_05"),
	COMPONENT_AT_MUZZLE_06 = RAGE_JOAAT("COMPONENT_AT_MUZZLE_06"),
	COMPONENT_AT_MUZZLE_07 = RAGE_JOAAT("COMPONENT_AT_MUZZLE_07"),
	COMPONENT_AT_MUZZLE_08 = RAGE_JOAAT("COMPONENT_AT_MUZZLE_08"),
	COMPONENT_AT_MUZZLE_09 = RAGE_JOAAT("COMPONENT_AT_MUZZLE_09"),
	COMPONENT_AT_PI_COMP = RAGE_JOAAT("COMPONENT_AT_PI_COMP"),
	COMPONENT_AT_PI_COMP_02 = RAGE_JOAAT("COMPONENT_AT_PI_COMP_02"),
	COMPONENT_AT_PI_COMP_03 = RAGE_JOAAT("COMPONENT_AT_PI_COMP_03"),
	COMPONENT_AT_PI_FLSH = RAGE_JOAAT("COMPONENT_AT_PI_FLSH"),
	COMPONENT_AT_PI_FLSH_02 = RAGE_JOAAT("COMPONENT_AT_PI_FLSH_02"),
	COMPONENT_AT_PI_FLSH_03 = RAGE_JOAAT("COMPONENT_AT_PI_FLSH_03"),
	COMPONENT_AT_PI_RAIL = RAGE_JOAAT("COMPONENT_AT_PI_RAIL"),
	COMPONENT_AT_PI_RAIL_02 = RAGE_JOAAT("COMPONENT_AT_PI_RAIL_02"),
	COMPONENT_AT_PI_SUPP = RAGE_JOAAT("COMPONENT_AT_PI_SUPP"),
	COMPONENT_AT_PI_SUPP_02 = RAGE_JOAAT("COMPONENT_AT_PI_SUPP_02"),
	COMPONENT_AT_SB_BARREL_01 = RAGE_JOAAT("COMPONENT_AT_SB_BARREL_01"),
	COMPONENT_AT_SB_BARREL_02 = RAGE_JOAAT("COMPONENT_AT_SB_BARREL_02"),
	COMPONENT_AT_SCOPE_LARGE = RAGE_JOAAT("COMPONENT_AT_SCOPE_LARGE"),
	COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM = RAGE_JOAAT("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"),
	COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2 = RAGE_JOAAT("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"),
	COMPONENT_AT_SCOPE_LARGE_MK2 = RAGE_JOAAT("COMPONENT_AT_SCOPE_LARGE_MK2"),
	COMPONENT_AT_SCOPE_MACRO = RAGE_JOAAT("COMPONENT_AT_SCOPE_MACRO"),
	COMPONENT_AT_SCOPE_MACRO_02 = RAGE_JOAAT("COMPONENT_AT_SCOPE_MACRO_02"),
	COMPONENT_AT_SCOPE_MACRO_02_MK2 = RAGE_JOAAT("COMPONENT_AT_SCOPE_MACRO_02_MK2"),
	COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2 = RAGE_JOAAT("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"),
	COMPONENT_AT_SCOPE_MACRO_MK2 = RAGE_JOAAT("COMPONENT_AT_SCOPE_MACRO_MK2"),
	COMPONENT_AT_SCOPE_MAX = RAGE_JOAAT("COMPONENT_AT_SCOPE_MAX"),
	COMPONENT_AT_SCOPE_MEDIUM = RAGE_JOAAT("COMPONENT_AT_SCOPE_MEDIUM"),
	COMPONENT_AT_SCOPE_MEDIUM_MK2 = RAGE_JOAAT("COMPONENT_AT_SCOPE_MEDIUM_MK2"),
	COMPONENT_AT_SCOPE_NV = RAGE_JOAAT("COMPONENT_AT_SCOPE_NV"),
	COMPONENT_AT_SCOPE_SMALL = RAGE_JOAAT("COMPONENT_AT_SCOPE_SMALL"),
	COMPONENT_AT_SCOPE_SMALL_02 = RAGE_JOAAT("COMPONENT_AT_SCOPE_SMALL_02"),
	COMPONENT_AT_SCOPE_SMALL_MK2 = RAGE_JOAAT("COMPONENT_AT_SCOPE_SMALL_MK2"),
	COMPONENT_AT_SCOPE_SMALL_SMG_MK2 = RAGE_JOAAT("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"),
	COMPONENT_AT_SCOPE_THERMAL = RAGE_JOAAT("COMPONENT_AT_SCOPE_THERMAL"),
	COMPONENT_AT_SC_BARREL_01 = RAGE_JOAAT("COMPONENT_AT_SC_BARREL_01"),
	COMPONENT_AT_SC_BARREL_02 = RAGE_JOAAT("COMPONENT_AT_SC_BARREL_02"),
	COMPONENT_AT_SIGHTS = RAGE_JOAAT("COMPONENT_AT_SIGHTS"),
	COMPONENT_AT_SIGHTS_SMG = RAGE_JOAAT("COMPONENT_AT_SIGHTS_SMG"),
	COMPONENT_AT_SR_BARREL_01 = RAGE_JOAAT("COMPONENT_AT_SR_BARREL_01"),
	COMPONENT_AT_SR_BARREL_02 = RAGE_JOAAT("COMPONENT_AT_SR_BARREL_02"),
	COMPONENT_AT_SR_SUPP = RAGE_JOAAT("COMPONENT_AT_SR_SUPP"),
	COMPONENT_AT_SR_SUPP_03 = RAGE_JOAAT("COMPONENT_AT_SR_SUPP_03"),
	COMPONENT_BULLPUPRIFLE_CLIP_01 = RAGE_JOAAT("COMPONENT_BULLPUPRIFLE_CLIP_01"),
	COMPONENT_BULLPUPRIFLE_CLIP_02 = RAGE_JOAAT("COMPONENT_BULLPUPRIFLE_CLIP_02"),
	COMPONENT_BULLPUPRIFLE_MK2_CAMO = RAGE_JOAAT("COMPONENT_BULLPUPRIFLE_MK2_CAMO"),
	COMPONENT_BULLPUPRIFLE_MK2_CAMO_02 = RAGE_JOAAT("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"),
	COMPONENT_BULLPUPRIFLE_MK2_CAMO_03 = RAGE_JOAAT("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"),
	COMPONENT_BULLPUPRIFLE_MK2_CAMO_04 = RAGE_JOAAT("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"),
	COMPONENT_BULLPUPRIFLE_MK2_CAMO_05 = RAGE_JOAAT("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"),
	COMPONENT_BULLPUPRIFLE_MK2_CAMO_06 = RAGE_JOAAT("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"),
	COMPONENT_BULLPUPRIFLE_MK2_CAMO_07 = RAGE_JOAAT("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"),
	COMPONENT_BULLPUPRIFLE_MK2_CAMO_08 = RAGE_JOAAT("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"),
	COMPONENT_BULLPUPRIFLE_MK2_CAMO_09 = RAGE_JOAAT("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"),
	COMPONENT_BULLPUPRIFLE_MK2_CAMO_10 = RAGE_JOAAT("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"),
	COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01 = RAGE_JOAAT("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"),
	COMPONENT_BULLPUPRIFLE_MK2_CLIP_01 = RAGE_JOAAT("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"),
	COMPONENT_BULLPUPRIFLE_MK2_CLIP_02 = RAGE_JOAAT("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"),
	COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING = RAGE_JOAAT("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"),
	COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ = RAGE_JOAAT("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"),
	COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY = RAGE_JOAAT("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"),
	COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER = RAGE_JOAAT("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"),
	COMPONENT_BULLPUPRIFLE_VARMOD_LOW = RAGE_JOAAT("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"),
	COMPONENT_CARBINERIFLE_CLIP_01 = RAGE_JOAAT("COMPONENT_CARBINERIFLE_CLIP_01"),
	COMPONENT_CARBINERIFLE_CLIP_02 = RAGE_JOAAT("COMPONENT_CARBINERIFLE_CLIP_02"),
	COMPONENT_CARBINERIFLE_CLIP_03 = RAGE_JOAAT("COMPONENT_CARBINERIFLE_CLIP_03"),
	COMPONENT_CARBINERIFLE_MK2_CAMO = RAGE_JOAAT("COMPONENT_CARBINERIFLE_MK2_CAMO"),
	COMPONENT_CARBINERIFLE_MK2_CAMO_02 = RAGE_JOAAT("COMPONENT_CARBINERIFLE_MK2_CAMO_02"),
	COMPONENT_CARBINERIFLE_MK2_CAMO_03 = RAGE_JOAAT("COMPONENT_CARBINERIFLE_MK2_CAMO_03"),
	COMPONENT_CARBINERIFLE_MK2_CAMO_04 = RAGE_JOAAT("COMPONENT_CARBINERIFLE_MK2_CAMO_04"),
	COMPONENT_CARBINERIFLE_MK2_CAMO_05 = RAGE_JOAAT("COMPONENT_CARBINERIFLE_MK2_CAMO_05"),
	COMPONENT_CARBINERIFLE_MK2_CAMO_06 = RAGE_JOAAT("COMPONENT_CARBINERIFLE_MK2_CAMO_06"),
	COMPONENT_CARBINERIFLE_MK2_CAMO_07 = RAGE_JOAAT("COMPONENT_CARBINERIFLE_MK2_CAMO_07"),
	COMPONENT_CARBINERIFLE_MK2_CAMO_08 = RAGE_JOAAT("COMPONENT_CARBINERIFLE_MK2_CAMO_08"),
	COMPONENT_CARBINERIFLE_MK2_CAMO_09 = RAGE_JOAAT("COMPONENT_CARBINERIFLE_MK2_CAMO_09"),
	COMPONENT_CARBINERIFLE_MK2_CAMO_10 = RAGE_JOAAT("COMPONENT_CARBINERIFLE_MK2_CAMO_10"),
	COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01 = RAGE_JOAAT("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"),
	COMPONENT_CARBINERIFLE_MK2_CLIP_01 = RAGE_JOAAT("COMPONENT_CARBINERIFLE_MK2_CLIP_01"),
	COMPONENT_CARBINERIFLE_MK2_CLIP_02 = RAGE_JOAAT("COMPONENT_CARBINERIFLE_MK2_CLIP_02"),
	COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING = RAGE_JOAAT("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"),
	COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ = RAGE_JOAAT("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"),
	COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY = RAGE_JOAAT("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"),
	COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER = RAGE_JOAAT("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"),
	COMPONENT_CARBINERIFLE_VARMOD_LUXE = RAGE_JOAAT("COMPONENT_CARBINERIFLE_VARMOD_LUXE"),
	COMPONENT_COMBATMG_CLIP_01 = RAGE_JOAAT("COMPONENT_COMBATMG_CLIP_01"),
	COMPONENT_COMBATMG_CLIP_02 = RAGE_JOAAT("COMPONENT_COMBATMG_CLIP_02"),
	COMPONENT_COMBATMG_MK2_CAMO = RAGE_JOAAT("COMPONENT_COMBATMG_MK2_CAMO"),
	COMPONENT_COMBATMG_MK2_CAMO_02 = RAGE_JOAAT("COMPONENT_COMBATMG_MK2_CAMO_02"),
	COMPONENT_COMBATMG_MK2_CAMO_03 = RAGE_JOAAT("COMPONENT_COMBATMG_MK2_CAMO_03"),
	COMPONENT_COMBATMG_MK2_CAMO_04 = RAGE_JOAAT("COMPONENT_COMBATMG_MK2_CAMO_04"),
	COMPONENT_COMBATMG_MK2_CAMO_05 = RAGE_JOAAT("COMPONENT_COMBATMG_MK2_CAMO_05"),
	COMPONENT_COMBATMG_MK2_CAMO_06 = RAGE_JOAAT("COMPONENT_COMBATMG_MK2_CAMO_06"),
	COMPONENT_COMBATMG_MK2_CAMO_07 = RAGE_JOAAT("COMPONENT_COMBATMG_MK2_CAMO_07"),
	COMPONENT_COMBATMG_MK2_CAMO_08 = RAGE_JOAAT("COMPONENT_COMBATMG_MK2_CAMO_08"),
	COMPONENT_COMBATMG_MK2_CAMO_09 = RAGE_JOAAT("COMPONENT_COMBATMG_MK2_CAMO_09"),
	COMPONENT_COMBATMG_MK2_CAMO_10 = RAGE_JOAAT("COMPONENT_COMBATMG_MK2_CAMO_10"),
	COMPONENT_COMBATMG_MK2_CAMO_IND_01 = RAGE_JOAAT("COMPONENT_COMBATMG_MK2_CAMO_IND_01"),
	COMPONENT_COMBATMG_MK2_CLIP_01 = RAGE_JOAAT("COMPONENT_COMBATMG_MK2_CLIP_01"),
	COMPONENT_COMBATMG_MK2_CLIP_02 = RAGE_JOAAT("COMPONENT_COMBATMG_MK2_CLIP_02"),
	COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING = RAGE_JOAAT("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"),
	COMPONENT_COMBATMG_MK2_CLIP_FMJ = RAGE_JOAAT("COMPONENT_COMBATMG_MK2_CLIP_FMJ"),
	COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY = RAGE_JOAAT("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"),
	COMPONENT_COMBATMG_MK2_CLIP_TRACER = RAGE_JOAAT("COMPONENT_COMBATMG_MK2_CLIP_TRACER"),
	COMPONENT_COMBATMG_VARMOD_LOWRIDER = RAGE_JOAAT("COMPONENT_COMBATMG_VARMOD_LOWRIDER"),
	COMPONENT_COMBATPDW_CLIP_01 = RAGE_JOAAT("COMPONENT_COMBATPDW_CLIP_01"),
	COMPONENT_COMBATPDW_CLIP_02 = RAGE_JOAAT("COMPONENT_COMBATPDW_CLIP_02"),
	COMPONENT_COMBATPDW_CLIP_03 = RAGE_JOAAT("COMPONENT_COMBATPDW_CLIP_03"),
	COMPONENT_COMBATPISTOL_CLIP_01 = RAGE_JOAAT("COMPONENT_COMBATPISTOL_CLIP_01"),
	COMPONENT_COMBATPISTOL_CLIP_02 = RAGE_JOAAT("COMPONENT_COMBATPISTOL_CLIP_02"),
	COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER = RAGE_JOAAT("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"),
	COMPONENT_COMPACTRIFLE_CLIP_01 = RAGE_JOAAT("COMPONENT_COMPACTRIFLE_CLIP_01"),
	COMPONENT_COMPACTRIFLE_CLIP_02 = RAGE_JOAAT("COMPONENT_COMPACTRIFLE_CLIP_02"),
	COMPONENT_COMPACTRIFLE_CLIP_03 = RAGE_JOAAT("COMPONENT_COMPACTRIFLE_CLIP_03"),
	COMPONENT_GRENADELAUNCHER_CLIP_01 = RAGE_JOAAT("COMPONENT_GRENADELAUNCHER_CLIP_01"),
	COMPONENT_GUSENBERG_CLIP_01 = RAGE_JOAAT("COMPONENT_GUSENBERG_CLIP_01"),
	COMPONENT_GUSENBERG_CLIP_02 = RAGE_JOAAT("COMPONENT_GUSENBERG_CLIP_02"),
	COMPONENT_HEAVYPISTOL_CLIP_01 = RAGE_JOAAT("COMPONENT_HEAVYPISTOL_CLIP_01"),
	COMPONENT_HEAVYPISTOL_CLIP_02 = RAGE_JOAAT("COMPONENT_HEAVYPISTOL_CLIP_02"),
	COMPONENT_HEAVYPISTOL_VARMOD_LUXE = RAGE_JOAAT("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"),
	COMPONENT_HEAVYSHOTGUN_CLIP_01 = RAGE_JOAAT("COMPONENT_HEAVYSHOTGUN_CLIP_01"),
	COMPONENT_HEAVYSHOTGUN_CLIP_02 = RAGE_JOAAT("COMPONENT_HEAVYSHOTGUN_CLIP_02"),
	COMPONENT_HEAVYSHOTGUN_CLIP_03 = RAGE_JOAAT("COMPONENT_HEAVYSHOTGUN_CLIP_03"),
	COMPONENT_HEAVYSNIPER_CLIP_01 = RAGE_JOAAT("COMPONENT_HEAVYSNIPER_CLIP_01"),
	COMPONENT_HEAVYSNIPER_MK2_CAMO = RAGE_JOAAT("COMPONENT_HEAVYSNIPER_MK2_CAMO"),
	COMPONENT_HEAVYSNIPER_MK2_CAMO_02 = RAGE_JOAAT("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"),
	COMPONENT_HEAVYSNIPER_MK2_CAMO_03 = RAGE_JOAAT("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"),
	COMPONENT_HEAVYSNIPER_MK2_CAMO_04 = RAGE_JOAAT("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"),
	COMPONENT_HEAVYSNIPER_MK2_CAMO_05 = RAGE_JOAAT("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"),
	COMPONENT_HEAVYSNIPER_MK2_CAMO_06 = RAGE_JOAAT("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"),
	COMPONENT_HEAVYSNIPER_MK2_CAMO_07 = RAGE_JOAAT("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"),
	COMPONENT_HEAVYSNIPER_MK2_CAMO_08 = RAGE_JOAAT("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"),
	COMPONENT_HEAVYSNIPER_MK2_CAMO_09 = RAGE_JOAAT("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"),
	COMPONENT_HEAVYSNIPER_MK2_CAMO_10 = RAGE_JOAAT("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"),
	COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01 = RAGE_JOAAT("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"),
	COMPONENT_HEAVYSNIPER_MK2_CLIP_01 = RAGE_JOAAT("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"),
	COMPONENT_HEAVYSNIPER_MK2_CLIP_02 = RAGE_JOAAT("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"),
	COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING = RAGE_JOAAT("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"),
	COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE = RAGE_JOAAT("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"),
	COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ = RAGE_JOAAT("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"),
	COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY = RAGE_JOAAT("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"),
	COMPONENT_KNUCKLE_VARMOD_BALLAS = RAGE_JOAAT("COMPONENT_KNUCKLE_VARMOD_BALLAS"),
	COMPONENT_KNUCKLE_VARMOD_BASE = RAGE_JOAAT("COMPONENT_KNUCKLE_VARMOD_BASE"),
	COMPONENT_KNUCKLE_VARMOD_DIAMOND = RAGE_JOAAT("COMPONENT_KNUCKLE_VARMOD_DIAMOND"),
	COMPONENT_KNUCKLE_VARMOD_DOLLAR = RAGE_JOAAT("COMPONENT_KNUCKLE_VARMOD_DOLLAR"),
	COMPONENT_KNUCKLE_VARMOD_HATE = RAGE_JOAAT("COMPONENT_KNUCKLE_VARMOD_HATE"),
	COMPONENT_KNUCKLE_VARMOD_KING = RAGE_JOAAT("COMPONENT_KNUCKLE_VARMOD_KING"),
	COMPONENT_KNUCKLE_VARMOD_LOVE = RAGE_JOAAT("COMPONENT_KNUCKLE_VARMOD_LOVE"),
	COMPONENT_KNUCKLE_VARMOD_PIMP = RAGE_JOAAT("COMPONENT_KNUCKLE_VARMOD_PIMP"),
	COMPONENT_KNUCKLE_VARMOD_PLAYER = RAGE_JOAAT("COMPONENT_KNUCKLE_VARMOD_PLAYER"),
	COMPONENT_KNUCKLE_VARMOD_VAGOS = RAGE_JOAAT("COMPONENT_KNUCKLE_VARMOD_VAGOS"),
	COMPONENT_MACHINEPISTOL_CLIP_01 = RAGE_JOAAT("COMPONENT_MACHINEPISTOL_CLIP_01"),
	COMPONENT_MACHINEPISTOL_CLIP_02 = RAGE_JOAAT("COMPONENT_MACHINEPISTOL_CLIP_02"),
	COMPONENT_MACHINEPISTOL_CLIP_03 = RAGE_JOAAT("COMPONENT_MACHINEPISTOL_CLIP_03"),
	COMPONENT_MARKSMANRIFLE_CLIP_01 = RAGE_JOAAT("COMPONENT_MARKSMANRIFLE_CLIP_01"),
	COMPONENT_MARKSMANRIFLE_CLIP_02 = RAGE_JOAAT("COMPONENT_MARKSMANRIFLE_CLIP_02"),
	COMPONENT_MARKSMANRIFLE_MK2_CAMO = RAGE_JOAAT("COMPONENT_MARKSMANRIFLE_MK2_CAMO"),
	COMPONENT_MARKSMANRIFLE_MK2_CAMO_02 = RAGE_JOAAT("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"),
	COMPONENT_MARKSMANRIFLE_MK2_CAMO_03 = RAGE_JOAAT("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"),
	COMPONENT_MARKSMANRIFLE_MK2_CAMO_04 = RAGE_JOAAT("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"),
	COMPONENT_MARKSMANRIFLE_MK2_CAMO_05 = RAGE_JOAAT("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"),
	COMPONENT_MARKSMANRIFLE_MK2_CAMO_06 = RAGE_JOAAT("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"),
	COMPONENT_MARKSMANRIFLE_MK2_CAMO_07 = RAGE_JOAAT("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"),
	COMPONENT_MARKSMANRIFLE_MK2_CAMO_08 = RAGE_JOAAT("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"),
	COMPONENT_MARKSMANRIFLE_MK2_CAMO_09 = RAGE_JOAAT("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"),
	COMPONENT_MARKSMANRIFLE_MK2_CAMO_10 = RAGE_JOAAT("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"),
	COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01 = RAGE_JOAAT("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"),
	COMPONENT_MARKSMANRIFLE_MK2_CLIP_01 = RAGE_JOAAT("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"),
	COMPONENT_MARKSMANRIFLE_MK2_CLIP_02 = RAGE_JOAAT("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"),
	COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING = RAGE_JOAAT("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"),
	COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ = RAGE_JOAAT("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"),
	COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY = RAGE_JOAAT("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"),
	COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER = RAGE_JOAAT("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"),
	COMPONENT_MARKSMANRIFLE_VARMOD_LUXE = RAGE_JOAAT("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"),
	COMPONENT_MG_CLIP_01 = RAGE_JOAAT("COMPONENT_MG_CLIP_01"),
	COMPONENT_MG_CLIP_02 = RAGE_JOAAT("COMPONENT_MG_CLIP_02"),
	COMPONENT_MG_VARMOD_LOWRIDER = RAGE_JOAAT("COMPONENT_MG_VARMOD_LOWRIDER"),
	COMPONENT_MICROSMG_CLIP_01 = RAGE_JOAAT("COMPONENT_MICROSMG_CLIP_01"),
	COMPONENT_MICROSMG_CLIP_02 = RAGE_JOAAT("COMPONENT_MICROSMG_CLIP_02"),
	COMPONENT_MICROSMG_VARMOD_LUXE = RAGE_JOAAT("COMPONENT_MICROSMG_VARMOD_LUXE"),
	COMPONENT_MINISMG_CLIP_01 = RAGE_JOAAT("COMPONENT_MINISMG_CLIP_01"),
	COMPONENT_MINISMG_CLIP_02 = RAGE_JOAAT("COMPONENT_MINISMG_CLIP_02"),
	COMPONENT_PISTOL50_CLIP_01 = RAGE_JOAAT("COMPONENT_PISTOL50_CLIP_01"),
	COMPONENT_PISTOL50_CLIP_02 = RAGE_JOAAT("COMPONENT_PISTOL50_CLIP_02"),
	COMPONENT_PISTOL50_VARMOD_LUXE = RAGE_JOAAT("COMPONENT_PISTOL50_VARMOD_LUXE"),
	COMPONENT_PISTOL_CLIP_01 = RAGE_JOAAT("COMPONENT_PISTOL_CLIP_01"),
	COMPONENT_PISTOL_CLIP_02 = RAGE_JOAAT("COMPONENT_PISTOL_CLIP_02"),
	COMPONENT_PISTOL_MK2_CAMO = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO"),
	COMPONENT_PISTOL_MK2_CAMO_02 = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_02"),
	COMPONENT_PISTOL_MK2_CAMO_02_SLIDE = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"),
	COMPONENT_PISTOL_MK2_CAMO_03 = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_03"),
	COMPONENT_PISTOL_MK2_CAMO_03_SLIDE = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"),
	COMPONENT_PISTOL_MK2_CAMO_04 = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_04"),
	COMPONENT_PISTOL_MK2_CAMO_04_SLIDE = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"),
	COMPONENT_PISTOL_MK2_CAMO_05 = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_05"),
	COMPONENT_PISTOL_MK2_CAMO_05_SLIDE = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"),
	COMPONENT_PISTOL_MK2_CAMO_06 = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_06"),
	COMPONENT_PISTOL_MK2_CAMO_06_SLIDE = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"),
	COMPONENT_PISTOL_MK2_CAMO_07 = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_07"),
	COMPONENT_PISTOL_MK2_CAMO_07_SLIDE = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"),
	COMPONENT_PISTOL_MK2_CAMO_08 = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_08"),
	COMPONENT_PISTOL_MK2_CAMO_08_SLIDE = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"),
	COMPONENT_PISTOL_MK2_CAMO_09 = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_09"),
	COMPONENT_PISTOL_MK2_CAMO_09_SLIDE = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"),
	COMPONENT_PISTOL_MK2_CAMO_10 = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_10"),
	COMPONENT_PISTOL_MK2_CAMO_10_SLIDE = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"),
	COMPONENT_PISTOL_MK2_CAMO_IND_01 = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_IND_01"),
	COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"),
	COMPONENT_PISTOL_MK2_CAMO_SLIDE = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CAMO_SLIDE"),
	COMPONENT_PISTOL_MK2_CLIP_01 = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CLIP_01"),
	COMPONENT_PISTOL_MK2_CLIP_02 = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CLIP_02"),
	COMPONENT_PISTOL_MK2_CLIP_FMJ = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CLIP_FMJ"),
	COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"),
	COMPONENT_PISTOL_MK2_CLIP_INCENDIARY = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"),
	COMPONENT_PISTOL_MK2_CLIP_TRACER = RAGE_JOAAT("COMPONENT_PISTOL_MK2_CLIP_TRACER"),
	COMPONENT_PISTOL_VARMOD_LUXE = RAGE_JOAAT("COMPONENT_PISTOL_VARMOD_LUXE"),
	COMPONENT_PUMPSHOTGUN_MK2_CAMO = RAGE_JOAAT("COMPONENT_PUMPSHOTGUN_MK2_CAMO"),
	COMPONENT_PUMPSHOTGUN_MK2_CAMO_02 = RAGE_JOAAT("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"),
	COMPONENT_PUMPSHOTGUN_MK2_CAMO_03 = RAGE_JOAAT("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"),
	COMPONENT_PUMPSHOTGUN_MK2_CAMO_04 = RAGE_JOAAT("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"),
	COMPONENT_PUMPSHOTGUN_MK2_CAMO_05 = RAGE_JOAAT("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"),
	COMPONENT_PUMPSHOTGUN_MK2_CAMO_06 = RAGE_JOAAT("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"),
	COMPONENT_PUMPSHOTGUN_MK2_CAMO_07 = RAGE_JOAAT("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"),
	COMPONENT_PUMPSHOTGUN_MK2_CAMO_08 = RAGE_JOAAT("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"),
	COMPONENT_PUMPSHOTGUN_MK2_CAMO_09 = RAGE_JOAAT("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"),
	COMPONENT_PUMPSHOTGUN_MK2_CAMO_10 = RAGE_JOAAT("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"),
	COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01 = RAGE_JOAAT("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"),
	COMPONENT_PUMPSHOTGUN_MK2_CLIP_01 = RAGE_JOAAT("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"),
	COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING = RAGE_JOAAT("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"),
	COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE = RAGE_JOAAT("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"),
	COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT = RAGE_JOAAT("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"),
	COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY = RAGE_JOAAT("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"),
	COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER = RAGE_JOAAT("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"),
	COMPONENT_REVOLVER_CLIP_01 = RAGE_JOAAT("COMPONENT_REVOLVER_CLIP_01"),
	COMPONENT_REVOLVER_MK2_CAMO = RAGE_JOAAT("COMPONENT_REVOLVER_MK2_CAMO"),
	COMPONENT_REVOLVER_MK2_CAMO_02 = RAGE_JOAAT("COMPONENT_REVOLVER_MK2_CAMO_02"),
	COMPONENT_REVOLVER_MK2_CAMO_03 = RAGE_JOAAT("COMPONENT_REVOLVER_MK2_CAMO_03"),
	COMPONENT_REVOLVER_MK2_CAMO_04 = RAGE_JOAAT("COMPONENT_REVOLVER_MK2_CAMO_04"),
	COMPONENT_REVOLVER_MK2_CAMO_05 = RAGE_JOAAT("COMPONENT_REVOLVER_MK2_CAMO_05"),
	COMPONENT_REVOLVER_MK2_CAMO_06 = RAGE_JOAAT("COMPONENT_REVOLVER_MK2_CAMO_06"),
	COMPONENT_REVOLVER_MK2_CAMO_07 = RAGE_JOAAT("COMPONENT_REVOLVER_MK2_CAMO_07"),
	COMPONENT_REVOLVER_MK2_CAMO_08 = RAGE_JOAAT("COMPONENT_REVOLVER_MK2_CAMO_08"),
	COMPONENT_REVOLVER_MK2_CAMO_09 = RAGE_JOAAT("COMPONENT_REVOLVER_MK2_CAMO_09"),
	COMPONENT_REVOLVER_MK2_CAMO_10 = RAGE_JOAAT("COMPONENT_REVOLVER_MK2_CAMO_10"),
	COMPONENT_REVOLVER_MK2_CAMO_IND_01 = RAGE_JOAAT("COMPONENT_REVOLVER_MK2_CAMO_IND_01"),
	COMPONENT_REVOLVER_MK2_CLIP_01 = RAGE_JOAAT("COMPONENT_REVOLVER_MK2_CLIP_01"),
	COMPONENT_REVOLVER_MK2_CLIP_FMJ = RAGE_JOAAT("COMPONENT_REVOLVER_MK2_CLIP_FMJ"),
	COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT = RAGE_JOAAT("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"),
	COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY = RAGE_JOAAT("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"),
	COMPONENT_REVOLVER_MK2_CLIP_TRACER = RAGE_JOAAT("COMPONENT_REVOLVER_MK2_CLIP_TRACER"),
	COMPONENT_REVOLVER_VARMOD_BOSS = RAGE_JOAAT("COMPONENT_REVOLVER_VARMOD_BOSS"),
	COMPONENT_REVOLVER_VARMOD_GOON = RAGE_JOAAT("COMPONENT_REVOLVER_VARMOD_GOON"),
	COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE = RAGE_JOAAT("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"),
	COMPONENT_SMG_CLIP_01 = RAGE_JOAAT("COMPONENT_SMG_CLIP_01"),
	COMPONENT_SMG_CLIP_02 = RAGE_JOAAT("COMPONENT_SMG_CLIP_02"),
	COMPONENT_SMG_CLIP_03 = RAGE_JOAAT("COMPONENT_SMG_CLIP_03"),
	COMPONENT_SMG_MK2_CAMO = RAGE_JOAAT("COMPONENT_SMG_MK2_CAMO"),
	COMPONENT_SMG_MK2_CAMO_02 = RAGE_JOAAT("COMPONENT_SMG_MK2_CAMO_02"),
	COMPONENT_SMG_MK2_CAMO_03 = RAGE_JOAAT("COMPONENT_SMG_MK2_CAMO_03"),
	COMPONENT_SMG_MK2_CAMO_04 = RAGE_JOAAT("COMPONENT_SMG_MK2_CAMO_04"),
	COMPONENT_SMG_MK2_CAMO_05 = RAGE_JOAAT("COMPONENT_SMG_MK2_CAMO_05"),
	COMPONENT_SMG_MK2_CAMO_06 = RAGE_JOAAT("COMPONENT_SMG_MK2_CAMO_06"),
	COMPONENT_SMG_MK2_CAMO_07 = RAGE_JOAAT("COMPONENT_SMG_MK2_CAMO_07"),
	COMPONENT_SMG_MK2_CAMO_08 = RAGE_JOAAT("COMPONENT_SMG_MK2_CAMO_08"),
	COMPONENT_SMG_MK2_CAMO_09 = RAGE_JOAAT("COMPONENT_SMG_MK2_CAMO_09"),
	COMPONENT_SMG_MK2_CAMO_10 = RAGE_JOAAT("COMPONENT_SMG_MK2_CAMO_10"),
	COMPONENT_SMG_MK2_CAMO_IND_01 = RAGE_JOAAT("COMPONENT_SMG_MK2_CAMO_IND_01"),
	COMPONENT_SMG_MK2_CLIP_01 = RAGE_JOAAT("COMPONENT_SMG_MK2_CLIP_01"),
	COMPONENT_SMG_MK2_CLIP_02 = RAGE_JOAAT("COMPONENT_SMG_MK2_CLIP_02"),
	COMPONENT_SMG_MK2_CLIP_FMJ = RAGE_JOAAT("COMPONENT_SMG_MK2_CLIP_FMJ"),
	COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT = RAGE_JOAAT("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"),
	COMPONENT_SMG_MK2_CLIP_INCENDIARY = RAGE_JOAAT("COMPONENT_SMG_MK2_CLIP_INCENDIARY"),
	COMPONENT_SMG_MK2_CLIP_TRACER = RAGE_JOAAT("COMPONENT_SMG_MK2_CLIP_TRACER"),
	COMPONENT_SMG_VARMOD_LUXE = RAGE_JOAAT("COMPONENT_SMG_VARMOD_LUXE"),
	COMPONENT_SNIPERRIFLE_CLIP_01 = RAGE_JOAAT("COMPONENT_SNIPERRIFLE_CLIP_01"),
	COMPONENT_SNIPERRIFLE_VARMOD_LUXE = RAGE_JOAAT("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"),
	COMPONENT_SNSPISTOL_CLIP_01 = RAGE_JOAAT("COMPONENT_SNSPISTOL_CLIP_01"),
	COMPONENT_SNSPISTOL_CLIP_02 = RAGE_JOAAT("COMPONENT_SNSPISTOL_CLIP_02"),
	COMPONENT_SNSPISTOL_MK2_CAMO = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO"),
	COMPONENT_SNSPISTOL_MK2_CAMO_02 = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_02"),
	COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"),
	COMPONENT_SNSPISTOL_MK2_CAMO_03 = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_03"),
	COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"),
	COMPONENT_SNSPISTOL_MK2_CAMO_04 = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_04"),
	COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"),
	COMPONENT_SNSPISTOL_MK2_CAMO_05 = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_05"),
	COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"),
	COMPONENT_SNSPISTOL_MK2_CAMO_06 = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_06"),
	COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"),
	COMPONENT_SNSPISTOL_MK2_CAMO_07 = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_07"),
	COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"),
	COMPONENT_SNSPISTOL_MK2_CAMO_08 = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_08"),
	COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"),
	COMPONENT_SNSPISTOL_MK2_CAMO_09 = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_09"),
	COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"),
	COMPONENT_SNSPISTOL_MK2_CAMO_10 = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_10"),
	COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"),
	COMPONENT_SNSPISTOL_MK2_CAMO_IND_01 = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"),
	COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"),
	COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"),
	COMPONENT_SNSPISTOL_MK2_CLIP_01 = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CLIP_01"),
	COMPONENT_SNSPISTOL_MK2_CLIP_02 = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CLIP_02"),
	COMPONENT_SNSPISTOL_MK2_CLIP_FMJ = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"),
	COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"),
	COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"),
	COMPONENT_SNSPISTOL_MK2_CLIP_TRACER = RAGE_JOAAT("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"),
	COMPONENT_SNSPISTOL_VARMOD_LOWRIDER = RAGE_JOAAT("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"),
	COMPONENT_SPECIALCARBINE_CLIP_01 = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_CLIP_01"),
	COMPONENT_SPECIALCARBINE_CLIP_02 = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_CLIP_02"),
	COMPONENT_SPECIALCARBINE_CLIP_03 = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_CLIP_03"),
	COMPONENT_SPECIALCARBINE_MK2_CAMO = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_MK2_CAMO"),
	COMPONENT_SPECIALCARBINE_MK2_CAMO_02 = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"),
	COMPONENT_SPECIALCARBINE_MK2_CAMO_03 = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"),
	COMPONENT_SPECIALCARBINE_MK2_CAMO_04 = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"),
	COMPONENT_SPECIALCARBINE_MK2_CAMO_05 = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"),
	COMPONENT_SPECIALCARBINE_MK2_CAMO_06 = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"),
	COMPONENT_SPECIALCARBINE_MK2_CAMO_07 = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"),
	COMPONENT_SPECIALCARBINE_MK2_CAMO_08 = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"),
	COMPONENT_SPECIALCARBINE_MK2_CAMO_09 = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"),
	COMPONENT_SPECIALCARBINE_MK2_CAMO_10 = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"),
	COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01 = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"),
	COMPONENT_SPECIALCARBINE_MK2_CLIP_01 = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"),
	COMPONENT_SPECIALCARBINE_MK2_CLIP_02 = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"),
	COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"),
	COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"),
	COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"),
	COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"),
	COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER = RAGE_JOAAT("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"),
	COMPONENT_SWITCHBLADE_VARMOD_BASE = RAGE_JOAAT("COMPONENT_SWITCHBLADE_VARMOD_BASE"),
	COMPONENT_SWITCHBLADE_VARMOD_VAR1 = RAGE_JOAAT("COMPONENT_SWITCHBLADE_VARMOD_VAR1"),
	COMPONENT_SWITCHBLADE_VARMOD_VAR2 = RAGE_JOAAT("COMPONENT_SWITCHBLADE_VARMOD_VAR2"),
	COMPONENT_VINTAGEPISTOL_CLIP_01 = RAGE_JOAAT("COMPONENT_VINTAGEPISTOL_CLIP_01"),
	COMPONENT_VINTAGEPISTOL_CLIP_02 = RAGE_JOAAT("COMPONENT_VINTAGEPISTOL_CLIP_02")
};

enum AmmoTypeHashes : Hash
{
	AMMO_NULL = 0x0, //Melee
	AMMO_PISTOL = RAGE_JOAAT("AMMO_PISTOL"),
	AMMO_SMG = RAGE_JOAAT("AMMO_SMG"),
	AMMO_RIFLE = RAGE_JOAAT("AMMO_RIFLE"),
	AMMO_MG = RAGE_JOAAT("AMMO_MG"),
	AMMO_SHOTGUN = RAGE_JOAAT("AMMO_SHOTGUN"),
	AMMO_STUNGUN = RAGE_JOAAT("AMMO_STUNGUN"),
	AMMO_SNIPER = RAGE_JOAAT("AMMO_SNIPER"),
	AMMO_SNIPER_REMOTE = RAGE_JOAAT("AMMO_SNIPER_REMOTE"),
	AMMO_GRENADELAUNCHER = RAGE_JOAAT("AMMO_GRENADELAUNCHER"),
	AMMO_GRENADELAUNCHER_SMOKE = RAGE_JOAAT("AMMO_GRENADELAUNCHER_SMOKE"),
	AMMO_RPG = RAGE_JOAAT("AMMO_RPG"),
	AMMO_STINGER = RAGE_JOAAT("AMMO_STINGER"),
	AMMO_MINIGUN = RAGE_JOAAT("AMMO_MINIGUN"),
	AMMO_GRENADE = RAGE_JOAAT("AMMO_GRENADE"),
	AMMO_STICKYBOMB = RAGE_JOAAT("AMMO_STICKYBOMB"),
	AMMO_SMOKEGRENADE = RAGE_JOAAT("AMMO_SMOKEGRENADE"),
	AMMO_BZGAS = RAGE_JOAAT("AMMO_BZGAS"),
	AMMO_MOLOTOV = RAGE_JOAAT("AMMO_MOLOTOV"),
	AMMO_FIREEXTINGUISHER = RAGE_JOAAT("AMMO_FIREEXTINGUISHER"),
	AMMO_PETROLCAN = RAGE_JOAAT("AMMO_PETROLCAN"),
	AMMO_BALL = RAGE_JOAAT("AMMO_BALL"),
	AMMO_FLARE = RAGE_JOAAT("AMMO_FLARE"),
	AMMO_TANK = RAGE_JOAAT("AMMO_TANK"),
	AMMO_SPACE_ROCKET = RAGE_JOAAT("AMMO_SPACE_ROCKET"),
	AMMO_PLANE_ROCKET = RAGE_JOAAT("AMMO_PLANE_ROCKET"),
	AMMO_PLAYER_LASER = RAGE_JOAAT("AMMO_PLAYER_LASER"),
	AMMO_ENEMY_LASER = RAGE_JOAAT("AMMO_ENEMY_LASER"),
	AMMO_BIRD_CRAP = RAGE_JOAAT("AMMO_BIRD_CRAP")
};

enum WeaponGroup : Hash
{
	GROUP_MELEE = RAGE_JOAAT("GROUP_MELEE"),
	GROUP_UNARMED = RAGE_JOAAT("GROUP_UNARMED"),
	GROUP_PISTOL = RAGE_JOAAT("GROUP_PISTOL"),
	GROUP_RIFLE = RAGE_JOAAT("GROUP_RIFLE"),
	GROUP_MG = RAGE_JOAAT("GROUP_MG"),
	GROUP_SHOTGUN = RAGE_JOAAT("GROUP_SHOTGUN"),
	GROUP_STUNGUN = RAGE_JOAAT("GROUP_STUNGUN"),
	GROUP_SNIPER = RAGE_JOAAT("GROUP_SNIPER"),
	GROUP_HEAVY = RAGE_JOAAT("GROUP_HEAVY"),
	GROUP_THROWN = RAGE_JOAAT("GROUP_THROWN"),
	GROUP_FIREEXTINGUISHER = RAGE_JOAAT("GROUP_FIREEXTINGUISHER"),
	GROUP_PETROLCAN = RAGE_JOAAT("GROUP_PETROLCAN"),
	GROUP_DIGISCANNER = RAGE_JOAAT("GROUP_DIGISCANNER"),
	GROUP_NIGHTVISION = RAGE_JOAAT("GROUP_NIGHTVISION"),
	GROUP_PARACHUTE = RAGE_JOAAT("GROUP_PARACHUTE")
};