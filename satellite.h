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

///This is the satellite class.
///
///It has a string name, bool inorbit, an object of type observer and a bool System_online as a private member
class satellite
{
private:
    string name;
    bool inorbit;
    observer* observ;
    bool System_online;

public:

/// this is the getName function.
///
/// This used as an accessor method to private member name
/// @return a string containing the name of the satellite
///@see setName()
    string getName();

/// this is the setOrbit function.
///
/// This used as an modifier method to private member bool
///@param tf the bool value that is going to be passed in.
/// @return nothing
    void setOrbit(bool);

/// this is the getOrbit function.
///
/// This used as an accessor method to private member inorbit
/// @return a bool value 
    bool getOrbit();

/// this is the attach function.
///
///This used to attach the satellite
///@param o is an object of type observer
/// @return nothing
    void attach(observer*);

/// this is the detach function.
///
/// This used to detach the satellite
/// @return nothing
    void detach();

/// this is the setSO function.
///
/// This used as an modifier method to private member System_online
///@param tf the bool value that is going to be passed in.
/// @return nothing
    void setSO(bool);

/// this is the getS0 function.
///
/// This used as an accessor method to private member System_online
/// @return a bool value 
    bool getS0();

/// this is the setSOandUpdate function.
///
/// This used as an accessor method to private member System_online and updates observers
///@param tf the bool value that is going to be passed in.
/// @return nothing
    void setSOandUpdate(bool);

/// this is the notify function.
///
/// This used to notify observers
/// @return nothing
    void notify();
  
/// this is the getObserv function.
///
/// This used as an accessor method to private member observ
///@return an object of type observer
    observer* getObserv();
    
/// this is the satellite constructor.
///
///@param n is for the a string name
///@param med is an object of type observer
///@return a string containing the name of the satellite
    satellite(string, Mediator*);


/// this is the satellite constructor.
///
///@param n is for the a string name
///@param med is an object of type observer
///@return a string containing the name of the satellite
    satellite(string, Mediator*);

/// this is the workLoad function.
///
/// This used to manage thw worload of the satellites
/// @param bIn is bool value that musy be passed in
///@return an object of type observer
    void workLoad(bool bIn);

/// this is the setName function.
///
/// This used to manage thw worload of the satellites
/// @param bIn is bool value that musy be passed in
///@return an object of type observer
    void setName(string s);
};


#endif //SATELLITE_H
