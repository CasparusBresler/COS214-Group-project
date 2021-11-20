//
// Created by micha on 2021/11/16.
//

#ifndef UNTITLED24_FIRSTSTAGEROCKET_H
#define UNTITLED24_FIRSTSTAGEROCKET_H


class FirstStageRocket
{
private:
    int amount;
public:
/// This is the FalconHeavy Constructor.
/// 
///@param i is the amount of fuel in the rocket
    FirstStageRocket(int i);
    
/// This is the FirstStageRocket deconstructor
/// 
///
    ~FirstStageRocket();
    
/// This is the fire function
/// 
///
    void fire();
};


#endif //UNTITLED24_FIRSTSTAGEROCKET_H
