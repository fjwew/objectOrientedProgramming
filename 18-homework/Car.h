#pragma once
#include <iostream>
using namespace std;

class Engine
{
private:
	float power;

public:
	Engine() : power(0) {}
	Engine(float power) : power(power) {}

	void print() const
	{
		cout << "engine power - " << power << endl;
	}

};

class Body
{
protected:
	string material;
	string color;

public:
	Body() : material("none"), color("none") {}
	Body(string material, string color) : material(material), color(color) {}

	void print() const
	{
		cout << "body material - " << material << ", color - " << color << endl;
	}
};

class Wheel
{
private:
	float diameter;

public:
	Wheel() : diameter(0) {}
	Wheel(float diameter) : diameter(diameter) {}

	void print() const
	{
		cout << "wheel diameter - " << diameter << endl;
	}

};

class Door : public Body
{
private:
	bool isOpen;

public:
	Door() : isOpen(false), Body() {}
	Door(string material, string color, bool isOpen) : isOpen(isOpen), Body(material, color) {}

	void print() const
	{
		isOpen ? cout << "doors are opened" << endl : cout << "doors are closed" << endl;
	}

};

class GearBox
{
private:
	int countGear;

public:
	GearBox() : countGear(0) {}
	GearBox(int countGear) : countGear(countGear) {}

	void print() const
	{
		cout << "number of transmissions - " << countGear << endl;
	}

};

class Light
{
private:
	string color;
	bool isOn;

public:
	Light() : color("none"), isOn(false) {}
	Light(string color, bool isOn) : color(color), isOn(isOn) {}

	void print() const
	{
		cout << "lights color - " << color << endl;
		isOn ? cout << "lights are on\n" : cout << "lights are off\n";
	}

};



class Car
{
private:


public:


};
