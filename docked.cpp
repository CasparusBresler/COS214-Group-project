//Daniel de Nobrega

#include "docked.h"
docked::docked(/* args */) {}

docked::~docked() {}

docked_state* docked::changestate(ISS* change) 
{
    change->setState(new undocked());
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