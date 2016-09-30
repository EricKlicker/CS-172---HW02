//
//  EvenNumber.cpp
//  HW 02
//
//  Created by Eric Klicker on 9/30/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#include <stdio.h>
#include "EvenNumber.h"
using namespace std;




int getValue;
int getNext;
int getPrevious;


EvenNumber::EvenNumber()
{
    x = 0;
}

void EvenNumber::setValue(int NewValue)
{
    if ( NewValue % 2 == 0)
        x = NewValue;
}

void EvenNumber::setNext(int NextNumber)
{
    NextNumber = NewValue + 2;
}


void EvenNumber::setPrevious (int PreviousNumber)
{
    PreviousNumber = NewValue -2;
    
}

int EvenNumber::getValue()
{
    return NewValue;

}

