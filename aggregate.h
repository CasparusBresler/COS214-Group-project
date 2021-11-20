//
// Created by micha on 2021/11/08.
//

#ifndef AGGREGATE_H
#define AGGREGATE_H


#include "Iterator.h"

class aggregate
{
private:
    vector<satellite *> satellites;

public:
    aggregate();
    Iterator *createIterator();
    void addSat(satellite *);
    aggregate *clone();
};


#endif //AGGREGATE_H