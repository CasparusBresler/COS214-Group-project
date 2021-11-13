

#include "strategy.h"

strategy::strategy()
{
    launched = false;
}

strategy::~strategy()
{
}

bool strategy::getLaunched()
{
    return this->launched;
}

void strategy::setLaunched(bool lIn)
{
    this->launched = lIn;
}