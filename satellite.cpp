//
// Created by micha on 2021/11/08.
//

#include <iostream>
#include "satellite.h"

string satellite::getName()
{
    return name;
}

void satellite::setOrbit(bool tf)
{
    inorbit = tf;
}

bool satellite::getOrbit()
{
    return inorbit;
}

void satellite::attach(observer *o)
{
    this->observ = o;
}

void satellite::detach()
{
    this->observ = nullptr;
}

void satellite::setSO(bool tf)
{
    System_online = tf;
    if (tf == false)
    {
        cout << "Satellite " + name + " is offline" << endl;
    }
    else
    {
        cout << "Satellite " + name + " is online" << endl;
    }
}

bool satellite::getS0()
{
    return System_online;
}

void satellite::setSOandUpdate(bool tf)
{
    System_online = tf;
    if (tf == false)
    {
        cout << "Satellite " + name + " has shutdown!" << endl;
    }
    else
    {
        cout << "Satellite " + name + " is back online!" << endl;
    }

    notify();
}

void satellite::notify()
{
    observ->update(System_online);
}

observer *satellite::getObserv()
{
    return observ;
}

satellite::satellite(string n, Mediator *med)
{
    inorbit = false;
    System_online = false;
    name = n;
    observ = new observer(med);
}

void satellite::workLoad(bool bIn)
{
    if (!bIn)
    {
        cout << "Satellite " + name + " increased its workload" << endl;
    }
    else
    {
        cout << "Satellite " + name + " decreased its workload" << endl;
    }
}