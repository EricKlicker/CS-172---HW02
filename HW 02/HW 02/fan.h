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

//create class fan with private variables
class fan
{
private:
    double radius;
    bool on;
    int speed;
    
    
public:
    fan ();
    //create void funcitons that I will implement in my cpp.file
    //including setting values and then returning them
    void setSpeed(int newSpeed);
    void setRadius(int newRadius);
    void turnOn();
    void turnOff();
    double getRadius();
    int getSpeed();
    bool getOn();
    
};
#endif 



