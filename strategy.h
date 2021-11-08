// Casparus Bresler

#ifndef __STRATEGY_H__
#define __STRATEGY_H__

#include <iostream>
#include "satellite.h"
#include <vector>

using namespace std;

class strategy
{
private:
    bool launched;

public:
    strategy();
    ~strategy();
    virtual void launch_sequence() = 0;
    virtual void load_sat(satellite *s) = 0;
    virtual void deploy() = 0;
    bool getLaunched();
    void setLaunched(bool lIn);
};

#endif // __STRATEGY_H__