//
// Created by micha on 2021/11/16.
//

#include <iostream>
#include "attach.h"

using namespace std;

attach::attach()
{

}

attach::~attach()
{

}

void attach::execute(dragon_template* r , storage* s)
{
    if(r->getDest()->getDockedState()->getstate() == false)
    {
        cout<<"The spaceship is attached."<<endl;
        docked_state *temp =  r->getDest()->getDockedState();
        r->getDest()->setState(r->getDest()->getDockedState()->changestate());
        delete temp;
        r->docked = true;

    }
    else
    {
        cout << "Cannot dock as dock is currently taken" << endl;
        r->docked = false;
    }



}