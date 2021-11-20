//
// Created by micha on 2021/11/08.
//

#ifndef SATELLITE_H
#define SATELLITE_H

# include <string>
#include "observer.h"
//#include "Mediator.h"

class Mediator;

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
    observer* getObserv();
    satellite(string, Mediator*);
    void workLoad(bool);
    void setName(string s);
};


#endif //SATELLITE_H
