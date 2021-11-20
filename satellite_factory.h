//
// Created by micha on 2021/11/08.
//

#ifndef SATELLITE_FACTORY_H
#define SATELLITE_FACTORY_H


#include "aggregate.h"
#include "Mediator.h"
#include "satellite.h"

class satellite_factory
{
private:
    aggregate* agg;
    Mediator* med;
    int counter;
public:
    satellite_factory(aggregate*, Mediator*);
    satellite* create_sat();
    void setcounter(int);


};


#endif //SATELLITE_FACTORY_H
