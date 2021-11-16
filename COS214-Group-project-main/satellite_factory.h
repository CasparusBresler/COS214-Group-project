
#ifndef SATELLITE_FACTORY_H
#define SATELLITE_FACTORY_H


#include "aggregate.h"
#include "Mediator.h"
#include "satellite.h"

class satellite_factory
{
private:
    int counter;
    aggregate* agg;
    Mediator* med;
public:
    satellite_factory(aggregate*, Mediator*);
    satellite* create_sat();

};


#endif //SATELLITE_FACTORY_H
