//Daniel de Nobrega

#include <iostream>
#include "undocked.h"
using namespace std;

undocked::undocked(/* args */) {}

undocked::~undocked() {}

docked_state* undocked::changestate()
{
    docked_state* temp = new docked();
    return temp;

}

bool undocked::getstate()
{

    return false;
}

docked_state* undocked::clone()
{
    undocked* tempundocked = new undocked();
    return tempundocked;
}