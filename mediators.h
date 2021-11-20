//
// Created by micha on 2021/11/08.
//

#ifndef MEDIATORS_H
#define MEDIATORS_H

#include "mediatorMemento.h"

///This is the mediators class
///
/// It has as an object of type mediatorMemento
class mediators
{
private:
    mediatorMemento *m;

public:
    /// This is the getMed funcion.
///
/// This used as an accessor method to private member mediator
/// @return an object of type mediatorMemento
/// @see setMed
    mediators();
    /// This is the setMed function
///
/// Used to chnage the value of the private memeber mediator
/// @param m  is of type mediatorMemento
/// @return nothing 
/// @see getMed() 
    ~mediators();
    void SetMed(mediatorMemento *m);
    mediatorMemento *getMed();
    
};

#endif //UNTITLED23_MEDIATORS_H
