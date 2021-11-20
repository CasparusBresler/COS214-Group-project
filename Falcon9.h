// Casparus Bresler

#ifndef __FALCON9_H__
#define __FALCON9_H__

#include "strategy.h"
#include "FirstStageRocket.h"

using namespace std;

/// Falcon Rocket of type Falcon9 .
///
/// Contains a vector of satellites and a FirstStageRocket object which are both private.

class Falcon9 : public strategy
{
private:
    int satCount;
    vector<satellite *> satellites;
    FirstStageRocket* firstStageRocket;
public:

    /// This is the Falcon9 Constructor.
    /// 
    ///@param fsr is an object of type FirstStageRocket
    Falcon9(FirstStageRocket* fsr);
    
    /// This is the Falcon9 deconstructor
    ~Falcon9();
    
    /// This is the launch_sequence function
    /// 
    /// This is used to as the the part of the strategy design pattern.
    /// This is responsible for the launch of the Falcon9.
    /// @return nothing
    /// @see fire_booster1() fire_booster2() deploy()
    void launch_sequence();
    
    
    /// This is the fire_booster1 function
    /// 
    /// This is responsible for the first stage of the launch.
    /// @return nothing
    /// @see launch_sequence()
    void fire_booster1();
    
    
    /// This is the fire_booster2 function
    /// 
    /// 
    /// This is responsible for the second stage of the launch. Executes after the first stage
    /// @return nothing
    /// @see launch_sequence()
    void fire_booster2();
    
    /// This is the load_sat function
    /// 
    /// 
    /// This is responsible for loading the satellite.
    ///@param s is an object of type satellite
    /// @return nothing
    void load_sat(satellite *s);
   
    
    /// This is the deploy function
    /// 
    /// 
    /// This is responsible for deploying the satellites once the rockets are in orbit. Executes after the second stage
    /// @return nothing
    /// @see launch_sequence()
    void deploy();
};

#endif // __FALCON9_H__
