//
// Created by יהונתן on 07/05/2018.
//

#ifndef UNTITLED1_SQUARE_H
#define UNTITLED1_SQUARE_H

#include <iostream>
#include <string>
#include "IllegalCharException.h"
using namespace std;
class square{
public:
	const char get()const;
	void set(char c);
	square();
	square(char);
	square& operator = (char);
	operator char() const;
	friend ostream& operator <<(ostream&, const square&);
	friend bool operator==(square&, char);
private:
	char c;



};
#endif //UNTITLED1_SQUARE_H
