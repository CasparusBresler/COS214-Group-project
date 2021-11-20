//
// Created by micha on 2021/11/16.
//

#include <iostream>
#include "DragonCrew.h"


using namespace std;

DragonCrew::DragonCrew(ISS* dest) : dragon_template()
{
    docked = false;
    size = 12;
    loaded = 0;
    this->destination = dest;
}

DragonCrew::~DragonCrew()
{

}

bool DragonCrew::checkIfSpace()
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
void DragonCrew::loadIn(storage* item)
{
    if(checkIfSpace() == true)
    {
        passengers.push_back((crew*)item);
        loaded++;
    }
    else
    {
        cout<<"The rocket is full."<<endl;
    }

}
void DragonCrew::unload()
{
    while(!passengers.empty())
    {
        vector<crew*> temp = destination->getCrew();
        temp.push_back(passengers.back());
        destination->setCrew(temp);
        passengers.pop_back();
        loaded--;
    }
}


ISS * DragonCrew::getDest()
{
    return destination;
}

void DragonCrew::launch()
{
    cout << "Dragon Crew  Rocket Launching" << endl;
}
