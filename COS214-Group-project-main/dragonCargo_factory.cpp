#include "dragonCargo_factory.h"

dragonCargo_factory::dragonCargo_factory()
{
}

dragonCargo_factory::~dragonCargo_factory()
{
}

dragon_template *dragonCargo_factory::createDragon()
{
    dragon_template *tempRocket = new DragonCargo();
    return tempRocket;
}
