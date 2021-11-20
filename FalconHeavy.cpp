// Casparus Bresler

#include <iostream>
#include "FalconHeavy.h"

FalconHeavy::FalconHeavy(FirstStageRocket *fsr)
{
    firstStageRocket = fsr;
    satCount = 0;
}

FalconHeavy::~FalconHeavy()
{
}

void FalconHeavy::launch_sequence()
{
    cout << "Launch sequence initiated" << endl;
    fire1();
    firstStageRocket == nullptr;
    cout << "Stage 1 detached" << endl;
    fire2();
    cout << "Orbit reached" << endl;
    deploy();
}

void FalconHeavy::fire1()
{
    firstStageRocket->fire();
}

void FalconHeavy::fire2()
{
    cout << "Vacuum Merlin Engine fired successfully" << endl;
}

void FalconHeavy::load_sat(satellite *s)
{
    if (satCount < 60)
    {
        satellites.push_back(s);
        satCount++;
    }
    else
    {
        cout << "No more space for satellites" << endl;
    }
}

void FalconHeavy::deploy()
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
