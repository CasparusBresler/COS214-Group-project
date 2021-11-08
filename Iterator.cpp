//
// Created by micha on 2021/11/08.
//

#include "Iterator.h"
#include "satellite.h"

satellite * Iterator::first()
{
    return satellites[0];
}

satellite * Iterator::current()
{
    return satellites[pos];
}

satellite * Iterator::next()
{
    pos++;
    return satellites[pos];
}

bool Iterator::done()
{
    if(pos == satellites.size() - 1)
    {
        return true;
    }
    else
    {
        return false;
    }

}

void Iterator::reset()
{
    pos = 0;
}

void Iterator::update(bool tf)
{
    this->current()->setSO(tf);
}

