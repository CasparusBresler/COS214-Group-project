//
// Created by micha on 2021/11/16.
//

#include "dragonCargo_factory.h"

dragonCargo_factory::dragonCargo_factory()
{
}

dragonCargo_factory::~dragonCargo_factory()
{
}

dragon_template *dragonCargo_factory::createDragon(ISS* iss)
{
    dragon_template *tempRocket = new DragonCargo(iss);
    return tempRocket;
}