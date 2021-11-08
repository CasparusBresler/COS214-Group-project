//
// Created by micha on 2021/11/08.
//

#include <iostream>
#include "Mediator.h"

Mediator::Mediator(Iterator* i)
{
    it = i;
}

void Mediator::warnOthers(bool tf)
{
    while(!it->done())
    {
        it->update(tf);

        it->next();
    }
    it->reset();
}

void Mediator::setMemento(mediatorMemento *m)
{
    it = m->getIT();
    observers = m->getObservers();
}

mediatorMemento * Mediator::createMemento()
{
    mediatorMemento* temp = new mediatorMemento(it, observers);
    return temp;
}