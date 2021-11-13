//Daniel de Nobrega

#include "undocked.h"

undocked::undocked(/* args */) {}

undocked::~undocked() {}

docked_state* undocked::changestate(ISS* change) 
{
    change->setState(new docked());
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
