//
// Created by micha on 2021/11/20.
//

#ifndef UNTITLED24_SIMULATION_H
#define UNTITLED24_SIMULATION_H

#include <iostream>
#include "falcon9_factory.h"
#include "satellite_factory.h"
#include "load_sats.h"
#include "launch.h"
#include "falconHeavy_factory.h"
#include "dragonCrew_factory.h"
#include "load.h"
#include "launch2.h"
#include "DragonCargo.h"
#include "attach.h"
#include "unload.h"
#include "detach.h"
#include "dragonCargo_factory.h"
#include "mediators.h"
#include "space_stations.h"

using namespace std;

class Simulation
{
private:

    aggregate* agg;
    Mediator* mediator;
    ISS* iss;

    vector<mediators*> sat_saves;
    vector<space_stations*> iss_saves;

    vector<DragonCrew*> Dragons_crew;
    vector<DragonCargo*> Dragons_cargo;

    falcon9_factory* f9_factory;
    falconHeavy_factory* fheavy_factory;
    dragonCrew_factory* dcrew_factory;
    dragonCargo_factory* dcargo_factory;

    vector<FirstStageRocket*> f9_fsr;
    int f9_fsr_count;

    vector<FirstStageRocket*> fheavy_fsr;
    int fheavy_fsr_count;

    satellite_factory* sat_fact;

    load_sats* loadSats_command;
    launch* launch_falcon_command;
    load* load_command;
    launch2* launch_dragon_command;
    attach* attach_command;
    unload* unload_command;
    detach* detach_command;

    int dragons_in_orbit;
    int num_sats;







public:
    Simulation();
    ~Simulation();
    void run();

    void menu();

    void createrocket();

    void falcon9factory();
    void falconHeavyfactory();

    void falcon_standby(strategy*, int, FirstStageRocket*);
    void DragonCrewStandby(DragonCrew *);
    void DragonCargoStandby(DragonCargo* );

    void loadsats(strategy*, int, FirstStageRocket*);


    void boardcrew(DragonCrew *pCrew);

    void ManageDragons();

    void DCrewOrbit(DragonCrew *pCrew);

    void loadcargo(DragonCargo *pCargo);

    void DCargoOrbit(DragonCargo *pCargo);

    void ManageSats();
};


#endif //UNTITLED24_SIMULATION_H
