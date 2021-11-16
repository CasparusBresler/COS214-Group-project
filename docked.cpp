//Daniel de Nobrega

#include "docked.h"
docked::docked(/* args */) {}

docked::~docked() {}

docked_state* docked::changestate()
{
    docked_state* temp = new undocked;
    return temp;
}

bool docked::getstate()
{
    return true;
}

docked_state* docked::clone()
{
    docked* tempdocked = new docked();
    return tempdocked;
}