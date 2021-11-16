//Daniel de Nobrega

#include "ISS.h"
ISS::ISS(/* args */) {}

ISS::~ISS() {}

void ISS::setMemento(ISSMemento *m)
{
    vector<crew *>::iterator itCrew;
    for (itCrew = m->getcrew().begin(); itCrew != m->getcrew().end(); ++itCrew)
    {
        crewmembers.push_back((*itCrew)->clone());
    }

    vector<cargo *>::iterator itCargo;
    for (itCargo = m->getcargo().begin(); itCargo != m->getcargo().end(); ++itCargo)
    {
        cargohold.push_back((*itCargo)->clone());
    }

    this->state = m->getState()->clone();
}

ISSMemento* ISS::createMemento()
{
    ISSMemento* newMemento = new ISSMemento(this->crewmembers, this->cargohold, this->state);
    return newMemento;
}

void ISS::setState(docked_state *state)
{
    delete this->state;
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
