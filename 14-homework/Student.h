#pragma once
#include <iostream>
using namespace std;

class Person
{
protected:
	string name;
	string surname;
	string lastname;
	int age;
	int course;
	string speciality;
	float averageMark;

public:
	Person() : name("none"), surname("nonik"), lastname("nonovichivna"), age(0), course(0), speciality("none"), averageMark(0) {}
	Person(string n, string sN, string lN, int a, int c, string s, float aM) : name(n), surname(sN), lastname(lN), age(a), course(c), speciality(s), averageMark(aM) {}

	void print() const;

	void averageMarkC(int mark);
};

