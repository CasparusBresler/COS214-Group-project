#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;
#ifndef rocket_h
#define rocket_h
/// This is the rocket class.
///
/// It has as an integer speed as a private member
class rocket
{
private:
    int speed;

public:

/// This is the rocket Constructor.
/// 
///@param s is an integer that will set the speed in the constructor
    rocket(int s);

/// This is the rocket deconstructor.
/// 
///   
    ~rocket();


/// This is the getSpeed funcion.
///
/// This used as an accessor method to private member speed
/// @return an integer
/// @see setSpeed()
    int getSpeed();


/// This is the setSpeed funcion.
///
/// This used as modifier method to private member speed
/// @param s is an integer that will set the speed
/// @return nothing
/// @see getSpeed()
    void setSpeed(int s);
};

#endif
//tests