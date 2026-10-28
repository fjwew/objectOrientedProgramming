#pragma once
#include "Point.h";

class Vector
{
private:
	Point* points;
	int countPoint;
public:
	Vector();

	void print() const
	{
		for (int i = 0; i < countPoint; i++)
		{
			points[i].print();
		}
	}
};

