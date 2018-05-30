#include "square.h"
square::square() {
	this->set('.');
}
square::square(char c) {
	this->set(c);
}
square& square::operator=(char c) {
	this->set(c);
	return *this;
}
void square::set(char c) {
	if(c=='X'||c=='O'||c=='.') {
		this->c = c;
	}
	else throw IllegalCharException(c);
}
const char square::get()const {
	return this->c;
}
ostream & operator<<(ostream & os, const square & s) {
	os<<s.get();
	return os;
}

square::operator char() const {
	return c;
}
bool operator==(square& s, char c)
{
	if(s.get()==c) return true;
	return false;
}
