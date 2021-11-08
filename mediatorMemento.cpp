//
// Created by micha on 2021/11/08.
//

#include "mediatorMemento.h"

mediatorMemento::mediatorMemento(aggregate * i , Iterator* o)
{
    satellites = i;
    it = o;
}

aggregate * mediatorMemento::getSatellites()
{
    return satellites;
}

Iterator* mediatorMemento::getIT()
{
    return it;
}