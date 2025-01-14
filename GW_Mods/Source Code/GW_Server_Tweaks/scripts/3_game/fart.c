modded class DayZGame
{
	override void FirearmEffects(Object source, Object directHit, int componentIndex, string surface, vector pos, vector surfNormal,
		 vector exitPos, vector inSpeed, vector outSpeed, bool isWater, bool deflected, string ammoType) 
	{
		#ifndef SERVER
		ImpactEffectsData impactEffectsData = new ImpactEffectsData();
		impactEffectsData.m_DirectHit 		= directHit;
		impactEffectsData.m_ComponentIndex 	= componentIndex;
		impactEffectsData.m_Surface 		= surface;
		impactEffectsData.m_Position		= pos;
		impactEffectsData.m_ImpactType		= ImpactTypes.UNKNOWN;
		impactEffectsData.m_SurfaceNormal	= surfNormal;
		impactEffectsData.m_ExitPosition	= exitPos;
		impactEffectsData.m_InSpeed			= inSpeed;
		impactEffectsData.m_OutSpeed		= outSpeed;
		impactEffectsData.m_IsDeflected		= deflected;
		impactEffectsData.m_AmmoType		= ammoType;
		impactEffectsData.m_IsWater			= isWater;
		Object player = GetPlayer();
		if (directHit && player && directHit == player)
		{
			player.OnPlayerRecievedHit();
			float shake_strength = Math.InverseLerp(0, 500, inSpeed.Length());
			GetGame().GetPlayer().GetCurrentCamera().SpawnCameraShake(shake_strength);
		}
		ImpactMaterials.EvaluateImpactEffectEx(impactEffectsData);
		#endif
		if (IsServer())
		{
			if (source && source.ShootsExplosiveAmmo() && !deflected && outSpeed == vector.Zero)
			{
				if (ammoType == "Bullet_40mm_ChemGas")
				{
					GetGame().CreateObject("ContaminatedArea_Local", pos);
				}
				else if (ammoType == "Bullet_40mm_Explosive")
				{
					DamageSystem.ExplosionDamage(EntityAI.Cast(source), null, "Explosion_40mm_Ammo", pos, DamageType.EXPLOSION);
				}
				else if (ammoType == "Bullet_Fart_Blue_Round")
				{
					GetGame().CreateObject("ContaminatedArea_Local", pos);
				}
			}
			m_NoiseParams.LoadFromPath("cfgAmmo " + ammoType + " NoiseHit");
			float surfaceCoef = SurfaceGetNoiseMultiplier(directHit, pos, componentIndex);
			float coefAdjusted = surfaceCoef * inSpeed.Length() / ConfigGetFloat("cfgAmmo " + ammoType + " initSpeed");
			GetNoiseSystem().AddNoiseTarget(pos, 10, m_NoiseParams, coefAdjusted);
		}
	}
}; 