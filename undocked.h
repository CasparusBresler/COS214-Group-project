
//Daniel de Nobrega

#ifndef __UNDOCKED_H__
#define __UNDOCKED_H__

#include "docked_state.h"
#include "docked.h"

using namespace std;
///This is the undocked class
///
///It has a bool attribute as a private member
class undocked : public docked_state
{
private:
    bool dock_state;
public:
    /// This is the undocked Constructor.
    ///
    /// 
    undocked(/* args */);

    /// This is the undocked deconstructor.
    ///
    /// 
    ~undocked();

    /// This is the changestate function.
    ///
    ///Used to change the state of the satellite
    ///@return object of type docked_state
    docked_state* changestate();


 /// this is the getstate function.
///
/// This used as an accessor method to private member launched
/// @return a bool value 
    bool getstate();

    /// This is the clone function.
    ///
    ///Used to clone the state of the satellite
    ///@return object of type docked_state
    docked_state* clone();
};
#endif // __UNDOCKED_H__