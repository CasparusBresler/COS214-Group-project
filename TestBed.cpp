#include "TestBed.h"
#include <vector>
#include "aggregate.h"
#include "ISS.h"
#include "satellite_factory.h"
#include "load_sats.h"
#include "launch.h"
#include "deploy_sats.h"
#include "mediators.h"

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

    vector<satellite *> sats;
    vector<satellite *>::iterator satIt;
    //satellite **sats = new satellite *[NUMSATS];

    for (int i = 0; i < NUMSATS; i++)
    {
        sats.push_back(satFactory->create_sat());
    }

    for (int i = 0; i < NUMSATS; i++)
    {
        ls->execute(falcons[0], sats.at(i));
    }

    la->execute(falcons[0], NULL);
    falcons[1]->launch_sequence();

    ds->execute(falcons[0], NULL);

    if (sats.at(10)->getOrbit())
    {
        cout << "Satellite: " << sats.at(10)->getName() << " is in orbit" << endl;
    }
    else
    {
        cout << "Satellite: " << sats.at(10)->getName() << " is NOT in orbit" << endl;
    }
    cout << "Status: " << sats.at(2)->getS0() << endl;
    sats.at(10)->setSOandUpdate(false);
    sats.at(10)->setSOandUpdate(true);

    mediators mediatorStore;
    mediatorStore.SetMed(med->createMemento());

    cout << sats.at(0)->getName() << endl;

    sats.at(0)->setName("bob");

    cout << sats.at(0)->getName() << endl;
    //sats.erase(sats.begin(), sats.end());
    vector<satellite *> sats;

    cout << sats.front()->getName() << endl;
    cout << "HERE" << endl;
    med->setMemento(mediatorStore.getMed());

    Iterator *it = agg->createIterator();
    while (!it->done())
    {
        sats.push_back(it->current());
        it->next();
    }

    cout << sats.at(0)->getName() << endl;
}
