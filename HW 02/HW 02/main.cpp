//
//  main.cpp
//  HW 02
//
//  Created by Eric Klicker on 9/25/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#include <iostream>
#include "fan.h"
#include "QuadraticEquation.h"
using namespace std;


int main ()
{
    
    fan f1,f2;
    f1.setSpeed(3);
    f1.setRadius(10);
    f1.turnOn();
    
    cout << "Fan speed: " << f1.getSpeed() << endl;
    cout << "Fan radius: " << f1.getRadius() << endl;
    cout << "The fan is: " << f1.getOn() << endl << endl;
    
    
    QuadraticEquation q1;
    
    int x;
    int y;
    int z;
    cin >> x;
    cin >> y;
    cin >> z;
    
    q1.setA(x);
    q1.setB(y);
    q1.setC(z);
    
    if (q1.getDiscriminant()<0)
        cout <<" no roots" << endl;
        
    else if (q1.getDiscriminant()== 0)
            cout << q1.getRoot1() << endl;
    
            else cout << q1.getRoot1()<< " " << q1.getRoot2()<<endl;
    
   
    
  
  
    
    
    
    

    
    
    
}

