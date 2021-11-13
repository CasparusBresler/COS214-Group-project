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
    dragon_template *createDragon();
};

#endif // __DRAGONCREW_FACTORY_H__