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
    a = 3;
    b = 4;
    c = 5;
}

void QuadraticEquation::setA(int newA)
{
    a = newA;
}

void QuadraticEquation::setB(int newB)
{
    b = newB;
}

void QuadraticEquation::setC(int newC)
{
    c = newC;
}

double QuadraticEquation::getDiscriminant()
{
    return b*b - 4*a*c;
}

double QuadraticEquation::getRoot1()
{
    if (getDiscriminant()< 0)
        return 0;
    else
        return ((-b + sqrt((b*b)-4*a*c))/(2*a));
}

double QuadraticEquation::getRoot2()
{
    if (getDiscriminant()< 0)
        return 0;
    else
        return ((-b + sqrt((b*b)-4*a*c))/(2*a));
}

