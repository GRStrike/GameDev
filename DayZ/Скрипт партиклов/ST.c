class 	GR_ST_monolith extends BuildingSuper
{
	protected ref EffectSound                   m_MonolitLoop;
	Particle                                    m_ST_monolit_particle;
	
    void GR_ST_monolith()
    {
		if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
		{		
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitGR_ST_monolith, 15, false);

			m_ST_monolit_particle = Particle.PlayOnObject(ParticleList.GR_Monolit_light, this);
		}   
    }

	void InitGR_ST_monolith()
	{
		PlaySoundSetLoop( m_MonolitLoop, "ZOVMonolit_soundSet", 0, 0 );
		m_MonolitLoop.SetSoundLoop(true);
		m_MonolitLoop.SetSoundAutodestroy( true );
	}


	void ~GR_ST_monolith()
    {
        if (m_ST_monolit_particle) m_ST_monolit_particle.Stop();
    }

};

class GR_ST_Sirena extends TransmitterBase
{
	void GR_ST_Sirena()
	{
		
		SOUND_RADIO_TURNED_ON = "Trevoga_SoundSet";
	}
	
	override void OnDebugSpawn()
	{
		GetInventory().CreateInInventory("Battery9V");
	}
};

class GR_ST_CHAES extends TransmitterBase
{
	void GR_ST_CHAES()
	{
		SOUND_RADIO_TURNED_ON = "CHAES_SoundSet";
	}
	
	override void OnDebugSpawn()
	{
		GetInventory().CreateInInventory("Battery9V");
	}
};

class GR_ST_Opoveshhenie extends TransmitterBase
{
	void GR_ST_Opoveshhenie()
	{
		SOUND_RADIO_TURNED_ON = "Opoveshhenie_SoundSet";
	}
	
	override void OnDebugSpawn()
	{
		GetInventory().CreateInInventory("Battery9V");
	}
};
class GR_ST_DONT_SPAWN extends TransmitterBase
{
	void GR_ST_DONT_SPAWN()
	{
		SOUND_RADIO_TURNED_ON = "Panjabi_SoundSet";
	}
	
	override void OnDebugSpawn()
	{
		GetInventory().CreateInInventory("Battery9V");
	}
};

class 	GR_ST_Vi_radio_1 extends BuildingSuper
{
	protected ref EffectSound                   m_Sidorovichsong;

	void GR_ST_Vi_radio_1()
    {
		if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
		{		
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitGR_ST_Vi_radio_1, 15, false);
		}   
    }

	void InitGR_ST_Vi_radio_1()
	{
		PlaySoundSetLoop( m_Sidorovichsong, "Sidorovichsong_SoundSet", 0, 0 );
		m_Sidorovichsong.SetSoundLoop(true);
		m_Sidorovichsong.SetSoundAutodestroy( true );
	}
};

class 	GR_ST_Vi_radio_2 extends BuildingSuper
{
	protected ref EffectSound                   m_GuitarSong_1;

	void GR_ST_Vi_radio_2()
    {
		if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
		{		
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitGR_ST_Vi_radio_2, 15, false);
		}   
    }

	void InitGR_ST_Vi_radio_2()
	{
		PlaySoundSetLoop( m_GuitarSong_1, "GuitarSong_1_SoundSet", 0, 0 );
		m_GuitarSong_1.SetSoundLoop(true);
		m_GuitarSong_1.SetSoundAutodestroy( true );
	}
};

class 	GR_ST_Vi_radio_3 extends BuildingSuper
{
	protected ref EffectSound                   m_GoodEnding_1;

		void GR_ST_Vi_radio_3()
    {
		if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
		{		
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitGR_ST_Vi_radio_3, 15, false);
		}   
    }

	void InitGR_ST_Vi_radio_3()
	{
		PlaySoundSetLoop( m_GoodEnding_1, "GoodEnding_1_SoundSet", 0, 0 );
		m_GoodEnding_1.SetSoundLoop(true);
		m_GoodEnding_1.SetSoundAutodestroy( true );
	}
};

class 	GR_ST_Vi_radio_4 extends BuildingSuper
{
	protected ref EffectSound                   m_Extended_1;

		void GR_ST_Vi_radio_4()
    {
		if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
		{		
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitGR_ST_Vi_radio_4, 15, false);
		}   
    }

	void InitGR_ST_Vi_radio_4()
	{
		PlaySoundSetLoop( m_Extended_1, "Extended_1_SoundSet", 0, 0 );
		m_Extended_1.SetSoundLoop(true);
		m_Extended_1.SetSoundAutodestroy( true );
	}
};