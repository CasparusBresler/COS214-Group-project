// Casparus Bresler

#ifndef __FALCONHEAVY_FACTORY_H__
#define __FALCONHEAVY_FACTORY_H__

#include "FalconHeavy.h"
#include "falcon_factory.h"

using namespace std;
/// Rocket factory of type FalconHeavy.
class falconHeavy_factory : public falcon_factory
{
private:
public:
/// This is the falconHeavy_factory Constructor.
///
///
    falconHeavy_factory();
/// This is the falconHeavy_factory deconstructor
/// 
///
    ~falconHeavy_factory();

// This is the createFalcon function
/// 
/// This is used to as the the part of the abstract Factory design pattern.
///@param fsr is an object of type FirstStageRocket
/// @return object of type strategy
    strategy *createFalcon(FirstStageRocket* fsr);
};

#endif // __FALCONHEAVY_FACTORY_H__