#pragma once
#include "Student.h";

class Aspirant : public Person
{
private:
	string dissertationTheme;
	int pages;
public:
	Aspirant() : dissertationTheme("none"), pages(0), Person() {}
	Aspirant(string dT, int p, string n, string sN, string lN, int a, int c, string s, float aM) : dissertationTheme(dT), pages(p), Person(n, sN, lN, a, c, s, aM) {}

	void print() const;

	void writeDissertation();

	void protectDissertation();
};