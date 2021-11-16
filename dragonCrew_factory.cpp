//
// Created by micha on 2021/11/16.
//

#include "dragonCrew_factory.h"

dragonCrew_factory::dragonCrew_factory()
{
}

dragonCrew_factory::~dragonCrew_factory()
{
}

dragon_template *dragonCrew_factory::createDragon(ISS* iss)
{
    dragon_template* tempRocket = new DragonCrew(iss);
    return tempRocket;
}
