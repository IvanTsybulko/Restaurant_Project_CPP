#pragma once

#include "Product.h"

class Food : public Product
{
public:
	Food() {};

	Food(char* name, double price, int grams) : Product(name,price)
	{
		Grams = grams;
	}

	int GetGrams()
	{
		return Grams;
	}

	void ChangeGrams(int grams)
	{
		Grams = grams;
	}

private:
	int Grams;
};

