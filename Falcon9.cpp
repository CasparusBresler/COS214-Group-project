// Casparus Bresler

#include "Falcon9.h"

Falcon9::Falcon9()
{
}

Falcon9::~Falcon9()
{
}

void Falcon9::launch_sequence()
{
    cout << "Launch sequence initiated" << endl;
    fire_booster1();
    cout << "Stage 1 detached" << endl;
    fire_booster2();
    cout << "Orbit reached" << endl;
    deploy();
}

void Falcon9::fire_booster1()
{
    cout << "9 Merlin Engines fired successfully" << endl;
}

void Falcon9::fire_booster2()
{
    cout << "Vacuum Merlin Engine fired successfully" << endl;
}

void Falcon9::load_sat(satellite *s)
{
    satellites.push_back(s);
}

void Falcon9::deploy()
{
    int count = 0;
    cout << "Deploying satellites" << endl;
    vector<satellite *>::iterator it;
    for (it = satellites.begin(); it != satellites.end(); ++it)
    {
        (*it)->setOrbit(true);
        satellites.erase(it);
        count++;
    }
    cout << count << " satellites deployed successfully" << endl;
}
