//Daniel de Nobrega

#ifndef __ISS_H__
#define __ISS_H__

#include "crew.h"
#include "cargo.h"
#include "docked_state.h"
#include "ISSMemento.h"
#include "vector"

using namespace std;

class ISS
{
private:
    vector<crew *> crewmembers;
    vector<cargo *> cargohold;
    docked_state *state;

public:
    ISS(/* args */);
    ~ISS();
    void setMemento(ISSMemento *m);
    ISSMemento *createMemento();
    void setState(docked_state *state);
};

#endif // __ISS_H__