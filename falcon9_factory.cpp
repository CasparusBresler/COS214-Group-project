// Casparus Bresler

#include "falcon9_factory.h"
falcon9_factory::falcon9_factory()
{
}

falcon9_factory::~falcon9_factory()
{
}

strategy *falcon9_factory::createFalcon(FirstStageRocket* fsr)
{
    strategy *tempRocket = new Falcon9(fsr);
    return tempRocket;
}
