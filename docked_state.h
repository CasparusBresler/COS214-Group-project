//Daniel de Nobrega

#ifndef __DOCKED_STATE_H__
#define __DOCKED_STATE_H__

#include "ISS.h"

using namespace std;

class docked_state
{
private:
    
public:
    docked_state(/* args */){}
    ~docked_state(){}
    virtual bool getstate() = 0;
    virtual docked_state *changestate(ISS* change) = 0;
    virtual docked_state* clone() = 0;
};
#endif // __DOCKED_STATE_H__