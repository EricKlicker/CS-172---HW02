//
//  fan.h
//  HW 02
//
//  Created by Eric Klicker on 9/26/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//
#include <iostream>
using namespace std;

#ifndef fan_h
#define fan_h

class fan
{
private:
    double radius;
    bool on;
    int speed;
    
    
public:
    fan ();
    
    void setSpeed(int newSpeed);
    void setRadius(int newRadius);
    void turnOn();
    void turnOff();
    double getRadius();
    int getSpeed();
    bool getOn();
    
};
#endif 



