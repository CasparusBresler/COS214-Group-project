//
// Created by micha on 2021/11/08.
//

#ifndef UNTITLED23_MEDIATORMEMENTO_H
#define UNTITLED23_MEDIATORMEMENTO_H


#include "Iterator.h"

class observer;

class mediatorMemento
{
private:
    Iterator* it;
    vector<observer*> observers;
public:

    mediatorMemento(Iterator*, vector<observer*>);
    Iterator* getIT();
    vector<observer*> getObservers();


};


#endif //UNTITLED23_MEDIATORMEMENTO_H
