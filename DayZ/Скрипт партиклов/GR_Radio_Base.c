/*
Скрипт для игрового радио. вносятся файлы с музыкой и воспроизведение происходит в рандомной последовательности

Script for game radio. music files are entered and playback takes place in a random sequence.

*/








class GR_Radio extends BuildingSuper
{

       const static string    m_PlayList[2]   =       {"RATATATA_SoundSet","TMNV_SoundSet"};	  

       EffectSound            m_Play_Sound;
	 
	void GR_Radio()
	{
		if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
		{		
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(PlaySoundGR, 15, true);
		}
	}

	void PlaySoundGR()
	{	
		int random_index = Math.RandomInt(0, 2);  
		string sound_type = m_PlayList[random_index];
		
		if (!m_Play_Sound)
		{
        PlaySoundSet( m_Play_Sound, sound_type, 0, 0 );
		}

	}		
	
}