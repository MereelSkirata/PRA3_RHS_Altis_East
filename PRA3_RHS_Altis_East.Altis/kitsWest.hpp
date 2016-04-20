class Kits {
    class Rifleman {
        scope = 1;
        kitGroup = "Unlimited";
        availableInGroups[] = {"Rifle", "Weapon", "Mortar"};

        // Display
        displayName = "Rifleman";
        icon = "";
        UIIcon = "a3\ui_f\data\IGUI\Cfg\Actions\gear_ca.paa";
        mapIcon = "\A3\ui_f\data\map\vehicleicons\iconMan_ca.paa";

        // Special attributes
        isLeader = 0;
        isMedic = 0;
        isEngineer = 0;
        isPilot = 0;
        isCrew = 0;

        // Primary weapon
      	primaryWeapon = "rhs_weap_m4a1_carryhandle_grip";
        primaryAttachments[] = {"rhsusf_acc_eotech_552"};
        primaryMagazine = "30Rnd_556x45_Stanag";
        primaryMagazineCount = 7;
        primaryMagazineTracer = "30Rnd_556x45_Stanag_Tracer_Red";
        primaryMagazineTracerCount = 3;

        // Secondary weapon
        secondaryWeapon = "";
        secondaryMagazine = "";
        secondaryMagazineCount = 0;

        // Handgun weapon
        handgunWeapon = "rhsusf_weap_glock17g4";
        handgunMagazine = "rhsusf_mag_17Rnd_9x19_JHP";
        handgunMagazineCount = 3;

        // Uniform
        uniform = "rhs_uniform_FROG01_wd";
        vest = "V_PlateCarrier2_rgr";
        backpack = "rhsusf_assault_eagleaiii_coy";
        headGear = "rhsusf_lwh_helmet_marpatwd_ess";

        // Items
        assignedItems[] = {"ItemWatch", "ItemCompass", "ItemRadio", "ItemMap", "ItemGPS"};
        items[] = {{"FirstAidKit", 3}, {"HandGrenade", 2}, {"SmokeShell", 2}, "SmokeShellGreen", "SmokeShellRed","ACRE_PRC152",};
    };
    class Officer: Rifleman {
        availableInGroups[] = {"Rifle", "Weapon"};

        displayName = "Squad Leader";

        isLeader = 1;

        secondaryWeapon = "Binocular";

        primaryAttachments[] = {"rhsusf_acc_ACOG"};
        backpack = "rhsusf_assault_eagleaiii_ocp";
        items[] = {{"FirstAidKit", 3}, {"HandGrenade", 2}, {"SmokeShell", 4}, {"SmokeShellGreen", 3}, {"SmokeShellRed", 3}};
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
        UIIcon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
        mapIcon = "\A3\ui_f\data\map\vehicleicons\iconManLeader_ca.paa";
    };
    class Medic: Rifleman {
        kitGroup = "Specialized";
        availableInGroups[] = {"Rifle", "Weapon"};

        displayName = "Medic";

        isMedic = 1;

        primaryWeapon = "rhs_weap_m4a1_carryhandle";
        backpack = "rhsusf_assault_eagleaiii_ocp";
        assignedItems[] += {};
        items[] = {{"FirstAidKit", 10}, {"HandGrenade", 2}, {"SmokeShell", 2}, "SmokeShellGreen", "SmokeShellRed", "Medikit"};

        icon = "\a3\ui_f\data\IGUI\Cfg\Actions\heal_ca.paa";
        UIIcon = "a3\ui_f\data\Revive\medikit_ca.paa";
        mapIcon = "\A3\ui_f\data\map\vehicleicons\iconManMedic_ca.paa";
    };
    class AutomaticRifleman: Rifleman {
        kitGroup = "Limited";
        availableInGroups[] = {"Rifle"};

        displayName = "Automatic Rifleman";

        primaryWeapon = "rhs_weap_m249_pip_L";
        primaryAttachments[] = {"rhsusf_acc_ELCAN"};
        primaryMagazine = "rhs_200rnd_556x45_M_SAW";
        primaryMagazineCount = 2;
        primaryMagazineTracer = "rhs_200rnd_556x45_T_SAW";
        primaryMagazineTracerCount = 3;
        backpack = "B_Carryall_mcamo";
        items[] = {{"FirstAidKit", 2}, {"HandGrenade", 2}, {"SmokeShell", 2}, "SmokeShellGreen", "SmokeShellRed"};

        UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\mg_ca.paa";
    };
    class Grenadier: Rifleman {
        kitGroup = "Limited";
        availableInGroups[] = {"Rifle"};

        displayName = "Grenadier";

        primaryWeapon = "rhs_weap_m4a1_m320";
        items[] += {{"rhs_mag_M441_HE", 6}};

        UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\gl_ca.paa";
    };
    class Marksman: Rifleman {
        kitGroup = "Limited";
        availableInGroups[] = {"Rifle"};

        displayName = "Marksman";

        primaryWeapon = "rhs_weap_sr25";
        primaryAttachments[] = {"rhsusf_acc_LEUPOLDMK4"};
        primaryMagazine = "rhsusf_20Rnd_762x51_m118_special_Mag";
        primaryMagazineCount = 6;

        secondaryWeapon = "Rangefinder";

        UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\srifle_ca.paa";
    };
    class Engineer: Rifleman {
        kitGroup = "Limited";
        availableInGroups[] = {"Rifle"};

        displayName = "Engineer";

        isEngineer = 1;

        UIIcon = "a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa";
    };
    class AntiAir: Rifleman {
        kitGroup = "Limited";
        availableInGroups[] = {"Rifle"};

        displayName = "AA Rifleman";

        secondaryWeapon = "rhs_weap_fim92";
        secondaryMagazine = "rhs_fim92_mag";
        secondaryMagazineCount = 1;
        backpack = "B_Carryall_mcamo";

        UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\aa_ca.paa";
    };
    class LightAntiTank: Rifleman {
        kitGroup = "Limited";
        availableInGroups[] = {"Rifle"};

        secondaryWeapon = "rhs_weap_smaw_green";
        secondaryMagazine = "rhs_mag_smaw_HEAA";
        secondaryMagazineCount = 1;
        backpack = "B_Carryall_mcamo";
        displayName = "LAT Rifleman";

        UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\at_ca.paa";
    };
    class HeavyAntiTank: Rifleman {
        kitGroup = "Limited";
        availableInGroups[] = {"Weapon"};

        displayName = "HAT Rifleman";
    };
    class HeavyMachineGun: Rifleman {
        kitGroup = "Limited";
        availableInGroups[] = {"Weapon"};

        displayName = "HMG Rifleman";
    };
    class AmmoBearer: Rifleman {
        availableInGroups[] = {"Weapon"};

        displayName = "Ammo Bearer";
    };
    class Crewman: Rifleman {
        availableInGroups[] = {"Vehicle", "Helicopter"};

        displayName = "Crewman";

        isCrew = 1;
    };
    class Pilot: Rifleman {
        availableInGroups[] = {"Helicopter"};

        displayName = "Pilot";

        isPilot = 1;
    };
    class Sniper: Rifleman {
        kitGroup = "Limited";
        availableInGroups[] = {"Recon"};

        displayName = "Sniper";
    };
    class Spotter: Rifleman {
        availableInGroups[] = {"Recon"};

        displayName = "Spotter";
    };
    class Specialist: Rifleman {
        availableInGroups[] = {"Recon"};

        displayName = "Specialist";
    };
    class MortarOperator: Rifleman {
        kitGroup = "Limited";
        availableInGroups[] = {"Mortar"};

        displayName = "Mortar Operator";
    };
};
