#include "Student.h"

void Student::print() const
{
	cout << name << " " << surname << " " << lastname << endl;
	cout << "age - " << age << endl;
	cout << "speciality - " << speciality << endl;
	cout << "course - " << course << endl;
	cout << "average mark - " << averageMark << endl << endl;
}

void Student::averageMarkC(int mark)
{
	averageMark = (averageMark + mark) / 2;
}
