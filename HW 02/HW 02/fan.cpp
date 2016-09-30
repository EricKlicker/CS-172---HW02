//
//  fan.cpp
//  HW 02
//
//  Created by Eric Klicker on 9/27/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#include <stdio.h>
#include "fan.h"
using namespace std;


fan::fan()
{
    //default values
    
    speed = 1;
    radius = 5;
    on = false;
    
}

//create a void function to set the speed
void fan::setSpeed(int newSpeed)
{
    //the speed needs to be within a certain range
    if (newSpeed >= 1 && newSpeed<=3)
        speed = newSpeed;
}

//function to set the radius as long as it is greater than 0
void fan::setRadius(int newRadius)
{
    if(newRadius > 0)
        radius = newRadius;
}

//determine if the fan is on
void fan::turnOn()
{
    on = true;
}

//determine if the fan is off
void fan::turnOff()
{
    on = false;
}

//return value of radius
double fan::getRadius()
{
    return radius;
}

//return value of speed
int fan::getSpeed()
{
    return speed;
}

//return if on
bool fan::getOn()
{
    return on;
}




