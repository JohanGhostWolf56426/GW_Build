class CfgPatches
{
	class GW_Server_Tweaks
	{
		units[]=
		{
			"GW_DemonSteakMeat",
			"Ammo_GW_40mm_Fart_Blue_Rnd",
			"GW_Chemical_Gas_Mine"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Melee",
			"DZ_Gear_Cooking",
			"DZ_Gear_Crafting",
			"DZ_Gear_Food",
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Belts",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Characters_Vests",
			"DZ_Gear_Camping",
			"DZ_Gear_Containers",
			"DZ_Gear_Medical",
			"DZ_Gear_Drinks",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Ammunition"
		};
	};
};
class CfgMods
{
	class GW_Server_Tweaks
	{
		dir="GW_Server_Tweaks";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="GW_Server_Tweaks";
		credits="GhostWolf";
		author="GhostWolf";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"GW_Server_Tweaks\scripts\3_game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"GW_Server_Tweaks\scripts\4_world"
				};
			};
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Ammunition_Base: Magazine_Base {};
	class Ammo_45ACP: Ammunition_Base
	{
		count=100;
	};
	class Ammo_308Win: Ammunition_Base
	{
		count=100;
	};
	class Ammo_308WinTracer: Ammunition_Base
	{
		count=100;
	};
	class Ammo_9x19: Ammunition_Base
	{
		count=100;
	};
	class Ammo_380: Ammunition_Base
	{
		count=100;
	};
	class Ammo_556x45: Ammunition_Base
	{
		count=100;
	};
	class Ammo_556x45Tracer: Ammunition_Base
	{
		count=100;
	};
	class Ammo_762x54: Ammunition_Base
	{
		count=100;
	};
	class Ammo_762x54Tracer: Ammunition_Base
	{
		count=100;
	};
	class Ammo_762x39: Ammunition_Base
	{
		count=100;
	};
	class Ammo_762x39Tracer: Ammunition_Base
	{
		count=100;
	};
	class Ammo_9x39AP: Ammunition_Base
	{
		count=100;
	};
	class Ammo_9x39: Ammunition_Base
	{
		count=100;
	};
	class Ammo_22: Ammunition_Base
	{
		count=100;
	};
	class Ammo_12gaPellets: Ammunition_Base
	{
		count=100;
	};
	class Ammo_12gaSlug: Ammunition_Base
	{
		count=100;
	};
	class Ammo_12gaRubberSlug: Ammunition_Base
	{
		count=100;
	};
	class Ammo_357: Ammunition_Base
	{
		count=100;
	};
	class Ammo_545x39: Ammunition_Base
	{
		count=100;
	};
	class Ammo_545x39Tracer: Ammunition_Base
	{
		count=100;
	};
	class Ammo_HuntingBolt: Ammunition_Base
	{
		count=20;
	};
	class Ammo_ImprovisedBolt_2: Ammunition_Base
	{
		count=10;
	};
	class Ammo_Flare: Ammunition_Base
	{
		count=10;
	};
	class Ammo_40mm_Base: Ammunition_Base
	{
		count=10;
	};
	class Ammo_GW_40mm_Fart_Blue_Rnd: Ammo_40mm_Base
	{
		scope=2;
		displayName="40mm Fart Round";
		descriptionShort="A loud fart and a deadly gas smell gets released when the round is fired.";
		model="\dz\weapons\ammunition\40mm_grenade_ChemGas.p3d";
		ammo="Bullet_Fart_Blue_Round";
		hiddenSelections[]=
		{
			"camo_shell"
		};
		hiddenSelectionsTextures[]=
		{
			"GW_Server_Tweaks\data\40mm_Fart_Blue_Rnd.paa"
		};
	};
};
class CfgAmmo
{
	class Bullet_40mm_ChemGas;
	class Bullet_Fart_Blue_Round: Bullet_40mm_ChemGas
	{
		caliber=1;
		deflecting=0;
		spawnPileType="Ammo_GW_40mm_Fart_Blue_Rnd";
		model="\dz\weapons\projectiles\tracer_40mm_grenade_ChemGas.p3d";
		proxyShape="\dz\weapons\projectiles\40mm_grenade_ChemGas_SingleRound.p3d";
		soundSetExplosion[]=
		{
			"FartBlue_SoundSet"
		};
		round="FxRound_40mmChemGas";
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=0;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=1000;
			};
		};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_Fart_Blue_Round
	{
		name="Bullet_Fart_Blue_Round";
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class FartBlue_SoundShader
	{
		samples[]=
		{
			
			{
				"GW_Server_Tweaks\data\FartBlue.ogg",
				1
			}
		};
		range=1000;
		volume=2.5;
		rangeCurve="closeShotCurve";
	};
};
class CfgSoundSets
{
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_Shot_Base_SoundSet;
	class FartBlue_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"FartBlue_SoundShader"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Bottle_Base;
	class HumanSteakMeat;
	class Clothing_Base;
	class Container_Base;
	class Edible_Base;
	class WoodenStick: Inventory_Base
	{
		varStackMax=6;
	};
	class Clothing: Clothing_Base {};
	class TaloonBag_ColorBase: Clothing
	{
		itemsCargoSize[]={6,6};
	};
	class TortillaBag: Clothing
	{
		itemsCargoSize[]={8,8};
	};
	class DryBag_ColorBase: Clothing
	{
		itemsCargoSize[]={7,7};
	};
	class HuntingBag: Clothing
	{
		itemsCargoSize[]={7,7};
	};
	class MountainBag_ColorBase: Clothing
	{
		itemsCargoSize[]={8,8};
	};
	class SmershBag: Clothing
	{
		itemsCargoSize[]={6,5};
	};
	class ChildBag_ColorBase: Clothing
	{
		itemsCargoSize[]={6,5};
	};
	class AssaultBag_ColorBase: Clothing
	{
		itemsCargoSize[]={7,6};
	};
	class CoyoteBag_ColorBase: Clothing
	{
		itemsCargoSize[]={8,8};
	};
	class AliceBag_ColorBase: Clothing
	{
		itemsCargoSize[]={9,8};
	};
	class SlingBag_ColorBase: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class ArmyPouch_ColorBase: Clothing
	{
		itemsCargoSize[]={6,5};
	};
	class DuffelBagSmall_ColorBase: Clothing
	{
		itemsCargoSize[]={6,5};
	};
	class CanvasBag_ColorBase: Clothing
	{
		itemsCargoSize[]={6,5};
	};
	class DrysackBag_ColorBase: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class HipPack_ColorBase: Clothing
	{
		itemsCargoSize[]={3,3};
	};
	class Jeans_ColorBase: Clothing
	{
		itemsCargoSize[]={4,4};
	};
	class CargoPants_ColorBase: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class TTSKOPants: Clothing
	{
		itemsCargoSize[]={5,4};
	};
	class HunterPants_ColorBase: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class CanvasPants_ColorBase: Clothing
	{
		itemsCargoSize[]={4,4};
	};
	class CanvasPantsMidi_ColorBase: Clothing
	{
		itemsCargoSize[]={4,4};
	};
	class TrackSuitPants_ColorBase: Clothing
	{
		itemsCargoSize[]={4,4};
	};
	class GorkaPants_ColorBase: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class PolicePants: Clothing
	{
		itemsCargoSize[]={4,4};
	};
	class PolicePantsOrel: Clothing
	{
		itemsCargoSize[]={5,4};
	};
	class ParamedicPants_ColorBase: Clothing
	{
		itemsCargoSize[]={5,4};
	};
	class FirefightersPants_ColorBase: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class PrisonUniformPants: Clothing
	{
		itemsCargoSize[]={4,3};
	};
	class MedicalScrubsPants_ColorBase: Clothing
	{
		itemsCargoSize[]={4,4};
	};
	class USMCPants_ColorBase: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class OMKPants_ColorBase: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class SlacksPants_ColorBase: Clothing
	{
		itemsCargoSize[]={4,3};
	};
	class BDUPants: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class NBCPantsBase: Clothing
	{
		itemsCargoSize[]={4,4};
	};
	class Breeches_ColorBase: Clothing
	{
		itemsCargoSize[]={4,4};
	};
	class ShortJeans_ColorBase: Clothing
	{
		itemsCargoSize[]={4,4};
	};
	class Skirt_ColorBase: Clothing
	{
		itemsCargoSize[]={4,3};
	};
	class JumpsuitPants_ColorBase: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class Chainmail_Leggings: Clothing
	{
		itemsCargoSize[]={4,3};
	};
	class DownJacket_ColorBase: Clothing
	{
		itemsCargoSize[]={6,5};
	};
	class Sweater_ColorBase: Clothing
	{
		itemsCargoSize[]={4,3};
	};
	class Shirt_ColorBase: Clothing
	{
		itemsCargoSize[]={4,3};
	};
	class TShirt_ColorBase: Clothing
	{
		itemsCargoSize[]={4,3};
	};
	class Hoodie_ColorBase: Clothing
	{
		itemsCargoSize[]={5,4};
	};
	class TacticalShirt_ColorBase: Clothing
	{
		itemsCargoSize[]={6,5};
	};
	class HikingJacket_ColorBase: Clothing
	{
		itemsCargoSize[]={6,5};
	};
	class Raincoat_ColorBase: Clothing
	{
		itemsCargoSize[]={4,4};
	};
	class M65Jacket_ColorBase: Clothing
	{
		itemsCargoSize[]={6,5};
	};
	class TTsKOJacket_ColorBase: Clothing
	{
		itemsCargoSize[]={6,5};
	};
	class GorkaEJacket_ColorBase: Clothing
	{
		itemsCargoSize[]={6,5};
	};
	class RidersJacket_ColorBase: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class WoolCoat_ColorBase: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class TrackSuitJacket_ColorBase: Clothing
	{
		itemsCargoSize[]={5,4};
	};
	class PoliceJacket: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class PoliceJacketOrel: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class BushlatPoliceJacket_ColorBase: Clothing
	{
		itemsCargoSize[]={6,5};
	};
	class ParamedicJacket_ColorBase: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class FirefighterJacket_ColorBase: Clothing
	{
		itemsCargoSize[]={6,5};
	};
	class PrisonUniformJacket: Clothing
	{
		itemsCargoSize[]={5,4};
	};
	class MiniDress_ColorBase: Clothing
	{
		itemsCargoSize[]={4,3};
	};
	class QuiltedJacket_ColorBase: Clothing
	{
		itemsCargoSize[]={6,5};
	};
	class BomberJacket_ColorBase: Clothing
	{
		itemsCargoSize[]={6,5};
	};
	class HuntingJacket_ColorBase: Clothing
	{
		itemsCargoSize[]={6,5};
	};
	class MedicalScrubsShirt_ColorBase: Clothing
	{
		itemsCargoSize[]={5,4};
	};
	class LabCoat: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class NurseDress_ColorBase: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class USMCJacket_ColorBase: Clothing
	{
		itemsCargoSize[]={6,5};
	};
	class OMKJacket_ColorBase: Clothing
	{
		itemsCargoSize[]={6,6};
	};
	class Blouse_ColorBase: Clothing
	{
		itemsCargoSize[]={4,3};
	};
	class NBCJacketBase: Clothing
	{
		itemsCargoSize[]={4,4};
	};
	class DenimJacket: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class TelnyashkaShirt: Clothing
	{
		itemsCargoSize[]={4,3};
	};
	class ChernarusSportShirt: Clothing
	{
		itemsCargoSize[]={4,3};
	};
	class JumpsuitJacket_ColorBase: Clothing
	{
		itemsCargoSize[]={6,5};
	};
	class BDUJacket: Clothing
	{
		itemsCargoSize[]={6,5};	
	};
	class ManSuit_ColorBase: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class WomanSuit_ColorBase: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class Chainmail: Clothing
	{
		itemsCargoSize[]={4,4};
	};
	class SmershVest: Clothing
	{
		itemsCargoSize[]={5,4};
	};
	class PressVest_ColorBase: Clothing
	{
		itemsCargoSize[]={5,4};
	};
	class UKAssVest_ColorBase: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class HighCapacityVest_ColorBase: Clothing
	{
		itemsCargoSize[]={5,5};
	};
	class HuntingVest: Clothing
	{
		itemsCargoSize[]={5,4};
	};
	class TentBase: Container_Base {};
	class MediumTent: TentBase
	{
		itemsCargoSize[]={10,30};
	};
	class LargeTent: TentBase
	{
		itemsCargoSize[]={10,50};
	};
	class CarTent: TentBase
	{
		itemsCargoSize[]={10,60};
	};
	class PartyTent: TentBase
	{
		itemsCargoSize[]={10,20};
	};
	class SeaChest: Container_Base
	{
		class Cargo
		{
			itemsCargoSize[]={10,20};
		};
	};
	class WoodenCrate: Container_Base
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class Barrel_ColorBase: Container_Base
	{
		class Cargo
		{
			itemsCargoSize[]={10,20};
		};
	};
	class FirstAidKit: Container_Base
	{
		itemsCargoSize[]={4,3};
	};
	class SmallProtectorCase: Container_Base
	{
		itemsCargoSize[]={4,4};
	};
	class PlateCarrierPouches: Container_Base
	{
		itemsCargoSize[]={5,4};
	};
	class AmmoBox: Container_Base
	{
		itemsCargoSize[]={5,5};
	};
	class Bear_ColorBase: Container_Base
	{
		itemsCargoSize[]={3,3};
	};
	class WaterproofBag_ColorBase: Container_Base
	{
		itemsCargoSize[]={5,5};
	};
	class FireplaceBase: Inventory_Base {};
	class BarrelHoles_ColorBase: FireplaceBase
	{
		class Cargo
		{
			itemsCargoSize[]={10,20};
		};
	};
	class Pot: Bottle_Base
	{
		itemsCargoSize[]={4,4};
	};
	class FryingPan: Inventory_Base
	{
		itemsCargoSize[]={4,4};
	};
	class CharcoalTablets: Edible_Base
	{
		varQuantityInit=10;
		varQuantityMax=10;
	};
	class PainkillerTablets: Edible_Base
	{
		varQuantityInit=10;
		varQuantityMax=10;
	};
	class VitaminBottle: Edible_Base
	{
		varQuantityInit=10;
		varQuantityMax=10;
	};
	class ChelatingTablets: Edible_Base
	{
		varQuantityInit=10;
		varQuantityMax=10;
	};
	class TetracyclineAntibiotics: Edible_Base
	{
		varQuantityInit=10;
		varQuantityMax=10;
	};
	class FilteringBottle: Bottle_Base
	{
		inventorySlot[]=
		{
			"Belt_Left"
		};
	};
	class LandMineTrap;
	class GW_Chemical_Gas_Mine: LandMineTrap 
	{
		scope=2;
		displayName="Chemical Gas Land Mine";
		descriptionShort="A land mine that is manufactured to contain a chemical gas agent.";
		hiddenSelectionsTextures[]=
		{
			"GW_Server_Tweaks\data\GW_Chemical_Gas_Mine.paa"
		};
	};
	
	// GW Custom Items
	class GW_DemonSteakMeat: HumanSteakMeat
	{
		scope=2;
		displayName="$STR_GoatSteakMeat0";
		descriptionShort="$STR_GoatSteakMeat1";
		model="\dz\gear\food\meat_steak.p3d";
		itemSize[]={1,2};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\meat_steak_raw_CO.paa",
			"dz\gear\food\data\meat_steak_baked_CO.paa",
			"dz\gear\food\data\meat_steak_boiled_co.paa",
			"dz\gear\food\data\meat_steak_dried_CO.paa",
			"dz\gear\food\data\meat_steak_burned_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\meat_steak_raw.rvmat",
			"dz\gear\food\data\meat_steak_baked.rvmat",
			"dz\gear\food\data\meat_steak_boiled.rvmat",
			"dz\gear\food\data\meat_steak_dried.rvmat",
			"dz\gear\food\data\meat_steak_burnt.rvmat",
			"dz\gear\food\data\meat_steak_rotten.rvmat"
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,50,40,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						16,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={2,250,24,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={2,200,64,1,0};
					cooking_properties[]={70,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={3,200,8,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,50,0,1,0,16};
					cooking_properties[]={100,30};
				};
			};
		};
		class Trapping
		{
			baitTypes[]={2};
			baitTypeChances[]={0.69999999};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
};
