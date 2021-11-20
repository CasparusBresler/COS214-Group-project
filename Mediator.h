//
// Created by micha on 2021/11/08.
//

#ifndef MEDIATOR_H
#define MEDIATOR_H


#include "Iterator.h"
#include "mediatorMemento.h"
#include "vector"
#include "aggregate.h"

using namespace std;
///Forward class declaration
///
///
class observer;



///This is the Mediator class
///
/// It has as an object of type aggregate and an object of type Iterator as private memebers
class Mediator
{
private:
    aggregate* satellites;
    Iterator* it;

public:
/// This is the ISS Constructor.
/// 
///@param a is as an object of type aggregate
    Mediator(aggregate* a);

/// This is the warnOthers function.
/// 
///It is used to update other satellites and is a part of the Memento design pattern
///@param tf is as a bool value that is being passed
    void warnOthers(bool tf);

/// This is the setMemento function.
///
/// This used to set the Memento and is a part of the memento design pattern
/// @param m  is of type mediatorMemento
/// @return nothing
/// @see createMemento()
    void setMemento(mediatorMemento* m);

/// This is the createMemento function.
///
/// This used to create the Memento and is a part of the memento design pattern
/// @return an object of type ISSMemento
/// @see setMemento()
    mediatorMemento* createMemento();




};


#endif //MEDIATOR_H
