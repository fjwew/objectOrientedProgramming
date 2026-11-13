#pragma once
#include <iostream>
using namespace std;

class Auto
{
protected:
	float price;
	float speed;
	float distance;

public:
	Auto() : price(0), speed(0), distance(0) {}
	Auto(float p, float s, float d) : speed(s), distance(d)
	{
		price = (p > 0) ? p : 0;
	}

	virtual void print() const
	{
		cout << "price - " << price << endl;
		cout << "speed - " << speed << " km/h" << endl;
		cout << "distance - " << distance << "km" << endl;
	}

	virtual float countTime() const = 0;
};

class Car : public Auto
{
public:
	Car() : Auto() {}
	Car(float p, float s, float d) : Auto(p, s, d) {}

	void print() const override;

	float countTime() const
	{
		return distance/speed;
	}
};

class Bike : public Auto
{
public:
	Bike() : Auto() {}
	Bike(float p, float s, float d) : Auto(p, s, d) {}

	void print() const override;

	float countTime() const
	{
		return distance/speed;
	}
};

class Cart : public Auto
{
public:
	Cart() : Auto() {}
	Cart(float p, float s, float d) : Auto(p, s, d) {}

	void print() const override;

	float countTime() const
	{
		return distance/speed;
	}
};