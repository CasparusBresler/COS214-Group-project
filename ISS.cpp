//Daniel de Nobrega

#include <iostream>
#include "ISS.h"
#include "undocked.h"

ISS::ISS()
{
    state = new undocked();
}

ISS::~ISS() {}

void ISS::setMemento(ISSMemento *m)
{
       crewmembers.clear();
    cargohold.clear();
    state= nullptr;
    
    vector<string> crewnames = m->getcrew();
    vector<string> cargonames = m->getcargo();
    
    int csize = m->getcrew().size();
    for(int i = 0; i < csize; i++)
    {
        crew* tempc = new crew(crewnames.back());
        crewmembers.push_back(tempc);
        crewnames.pop_back();
    }

    csize = m->getcargo().size();
    for(int i = 0; i < csize; i++)
    {
        cargo* tempca = new cargo(cargonames.back());
        cargohold.push_back(tempca);
        cargonames.pop_back();
    }

    state = m->getState()->clone();
}

ISSMemento* ISS::createMemento()
{
    ISSMemento* newMemento = new ISSMemento(this->crewmembers, this->cargohold, this->state);
    return newMemento;
}

void ISS::setState(docked_state *state)
{
    this->state = state;
}

void ISS::changeState()
{
    this->state = state->changestate();
}

vector<cargo *> ISS::getCargo()
{
    return cargohold;
}

vector<crew *> ISS::getCrew()
{
    return crewmembers;
}

docked_state *ISS::getDockedState()
{
    return state;
}

void ISS::setCrew(vector<crew *> vector)
{
    crewmembers=vector;
}

void ISS::setCargo(vector<cargo *> vector)
{
    cargohold=vector;
}
