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

	Tiles() {} // default constructor

	Tiles(std::string t_brand, double t_size_h, double t_size_w, double t_price) // initialize constructor
		: brand(t_brand), size_h(t_size_h), size_w(t_size_w), price(t_price) 
	{
	} 

	Tiles(const Tiles &copy) // copy constructor
	{
		brand = copy.brand;
		size_h = copy.size_h;
		size_w = copy.size_w;
		price = copy.price;
	}

	void getTilesData();

	~Tiles() {} // empty destructor
};

void SECOND_TASK();

#endif