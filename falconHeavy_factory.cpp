// Casparus Bresler

#include "falconHeavy_factory.h"

falconHeavy_factory::falconHeavy_factory()
{
}

falconHeavy_factory::~falconHeavy_factory()
{
}

strategy *falconHeavy_factory::createFalcon(FirstStageRocket* fsr)
{
    strategy *tempRocket = new FalconHeavy(fsr);
    return tempRocket;
}
