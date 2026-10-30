#pragma once
#include "Student.h";
#include <fstream>

class Dot
{
private:
	int x;
	int y;
	int z;
public:
	Dot();
	Dot(int x, int y, int z);

	void setX(int x);
	void setY(int y);
	void setZ(int z);

	int getX() const;
	int getY() const;
	int getZ() const;

	void saveToFile();
	void readFromFile() const;

	void print() const;
};

