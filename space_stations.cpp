//Daniel de Nobrega

#include "space_stations.h"

space_stations::space_stations(/* args */) {}

space_stations::~space_stations() {}

ISSMemento* space_stations::getSpst()
{
    return spst;
}

void space_stations::setSpst(ISSMemento* set)
{
    this->spst = set;
}
