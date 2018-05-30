

#ifndef UNTITLED1_BOARD_H
#define UNTITLED1_BOARD_H

#include <iostream>
#include <ctime>
#include <string>
#include <cmath>
#include <fstream>
#include "Coordinate.h"
#include "square.h"
#include "IllegalCoordinateException.h"
#include "IllegalCharException.h"

struct RGB {
  uint8_t red, green, blue;
public:
  RGB() {}
  RGB(uint8_t red, uint8_t green, uint8_t blue): red(red), green(green), blue(blue) {}
};

using namespace std;
class Board{

	square** board;
	int size;
	void makeO(RGB rgb[] ,int row, int col, int numPixel);
	void makeX(RGB rgb[], int col, int row, int numPixel);
	void makeTable(RGB rgb[], int numPixel);

public:
	Board();
	Board(int);
	Board(const Board&);
	~Board();
	square& operator [](Coordinate c);
	friend ostream& operator <<(ostream&, const Board&);
	Board& operator =(char);
	Board& operator =(Board&);
	string draw(int pixel);
	
	friend std::istream& operator>> (std::istream &input, Board& board);
};

#endif //UNTITLED1_BOARD_H
