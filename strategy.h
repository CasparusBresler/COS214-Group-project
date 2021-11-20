

#ifndef __STRATEGY_H__
#define __STRATEGY_H__

#include <iostream>
#include "satellite.h"
#include <vector>

using namespace std;
///This is the strategy class
///
///It has a bool attribute as a private member
class strategy
{
private:
    bool launched;

public:

    /// This is the strategy Constructor.
    ///
    /// 
    strategy();

    /// This is the strategy deconstructor.
    ///
    /// 
    ~strategy();


     /// This is the launch_sequence function
     ///
     /// This is pure virtual function which that will be implemented by the concrete classes
    virtual void launch_sequence() = 0;

     /// This is the load_sat function
     ///
     ///@param s is an object of type satellite
     /// This is pure virtual function which that will be implemented by the concrete classes
    virtual void load_sat(satellite *s) = 0;

     /// This is the deploy function
     ///
     /// This is pure virtual function which that will be implemented by the concrete classes
    virtual void deploy() = 0;


/// this is the getLaunched function.
///
/// This used as an accessor method to private member launched
/// @return a bool value 
    bool getLaunched();

/// this is the setLaunched function.
///
/// This used as an modifier method to private member System_online
///@param lIn the bool value that is going to be passed in.
/// @return nothing
    void setLaunched(bool lIn);
};

#endif // __STRATEGY_H__