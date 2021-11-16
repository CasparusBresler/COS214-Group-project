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
        cout << "rocket is not currently attacked" << endl;
    }
    else
    {
        cout<<"The spaceship is detached."<< endl;
    }
}