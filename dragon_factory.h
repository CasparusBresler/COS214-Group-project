#ifndef __DRAGON_FACTORY_H__
#define __DRAGON_FACTORY_H__

#include "dragon_template.h"
using namespace std;

class dragon_factory
{
private:
public:
    dragon_factory();
    ~dragon_factory();
    virtual dragon_template *createDragon() = 0;
};

#endif // __DRAGON_FACTORY_H__