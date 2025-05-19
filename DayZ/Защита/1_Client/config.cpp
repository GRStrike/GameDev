class CfgPatches
{ 
    class Client
    { 
        name = "";
        author = "";
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"DZ_Data"};
    };
};
class CfgMods
{
	class Client
	{
		type = "mod";
		name = "";
		author = "";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"1_Client/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"1_Client/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"1_Client/Scripts/5_Mission"};
			};
		};
	};
};