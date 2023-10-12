#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class Product
{
public:
	Product() {};

	Product(char* name, double price)
	{
		Name = name;
		Price = price;
	}

	//Acsessors
	char* GetName()
	{
		return Name;
	}

	double GetPrice()
	{
		return Price;
	}

	void Report()
	{
		cout <<"    $" << Name << " " << setprecision(2) << fixed << Price << endl;
	}

	//Modifiers
	void ChangeName(char* name)
	{
		Name = name;
	}

	void ChangePrice(double price)
	{
		Price = price;
	}

private:
	char* Name;
	double Price;
};

