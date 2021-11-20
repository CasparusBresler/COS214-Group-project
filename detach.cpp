//
// Created by micha on 2021/11/16.
//

#include <iostream>
#include "detach.h"

using namespace std;

detach::detach()
{

}

detach::~detach()
{

}

void detach::execute(dragon_template* r , storage* s)
{
    if(r->getDest()->getDockedState()->getstate() == false)
    {
        cout << "rocket is not currently attached" << endl;
    }
    else
    {
        cout<<"The spaceship is detached."<< endl;
        docked_state* temp =  r->getDest()->getDockedState();
        r->getDest()->setState(r->getDest()->getDockedState()->changestate());
        delete temp;
    }
}