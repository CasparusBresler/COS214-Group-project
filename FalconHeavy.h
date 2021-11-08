// Casparus Bresler

#ifndef __FALCONHEAVY_H__
#define __FALCONHEAVY_H__

#include "strategy.h"

using namespace std;

class FalconHeavy : public strategy
{
private:
public:
    FalconHeavy();
    ~FalconHeavy();
    void launch_sequence();
    void fire1();
    void fire2();
    void load_sat(satellite *s);
    void deploy();
};

#endif // __FALCONHEAVY_H__
