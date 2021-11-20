//
// Created by micha on 2021/11/08.
//

#include "Iterator.h"
#include "satellite.h"
#include <iostream>

Iterator::Iterator(vector<satellite *> s)
{
    satellites = s;
    pos = 0;
}

satellite *Iterator::first()
{
    return satellites.at(0);
}

satellite *Iterator::current()
{
    return satellites.at(pos);
}

satellite *Iterator::next()
{
    pos++;
    return satellites.at(pos);
}

bool Iterator::done()
{
    if (pos == satellites.size() - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Iterator::update(bool tf)
{

    if (this->current()->getS0() == true)
    {
        this->current()->workLoad(tf);
    }
}


vector<satellite *>Iterator::getSats()
{
    return this->satellites;
}