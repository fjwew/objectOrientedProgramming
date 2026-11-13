#include "Cars.h"

void Car::print() const
{
	cout << "Car" << endl;
	Auto::print();
}

void Bike::print() const
{
	cout << "Bike" << endl;
	Auto::print();
}

void Cart::print() const
{
	cout << "Cart" << endl;
	Auto::print();
}
