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
    
    speed = 1;
    radius = 5;
    on = false;
    
}
void fan::setSpeed(int newSpeed)
{
    if (newSpeed >= 1 || newSpeed<=3)
        speed = newSpeed;
}
void fan::setRadius(int newRadius)
{
    if(newRadius > 0)
        radius = newRadius;
}

void fan::turnOn()
{
    on = true;
}


void fan::turnOff()
{
    on = false;
}


double fan::getRadius()
{
    return radius;
}

int fan::getSpeed()
{
    return speed;
}

bool fan::getOn()
{
    return on;
}




