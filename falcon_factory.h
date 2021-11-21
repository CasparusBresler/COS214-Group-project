// Casparus Bresler

#ifndef __FALCON_FACTORY_H__
#define __FALCON_FACTORY_H__

#include "FirstStageRocket.h"
#include "strategy.h"

using namespace std;

/// This is the falcon_factory class.
///
///
class falcon_factory
{
private:
public:
/// This is the falcon_factory Constructor.
/// 
///
    falcon_factory();

/// This is the falcon_factory deconstructor.
/// 
///
    ~falcon_factory();

/// This is the strategy Constructor.
/// 
/// pure virtual function implemented in the concrete classes
///@param fsr is an object of type FirstStageRocket
///@return nothing
    virtual strategy *createFalcon(FirstStageRocket * fsr) = 0;
};

#endif // __FALCON_FACTORY_H__
