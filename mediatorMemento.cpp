//
// Created by micha on 2021/11/08.
//

#include "mediatorMemento.h"

mediatorMemento::mediatorMemento(int s, vector<string> n, vector<bool> o, vector<bool> OS)
{
    this->size = s;
    this->names = n;
    this->orbits = o;
    this->OS = OS;
}

int mediatorMemento::getSize()
{
    return this->size;
}

vector<string> mediatorMemento::getNames()
{
    return this->names;
}

vector<bool> mediatorMemento::getOrbits()
{
    return this->orbits;
}

vector<bool> mediatorMemento::getOStatus()
{
    return this->OS;
}