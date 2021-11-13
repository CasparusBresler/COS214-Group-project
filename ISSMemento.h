//Daniel de Nobrega

#ifndef __ISSMEMENTO_H__
#define __ISSMEMENTO_H__

#include "docked_state.h"
#include "crew.h"
#include "cargo.h"
#include "vector"

using namespace std;

class ISSMemento
{
private:
    vector<crew*> crewmembers;
    vector<cargo*> cargohold;
    docked_state* state;

public:
    ISSMemento(vector<crew*> crewV, vector<cargo*> cargoV, docked_state* ds);
    ~ISSMemento();
    vector<crew*> getcrew();
    vector<cargo*> getcargo();
    docked_state* getState();
};
#endif // __ISSMEMENTO_H__