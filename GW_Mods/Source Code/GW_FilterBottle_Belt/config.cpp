class CfgPatches
{
	class GW_FilterBottle_Belt
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Drinks"
		};
	};
};
class CfgMods
{
	class GW_FilterBottle_Belt
	{
		dir="GW_FilterBottle_Belt";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="GW_FilterBottle_Belt";
		credits="GhostWolf";
		author="GhostWolf";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]={};
		class defs{};
	};
};
class cfgVehicles
{
	class Bottle_Base;
	class FilteringBottle: Bottle_Base
	{
		inventorySlot[]=
		{
			"Belt_Left"
		};
	};
};