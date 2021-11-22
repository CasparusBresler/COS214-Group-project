//
// Created by micha on 2021/11/08.
//

#ifndef SATELLITE_FACTORY_H
#define SATELLITE_FACTORY_H


#include "aggregate.h"
#include "Mediator.h"
#include "satellite.h"

/// This is the factory class for satellites.
///
/// It has as an integer counter, an object of type aggregate and an object of type Mediator as a private member
class satellite_factory
{
private:
    
    aggregate* agg;
    Mediator* med;
    int counter;
public:
    ///This is the satellite_factory constructor.
///
///@param a is an object of type aggregate
///@param m is an object of type Mediator
    satellite_factory(aggregate*, Mediator*);
    ///This is the create_sat function.
///
///@return an object of type satellite
    satellite* create_sat();
    void setcounter(int);


};


#endif //SATELLITE_FACTORY_H
