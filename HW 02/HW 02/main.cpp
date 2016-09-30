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
#include "EvenNumber.h"
using namespace std;


int main ()
{
    //objects 1 and 2 for fans
    fan f1,f2;
    f1.setSpeed(3);
    f1.setRadius(10);
    f1.turnOn();
    
    //cout what I want the user to see
    cout << "Fan speed: " << f1.getSpeed() << endl;
    cout << "Fan radius: " << f1.getRadius() << endl;
    cout << "The fan is: " << f1.getOn() << endl << endl;
    
    //setting the speed and radius of fans
    f2.setSpeed(2);
    f2.setRadius(5);
    
    //getting those values and returning them
    cout << "Fan speed: " << f2.getSpeed() << endl;
    cout << "Fan radius: " << f2.getRadius() << endl << endl;
    
    
    //new class and object "Quadratic Equation"
    QuadraticEquation q1;
    
    int x;
    int y;
    int z;
    //3 variables, and have the user enter those values for a,b,c
    cout << "Please enter value for a: ";
    cin >> x;
    cout << "Please enter value for b: ";
    cin >> y;
    cout << "Please enter value for c: ";
    cin >> z;
    
    //those values then get set to values of a,b, and c
    q1.setA(x);
    q1.setB(y);
    q1.setC(z);
    
    //depending on the value of the roots, it will either display no roots, one root or 2 roots
    if (q1.getDiscriminant()<0)
        cout <<" no roots" << endl;
        
    else if (q1.getDiscriminant()== 0)
            cout << "the root is" << q1.getRoot1() << endl;
    
            else
                cout << "The roots are: " << q1.getRoot1()<< " and " << q1.getRoot2()<<endl;
    
   
    
  
  //ex 9.1
    
    
    
    

    
    
    
}

