#include "Student.h"

Student::Student()
{
	name = "none";
	surname = "none";
	lastname = "none";

	date = 1;
	month = 1;
	year = 1970;

	number = "380000000000";

	city = "none";
	country = "none";

	gNumber = 0;
}

Student::Student(string n, string sn, string ln, int d, int m, int y, string nm, string cty, string ct, int gn)
{

}



void Student::setName(string name)
{
	this->name = name;
}

void Student::setSurname(string surname)
{
	this->surname = surname;
}

void Student::setLastname(string lastname)
{
	this->lastname = lastname;
}

void Student::setDate(int date)
{
	this->date = date;
}

void Student::setMonth(int month)
{
	this->month = month;
}

void Student::setYear(int year)
{
	this->year = year;
}

void Student::setNumber(string number)
{
	this->number = number;
}

void Student::setCity(string city)
{
	this->city = city;
}

void Student::setCountry(string country)
{
	this->country = country;
}

void Student::setGNumber(int gNumber)
{
	this->gNumber = gNumber;
}



string Student::getName() const
{
	return name;
}

string Student::getSurname() const
{
	return surname;
}

string Student::getLastname() const
{
	return lastname;
}

int Student::getDate() const
{
	return date;
}

int Student::getMonth() const
{
	return month;
}

int Student::getYear() const
{
	return year;
}

string Student::getNumber() const
{
	return number;
}

string Student::getCity() const
{
	return city;
}

string Student::getCountry() const
{
	return country;
}

int Student::getGNumber() const
{
	return gNumber;
}



void Student::print() const
{
	cout << "name: " << name << endl;
	cout << "surname: " << surname << endl;
	cout << "lastname: " << lastname << endl;
	cout << "birthday: " << date << "." << month << "." << year << endl;
	cout << "phone number: " << number << endl;
	cout << "city: " << city << endl;
	cout << "country: " << country << endl;
	cout << "group: " << gNumber << endl << endl;
}
