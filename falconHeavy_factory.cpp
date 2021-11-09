// Casparus Bresler

#include "falconHeavy_factory.h"

falconHeavy_factory::falconHeavy_factory()
{
}

falconHeavy_factory::~falconHeavy_factory()
{
}

strategy *falconHeavy_factory::createFalcon()
{
    strategy *tempRocket = new FalconHeavy();
    return tempRocket;
}
