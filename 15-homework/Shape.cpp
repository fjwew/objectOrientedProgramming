#include "Shape.h"

void Shape::print() const
{
	cout << name << endl;
}

void Rectangle::print() const
{
	Shape::print();
	cout << "length - " << length << "; height - " << height << endl;
}

inline void Circle::print() const
{
	Shape::print();
	cout << "radius - " << radius << endl;
}

inline float Circle::getArea() const
{
	return 3.14 * (radius * radius);
}

inline void Triangle::print() const
{
	Shape::print();
	cout << "AB - " << ab << "; BC - " << bc << "; CD - " << cd << endl;
}

inline float Triangle::getArea() const
{
	if (ab>cd && ab>bc)
	{
		return 1 / 2 * ab;
	}
	else if (cd>ab && cd>bc)
	{
		return 1 / 2 * ab;
	}
	else if (bc>ab && bc>cd)
	{
		return 1 / 2 * ab;
	}
	else if (ab == bc == cd)
	{
		return 1 / 2 * ab;
	}
}

float Rectangle::getArea() const
{
	return length * height;
}
