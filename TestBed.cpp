#include "TestBed.h"
#include <vector>
#include "aggregate.h"
#include "ISS.h"
#include "satellite_factory.h"
#include "load_sats.h"
#include "launch.h"
#include "deploy_sats.h"

TestBed::TestBed()
{
}

TestBed::~TestBed()
{
}

bool TestBed::run()
{
#define NUMSATS 60
#define NUMFALCONS 2

    aggregate *agg = new aggregate();
    Mediator *med = new Mediator(agg);

    falcon_command *ls = new load_sats();   // the load sats command
    falcon_command *ds = new deploy_sats(); // the deploy sats command
    falcon_command *la = new launch();      // the launch command

    FirstStageRocket *first9 = new FirstStageRocket(9);
    FirstStageRocket *firstH = new FirstStageRocket(27);
    falcon9_factory *f9 = new falcon9_factory();
    falconHeavy_factory *fH = new falconHeavy_factory();

    strategy **falcons = new strategy *[NUMFALCONS];

    satellite_factory *satFactory = new satellite_factory(agg, med);

    falcons[0] = f9->createFalcon(first9);
    falcons[1] = fH->createFalcon(firstH);

    satellite **sats = new satellite *[NUMSATS];

    for (int i = 0; i < NUMSATS; i++)
    {
        sats[i] = satFactory->create_sat();
    }

    for (int i = 0; i < NUMSATS; i++)
    {
        ls->execute(falcons[0], sats[i]);
    }

    la->execute(falcons[0], NULL);
    //falcons[0]->launch_sequence();
    falcons[1]->launch_sequence();

    ds->execute(falcons[0], NULL);

    if (sats[10]->getOrbit())
    {
        cout << "Satellite: " << sats[10]->getName() << " is in orbit" << endl;
    }
    else
    {
        cout << "Satellite: " << sats[10]->getName() << " is NOT in orbit" << endl;
    }
    cout << "Status: " << sats[2]->getS0() << endl;
    sats[10]->setSOandUpdate(false);
    sats[10]->setSOandUpdate(true);
}
