//
// Created by micha on 2021/11/16.
//

using namespace std;

#include <iostream>
#include "FirstStageRocket.h"

FirstStageRocket::FirstStageRocket(int i)
{
    amount = i;
}

FirstStageRocket::~FirstStageRocket() {}

void FirstStageRocket::fire()
{
    cout << amount << " Merlin Engines fired successfully" << endl;
}