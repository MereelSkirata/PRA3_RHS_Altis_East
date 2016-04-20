class Sides {
    class West {
        name = "US";
        playerClass = "B_Soldier_F";
        flag = "a3\data_f\Flags\flag_us_co.paa";
        mapIcon = "a3\ui_f\data\Map\Markers\NATO\b_installation.paa";
        color[] = {0, 0.3, 0.8, 1};
        squadRallyPointObjects[] = {{"Land_Campfire_F", {0,0,0}}};
        #include "kitsWest.hpp"
    };

    class East: West {
        name = "RU";
        playerClass = "O_Soldier_F";
        flag = "\rhsafrf\addons\rhs_main\data\flag_rus_co.paa";
        mapIcon = "a3\ui_f\data\Map\Markers\NATO\o_installation.paa";
        color[] = {0.5, 0, 0, 1};
        squadRallyPointObjects[] = {{"Land_Campfire_F", {0,0,0}}};
        #include "kitsEast.hpp"
    };
};
