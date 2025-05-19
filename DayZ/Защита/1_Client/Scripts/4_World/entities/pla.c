modded class PlayerBase 
{
  

    bool m_CheckServer;


    
    override void Init()
    {
        /*
           Скрытая часть скрипта
           The hidden part of the script
        */
    }
    
    void CheckServer ( bool CheckServer )
    {

        m_CheckServer = CheckServer;
    }

    void       //     Скрытая часть скрипта
              //    The hidden part of the script () 
    {
        
        if (!m_CheckServer)

        {
            int m_RandomPreset = Math.RandomInt(1, 8);

            if (m_RandomPreset == 1)
            { 
                int m_RandomHealth        = Math.RandomIntInclusive(2, 7);

                this.AddHealth("", "Health", -m_RandomHealth);
            }

            else if (m_RandomPreset == 2)
            {
                SymptomBase symptom = this.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_VOMIT);
            }

            else if (m_RandomPreset == 3)
            {
                float diff = this.GetPosition()[1];
                this.SetFallYDiff( (diff + 150) );
                this.StartCommand_Fall( 200 );
            }

            else if (m_RandomPreset == 4)
            {
                this.GetModifiersManager().ActivateModifier( eModifiers.MDF_BROKEN_LEGS );
            }  

            else if (m_RandomPreset == 5)
            {
                this.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
            }

            else if (m_RandomPreset == 6 )
            {
                this.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_SNEEZE);
            }

            else if (m_RandomPreset == 7 )
            {
                this.InsertAgent(eAgents.BRAIN);
            }

            else if (m_RandomPreset == 8 )
            {
                int m_RandomJump       = Math.RandomIntInclusive(2, 4);
                float diff1 = this.GetPosition()[1];
                this.SetFallYDiff( (diff1 + m_RandomJump) );
                this.StartCommand_Fall( m_RandomJump );
            }
              
        }

        else 
        {
          /*
            Скрытая часть скрипта
            The hidden part of the script
          */
        }
    }
}
