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

    //vector<satellite *> sats;
    aggregate *agg = new aggregate();
    Mediator *med = new Mediator(agg);

    falcon_command *ls = new load_sats();

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
        //falcons[0]->load_sat(sats[i]);
    }

    falcons[0]->launch_sequence();
    falcons[1]->launch_sequence();
}
