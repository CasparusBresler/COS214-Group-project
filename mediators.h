//
// Created by micha on 2021/11/08.
//

#ifndef MEDIATORS_H
#define MEDIATORS_H

#include "mediatorMemento.h"

class mediators
{
private:
    mediatorMemento *m;

public:
    mediators();
    ~mediators();
    void SetMed(mediatorMemento *m);
    mediatorMemento *getMed();
    
};

#endif //UNTITLED23_MEDIATORS_H