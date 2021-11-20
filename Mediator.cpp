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
    it->update(tf);
    delete it;
}

void Mediator::setMemento(mediatorMemento *m)
{
    vector<string> names = m->getNames();
    vector<bool> orbits = m->getOrbits();
    vector<bool> OStates = m->getOStatus();

    aggregate *tempAgg = new aggregate();

    for (int i = 0; i < m->getSize(); i++)
    {
        satellite *tempSat = new satellite(names.at(i), this);
        tempSat->setName(names.at(i));
        tempSat->setOrbit(orbits.at(i));
        tempSat->setSO(OStates.at(i));
        tempAgg->addSat(tempSat);
    }
    this->satellites = tempAgg;

    this->it = this->satellites->createIterator();
}

mediatorMemento *Mediator::createMemento()
{

    int count = 0;
    vector<string> names;
    vector<bool> orbits;
    vector<bool> OStatus;
    it = satellites->createIterator();
    while (!it->done())
    {
        names.push_back(it->current()->getName());
        orbits.push_back(it->current()->getOrbit());
        OStatus.push_back(it->current()->getS0());
        count++;
        it->next();
    }
    names.push_back(it->current()->getName());
    orbits.push_back(it->current()->getOrbit());
    OStatus.push_back(it->current()->getS0());
    count++;
    mediatorMemento *temp = new mediatorMemento(count, names, orbits, OStatus);
    return temp;
}

aggregate* Mediator::getAggregate()
{
    return this->satellites;
}