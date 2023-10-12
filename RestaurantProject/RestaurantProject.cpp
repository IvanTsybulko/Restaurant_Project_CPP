#include <iostream>
#include <vector>

#include "Product.h"
#include "Waiter.h"
#include "Restaurant.h"
#include "Drink.h"
#include "Food.h"


using namespace std;

int main()
{
    //Testing constructors
    Restaurant restaurant1((char*)"r1", (char*)"a1");
    Food food1((char*)"f1", 1.11, 100);
    Drink drink1((char*)"d1", 1.11, 100);
    Waiter waiter1((char*)"w1", (char*)"1", 15, 800);

    //Testing Restaurant
    cout << "Restaurant" << endl;

    restaurant1.ChangeName((char*)"r11");
    restaurant1.ChangeAddress((char*)"a11");
    cout << restaurant1.GetName() << endl;
    cout << restaurant1.GetAddress() << endl;
    restaurant1.AddProduct(food1);
    restaurant1.AddProduct(drink1);
    restaurant1.AddWaiter(waiter1);

    cout << endl;

    //Testing Food
    cout << "Food" << endl;

    food1.ChangeName((char*)"f11");
    food1.ChangePrice(22.22);
    food1.ChangeGrams(22);
    cout << food1.GetName() << endl;
    cout << food1.GetPrice() << endl;
    cout << food1.GetGrams() << endl;

    cout << endl;

    //Testing Drink
    cout << "Drink" << endl;

    drink1.ChangeName((char*)"d11");
    drink1.ChangePrice(22.22);
    drink1.ChangeMilliliters(22);
    cout << drink1.GetName() << endl;
    cout << drink1.GetPrice() << endl;
    cout << drink1.GetMilliliters() << endl;

    cout << endl;

    //Testing Waiter
    cout << "Waiter" << endl;

    waiter1.ChangeAge(waiter1.GetAge() + 1);
    waiter1.ChangeName((char*)"w11");
    waiter1.ChangeSalary(1111.00);
    cout << waiter1.GetName()   << endl;
    cout << waiter1.GetId()     << endl;
    cout << waiter1.GetAge()    << endl;
    cout << waiter1.GetSalary() << endl;

    cout << endl;


    //Overall Testing
    vector<Restaurant> restaurants;

    
        // Products
    Food chickenWings((char*)"Chicken Wings", 9.90, 400);
    Food Twister((char*)"Twister", 6, 400);
    Food Zinger((char*)"Zinger", 5.50, 400);

    Drink cola((char*)"Coca-Cola", 5.50, 500);
    Drink fanta((char*)"Fanta", 5.50, 500);
    Drink sprite((char*)"Sprite", 5.50, 500);

        // Waiters

    Waiter Gosho((char*)"Georgi Georgiev Georgiev", (char*)"332233223322", 24, 1000);
    Waiter Pesho((char*)"Petar Petrov Petrov", (char*)"332233223323", 18, 800);
    Waiter Kosio((char*)"Konstantin Konstantinov Konstantinov", (char*)"332233223324", 36, 1200);

        // Restaurants

    Restaurant KFC1((char*)"KFC Mall Bulgaria", (char*)"bul. Bulgaria 109");
    Restaurant KFC2((char*)"KFC Mall Sofia", (char*)"A.Stamboliiski 101A");
    Restaurant KFC3((char*)"KFC Nadejda", (char*)"bul. Lomsko Shose 176");

    restaurants.push_back(KFC1);
    restaurants.push_back(KFC2);
    restaurants.push_back(KFC3);

    //Adding the same products and waiters for all of them
    for (int i = 0; i < restaurants.size(); i++)
    {
        restaurants[i].AddProduct(cola);
        restaurants[i].AddProduct(fanta);
        restaurants[i].AddProduct(sprite);
        restaurants[i].AddProduct(chickenWings);
        restaurants[i].AddProduct(Twister);
        restaurants[i].AddProduct(Zinger);

        restaurants[i].AddWaiter(Gosho);
        restaurants[i].AddWaiter(Pesho);
        restaurants[i].AddWaiter(Kosio);
    }

    for (int i = 0; i < restaurants.size(); i++)
    {
        restaurants[i].Report();
    }
    
}