#pragma once
#include <iostream>
using namespace std;

class Employer
{
protected:
	string name;
	int age;
	string currentProject;

public:
	Employer() : name("none"), age(0), currentProject("none") {}
	Employer(string n, int a, string cP) : name(n), currentProject(cP) 
	{
		age = (a > 0) ? a : 0;
	}

	virtual void print() const = 0;
};

class Worker : public Employer
{
public:
	Worker() : Employer() {}
	Worker(string n, int a, string cP) : Employer(n, a, cP) {}

	void print() const;
};

class Manager : public Employer
{
public:
	Manager() : Employer() {}
	Manager(string n, int a, string cP) : Employer(n, a, cP) {}

	void print() const;
};

class President : public Employer
{
public:
	President() : Employer() {}
	President(string n, int a, string cP) : Employer(n, a, cP) {}

	void print() const;
};