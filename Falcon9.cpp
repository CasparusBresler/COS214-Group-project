// Casparus Bresler

#include <iostream>
#include "Falcon9.h"

Falcon9::Falcon9(FirstStageRocket *fsr)
{
    firstStageRocket = fsr;
    satCount = 0;
}

Falcon9::~Falcon9()
{
}

void Falcon9::launch_sequence()
{
    cout << "Launch sequence initiated" << endl;
    fire_booster1();
    firstStageRocket == nullptr;
    cout << "Stage 1 detached" << endl;
    cout << "First Stage Rocket landed, and recovered succesfully" << endl;
    fire_booster2();
    cout << "Orbit reached" << endl;
    deploy();
}

void Falcon9::fire_booster1()
{
    firstStageRocket->fire();
}

void Falcon9::fire_booster2()
{
    cout << "Vacuum Merlin Engine fired successfully" << endl;
}

void Falcon9::load_sat(satellite *s)
{
    if (satCount < 60)
    {
        cout << s->getName() << " loaded into Falcon 9 rocket" << endl;
        satellites.push_back(s);
        satCount++;
    }
    else
    {
        cout << "No more space for satellites" << endl;
    }
}

void Falcon9::deploy()
{
    if (satellites.size() > 0)
    {
        int count = 0;
        cout << "Deploying satellites" << endl;
        vector<satellite *>::iterator it;
        it = satellites.begin();
        while (it != satellites.end())
        {
            (*it)->setOrbit(true);
            (*it)->setSO(true);
            satellites.erase(it);
            count++;
        }
        cout << count << " satellites deployed successfully" << endl;
    }
    else
    {
        cout << "There are no satellites to deploy" << endl;
    }
}
