//
// Created by micha on 2021/11/08.
//

#ifndef UNTITLED23_MEDIATORMEMENTO_H
#define UNTITLED23_MEDIATORMEMENTO_H

#include "Iterator.h"
#include "aggregate.h"
#include <string>

class observer;

class mediatorMemento
{
private:
    int size;
    vector<string> names;
    vector<bool> orbits;
    vector<bool> OS;
    // aggregate *satellites;
    // Iterator *it;

public:
    mediatorMemento(int s, vector<string> n, vector<bool> o, vector<bool> OS);
    int getSize();
    vector<string> getNames();
    vector<bool> getOrbits();
    vector<bool> getOStatus();
};

#endif //UNTITLED23_MEDIATORMEMENTO_H
