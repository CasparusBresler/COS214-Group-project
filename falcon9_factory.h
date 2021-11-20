// Casparus Bresler

#ifndef __FALCON9_FACTORY_H__
#define __FALCON9_FACTORY_H__

#include <iostream>
#include "Falcon9.h"
#include "falcon_factory.h"
#include "FirstStageRocket.h"

using namespace std;
/// Rocket factory of type FalconHeavy.
class falcon9_factory : public falcon_factory
{
private:
public:
/// This is the falconHeavy_factory Constructor.
///
///
    falcon9_factory();
    
/// This is the falconHeavy_factory deconstructor
/// 
///
    ~falcon9_factory();
    
// This is the createFalcon function
/// 
/// This is used to as the the part of the abstract Factory design pattern.
///@param fsr is an object of type FirstStageRocket
/// @return object of type strategy
    strategy *createFalcon(FirstStageRocket *);
};

#endif // __FALCON9_FACTORY_H__
