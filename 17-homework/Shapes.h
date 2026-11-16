#pragma once
#include <iostream>
#include <windows.h>

using namespace std;



struct Point
{
	int x;
	int y;

	Point() : x(0), y(0) {}
	Point(int x, int y) : x(x), y(y) {}
};

enum class shapes
{
	line,
	rectangle,
	polyline
};

class Shape
{
protected:
	void gotoxy(int x, int y)
	{
		COORD coordinate;
		coordinate.X = x;
		coordinate.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
	}
	string type;

public:
	Shape() : type("none") {}
	Shape(string type) : type(type) {}

	virtual void print()  = 0;
};

class line : public Shape
{
private:
	Point start;
	Point end;

public:
	line() : start(), end(), Shape() {}
	line(Point start, Point end, string type) : start(start), end(end), Shape(type) {}

	void print() override
	{
		cout << type << endl;

		gotoxy(start.x, start.y); cout << "*";
		gotoxy(end.x, end.y); cout << "*";
	}

};

class rectangle : public Shape
{
private:
	Point start;
	int length;
	int height;

public:
	rectangle() : start(), length(0), height(0), Shape() {}
	rectangle(Point start, int length, int height, string type) : start(start), length(length), height(height), Shape(type) {}

	void print() override
	{
		for (int i = 0; i < height; i++)
		{
			gotoxy(start.x, start.y+i);
			for (int i = 0; i < length; i++)
			{
				cout << "*";
			}
			cout << endl;
		}


	}
};