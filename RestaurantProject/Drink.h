#pragma once

#include "Product.h"

class Drink : public Product
{
public:
	Drink() {};

	Drink(char* name, double price,int ml):Product(name,price)
	{
		Milliliters = ml;
	}

	int GetMilliliters()
	{
		return Milliliters;
	}

	void ChangeMilliliters(int ml)
	{
		Milliliters = ml;
	}

private:
	int Milliliters;
};

