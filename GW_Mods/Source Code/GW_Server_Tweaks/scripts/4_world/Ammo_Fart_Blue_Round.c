class Ammo_Fart_Blue_Round: Ammo_40mm_Base
{
	override void OnActivatedByItem(notnull ItemBase item)
	{
		if (GetGame().IsServer())
		{
			GetGame().CreateObject("ContaminatedArea_Local", item.GetPosition());
		}
	}
	override void EEKilled(Object killer)
	{
		super.EEKilled(killer);
		GetGame().CreateObject("ContaminatedArea_Local", GetPosition());
		GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater( DeleteSafe, 1000, false);
	}
	override void OnDamageDestroyed(int oldLevel)
	{
		super.OnDamageDestroyed(oldLevel);
		#ifndef SERVER
		ClearFlags(EntityFlags.VISIBLE, false);
		ParticleManager.GetInstance().PlayInWorld(ParticleList.GRENADE_CHEM_BREAK, GetPosition());
		#endif
	}
}