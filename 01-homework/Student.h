#pragma once
#include <iostream>
using namespace std;

class Student
{
private:
	string name;
	string surname;
	string lastname;

	int date;
	int month;
	int year;

	string number;

	string city;
	string country;

	int gNumber;
public:
	Student();
	Student(string n, string sn, string ln, int d, int m, int y, string nm, string cty, string ct, int gn);

	void setName(string name);
	void setSurname(string surname);
	void setLastname(string lastname);
	void setDate(int date);
	void setMonth(int month);
	void setYear(int year);
	void setNumber(string number);
	void setCity(string city);
	void setCountry(string country);
	void setGNumber(int gNumber);
	
	string getName() const;
	string getSurname() const;
	string getLastname() const;
	int getDate() const;
	int getMonth() const;
	int getYear() const;
	string getNumber() const;
	string getCity() const;
	string getCountry() const;
	int getGNumber() const;

	void print() const;
};