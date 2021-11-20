//Daniel de Nobrega

#include <iostream>
#include "ISS.h"
ISS::ISS()
{

}

ISS::~ISS() {}

void ISS::setMemento(ISSMemento *m)
{
//    cout <<"hello" <<endl;
    vector<string> tempnames;
    for(int i = 0; i < m->getcrew().size(); i++)
    {
        crew* tempc = new crew(m->getcrew().back());
        crewmembers.push_back(tempc);
        tempnames.push_back(m->getcrew().back());
        m->getcrew().pop_back();
    }

//    cout << "hello" << endl;

    for(int i = 0; i < tempnames.size(); i++)
    {
        m->getcrew().push_back(tempnames.back());
        tempnames.pop_back();
    }

//    cout << "hello" << endl;

    vector<string> tempcnames;
    for(int i = 0; i < m->getcargo().size(); i++)
    {
        cargo* tempca = new cargo(m->getcargo().back());
        cargohold.push_back(tempca);
        tempcnames.push_back(m->getcargo().back());
        m->getcargo().pop_back();
    }

//    cout << "hello" << endl;

    for(int i = 0; i < tempcnames.size(); i++)
    {
        m->getcargo().push_back(tempcnames.back());
        tempcnames.pop_back();
    }

//    cout << "hello" << endl;

    state = m->getState()->clone();
    //cout << "hello" << endl;
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
