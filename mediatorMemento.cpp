//
// Created by micha on 2021/11/08.
//

#include "mediatorMemento.h"

mediatorMemento::mediatorMemento(Iterator * i , vector<observer *> o)
{
    it = i;
    observers = o;
}

Iterator * mediatorMemento::getIT()
{
    return it;
}

vector<observer*> mediatorMemento::getObservers()
{
    return getObservers();
}