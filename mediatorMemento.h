//
// Created by micha on 2021/11/08.
//

#ifndef UNTITLED23_MEDIATORMEMENTO_H
#define UNTITLED23_MEDIATORMEMENTO_H


#include "Iterator.h"
#include "aggregate.h"

///Forward class declaration
///
///
class observer;


///This is the mediatorMemento class
///
/// It has as an object of type aggregate and an object of type Iterator as private memebers
class mediatorMemento
{
private:
    aggregate* satellites;
    Iterator* it;
public:

/// This is the ISS Constructor.
/// 
///@param i is as an object of type aggregate
///@param o is an object of type Iterator
    mediatorMemento(aggregate* i, Iterator* o);

/// This is the getSatellites funcion.
///
/// This used as an accessor method to private member satellites
/// @return vector of object type aggregate 
    aggregate* getSatellites();

/// This is the getIT funcion.
///
/// This used as an accessor method to private member it
/// @return vector of object type Iterator 
    Iterator* getIT();


};


#endif //UNTITLED23_MEDIATORMEMENTO_H
