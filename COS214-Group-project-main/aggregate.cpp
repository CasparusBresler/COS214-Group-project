//
// Created by micha on 2021/11/08.
//

#include "aggregate.h"

Iterator * aggregate::createIterator()
{
    Iterator* temp = new Iterator(satellites);
}

void aggregate::addSat(satellite *s)
{
    satellites.push_back(s);
}