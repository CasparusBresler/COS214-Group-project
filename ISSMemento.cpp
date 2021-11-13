//Daniel de Nobrega

#include "ISSMemento.h"

ISSMemento::ISSMemento(vector<crew*> crewV, vector<cargo*> cargoV, docked_state* ds) 
{
    vector<crew *>::iterator itCrew;
    for (itCrew = crewV.begin(); itCrew != crewV.end(); ++itCrew)
    {
        crewmembers.push_back((*itCrew)->clone());
    }

    vector<cargo *>::iterator itCargo;
    for (itCargo = cargoV.begin(); itCargo != cargoV.end(); ++itCargo)
    {
        cargohold.push_back((*itCargo)->clone());
    }

    this->state = ds->clone();
}

ISSMemento::~ISSMemento() 
{
    
}

docked_state* ISSMemento::getState() 
{
    return state;
}

vector<crew*> ISSMemento::getcrew() 
{
    return crewmembers;
}

vector<cargo*> ISSMemento::getcargo() 
{
    return cargohold;
}
