
// base config
class sector {
    dependency[] = {};
    ticketValue = 30;
    captureTime[] = {30,60};
    minUnits = 1;
    isLastSector = "";
    firstCaptureTime[] = {5,15};
};

class CfgSectors {

    class base_west: sector {
    };

    class base_east: sector {
    };

    class CfgSectorPath {
        class path_0 {
            class sector_1: sector {    // molos
                dependency[] = {"base_west", "sector_2"};
                designator = "A";
            };
            class sector_2: sector {  // sofia
                dependency[] = {"sector_1", "sector_3"};
                designator = "B";
            };
            class sector_3: sector {
                dependency[] = {"sector_2", "sector_4"};
                designator = "C";
            };
            class sector_4: sector {
                dependency[] = {"sector_3", "sector_5"};
                designator = "D";
            };
            class sector_5: sector {
                dependency[] = {"sector_4", "sector_6"};
                designator = "E";
            };
            class sector_6: sector {
                dependency[] = {"sector_5", "sector_7"};
                designator = "F";
            };
            class sector_7: sector {
                dependency[] = {"sector_6", "sector_8"};
                designator = "G";
            };
            class sector_8: sector {
                dependency[] = {"sector_7", "sector_9"};
                designator = "H";
            };
            class sector_9: sector {
                dependency[] = {"sector_8", "sector_10"};
                designator = "I";
            };
            class sector_10: sector {
                dependency[] = {"sector_9", "sector_11"};
                designator = "J";
            };
            class sector_11: sector {
                dependency[] = {"sector_10", "sector_12"};
                designator = "K";
            };
            class sector_12: sector {
                dependency[] = {"sector_11", "sector_13"};
                designator = "L";
            };
            class sector_13: sector {
                dependency[] = {"sector_12", "base_east"};
                designator = "M";
            };
        };
    };
};
