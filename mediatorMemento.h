//
// Created by micha on 2021/11/08.
//

#ifndef UNTITLED23_MEDIATORMEMENTO_H
#define UNTITLED23_MEDIATORMEMENTO_H

#include "Iterator.h"
#include "aggregate.h"
#include <string>


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
    int size;
    vector<string> names;
    vector<bool> orbits;
    vector<bool> OS;
    // aggregate *satellites;
    // Iterator *it;

public:
    /// This is the ISS Constructor.
/// 
///@param i is as an object of type aggregate
///@param o is an object of type Iterator
    mediatorMemento(int s, vector<string> n, vector<bool> o, vector<bool> OS);
    /// This is the getSatellites funcion.
///
/// This used as an accessor method to private member satellites
/// @return vector of object type aggregate 
    int getSize();
    /// This is the getIT funcion.
///
/// This used as an accessor method to private member it
/// @return vector of object type Iterator 
    vector<string> getNames();
    vector<bool> getOrbits();
    vector<bool> getOStatus();
};

#endif //UNTITLED23_MEDIATORMEMENTO_H
