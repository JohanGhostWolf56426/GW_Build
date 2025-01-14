class GW_Chemical_Gas_Mine extends LandMineTrap
{
    override void OnSteppedOn(EntityAI victim)
	{
		if (GetGame().IsServer() && victim)
		{
			if (!victim.GetAllowDamage())
			{
				return;
			}
			if (victim.IsInherited(CarScript))
			{
				Param1<EntityAI> params = new Param1<EntityAI>(victim);
				m_UpdateTimer.Run(UPDATE_TIMER_INTERVAL, this, "OnUpdate", params, true);
				return;
			}
			else
			{
				Explode(DamageType.EXPLOSION);
			}
			DeleteThis();
		}
		SetInactive(false);
	}
    override void Explode(int damageType, string ammoType = "")
	{
		ammoType = "FlashGrenade_Ammo";
		if ( GetGame().IsServer() )
		{
			SynchExplosion();
			vector offset = Vector(0, 0.1, 0);
			DamageSystem.ExplosionDamage(this, NULL, ammoType, GetPosition() + offset, damageType);
            GetGame().CreateObject("ContaminatedArea_Local", GetPosition());
			DeleteThis();
		}
	}
}