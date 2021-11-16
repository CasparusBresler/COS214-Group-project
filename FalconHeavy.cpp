// Casparus Bresler

#include <iostream>
#include "FalconHeavy.h"

FalconHeavy::FalconHeavy(FirstStageRocket *fsr)
{
    firstStageRocket = fsr;
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
    satellites.push_back(s);
}

void FalconHeavy::deploy()
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
