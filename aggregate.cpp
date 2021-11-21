//
// Created by micha on 2021/11/08.
//

#include "aggregate.h"

Iterator *aggregate::createIterator()
{
    Iterator *temp = new Iterator(satellites);
    return temp;
}

void aggregate::addSat(satellite *s)
{
    satellites.push_back(s);
}

aggregate::aggregate()
{
}

aggregate *aggregate::clone()
{
    aggregate *tempAgg = new aggregate();
    Iterator *it = createIterator();
    return nullptr;
}
