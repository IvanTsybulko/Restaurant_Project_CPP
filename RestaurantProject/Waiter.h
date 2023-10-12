#pragma once
using namespace std;
#include <iostream>

class Waiter
{
public:
	Waiter() {};

	Waiter(char* name, char* id, int age, double salary)
	{
		Name = name;
		Age = age;
		Salary = salary;
		Id = id;
	}

	char* GetName()
	{
		return Name;
	}

	int GetAge()
	{
		return Age;
	}

	double GetSalary()
	{
		return Salary;
	}

	char* GetId()
	{
		return Id;
	}

	void Report()
	{
		cout << "    $" << Name << " ID: " << Id << " salary: " << Salary << " age: " << Age << endl;
	}


	//Modifiers
	void ChangeName(char* name)
	{
		Name = name;
	}

	void ChangeAge(double age)
	{
		Age = age;
	}

	void ChangeSalary(double salary)
	{
		Salary = salary;
	}

	void BonusSalary(int n)
	{
		Salary += Salary * (n / 100);
	}


private:
	char* Name;
	char* Id;
	int Age;
	double Salary;
};

