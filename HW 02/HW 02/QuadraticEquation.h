//
//  QuadraticEquation.h
//  HW 02
//
//  Created by Eric Klicker on 9/29/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#ifndef QuadraticEquation_h
#define QuadraticEquation_h
#include <iostream>
using namespace std;

class QuadraticEquation
{
private:
    double a;
    double b;
    double c;
    double r1;
    double r2;
    
public:
    QuadraticEquation();
    void setA(int newA);
    void setB(int newB);
    void setC(int newC);
    
    double getDiscriminant();
    double getRoot1();
    double getRoot2();
    
};

#endif /* QuadraticEquation_h */
