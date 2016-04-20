class defaultVehicle {
    respawnCondition = "true";
    side = "UNKNOWN";
    respawnTime = -1; // disabled
    ticketValue = 5;
};

class defaultWest : defaultVehicle {
    side = "WEST";
};

class defaultEast : defaultVehicle {
    side = "EAST";
};

class defaultIndependent : defaultVehicle {
    side = "INDEPENDENT";
};

class CfgEntities {

    // mission objects
    // -- Blufor -- //
    // Cars
    class b_car: defaultWest {
        respawnTime = 10;
    };
    class b_car_1: b_car {};
    class b_car_2: b_car {};
    class b_car_3: b_car {};
    class b_car_4: b_car {};

    // Trucks
    class b_truck: defaultWest {
        ticketValue = 10;
        respawnTime = 20;
    };
    class b_truck_1: b_truck {};
    class b_truck_2: b_truck {};
    class b_truck_r_1: b_truck {};
    class b_truck_r_2: b_truck {};
    class b_truck_r_3: b_truck {};

    // Tanks
    class b_tank: defaultWest {
        respawnCondition = "time > 60";
        ticketValue = 20;
    };
    class b_tank_1: b_tank {};

    // Air
    class b_air: defaultWest {
        respawnTime = 60;
        ticketValue = 50;
    };
    class b_air_1: b_air {};
    class b_air_2: b_air {};
    class b_air_3: b_air {};


    // -- Opfor -- //
    // Car
    /*class e_car: defaultEast {

    };*/
    class vr_ifrit_0 : defaultEast {
        respawnTime = 10; // 10 seconds
    };
    class vr_ifrit_1: vr_ifrit_0 {};

    // Trucks
    class vr_ZamakTrans_0: vr_ifrit_0 {
        ticketValue = 10;
        respawnTime = 20;
    };
    class vr_ZamakTrans_1: vr_ZamakTrans_0 {};

    class vr_ZamakRep_0: vr_ZamakTrans_0 {};
    class vr_ZamakFuel_0: vr_ZamakTrans_0 {};
    class vr_ZamakAmmo_0: vr_ZamakTrans_0 {};

    class vr_ZamakLog_0: vr_ZamakTrans_0 {};
    class vr_ZamakLog_1: vr_ZamakTrans_0 {};

    // Tanks
    class vr_varsuk_0 : vr_ifrit_0 {
        respawnCondition = "time > 60";
        ticketValue = 20;
    };
    class vr_varsuk_1: vr_varsuk_0 {};

    // Air
    class vr_orca_0 : defaultEast {
        respawnTime = 60; // 10 seconds
        ticketValue = 50;
    };
    class vr_orca_1: vr_orca_0 {};

    class vr_Taru_0: vr_orca_0 {
        respawnTime = 60;
        ticketValue = 100;
        respawnCondition = "time > 60";
    };

    // Logistic
    class Land_CargoBox_V1_F {
        isDragable = 1;
        cargoIsLoadable = 1;
        cargoCapacity = 10;
        cargoSize = 20;
    };

    class B_Slingload_01_Cargo_F {
        isDragable = 1;
        cargoIsLoadable = 0;
        cargoCapacity = 30;
        cargoSize = 60;
        logisticOffset[] = {0,0,5};
    };

    class B_Heli_Transport_01_F {
        cargoCapacity = 50;
    };

    class B_Heli_Transport_03_F {
        cargoCapacity = 100;
    };

};
