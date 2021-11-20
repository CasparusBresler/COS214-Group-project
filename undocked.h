
//Daniel de Nobrega

#ifndef __UNDOCKED_H__
#define __UNDOCKED_H__

#include "docked_state.h"
#include "docked.h"

using namespace std;

class undocked : public docked_state
{
private:
    bool dock_state;
public:
    undocked(/* args */);
    ~undocked();
    docked_state* changestate() override;
    bool getstate() override;
    docked_state* clone() override;
};
#endif // __UNDOCKED_H__