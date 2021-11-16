//
// Created by micha on 2021/11/16.
//

#include <iostream>
#include "DragonCargo.h"

using namespace std;

DragonCargo::DragonCargo(ISS* dest) : dragon_template()
{
    size = 15;
    loaded = 0;
    this->destination = dest;
}
DragonCargo::~DragonCargo()
{

}

bool DragonCargo::checkIfSpace()
{
    if(loaded == size)
    {
        return false;
    }
    else
    {
        return true;
    }


}
void DragonCargo::loadIn(storage* item)
{
    if(checkIfSpace() == true)
    {
        this->cargoHold.push_back((cargo*)item);
        loaded++;
    }
    else
    {
        cout<<"The rocket is full."<<endl;
    }

}
void DragonCargo::unload()
{
    while(!cargoHold.empty())
    {
        destination->getCargo().push_back(cargoHold.back());
        cargoHold.pop_back();
        loaded--;
    }
}

void DragonCargo::launch()
{
    cout << "Dragon Cargo Rocket Launching" << endl;
}

ISS * DragonCargo::getDest()
{
    return destination;
}


