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
/// It has as integer, vector of type string and 2 vecotors of type bool as private memebers
class mediatorMemento
{
private:
    int size;
    vector<string> names;
    vector<bool> orbits;
    vector<bool> OS;
   

public:
   
   
/// This is the mediatorMemento Constructor.
/// 
///@param s is going to initialize the size
///@param n is going to initialize the names
///@param o is going to initialize the orbits
///@param OS is going to initialize the OS
    mediatorMemento(int s, vector<string> n, vector<bool> o, vector<bool> OS);

/// This is the getSize funcion.
///
/// This used as an accessor method to private member size
/// @return integer value
    int getSize();

/// This is the getNames funcion.
///
/// This used as an accessor method to private member names
/// @return vector of object type string 
    vector<string> getNames();

/// This is the getOrbits funcion.
///
/// This used as an accessor method to private member orbits
/// @return vector of object type bool 
    vector<bool> getOrbits();

/// This is the getOStatus funcion.
///
/// This used as an accessor method to private member OS
/// @return vector of object type bool 
    vector<bool> getOStatus();
};

#endif //UNTITLED23_MEDIATORMEMENTO_H
