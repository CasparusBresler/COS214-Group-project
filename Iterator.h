//
// Created by micha on 2021/11/08.
//

#ifndef ITERATOR_H
#define ITERATOR_H

#include "Vector"

class satellite;

using namespace std;

class Iterator
{
private:
    vector<satellite*> satellites;
    int pos;
public:
    Iterator(vector<satellite*>);
    satellite* first();
    satellite* next();
    satellite* current();
    bool done();
    void update(bool);

};


#endif //ITERATOR_H
