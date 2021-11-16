//
// Created by micha on 2021/11/08.
//

#include <iostream>
#include "Mediator.h"

Mediator::Mediator(aggregate *a)
{
    satellites = a;
}

void Mediator::warnOthers(bool tf)
{
    it = satellites->createIterator();
    while (!it->done())
    {
        it->update(tf);

        it->next();
    }
    delete it;
}

void Mediator::setMemento(mediatorMemento *m)
{
    satellites = m->getSatellites();
    it = m->getIT();
}

mediatorMemento *Mediator::createMemento()
{
    mediatorMemento *temp = new mediatorMemento(satellites, it);
    return temp;
}