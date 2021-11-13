
#ifndef UNTITLED23_MEDIATORMEMENTO_H
#define UNTITLED23_MEDIATORMEMENTO_H


#include "Iterator.h"
#include "aggregate.h"

class observer;

class mediatorMemento
{
private:
    aggregate* satellites;
    Iterator* it;
public:

    mediatorMemento(aggregate*, Iterator*);
    aggregate* getSatellites();
    Iterator* getIT();


};


#endif //UNTITLED23_MEDIATORMEMENTO_H
