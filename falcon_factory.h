// Casparus Bresler

#ifndef __FALCON_FACTORY_H__
#define __FALCON_FACTORY_H__

#include "FirstStageRocket.h"
#include "strategy.h"

using namespace std;

class falcon_factory
{
private:
public:
    falcon_factory();
    ~falcon_factory();
    virtual strategy *createFalcon(FirstStageRocket *) = 0;
};

#endif // __FALCON_FACTORY_H__
