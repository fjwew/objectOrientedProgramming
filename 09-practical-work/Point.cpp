#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

Point Point::operator++()
{
	x++;
	y++;
	return*this;
}

Point Point::operator!()
{
	x = -x;
	y = -y;
	return *this;
}

void Point::print() const
{
	cout << "x - " << x << endl;
	cout << "y - " << y << endl << endl;
}
