//
// Created by micha on 2021/11/08.
//

#ifndef MEDIATOR_H
#define MEDIATOR_H


#include "Iterator.h"
#include "mediatorMemento.h"
#include "vector"

using namespace std;

class observer;

class Mediator
{
private:
    Iterator* it;
    vector<observer*> observers;

public:
    Mediator(Iterator* it);
    void warnOthers(bool tf);
    void setMemento(mediatorMemento* m);
    mediatorMemento* createMemento();




};


#endif //MEDIATOR_H
