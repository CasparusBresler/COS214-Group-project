#include "dragonCrew_factory.h"

dragonCrew_factory::dragonCrew_factory()
{
}

dragonCrew_factory::~dragonCrew_factory()
{
}

dragon_template *dragonCrew_factory::createDragon()
{
    dragon_template *tempRocket = new DragonCrew();
    return tempRocket;
}
