#include "Dot.h"

Dot::Dot()
{
	x = 0;
	y = 0;
	z = 0;
}

Dot::Dot(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Dot::setX(int x)
{
	this->x = x;
}

void Dot::setY(int y)
{
	this->y = y;
}

void Dot::setZ(int z)
{
	this->z = z;
}

int Dot::getX() const
{
	return x;
}

int Dot::getY() const
{
	return y;
}

int Dot::getZ() const
{
	return z;
}

inline void Dot::saveToFile()
{
	ofstream out("coordinates.txt", ios_base::app);

	if (out.is_open())
	{
		out << "x - " << x << endl;
		out << "y - " << y << endl;
		out << "z - " << z << endl;
		out.close();
	}
	else
		cout << "could not open the file!!";
}

inline void Dot::readFromFile() const
{
	ifstream in("coordinates.txt", ios_base::in);

	if (in.is_open())
	{
		char buffer[200];
		while (!in.eof())
		{
			in.getline(buffer, 200);
			cout << buffer << endl;
		}
		in.close();
	}
	else
		cout << "could not open the file!!";
}

inline void Dot::print() const
{
	cout << "x - " << x << endl;
	cout << "y - " << y << endl;
	cout << "z - " << z << endl << endl;
}
