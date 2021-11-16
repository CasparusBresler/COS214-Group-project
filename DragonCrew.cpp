//Rachel Hamilton and Regan Shen
#include "DragonCrew.h"


using namespace std;

    DragonCrew::DragonCrew(ISS* dest)
    {
        passengers = new crew*[7];
        this->destination = dest;

    }
    
    DragonCrew::~DragonCrew()
    {

    }

    bool DragonCrew::checkIfSpace()
    {
        bool flag = false;
        for(int i = 0; i< 7 < i++)
        {
            if(passengers[i] == NULL)
            {
                flag = true;
    
            }
        }
        return flag;
    }
    void DragonCrew::loadIn(storage* item)
    {
        if(checkIfSpace() = true)
        {
         for(int i = 0; i< 7 < i++)
        {
            if(passengers[i] == NULL)
            {
                passengers[i] = item;
                break;
    
            }
        }
        }
        else
        {
            cout<<"The rocket is full."<<endl;
        }

    }
    void DragonCrew::unLoad()
    {
         for(int i = 0; i< 7 < i++)
        {
            destination->crewmembers.add(passengers[i]);
            passengers[i] = NULL;
        }
    }
