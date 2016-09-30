//
//  EvenNumber.h
//  HW 02
//
//  Created by Eric Klicker on 9/30/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#ifndef EvenNumber_h
#define EvenNumber_h

#include <iostream>
using namespace std;

class EvenNumber
{
    int x;
    
public:
    
    EvenNumber();
    void setValue(int NewValue);
    void setNext(int NextNumber);
    void setPrevious(int PreviousNumber);
    int getValue();
    int getNext();
    int getPrevious();
};








#endif /* EvenNumber_h */
