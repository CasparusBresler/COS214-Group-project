//
// Created by micha on 2021/11/08.
//

#ifndef OBSERVER_H
#define OBSERVER_H

//#include "Mediator.h"

class Mediator;

/// This is the observer class.
///
/// It has an object of type Mediator as a private member
class observer
{
private:
    Mediator *med;

public:
    /// This is the observer Constructor.
/// 
///@param m is an object of type Mediator
    observer(Mediator *);
    /// This is the update function.
/// 
///This used to update the system_online of the satellite
/// @param tf a bool value passed in.
/// @return nothing
    void update(bool);
};

#endif //UNTITLED23_OBSERVER_H
