// Casparus Bresler

#ifndef __FALCONHEAVY_FACTORY_H__
#define __FALCONHEAVY_FACTORY_H__

#include "FalconHeavy.h"
#include "falcon_factory.h"

using namespace std;

class falconHeavy_factory : public falcon_factory
{
private:
public:
    falconHeavy_factory();
    ~falconHeavy_factory();
    strategy *createFalcon(FirstStageRocket* fsr);
};

#endif // __FALCONHEAVY_FACTORY_H__