#pragma once
#include <iostream>
using namespace std;

class Shape
{
protected:
	string name;

public:
	Shape() : name("none") {}
	Shape(string n) : name(n) {}

	void print() const;

};

class Rectangle : public Shape
{
private:
	float length;
	float height;

public:
	Rectangle() : length(0), height(0), Shape() {}
	Rectangle(string n, float l, float h) : length(l), height(h), Shape(n) {}
	
	void print() const;
	float getArea() const;

};

class Circle : public Shape
{
private:
	float radius;

public:
	Circle() : radius(0), Shape() {}
	Circle(string n, float r) : radius(r), Shape(n) {}
	
	void print() const;
	float getArea() const;

};

class Triangle : public Shape
{
private:
	float ab;
	float bc;
	float cd;

public:
	Triangle() : ab(0), bc(0), cd(0), Shape() {}
	Triangle(string n, float a, float b, float c) : ab(a), bc(b), cd(c), Shape(n) {}
	
	void print() const;
	float getArea() const;
};

