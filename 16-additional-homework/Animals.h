#pragma once
#include <iostream>
#include "Life.h";
using namespace std;

enum Homeland
{
	none, field, forest, desert
};

class Animal : public Life
{
	float weight;
	float speed;
	Homeland homeland;

public:
	Animal() : weight(0), homeland(none), Life() {}
	Animal(int maxAge, float weight, Homeland homeland) : weight(weight), homeland(homeland), Life(maxAge) {}

	void print()
	{
		cout << "health - " << getHealth() << endl;
		cout << "age - " << getAge() << endl;
		cout << "sitist' - " << geteatBar() << endl;
		cout << "weight - " << weight << endl;
		cout << "speed - " << speed << endl;
		cout << "homeland - " << homeland << endl; // i know that homeland is bat'kivshina...
		cout << "max age - " << getmaxAge() << endl;
	}

	virtual void eat() = 0;
};

class Fox : public Animal
{
	

public:
	void eat() override
	{

	}

};

class Bunny : public Animal
{
	


public:


};