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
        primaryWeapon = "rhs_weap_ak74m_camo_npz";
        primaryAttachments[] = {"rhsusf_acc_compm4","rhsusf_acc_eotech_552"};
        primaryMagazine = "rhs_30Rnd_545x39_AK";
        primaryMagazineCount = 5;
        primaryMagazineTracer = "rhs_30Rnd_545x39_7N10_AK";
        primaryMagazineTracerCount = 3;

        // Secondary weapon
        secondaryWeapon = "";
        secondaryMagazine = "";
        secondaryMagazineCount = 0;

        // Handgun weapon
        handgunWeapon = "hgun_Rook40_F";
        handgunMagazine = "16Rnd_9x21_Mag";
        handgunMagazineCount = 2;

        // Uniform
        uniform = "rhs_uniform_flora_patchless";
        vest = "rhs_6b23_6sh92_headset";
        backpack = "rhs_sidor";
        headGear = "rhs_6b28_green_ess";

        // Items
        assignedItems[] = {"ItemWatch", "ItemCompass", "ItemRadio", "ItemMap", "ItemGPS"};
        items[] = {{"FirstAidKit", 3}, {"HandGrenade", 2}, {"SmokeShell", 2}, "SmokeShellGreen", "SmokeShellRed"};
    };
    class Officer: Rifleman {
        availableInGroups[] = {"Rifle", "Weapon"};

        displayName = "Squad Leader";

        isLeader = 1;

        secondaryWeapon = "Binocular";

        primaryAttachments[] = {"optic_Arco","acc_pointer_IR"};
        backpack = "B_TacticalPack_ocamo";
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

        primaryWeapon = "rhs_weap_ak74m_camo_npz";
        assignedItems[] += {};

        icon = "\a3\ui_f\data\IGUI\Cfg\Actions\heal_ca.paa";
        UIIcon = "a3\ui_f\data\Revive\medikit_ca.paa";
        mapIcon = "\A3\ui_f\data\map\vehicleicons\iconManMedic_ca.paa";

        backpack = "B_TacticalPack_ocamo";
        items[] = {{"FirstAidKit", 3}, {"Medikit", 1}, {"SmokeShell", 2}, "SmokeShellGreen", "SmokeShellRed"};
    };
    class AutomaticRifleman: Rifleman {
        kitGroup = "Limited";
        availableInGroups[] = {"Rifle"};

        displayName = "Automatic Rifleman";

        primaryWeapon = "rhs_weap_pkm";
        primaryAttachments[] = {"acc_pointer_IR","bipod_01_F_blk"};
        primaryMagazine = "rhs_100Rnd_762x54mmR";
        primaryMagazineCount = 2;
        primaryMagazineTracer = "rhs_100Rnd_762x54mmR_green";
        primaryMagazineTracerCount = 3;
        backpack = "B_Carryall_oli";
        items[] = {{"FirstAidKit", 2}, {"HandGrenade", 2}, {"SmokeShell", 2}, "SmokeShellGreen", "SmokeShellRed"};

        UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\mg_ca.paa";
    };
    class Grenadier: Rifleman {
        kitGroup = "Limited";
        availableInGroups[] = {"Rifle"};

        displayName = "Grenadier";

        primaryWeapon = "rhs_weap_ak74m_gp25";
        items[] += {{"rhs_VOG25", 6}};

        UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\gl_ca.paa";
    };
    class Marksman: Rifleman {
        kitGroup = "Limited";
        availableInGroups[] = {"Rifle"};

        displayName = "Marksman";

        primaryWeapon = "rhs_weap_svdp_wd";
        primaryAttachments[] = "rhs_acc_pso1m2"

        primaryMagazine = "rhs_10Rnd_762x54mmR_7N1";
        primaryMagazineCount = 10;

        secondaryWeapon = "Rangefinder";

        UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\srifle_ca.paa";
        assignedItems[] += {"Rangefinder"};
    };
    class Engineer: Rifleman {
        kitGroup = "Limited";
        availableInGroups[] = {"Rifle"};

        displayName = "Engineer";

        isEngineer = 1;
        items[] += {"ToolKit"};
        UIIcon = "a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa";
    };
    class AntiAir: Rifleman {
        kitGroup = "Limited";
        availableInGroups[] = {"Rifle"};

        displayName = "AA Rifleman";

        secondaryWeapon = "rhs_weap_igla";
        secondaryMagazine = "rhs_mag_9k38_rocket";
        secondaryMagazineCount = 1;
        backpack = "B_Carryall_oli";
        UIIcon = "a3\ui_f\data\IGUI\Cfg\WeaponIcons\aa_ca.paa";
    };
    class LightAntiTank: Rifleman {
        kitGroup = "Limited";
        availableInGroups[] = {"Rifle"};

        displayName = "LAT Rifleman";

        secondaryWeapon = "rhs_weap_rpg7";
        secondaryMagazine = "rhs_rpg7_PG7VL_mag";
        secondaryMagazineCount = 2;
        backpack = "B_Carryall_oli";

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