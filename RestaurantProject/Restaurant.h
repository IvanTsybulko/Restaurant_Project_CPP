#pragma once

#include "Product.h"
#include "Waiter.h"

#include <vector>
#include <iostream>

using namespace std;

class Restaurant
{
public:
	Restaurant() {};

	Restaurant(char* name, char* address)
	{
		Name = name;
		Address = address;
	}

	//Accessors
	char* GetName()
	{
		return Name;
	}

	char* GetAddress()
	{
		return Address;
	}

	//Modifiers
	void ChangeName(char* name)
	{
		Name = name;
	}

	void ChangeAddress(char* address)
	{
		Address = address;
	}

	void AddProduct(Product product)
	{
		menu.push_back(product);
	}

	void AddWaiter(Waiter waiter)
	{
		waiters.push_back(waiter);
	}

	void Report()
	{
		cout << "Name: " << Name << endl;
		cout << "Address: " << Address << endl << endl;

		cout << "Food & Drinks" << endl; 
		for (int i = 0; i < menu.size(); i++)
		{
			menu[i].Report();
		}

		cout << endl;

		cout << "Waiters" << endl;
		for (int i = 0; i < waiters.size(); i++)
		{
			waiters[i].Report();
		}

		cout << endl;
	}
private:
	char* Name;
	char* Address;
	vector <Product> menu;
	vector <Waiter> waiters;
};

