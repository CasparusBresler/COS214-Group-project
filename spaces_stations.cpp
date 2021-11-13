//Daniel de Nobrega

#include "spaces_stations.h"

spaces_stations::spaces_stations(/* args */) {}

spaces_stations::~spaces_stations() {}

ISSMemento* spaces_stations::getSpst() 
{
    return spst;
}

void spaces_stations::setSpst(ISSMemento* set) 
{
    this->spst = set;
}
