// Casparus Bresler

#ifndef __FALCON9_FACTORY_H__
#define __FALCON9_FACTORY_H__

#include "Falcon9.h"
#include "falcon_factory.h"

using namespace std;

class falcon9_factory : public falcon_factory
{
private:
public:
    falcon9_factory();
    ~falcon9_factory();
    strategy *createFalcon();
};

#endif // __FALCON9_FACTORY_H__