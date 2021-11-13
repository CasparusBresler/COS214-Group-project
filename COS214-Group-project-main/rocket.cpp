#include "rocket.h"

rocket::rocket(int s)
{
    speed = s;
}

rocket::~rocket()
{
}
int rocket:: getSpeed(){
return speed;
}
void rocket:: setSpeed(int s){
speed = s;
}
//Getters and Setters
