#pragma once
#include <iostream>
using namespace std;

class Airplane
{
	string model;
	int type;
	int countPassengers;
	int maxcPassengers;

public:

	Airplane() : model("none"), type(0), countPassengers(0), maxcPassengers(0) {}
	Airplane(string model, int type, int countPassengers, int maxcPassengers) : model(model), type(type), countPassengers(countPassengers), maxcPassengers(maxcPassengers) {}
	
	void print()
	{
		cout << "airplane " << model << endl;
		cout << "type - " << type << endl;
		cout << "count of passengers - " << countPassengers << endl;
		cout << "max count of passengers - " << maxcPassengers << endl;
	}

	friend bool operator== (const Airplane air, const int other)
	{
		return air.type == other;
	}

	Airplane& operator ++()
	{
		if (countPassengers < maxcPassengers)
			++countPassengers;
		return *this;
	}

	Airplane& operator --()
	{
		if (countPassengers > 0)
			--countPassengers;
		return *this;
	}

	friend bool operator >(const Airplane& air, const Airplane& other);

	Airplane& operator()(int count)
	{		
		if (count >= maxcPassengers)
			cout << "couldn't add " << count << " passengers" << endl;
		else
		{
			countPassengers += count;
			return *this;
		}
	}

};


bool operator >(const Airplane& air, const Airplane& other)
{
	return air.maxcPassengers > other.maxcPassengers;
}