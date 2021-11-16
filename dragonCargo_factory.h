//
// Created by micha on 2021/11/16.
//

#ifndef __DRAGONCARGO_FACTORY_H__
#define __DRAGONCARGO_FACTORY_H__

#include "DragonCargo.h"
#include "dragon_factory.h"
using namespace std;

class dragonCargo_factory : public dragon_factory
{
private:
public:
    dragonCargo_factory();
    ~dragonCargo_factory();
    dragon_template *createDragon(ISS*);
};

#endif // __DRAGONCARGO_FACTORY_H__