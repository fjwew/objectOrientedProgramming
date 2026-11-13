#include "Employers.h"

void Worker::print() const
{
	cout << name << endl;
	cout << "post - employer" << endl;
	cout << "age - " << age << endl;
	cout << "current project - " << currentProject << endl;
}

void President::print() const
{
	cout << name << endl;
	cout << "post - president" << endl;
	cout << "age - " << age << endl;
	cout << "current project - " << currentProject << endl;
}

void Manager::print() const
{
	cout << name << endl;
	cout << "post - manager" << endl;
	cout << "age - " << age << endl;
	cout << "current project - " << currentProject << endl;
}
