//
// Created by micha on 2021/11/08.
//

#ifndef SATELLITE_H
#define SATELLITE_H

# include "string"
#include "observer.h"

using namespace std;

class satellite
{
private:
    string name;
    bool inorbit;
    observer* observ;
    bool System_online;

public:
    string getName();
    void setOrbit(bool);
    bool getOrbit();
    void attach(observer*);
    void detach();
    void setSO(bool);
    bool getS0();
    void setSOandUpdate(bool);
    void notify();

};


#endif //SATELLITE_H
