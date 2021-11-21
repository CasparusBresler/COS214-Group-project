
#include "ISSMemento.h"


ISSMemento::ISSMemento(vector<crew*> crewV, vector<cargo*> cargoV, docked_state* ds)
{
    vector<crew*> tempnames;
    int csize = crewV.size();
    for(int i = 0; i < csize; i++)
    {
        cout << crewV.size() << endl;
        string tempc = crewV.back()->getName();
        cout << crewV.back()->getName() << endl;
        crewmembers.push_back(tempc);
        tempnames.push_back(crewV.back());
        crewV.pop_back();
    }


    vector<cargo*> tempcnames;
    csize = cargoV.size();
    for(int i = 0; i < csize; i++)
    {
        string tempca = cargoV.back()->getName();
        cargohold.push_back(tempca);
        tempcnames.push_back(cargoV.back());
        cargoV.pop_back();
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
