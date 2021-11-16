// Casparus Bresler

#include "FalconHeavy.h"

FalconHeavy::FalconHeavy()
{
}

FalconHeavy::~FalconHeavy()
{
}

void FalconHeavy::launch_sequence()
{
    cout << "Launch sequence initiated" << endl;
    fire1();
    cout << "Stage 1 detached" << endl;
    fire2();
    cout << "Orbit reached" << endl;
    deploy();
}

void FalconHeavy::fire1()
{
    cout << "27 Merlin Engines on all 3 cores fired successfully" << endl;
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
    for (it = satellites.begin(); it != satellites.end(); ++it)
    {
        (*it)->setOrbit(true);
        (*it)->setSO(true);
        satellites.erase(it);
        count++;
    }
    cout << count << " satellites deployed successfully" << endl;
}
