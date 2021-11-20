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
    int counter;
    aggregate* agg;
    Mediator* med;
public:
///This is the satellite_factory constructor.
///
///@param a is an object of type aggregate
///@param m is an object of type Mediator
    satellite_factory(aggregate* a, Mediator* m);

///This is the create_sat function.
///
///@return an object of type satellite
    satellite* create_sat();

};


#endif //SATELLITE_FACTORY_H
