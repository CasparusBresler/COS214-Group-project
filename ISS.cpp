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

    vector<string> tempnames;
    for(int i = 0; i < m->getcrew().size(); i++)
    {
        crew* tempc = new crew(m->getcrew().back());
        crewmembers.push_back(tempc);
        tempnames.push_back(m->getcrew().back());
        m->getcrew().pop_back();
    }


    for(int i = 0; i < tempnames.size(); i++)
    {
        m->getcrew().push_back(tempnames.back());
        tempnames.pop_back();
    }

    vector<string> tempcnames;
    for(int i = 0; i < m->getcargo().size(); i++)
    {
        cargo* tempca = new cargo(m->getcargo().back());
        cargohold.push_back(tempca);
        tempcnames.push_back(m->getcargo().back());
        m->getcargo().pop_back();
    }



    for(int i = 0; i < tempcnames.size(); i++)
    {
        m->getcargo().push_back(tempcnames.back());
        tempcnames.pop_back();
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
