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
		cout << "wheel diameter - " << diameter << " cm" << endl;
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

	bool isOpened()
	{
		return isOpen;
	}

	void setState(bool state)
	{
		isOpen = state;
	}

};

class GearBox
{
private:
	int countGear;
	int current;

public:
	GearBox() : countGear(0), current(0) {}
	GearBox(int countGear) : countGear(countGear), current(0) {}

	void print() const
	{
		cout << "number of transmissions - " << countGear << ", current - " << current << endl;
	}

	int getCountGear() const
	{
		return countGear;
	}

	void setCurrent(int value)
	{
		current = value;
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

	bool getOnState() const
	{
		return isOn;
	}

	void setState(bool value)
	{
		isOn = value;
	}

};



enum Experience
{
	none, low, middle, high
};

class Driver
{
	string name;
	string surname;
	int age;
	Experience experience;

public:
	Driver() : name("none"), surname("none"), age(0), experience(none) {}
	Driver(string name, string surname, int age, Experience experience) : name(name), surname(surname), age(age), experience(experience) {}
	
	void print() const
	{
		cout << name << " " << surname << endl;
		cout << "age - " << age << endl;
		cout << "experience - " << experience << endl;
	}

	string getName() const
	{
		return name;
	}
};


class Car
{
	string model;
	float speed;
	Engine engine;
	Body body;
	Wheel wheels;
	Door doors;
	GearBox gearbox;
	Light lights;
	Driver* driver;

public:
	Car() : model("none"), speed(0), engine(), body(), wheels(), doors(), gearbox(), lights() {}
	Car(string model, float speed, float power, string bMaterial, string bColor, float wDiameter, int cGear, string lColor, Driver* driver) : model(model), speed(speed), engine(power), body(bMaterial, bColor), wheels(wDiameter), doors(bMaterial, bColor, false), gearbox(cGear), lights(lColor, false), driver(driver) {}

	void print() const
	{
		cout << model << " car" << endl;
		cout << "speed - " << speed << endl;
		body.print();
		wheels.print();
		gearbox.print();
		engine.print();
		lights.print();
	}

	void addDriver(Driver& driver)
	{
		if (this->driver == nullptr)
		{
			this->driver = &driver;
			cout << "added driver " << driver.getName() << endl;
		}
		else
			cout << "this car already has its own driver! it's " << this->driver->getName() << endl;
		
	}

	void printDriver() const
	{
		driver->print();
	}

	void drive()
	{
		if (!doors.isOpened())
			cout << "driving..." << endl;
		else
			cout << "doors must be closed to drive!" << endl;
	}

	void interactDoors(bool state)
	{
		if (state == false && doors.isOpened() == false)
			cout << "doors are already closed!" << endl;
		else if (state == true && doors.isOpened() == true)
			cout << "doors are already opened!" << endl;
		else
		{
			doors.setState(state);
			state ? cout << "doors are opened!\n" : cout << "doors are closed\n";
		}
	}

	void interactTransmission(int state)
	{
		if (state <= gearbox.getCountGear() && state > 0)
		{
			gearbox.setCurrent(state);
			cout << "set " << state << " transmission" << endl;
		}
		else
			cout << "no " << state << " transmission" << endl;

	}

	void interactLights(bool state)
	{
		if (!lights.getOnState() && state == false)
			cout << "lights are already off!" << endl;
		else if (lights.getOnState() == true && state == true)
			cout << "lights are already on!" << endl;
		else
		{
			lights.setState(state);
			state ? cout << "lights are on!\n" : cout << "lights are off!\n";
		}
	}
};
