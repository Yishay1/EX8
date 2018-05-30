
#ifndef UNTITLED1_ILLEGALCOORDINATEEXCEPTION_H
#define UNTITLED1_ILLEGALCOORDINATEEXCEPTION_H

#include <iostream>
#include <string>
#include "Board.h"
class IllegalCoordinateException{
public:
    int i,j;
    IllegalCoordinateException(int,int);
    string theCoordinate() const;
};



#endif //UNTITLED1_ILLEGALCOORDINATEEXCEPTION_H
