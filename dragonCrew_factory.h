//
// Created by micha on 2021/11/16.
//

#ifndef __DRAGONCREW_FACTORY_H__
#define __DRAGONCREW_FACTORY_H__

#include "DragonCrew.h"
#include "dragon_factory.h"
using namespace std;

class dragonCrew_factory : public dragon_factory
{
private:
public:
    dragonCrew_factory();
    ~dragonCrew_factory();
    dragon_template *createDragon(ISS *iss);
};

#endif // __DRAGONCREW_FACTORY_H__