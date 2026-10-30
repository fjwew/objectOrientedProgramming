#include "Student.h"
#include "Dot.h"

int main()
{
	// 1
	Student s;
	s.print();
	cout << s.getSurname() << endl;
	s.setName("oleksiy");
	s.setSurname("mateyuk");
	s.print();
	cout << s.getSurname() << endl;

	// 2
	Dot d;
	d.print();
	d.setX(34);
	d.setY(0);
	d.setZ(12);
	d.print();
	d.saveToFile();
	d.readFromFile();
}
