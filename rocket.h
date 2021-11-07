#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;
#ifndef rocket_h
#define rocket_h

class rocket
{
private:
   int speed;

public:
    rocket(int s);
    ~rocket();
    int getSpeed();
    void setSpeed();

};


