
#include "ISSMemento.h"


ISSMemento::ISSMemento(vector<crew*> crewV, vector<cargo*> cargoV, docked_state* ds)
{
    vector<crew*> tempnames;
    for(int i = 0; i < crewV.size(); i++)
    {
        string tempc = crewV.back()->getName();
        crewmembers.push_back(tempc);
        tempnames.push_back(crewV.back());
        crewV.pop_back();
    }

    for(int i = 0; i < tempnames.size(); i++)
    {
        crewV.push_back(tempnames.back());
        tempnames.pop_back();
    }

    vector<cargo*> tempcnames;
    for(int i = 0; i < cargoV.size(); i++)
    {
        string tempca = cargoV.back()->getName();
        cargohold.push_back(tempca);
        tempcnames.push_back(cargoV.back());
        cargoV.pop_back();
    }

    for(int i = 0; i < tempcnames.size(); i++)
    {
        cargoV.push_back(tempcnames.back());
        tempcnames.pop_back();
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

vector<string> ISSMemento::getcrew()
{
    return crewmembers;
}

vector<string> ISSMemento::getcargo()
{
    return cargohold;
}
