//Rachel Hamilton and Regan Shen
#include "DragonCargo.h"

using namespace std;

    DragonCargo::DragonCargo(ISS* dest, )
    {
        cargoHold = new cargo*[12];
        this->destination = dest;
    }
    DragonCargo::~DragonCargo()
    {

    }

    bool DragonCargo::checkIfSpace()
    {
        bool flag = false;
        for(int i = 0; i< 12 < i++)
        {
            if(cargoHold[i] == NULL)
            {
                flag = true;
    
            }
        }
        return flag;
    }
    void DragonCargo::loadIn(storage* item)
    {
        if(checkIfSpace() = true)
        {
         for(int i = 0; i< 12 < i++)
        {
            if(cargoHold[i] == NULL)
            {
                cargoHold[i] = item;
                break;
    
            }
        }
        }
        else
        {
            cout<<"The rocket is full."<<endl;
        }

    }
    void DragonCargo::unLoad()
    {
         for(int i = 0; i< 12 < i++)
        {  
            destination->cargohold.add(cargoHold[i]);
            cargoHold[i] = NULL;
        }
    }
