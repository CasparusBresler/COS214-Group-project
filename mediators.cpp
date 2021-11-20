//
// Created by micha on 2021/11/08.
//

#include "mediators.h"

mediators::mediators()
{
}

mediators::~mediators()
{
}

void mediators::SetMed(mediatorMemento *m)
{
    this->m = m;
}

mediatorMemento *mediators::getMed()
{
    return this->m;
}
