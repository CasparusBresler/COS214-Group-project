//
// Created by micha on 2021/11/08.
//

#include <string>
#include "satellite_factory.h"

using namespace std;

satellite_factory::satellite_factory(aggregate *a, Mediator *m)
{
    counter = 1;
    agg = a;
    med = m;
}

satellite *satellite_factory::create_sat()
{

    string name = "Starlink " + to_string(counter++);
    satellite *sat = new satellite(name, med);
    agg->addSat(sat);
    return sat;
}

void satellite_factory::setcounter(int i)
{
    counter = i;
}