//Daniel de Nobrega

#ifndef __DOCKED_H__
#define __DOCKED_H__

#include "docked_state.h"
#include "undocked.h"

using namespace std;

class docked : public docked_state
{
private:
    bool dock_state;
public:
    docked(/* args */);
    ~docked();
    docked_state* changestate();
    bool getstate();
    docked_state* clone();
};
#endif // __DOCKED_H__