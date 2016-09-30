//
//  QuadraticEquation.cpp
//  HW 02
//
//  Created by Eric Klicker on 9/29/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#include <stdio.h>
#include "QuadraticEquation.h"
#include <cmath>
using namespace std;

QuadraticEquation::QuadraticEquation()
{
    //default values of a,b,c
    a = 3;
    b = 4;
    c = 5;
}

//setting value of a
void QuadraticEquation::setA(int newA)
{
    a = newA;
}
//setting value of b
void QuadraticEquation::setB(int newB)
{
    b = newB;
}
//setting value of c
void QuadraticEquation::setC(int newC)
{
    c = newC;
}
//getting the discriminant
double QuadraticEquation::getDiscriminant()
{
    return b*b - 4*a*c;
}
//getting root 1 as long as it doesnt equal 0
double QuadraticEquation::getRoot1()
{
    if (getDiscriminant()< 0)
        return 0;
    else
        return ((-b + sqrt((b*b)-4*a*c))/(2*a));
}
//for root 2 but same as root 1
double QuadraticEquation::getRoot2()
{
    if (getDiscriminant()< 0)
        return 0;
    else
        return ((-b + sqrt((b*b)-4*a*c))/(2*a));
}

