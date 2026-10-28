#pragma once
#include <iostream>;
using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	Point();
	Point(int x, int y);

	Point operator ++();
	inline bool operator >(const Point& other)
	{
		return ((x + y) > (other.x + other.y));
	}
	inline bool operator <(const Point& other)
	{
		return ((x + y) < (other.x + other.y));
	}
	Point operator !();

	void print() const;
};

