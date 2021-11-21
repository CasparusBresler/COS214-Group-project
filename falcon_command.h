#ifndef __FALCON_COMMAND_H__
#define __FALCON_COMMAND_H__

#include "strategy.h"
#include "satellite.h"

/// This is the falcon_command class.
///
///
class falcon_command
{
private:
public:
/// This is the falcon_command Constructor.
/// 
///
    falcon_command();

/// This is the falcon_command deconstructor.
/// 
///
    virtual ~falcon_command();

/// This is the execute Constructor.
/// 
/// pure virtual function implemented in the concrete classes
///@param r is an object of type strategy
///@param s is an object of type satellite
///@return nothing
    virtual void execute(strategy *r, satellite *s) = 0;
};

#endif // __FALCON_COMMAND_H__