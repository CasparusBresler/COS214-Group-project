// Casparus Bresler

#ifndef __FALCON9_H__
#define __FALCON9_H__

#include "strategy.h"
#include "FirstStageRocket.h"

using namespace std;

class Falcon9 : public strategy
{
private:
    vector<satellite *> satellites;
    FirstStageRocket* firstStageRocket;
public:
    Falcon9(FirstStageRocket* fsr);
    ~Falcon9();
    void launch_sequence();
    void fire_booster1();
    void fire_booster2();
    void load_sat(satellite *s);
    void deploy();
};

#endif // __FALCON9_H__