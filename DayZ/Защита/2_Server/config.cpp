class CfgPatches
{ 
    class Server
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
	class Server
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
				files[] = {"2_Server/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"2_Server/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"2_Server/Scripts/5_Mission"};
			};
		};
	};
};