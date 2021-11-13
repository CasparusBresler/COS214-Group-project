
#ifndef OBSERVER_H
#define OBSERVER_H


#include "Mediator.h"

class observer
{
private:
    Mediator* med;
public:
    observer(Mediator*);
    void update(bool);

};


#endif //UNTITLED23_OBSERVER_H
