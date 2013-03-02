#ifndef SETTINGS
#define SETTINGS

const char *s1;
const char *s2;

const char* Date();
const char* Time();

#define	CURRENT_DATE				s1 = Date()
#define CURRENT_TIME				s2 = Time()

#define VRX_VERSION "4.2c"

//4.5 player combat preferences
#define HOSTILE_PLAYERS				0x00000001			
#define HOSTILE_MONSTERS			0x00000002

//3.0 Special Flags
#define SFLG_NONE					0x00000000
#define SFLG_MATRIXJUMP				0x00000001
#define SFLG_UNDERWATER				0x00000002
#define SFLG_PARTIAL_INWATER		0x00000004
#define SFLG_AUTO_TBALLED			0x00000008
#define SFLG_DOUBLEJUMP				0x00000010

//Other flag combinations
#define SFLG_TOUCHING_WATER		SFLG_UNDERWATER | SFLG_PARTIAL_INWATER

//Matrix jump
#define MJUMP_VELOCITY				350
#define MJUMP_GRAVITY_MULT			2.5

// Cheat Stuff
#define CLIENT_GL_MODULATE			1
#define CLIENT_GL_DYNAMIC			2
#define CLIENT_SW_DRAWFLAT			3
#define CLIENT_GL_SHOWTRIS			4
#define	CLIENT_R_FULLBRIGHT			5
#define CLIENT_TIMESCALE			6
#define CLIENT_GL_LIGHTMAP			7
#define	CLIENT_GL_SATURATELIGHTING	8
#define	CLIENT_R_DRAWFLAT			9
#define	CLIENT_CL_TESTLIGHTS		10
#define	CLIENT_FIXEDTIME			11

// class numbers
#define CLASS_SOLDIER			1
#define CLASS_DEMON				2
#define CLASS_ENGINEER			3
#define CLASS_PALADIN			4
#define CLASS_ARCANIST			5
#define CLASS_POLTERGEIST		6
#define CLASS_WEAPONMASTER		7

#define CLASS_MAX				7		//Number of classes to choose from

#define ARMORY_ITEMS 31

extern double RUNE_PICKUP_DELAY;
extern double SENTRY_MAXIMUM;
extern double CHILL_DEFAULT_BASE;
extern double CHILL_DEFAULT_ADDON;
extern double SPRINT_COST;
extern double SPRINT_MAX_CHARGE;
extern double SPRINT_CHARGE_RATE;
extern double SHIELD_COST;
extern double SHIELD_MAX_CHARGE;
extern double SHIELD_CHARGE_RATE;
extern double SHIELD_FRONT_PROTECTION;
extern double SHIELD_BODY_PROTECTION;
extern double SHIELD_ABILITY_DELAY;
extern double SMARTROCKET_LOCKFRAMES;
extern double DAMAGE_ESCAPE_DELAY;
extern double EXP_PLAYER_MONSTER;
extern double EXP_WORLD_MONSTER;
extern double AMMO_REGEN_DELAY;
extern double MAX_KNOCKBACK;
extern double CHAT_PROTECT_FRAMES;
extern double MAX_HOURS;
extern double MAX_CREDITS;
extern double CLOAK_DRAIN_TIME;
extern double CLOAK_DRAIN_AMMO;
extern double CLOAK_COST;
extern double CLOAK_ACTIVATE_TIME;
extern double LASER_TIMEUP;
extern double LASER_COST;
extern double LASER_CUTDAMAGE;
extern double MAX_LASERS;
extern double LASER_SPAWN;
extern double SUPERSPEED_DRAIN_COST;
extern double RESPAWN_INVIN_TIME;
extern double ANTIGRAV_COST;
extern double ANTIGRAV_AMT;
extern double FORCEWALL_WIDTH;
extern double FORCEWALL_HEIGHT;
extern double FORCEWALL_THICKNESS;
extern double FORCEWALL_DELAY;
extern double FORCEWALL_SOLID_COST;
extern double FORCEWALL_NOTSOLID_COST;
extern double MAX_PIPES;
extern double MAX_IDLE_FRAMES;
extern double SPREE_WARS;
extern double SPREE_START;
extern double SPREE_WARS_START;
extern double SPREE_WARS_BONUS;
extern double SPREE_BONUS;
extern double SPREE_BREAKBONUS;
extern double INITIAL_HEALTH_SOLDIER;
extern double INITIAL_HEALTH_ENGINEER;
extern double INITIAL_HEALTH_VAMPIRE;
extern double INITIAL_HEALTH_POLTERGEIST;
extern double INITIAL_HEALTH_KNIGHT;
extern double INITIAL_HEALTH_MAGE;
extern double INITIAL_HEALTH_WEAPONMASTER;
extern double LEVELUP_HEALTH_SOLDIER;
extern double LEVELUP_HEALTH_ENGINEER;
extern double LEVELUP_HEALTH_VAMPIRE;
extern double LEVELUP_HEALTH_POLTERGEIST;
extern double LEVELUP_HEALTH_KNIGHT;
extern double LEVELUP_HEALTH_MAGE;
extern double LEVELUP_HEALTH_WEAPONMASTER;
extern double INITIAL_ARMOR_SOLDIER;
extern double INITIAL_ARMOR_ENGINEER;
extern double INITIAL_ARMOR_VAMPIRE;
extern double INITIAL_ARMOR_POLTERGEIST;
extern double INITIAL_ARMOR_KNIGHT;
extern double INITIAL_ARMOR_MAGE;
extern double INITIAL_ARMOR_WEAPONMASTER;
extern double LEVELUP_ARMOR_SOLDIER;
extern double LEVELUP_ARMOR_ENGINEER;
extern double LEVELUP_ARMOR_POLTERGEIST;
extern double LEVELUP_ARMOR_KNIGHT;
extern double LEVELUP_ARMOR_MAGE;
extern double LEVELUP_ARMOR_WEAPONMASTER;
extern double INITIAL_POWERCUBES_SOLDIER;
extern double ADDON_POWERCUBES_SOLDIER;
extern double INITIAL_POWERCUBES_VAMPIRE;
extern double ADDON_POWERCUBES_VAMPIRE;
extern double INITIAL_POWERCUBES_KNIGHT;
extern double ADDON_POWERCUBES_KNIGHT;
extern double INITIAL_POWERCUBES_MAGE;
extern double ADDON_POWERCUBES_MAGE;
extern double INITIAL_POWERCUBES_POLTERGEIST;
extern double ADDON_POWERCUBES_POLTERGEIST;
extern double INITIAL_POWERCUBES_ENGINEER;
extern double ADDON_POWERCUBES_ENGINEER;
extern double INITIAL_POWERCUBES_WEAPONMASTER;
extern double ADDON_POWERCUBES_WEAPONMASTER;
extern double TBALLS_RESPAWN;
extern double POWERCUBES_RESPAWN;
extern double SHELLS_PICKUP;
extern double BULLETS_PICKUP;
extern double GRENADES_PICKUP;
extern double ROCKETS_PICKUP;
extern double CELLS_PICKUP;
extern double SLUGS_PICKUP;
extern double CTF_CAPTURE_BONUS;
extern double CTF_TEAM_BONUS;
extern double CTF_RETURN_FLAG_ASSIST_BONUS;
extern double CTF_FRAG_CARRIER_ASSIST_BONUS;
extern double CTF_RECOVERY_BONUS;
extern double CTF_FLAG_BONUS;
extern double CTF_FRAG_CARRIER_BONUS;
extern double CTF_CARRIER_DANGER_PROTECT_BONUS;
extern double CTF_CARRIER_PROTECT_BONUS;
extern double CTF_FLAG_DEFENSE_BONUS;
extern double CTF_TARGET_PROTECT_RADIUS;
extern double CTF_ATTACKER_PROTECT_RADIUS;
extern double CTF_CARRIER_DANGER_PROTECT_TIMEOUT;
extern double CTF_FRAG_CARRIER_ASSIST_TIMEOUT;
extern double CTF_RETURN_FLAG_ASSIST_TIMEOUT;
extern double CTF_AUTO_FLAG_RETURN_TIMEOUT;
extern double CTF_TECH_TIMEOUT;
extern double CTF_FLAG_HOLDTIME;
extern double START_NEXTLEVEL;
extern double NEXTLEVEL_MULT;
extern double EXP_PLAYER_BASE;
extern double EXP_OTHER_BASE;
extern double EXP_MINIBOSS;
extern double CREDITS_PLAYER_BASE;
extern double CREDITS_OTHER_BASE;
extern double CREDIT_LOW;
extern double SABRE_INITIAL_DAMAGE;
extern double SABRE_ADDON_DAMAGE;
extern double SABRE_ADDON_HEATDAMAGE;
extern double SABRE_INITIAL_RANGE;
extern double SABRE_ADDON_RANGE;
extern double SABRE_INITIAL_KICK;
extern double SABRE_ADDON_KICK;
extern double BLASTER_INITIAL_DAMAGE_MIN;
extern double BLASTER_INITIAL_DAMAGE_MAX;
extern double BLASTER_ADDON_DAMAGE_MIN;
extern double BLASTER_ADDON_DAMAGE_MAX;
extern double BLASTER_INITIAL_HASTE;
extern double BLASTER_ADDON_HASTE;
extern double BLASTER_INITIAL_SPEED;
extern double BLASTER_ADDON_SPEED;
extern double WEAPON_20MM_INITIAL_DMG;
extern double WEAPON_20MM_ADDON_DMG;
extern double WEAPON_20MM_INITIAL_RANGE;
extern double WEAPON_20MM_ADDON_RANGE;
extern double SHOTGUN_INITIAL_DAMAGE;
extern double SHOTGUN_ADDON_DAMAGE;
extern double SHOTGUN_INITIAL_BULLETS;
extern double SHOTGUN_ADDON_BULLETS;
extern double SUPERSHOTGUN_INITIAL_DAMAGE;
extern double SUPERSHOTGUN_ADDON_DAMAGE;
extern double SUPERSHOTGUN_INITIAL_BULLETS;
extern double SUPERSHOTGUN_ADDON_BULLETS;
extern double MACHINEGUN_INITIAL_DAMAGE;
extern double MACHINEGUN_ADDON_DAMAGE;
extern double MACHINEGUN_ADDON_TRACERDAMAGE;
extern double CHAINGUN_INITIAL_DAMAGE;
extern double CHAINGUN_ADDON_DAMAGE;
extern double CHAINGUN_ADDON_TRACERDAMAGE;
extern double GRENADE_INITIAL_DAMAGE;
extern double GRENADE_ADDON_DAMAGE;
extern double GRENADE_INITIAL_RADIUS_DAMAGE;
extern double GRENADE_ADDON_RADIUS_DAMAGE;
extern double GRENADE_INITIAL_RADIUS;
extern double GRENADE_ADDON_RADIUS;
extern double GRENADELAUNCHER_INITIAL_DAMAGE;
extern double GRENADELAUNCHER_ADDON_DAMAGE;
extern double GRENADELAUNCHER_INITIAL_RADIUS_DAMAGE;
extern double GRENADELAUNCHER_ADDON_RADIUS_DAMAGE;
extern double GRENADELAUNCHER_INITIAL_RADIUS;
extern double GRENADELAUNCHER_ADDON_RADIUS;
extern double GRENADELAUNCHER_INITIAL_SPEED;
extern double GRENADELAUNCHER_ADDON_SPEED;
extern double ROCKETLAUNCHER_INITIAL_DAMAGE;
extern double ROCKETLAUNCHER_ADDON_DAMAGE;
extern double ROCKETLAUNCHER_INITIAL_SPEED;
extern double ROCKETLAUNCHER_ADDON_SPEED;
extern double ROCKETLAUNCHER_INITIAL_RADIUS_DAMAGE;
extern double ROCKETLAUNCHER_ADDON_RADIUS_DAMAGE;
extern double ROCKETLAUNCHER_INITIAL_DAMAGE_RADIUS;
extern double ROCKETLAUNCHER_ADDON_DAMAGE_RADIUS;
extern double HYPERBLASTER_INITIAL_DAMAGE;
extern double HYPERBLASTER_ADDON_DAMAGE;
extern double HYPERBLASTER_INITIAL_SPEED;
extern double HYPERBLASTER_ADDON_SPEED;
extern double RAILGUN_INITIAL_DAMAGE;
extern double RAILGUN_ADDON_DAMAGE;
extern double RAILGUN_ADDON_HEATDAMAGE;
extern double BFG10K_INITIAL_DAMAGE;
extern double BFG10K_ADDON_DAMAGE;
extern double BFG10K_INITIAL_SPEED;
extern double BFG10K_ADDON_SPEED;
extern double BFG10K_RADIUS;
extern double BFG10K_INITIAL_DURATION;
extern double BFG10K_ADDON_DURATION;
extern double BFG10K_DEFAULT_DURATION;
extern double BFG10K_DEFAULT_SLIDE;
extern double TOTEM_MAX_RANGE;
extern double TOTEM_COST;
extern double TOTEM_HEALTH_BASE;
extern double TOTEM_HEALTH_MULT;
extern double TOTEM_REGEN_BASE;
extern double TOTEM_REGEN_MULT;
extern double TOTEM_MASTERY_MULT;
extern double TOTEM_REGEN_FRAMES;
extern double TOTEM_REGEN_DELAY;
extern double FURY_INITIAL_REGEN;
extern double FURY_ADDON_REGEN;
extern double FURY_MAX_REGEN;
extern double FURY_INITIAL_FACTOR;
extern double FURY_ADDON_FACTOR;
extern double FURY_FACTOR_MAX;
extern double FURY_DURATION_BASE;
extern double FURY_DURATION_BONUS;
extern double FIRETOTEM_DAMAGE_BASE;
extern double FIRETOTEM_DAMAGE_MULT;
extern double FIRETOTEM_REFIRE_BASE;
extern double FIRETOTEM_REFIRE_MULT;
extern double WATERTOTEM_DURATION_BASE;
extern double WATERTOTEM_DURATION_MULT;
extern double WATERTOTEM_REFIRE_BASE;
extern double WATERTOTEM_REFIRE_MULT;
extern double AIRTOTEM_RESIST_BASE;
extern double AIRTOTEM_RESIST_MULT;
extern double EARTHTOTEM_RESIST_MULT;
extern double EARTHTOTEM_DAMAGE_MULT;
extern double NATURETOTEM_HEALTH_BASE;
extern double NATURETOTEM_HEALTH_MULT;
extern double NATURETOTEM_ARMOR_BASE;
extern double NATURETOTEM_ARMOR_MULT;
extern double NATURETOTEM_REFIRE_BASE;
extern double DARKNESSTOTEM_VAMP_MULT;
extern double DARKNESSTOTEM_MAX_MULT;
extern double PRECISION_TUNING_COST_FACTOR;
extern double PRECISION_TUNING_DELAY_FACTOR;
extern double PRECISION_TUNING_SKILL_FACTOR;
extern double SENTRY_INITIAL_HEALTH;
extern double SENTRY_ADDON_HEALTH;
extern double SENTRY_INITIAL_ARMOR;
extern double SENTRY_ADDON_ARMOR;
extern double SENTRY_INITIAL_AMMO;
extern double SENTRY_ADDON_AMMO;
extern double MINISENTRY_INITIAL_HEALTH;
extern double MINISENTRY_ADDON_HEALTH;
extern double MINISENTRY_INITIAL_ARMOR;
extern double MINISENTRY_ADDON_ARMOR;
extern double MINISENTRY_MAX_HEALTH;
extern double MINISENTRY_MAX_ARMOR;
extern double MINISENTRY_INITIAL_AMMO;
extern double MINISENTRY_ADDON_AMMO;
extern double MINISENTRY_INITIAL_BULLET;
extern double MINISENTRY_ADDON_BULLET;
extern double MINISENTRY_INITIAL_ROCKET;
extern double MINISENTRY_ADDON_ROCKET;
extern double MINISENTRY_MAX_BULLET;
extern double MINISENTRY_MAX_ROCKET;
extern double SENTRY_LEVEL1_DAMAGE;
extern double SENTRY_LEVEL2_DAMAGE;
extern double SENTRY_LEVEL3_DAMAGE;
extern double SENTRY_INITIAL_BULLETDAMAGE;
extern double SENTRY_ADDON_BULLETDAMAGE;
extern double SENTRY_INITIAL_ROCKETDAMAGE;
extern double SENTRY_ADDON_ROCKETDAMAGE;
extern double SENTRY_INITIAL_ROCKETSPEED;
extern double SENTRY_ADDON_ROCKETSPEED;
extern double SENTRY_COST;
extern double SENTRY_MAX;
extern double SENTRY_UPGRADE;
extern double DELAY_SENTRY_SCAN;
extern double DELAY_SENTRY;
extern double SPIKER_MAX_COUNT;
extern double GASSER_MAX_COUNT;
extern double OBSTACLE_MAX_COUNT;
extern double SPIKEBALL_MAX_COUNT;
extern double MAX_MONSTERS;
extern double DELAY_MONSTER_THINK;
extern double DELAY_MONSTER;
extern double M_FLYER_COST;
extern double M_INSANE_COST;
extern double M_SOLDIERLT_COST;
extern double M_SOLDIER_COST;
extern double M_GUNNER_COST;
extern double M_CHICK_COST;
extern double M_PARASITE_COST;
extern double M_MEDIC_COST;
extern double M_BRAIN_COST;
extern double M_TANK_COST;
extern double M_HOVER_COST;
extern double M_SUPERTANK_COST;
extern double M_COMMANDER_COST;
extern double M_MUTANT_COST;
extern double M_DEFAULT_COST;
extern double M_FLYER_CONTROL_COST;
extern double M_INSANE_CONTROL_COST;
extern double M_SOLDIERLT_CONTROL_COST;
extern double M_SOLDIER_CONTROL_COST;
extern double M_GUNNER_CONTROL_COST;
extern double M_CHICK_CONTROL_COST;
extern double M_PARASITE_CONTROL_COST;
extern double M_MEDIC_CONTROL_COST;
extern double M_TANK_CONTROL_COST;
extern double M_BRAIN_CONTROL_COST;
extern double M_HOVER_CONTROL_COST;
extern double M_SUPERTANK_CONTROL_COST;
extern double M_COMMANDER_CONTROL_COST;
extern double M_MUTANT_CONTROL_COST;
extern double M_GLADIATOR_CONTROL_COST;
extern double M_DEFAULT_CONTROL_COST;
extern double DELAY_FREEZE;
extern double DELAY_BOOST;
extern double DELAY_BLOODSUCKER;
extern double DELAY_SALVATION;
extern double DELAY_CORPSEEXPLODE;
extern double DELAY_LASER;
extern double DELAY_DECOY;
extern double DELAY_BOMB;
extern double DELAY_THORNS;
extern double DELAY_HOLYFREEZE;
extern double COST_FOR_BOOST;
extern double COST_FOR_SALVATION;
extern double COST_FOR_CORPSEEXPLODE;
extern double COST_FOR_DECOY;
extern double COST_FOR_HOLYSHOCK;
extern double COST_FOR_HOLYFREEZE;
extern double COST_FOR_HOOK;
extern double MAX_BOMB_RANGE;
extern double COST_FOR_BOMB;
extern double METEOR_COST;
extern double ICEBOLT_COST;
extern double FIREBALL_COST;
extern double NOVA_COST;
extern double BOLT_COST;
extern double CLIGHTNING_COST;
extern double LIGHTNING_COST;
extern double RADIUS_AMMOSTEAL;
extern double RADIUS_FREEZE;
extern double RADIUS_BLOODSUCKER;
extern double RADIUS_CORPSEEXPLODE;
extern double RADIUS_BOMB;
extern double ARMORY_RUNE_UNIQUE_PRICE;
extern double ARMORY_RUNE_APOINT_PRICE;
extern double ARMORY_RUNE_WPOINT_PRICE;
extern double ARMORY_MAX_RUNES;
extern double ARMORY_PRICE_WEAPON;
extern double ARMORY_PRICE_AMMO;
extern double ARMORY_PRICE_TBALLS;
extern double ARMORY_PRICE_POWERCUBE;
extern double ARMORY_PRICE_RESPAWN;
extern double ARMORY_PRICE_HEALTH;
extern double ARMORY_PRICE_ARMOR;
extern double ARMORY_PRICE_POTIONS;
extern double ARMORY_PRICE_ANTIDOTES;
extern double ARMORY_PRICE_GRAVITYBOOTS;
extern double ARMORY_PRICE_FIRE_RESIST;
extern double ARMORY_PRICE_AUTO_TBALL;
extern double ARMORY_PRICE_RESET;
extern double ARMORY_QTY_RESPAWNS;
extern double ARMORY_QTY_POTIONS;
extern double ARMORY_QTY_ANTIDOTES;
extern double ARMORY_QTY_GRAVITYBOOTS;
extern double ARMORY_QTY_FIRE_RESIST;
extern double ARMORY_QTY_AUTO_TBALL;
extern double TRADE_MAX_DISTANCE;
extern double TRADE_MAX_PLAYERS;
extern double VITALITY_MULT;
extern double MAGMINE_DEFAULT_PULL;
extern double MAGMINE_ADDON_PULL;
extern double MAGMINE_RANGE;
extern double MAGMINE_COST;
extern double MAGMINE_DEFAULT_HEALTH;
extern double MAGMINE_ADDON_HEALTH;
extern double MAGMINE_DELAY;
extern double SELFDESTRUCT_RADIUS;
extern double SELFDESTRUCT_BASE;
extern double SELFDESTRUCT_BONUS;
extern double EXPLODING_ARMOR_COST;
extern double EXPLODING_ARMOR_MAX_COUNT;
extern double EXPLODING_ARMOR_AMOUNT;
extern double EXPLODING_ARMOR_DMG_BASE;
extern double EXPLODING_ARMOR_DMG_ADDON;
extern double EXPLODING_ARMOR_MAX_RADIUS;
extern double EXPLODING_ARMOR_DELAY;
extern double EXPLODING_ARMOR_DETECTION;
extern double MIRV_INITIAL_DAMAGE;
extern double MIRV_ADDON_DAMAGE;
extern double MIRV_INITIAL_RADIUS;
extern double MIRV_ADDON_RADIUS;
extern double MIRV_DELAY;
extern double MIRV_COST;
extern double SPIKER_INITIAL_HEALTH;
extern double SPIKER_ADDON_HEALTH;
extern double SPIKER_INITIAL_DAMAGE;
extern double SPIKER_ADDON_DAMAGE;
extern double SPIKER_INITIAL_SPEED;
extern double SPIKER_ADDON_SPEED;
extern double SPIKER_COST;
extern double SPIKER_DELAY;
extern double SPIKER_REFIRE_DELAY;
extern double SPIKER_INITIAL_RANGE;
extern double SPIKER_ADDON_RANGE;
extern double CORPSE_EXPLOSION_INITIAL_DAMAGE;
extern double CORPSE_EXPLOSION_ADDON_DAMAGE;
extern double CORPSE_EXPLOSION_INITIAL_RADIUS;
extern double CORPSE_EXPLOSION_ADDON_RADIUS;
extern double CORPSE_EXPLOSION_MAX_RANGE;
extern double CORPSE_EXPLOSION_SEARCH_RADIUS;
extern double CRIPPLE_RANGE;
extern double CRIPPLE_COST;
extern double CRIPPLE_DELAY;
extern double CRIPPLE_MAX_DAMAGE;
extern double TELEPORT_COST;
extern double PLAYERSPAWN_REGEN_FRAMES;
extern double PLAYERSPAWN_REGEN_DELAY;
extern double PLAYERSPAWN_HEALTH;
extern double INVASION_BONUS_EXP;
extern double INVASION_BONUS_CREDITS;
extern double SHAMAN_CURSE_RADIUS_BASE;
extern double SHAMAN_CURSE_RADIUS_BONUS;
extern double CURSE_DEFAULT_INITIAL_RADIUS;
extern double CURSE_DEFAULT_ADDON_RADIUS;
extern double CURSE_DEFAULT_INITIAL_RANGE;
extern double CURSE_DEFAULT_ADDON_RANGE;
extern double MIND_ABSORB_RADIUS_BASE;
extern double MIND_ABSORB_RADIUS_BONUS;
extern double MIND_ABSORB_AMOUNT_BASE;
extern double MIND_ABSORB_AMOUNT_BONUS;
extern double LOWER_RESIST_INITIAL_RANGE;
extern double LOWER_RESIST_ADDON_RANGE;
extern double LOWER_RESIST_INITIAL_RADIUS;
extern double LOWER_RESIST_ADDON_RADIUS;
extern double LOWER_RESIST_INITIAL_DURATION;
extern double LOWER_RESIST_ADDON_DURATION;
extern double LOWER_RESIST_COST;
extern double LOWER_RESIST_DELAY;
extern double LOWER_RESIST_INITIAL_FACTOR;
extern double LOWER_RESIST_ADDON_FACTOR;
extern double AMP_DAMAGE_DELAY;
extern double AMP_DAMAGE_DURATION_BASE;
extern double AMP_DAMAGE_DURATION_BONUS;
extern double AMP_DAMAGE_COST;
extern double AMP_DAMAGE_MULT_BASE;
extern double AMP_DAMAGE_MULT_BONUS;
extern double WEAKEN_DELAY;
extern double WEAKEN_DURATION_BASE;
extern double WEAKEN_DURATION_BONUS;
extern double WEAKEN_COST;
extern double WEAKEN_MULT_BASE;
extern double WEAKEN_MULT_BONUS;
extern double WEAKEN_SLOW_BASE;
extern double WEAKEN_SLOW_BONUS;
extern double LIFE_DRAIN_DELAY;
extern double LIFE_DRAIN_COST;
extern double LIFE_DRAIN_HEALTH;
extern double LIFE_DRAIN_DURATION_BASE;
extern double LIFE_DRAIN_DURATION_BONUS;
extern double LIFE_DRAIN_RANGE;
extern double LIFE_DRAIN_UPDATETIME;
extern double AMNESIA_DELAY;
extern double AMNESIA_DURATION_BASE;
extern double AMNESIA_DURATION_BONUS;
extern double AMNESIA_COST;
extern double CURSE_DELAY;
extern double CURSE_DURATION_BASE;
extern double CURSE_DURATION_BONUS;
extern double CURSE_COST;
extern double HEALING_DELAY;
extern double HEALING_DURATION_BASE;
extern double HEALING_DURATION_BONUS;
extern double HEALING_COST;
extern double HEALING_HEAL_BASE;
extern double HEALING_HEAL_BONUS;
extern double BLESS_DELAY;
extern double BLESS_DURATION_BASE;
extern double BLESS_DURATION_BONUS;
extern double BLESS_COST;
extern double BLESS_BONUS;
extern double BLESS_MAGIC_BONUS;
extern double DEFLECT_INITIAL_DURATION;
extern double DEFLECT_ADDON_DURATION;
extern double DEFLECT_COST;
extern double DEFLECT_DELAY;
extern double DEFLECT_INITIAL_HITSCAN_CHANCE;
extern double DEFLECT_ADDON_HITSCAN_CHANCE;
extern double DEFLECT_INITIAL_PROJECTILE_CHANCE;
extern double DEFLECT_ADDON_PROJECTILE_CHANCE;
extern double DEFLECT_MAX_PROJECTILE_CHANCE;
extern double DEFLECT_MAX_HITSCAN_CHANCE;
extern double DEFLECT_HITSCAN_ABSORB_BASE;
extern double DEFLECT_HITSCAN_ABSORB_ADDON;
extern double DEFLECT_HITSCAN_ABSORB_MAX;
extern double DEFAULT_AURA_COST;
extern double DEFAULT_AURA_INIT_COST;
extern int DEFAULT_AURA_FRAMES;
extern double DEFAULT_AURA_MIN_RADIUS;
extern double DEFAULT_AURA_ADDON_RADIUS;
extern double DEFAULT_AURA_MAX_RADIUS;
extern int DEFAULT_AURA_SCAN_FRAMES;
extern double DEFAULT_AURA_DURATION;
extern double DEFAULT_AURA_DELAY;
extern double MAX_AURAS;
extern double CARPETBOMB_INITIAL_DAMAGE;
extern double CARPETBOMB_ADDON_DAMAGE;
extern double CARPETBOMB_DAMAGE_RADIUS;
extern double CARPETBOMB_CARPET_WIDTH;
extern double CARPETBOMB_STEP_SIZE;
extern double CARPETBOMB_DURATION;
extern double BOMBAREA_WIDTH;
extern double BOMBAREA_FLOOR_HEIGHT;
extern double BOMBAREA_DURATION;
extern double BOMBAREA_STARTUP_DELAY;
extern double BOMBPERSON_WIDTH;
extern double BOMBPERSON_DURATION;
extern double BOMBPERSON_RANGE;
extern double MAKRON_MAXVELOCITY;
extern double MAKRON_INITIAL_HEALTH;
extern double MAKRON_ADDON_HEALTH;
extern double MAKRON_INITIAL_ARMOR;
extern double MAKRON_ADDON_ARMOR;
extern double MAKRON_CG_INITIAL_DAMAGE;
extern double MAKRON_CG_ADDON_DAMAGE;
extern double MAKRON_BFG_INITIAL_DAMAGE;
extern double MAKRON_BFG_ADDON_DAMAGE;
extern double MAKRON_BFG_DELAY;
extern double MAKRON_BFG_SPEED;
extern double MAKRON_BFG_RADIUS;
extern double MAKRON_TOUCH_DAMAGE;
extern double SKULL_INITIAL_HEALTH;
extern double SKULL_ADDON_HEALTH;
extern double SKULL_INITIAL_DAMAGE;
extern double SKULL_ADDON_DAMAGE;
extern double SKULL_TARGET_RANGE;
extern double SKULL_MAX_RANGE;
extern double SKULL_MOVE_HORIZONTAL_SPEED;
extern double SKULL_MOVE_VERTICAL_SPEED;
extern double SKULL_MAX_DIST;
extern double SKULL_HEIGHT;
extern double SKULL_ATTACK_RANGE;
extern double SKULL_COST;
extern double SKULL_REGEN_FRAMES;
extern double SKULL_DELAY;
extern double SKULL_SEARCH_TIMEOUT;
extern double M_SOLDIER_INITIAL_HEALTH;
extern double M_SOLDIER_ADDON_HEALTH;
extern double M_SOLDIER_INITIAL_ARMOR;
extern double M_SOLDIER_ADDON_ARMOR;
extern double BERSERK_SLASH_INITIAL_DAMAGE;
extern double BERSERK_SLASH_ADDON_DAMAGE;
extern double BERSERK_SLASH_RANGE;
extern double BERSERK_SLASH_KNOCKBACK;
extern double BERSERK_PUNCH_INITIAL_DAMAGE;
extern double BERSERK_PUNCH_ADDON_DAMAGE;
extern double BERSERK_PUNCH_RANGE;
extern double BERSERK_PUNCH_KNOCKBACK;
extern double BERSERK_CRUSH_INITIAL_DAMAGE;
extern double BERSERK_CRUSH_ADDON_DAMAGE;
extern double BERSERK_CRUSH_RANGE;
extern double BERSERK_COST;
extern double BERSERK_DELAY;
extern double BERSERK_REGEN_FRAMES;
extern double BERSERK_REGEN_DELAY;
extern double FLYER_IMPACT_VELOCITY;
extern double FLYER_IMPACT_DAMAGE;
extern double FLYER_HB_REFIRE_FRAMES;
extern double FLYER_HB_INITIAL_DMG;
extern double FLYER_HB_ADDON_DMG;
extern double FLYER_HB_SPEED;
extern double FLYER_INIT_COST;
extern double FLYER_REGEN_FRAMES;
extern double FLYER_REGEN_DELAY;
extern double FLYER_ROCKET_PREFIRE_FRAMES;
extern double FLYER_ROCKET_INITIAL_DMG;
extern double FLYER_ROCKET_ADDON_DMG;
extern double FLYER_ROCKET_SPEED;
extern double FLYER_ROCKET_INITIAL_RADIUS;
extern double FLYER_ROCKET_ADDON_RADIUS;
extern double FLYER_HB_INITIAL_AMMO;
extern double FLYER_HB_ADDON_AMMO;
extern double FLYER_HB_START_AMMO;
extern double FLYER_HB_REGEN_FRAMES;
extern double FLYER_HB_REGEN_DELAY;
extern double FLYER_HB_AMMO;
extern double FLYER_ROCKET_AMMO;
extern double MEDIC_INIT_COST;
extern double MEDIC_DELAY;
extern double MEDIC_HB_INITIAL_DMG;
extern double MEDIC_HB_ADDON_DMG;
extern double MEDIC_HB_INITIAL_SPEED;
extern double MEDIC_HB_ADDON_SPEED;
extern double MEDIC_HB_INITIAL_AMMO;
extern double MEDIC_HB_ADDON_AMMO;
extern double MEDIC_HB_START_AMMO;
extern double MEDIC_HB_REGEN_FRAMES;
extern double MEDIC_HB_REGEN_DELAY;
extern double MEDIC_CABLE_RANGE;
extern double MEDIC_REGEN_FRAMES;
extern double MEDIC_REGEN_DELAY;
extern double MEDIC_BOLT_INITIAL_DMG;
extern double MEDIC_BOLT_ADDON_DMG;
extern double MEDIC_BOLT_INITIAL_SPEED;
extern double MEDIC_BOLT_ADDON_SPEED;
extern double MEDIC_BOLT_AMMO;
extern double MEDIC_RESURRECT_DELAY;
extern double MEDIC_RESURRECT_BONUS;
extern double P_TANK_PUNCH_RADIUS;
extern double P_TANK_PUNCH_INITIAL_DMG;
extern double P_TANK_PUNCH_ADDON_DMG;
extern double P_TANK_BLASTER_INITIAL_DMG;
extern double P_TANK_BLASTER_ADDON_DMG;
extern double P_TANK_BLASTER_INITIAL_SPD;
extern double P_TANK_BLASTER_ADDON_SPD;
extern double P_TANK_ROCKET_INITIAL_DMG;
extern double P_TANK_ROCKET_ADDON_DMG;
extern double P_TANK_ROCKET_INITIAL_SPD;
extern double P_TANK_ROCKET_ADDON_SPD;
extern double P_TANK_BULLET_INITIAL_DMG;
extern double P_TANK_BULLET_ADDON_DMG;
extern double P_TANK_INITIAL_ROCKETS;
extern double P_TANK_ADDON_ROCKETS;
extern double P_TANK_SPAWN_ROCKETS;
extern double P_TANK_INITIAL_BULLETS;
extern double P_TANK_ADDON_BULLETS;
extern double P_TANK_SPAWN_BULLETS;
extern double P_TANK_INITIAL_CELLS;
extern double P_TANK_ADDON_CELLS;
extern double P_TANK_SPAWN_CELLS;
extern double P_TANK_MAX_AMMO;
extern double P_TANK_INIT_COST;
extern double P_TANK_REGEN_FRAMES;
extern double P_TANK_REGEN_DELAY;
extern double P_TANK_AMMOREGEN_FRAMES;
extern double P_TANK_AMMOREGEN_DELAY;
extern double MUTANT_DELAY;
extern double MUTANT_INIT_COST;
extern double MUTANT_SWING_RANGE;
extern double MUTANT_INITIAL_SWING_DMG;
extern double MUTANT_ADDON_SWING_DMG;
extern double MUTANT_JUMPATTACK_VELOCITY;
extern double MUTANT_JUMPATTACK_DELAY;
extern double MUTANT_INITIAL_JUMP_DMG;
extern double MUTANT_ADDON_JUMP_DMG;
extern double MUTANT_JUMPATTACK_RADIUS;
extern double LEVELUP_ARMOR_VAMPIRE;

extern double BRAIN_ATTACK_RANGE;
extern double BRAIN_DEFAULT_TENTACLE_DMG;
extern double BRAIN_ADDON_TENTACLE_DMG;
extern double BRAIN_BEAM_COST;
extern double BRAIN_BEAM_DEFAULT_DMG;
extern double BRAIN_BEAM_ADDON_DMG;
extern double BRAIN_LOCKON_RANGE;
extern double BRAIN_INIT_COST;
extern double MAX_MINISENTRIES;

extern double STRENGTH_BONUS;
extern double IMP_STRENGTH_BONUS;

extern double CACODEMON_DELAY;
extern double CACODEMON_INIT_COST;
extern double CACODEMON_REFIRE;
extern double CACODEMON_INITIAL_DAMAGE;
extern double CACODEMON_ADDON_DAMAGE;
extern double CACODEMON_INITIAL_RADIUS;
extern double CACODEMON_ADDON_RADIUS;
extern double CACODEMON_ADDON_BURN;
extern double CACODEMON_SKULL_SPEED;
extern double CACODEMON_REGEN_FRAMES;
extern double CACODEMON_REGEN_DELAY;
extern double CACODEMON_SKULL_INITIAL_AMMO;
extern double CACODEMON_SKULL_ADDON_AMMO;
extern double CACODEMON_SKULL_START_AMMO;

extern double DOMINATION_POINTS;
extern double DOMINATION_CREDITS;
extern int DOMINATION_AWARD_FRAMES;
extern double DOMINATION_MINIMUM_PLAYERS;
extern double DOMINATION_DEFEND_RANGE;
extern double DOMINATION_DEFEND_BONUS;
extern double DOMINATION_FRAG_POINTS;
extern double DOMINATION_CARRIER_BONUS;
extern double DOMINATION_OFFENSE_BONUS;
extern double BRAIN_DEFAULT_KNOCKBACK;
extern double BRAIN_ADDON_KNOCKBACK;
extern double NATURETOTEM_REFIRE_BASE;
extern double NATURETOTEM_REFIRE_MULT;

extern double SPIKEBALL_INITIAL_HEALTH;
extern double SPIKEBALL_ADDON_HEALTH;
extern double SPIKEBALL_INITIAL_DAMAGE;
extern double SPIKEBALL_ADDON_DAMAGE;
extern double SPIKEBALL_INITIAL_RANGE;
extern double SPIKEBALL_MAX_DIST;
extern double SPIKEBALL_ADDON_RANGE;
extern double SPIKEBALL_INITIAL_DURATION;
extern double SPIKEBALL_ADDON_DURATION;
extern double SPIKEBALL_COST;
extern double SPIKEBALL_DELAY;


#endif
