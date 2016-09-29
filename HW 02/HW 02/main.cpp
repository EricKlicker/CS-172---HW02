//
//  main.cpp
//  HW 02
//
//  Created by Eric Klicker on 9/25/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#include <iostream>
#include "fan.h"
using namespace std;


int main ()
{
    
    fan f1,f2;
    f1.setSpeed(3);
    f1.setRadius(10);
    f1.turnOn();
    
    cout << "Fan speed: " << f1.getSpeed() << endl;
    cout << "Fan radius: " << f1.getRadius() << endl;
    cout << "The fan is: " << f1.getOn() << endl;
    
    
    
    
    
    

    
    
    
}

