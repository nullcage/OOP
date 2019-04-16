#ifndef TILES_H
#define TILES_H

#include <iostream>
#include <string>

class Tiles
{
public:
	std::string brand;
	double size_h;
	double size_w;
	double price;

	Tiles() : brand("Unnamed"), size_h(0.0), size_w(0.0), price(0.0) {}; // initialize constructor
	Tiles(std::string c_brand, double c_size_h, double c_size_w, double c_price) // copy inititalize constructor
	{
		brand = c_brand;
		size_h = c_size_h;
		size_w = c_size_w;
		price = c_price;
	}

	void getTilesData();

	~Tiles() {} // destructor
};

void SECOND_TASK();

#endif
