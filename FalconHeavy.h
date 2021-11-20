// Casparus Bresler

#ifndef __FALCONHEAVY_H__
#define __FALCONHEAVY_H__

#include "strategy.h"
#include "FirstStageRocket.h"

using namespace std;
/// Falcon Rocket of type FalconHeavy .
///
/// Contains a vector of satellites and a FirstStageRocket object which are both private.
class FalconHeavy : public strategy
{
private:

    vector<satellite *> satellites;
    FirstStageRocket* firstStageRocket;

public:
/// This is the FalconHeavy Constructor.
/// 
///@param fsr is an object of type FirstStageRocket
FalconHeavy(FirstStageRocket * fsr);

/// This is the FalconHeavy deconstructor
/// 
///
~FalconHeavy();

/// This is the launch_sequence function
/// 
/// This is used to as the the part of the strategy design pattern.
/// This is responsible for the launch of the FalconHeavy.
/// @return nothing
/// @see fire1() fire2() deploy()
void launch_sequence();

/// This is the fire1 function
/// 
/// 
/// This is responsible for the first stage of the launch.
/// @return nothing
/// @see launch_sequence()
void fire1();

/// This is the fire2 function
/// 
/// 
/// This is responsible for the second stage of the launch. Executes after the first stage
/// @return nothing
/// @see launch_sequence()
void fire2();

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

#endif // __FALCONHEAVY_H__
