#include "Coordinate.h"

Coordinate::Coordinate(unsigned int i,unsigned int j)
{
	this->x=i;
	this->y=j;
}

Coordinate::Coordinate(int i,int j)
{
	i=(unsigned int)i;
	j=(unsigned int)j;
	this->x=i;
	this->y=j;
}
