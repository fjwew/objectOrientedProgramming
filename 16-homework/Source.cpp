#include "Employers.h";
#include "Cars.h";

int main()
{
	Worker w("Andrew", 23, "Pl");
	Manager m("Viktoria", 29, "Pl");
	President p("Sasha", 27, "lK");

	w.print();
	cout << endl;
	m.print();
	cout << endl;
	p.print();
	cout << endl;

	Car c(9.99, 70, 5.3);
	Bike b(4.99, 40, 5.3);
	Cart ct(2.99, 10, 5.3);

	c.print();
	cout << endl;
	b.print();
	cout << endl;
	ct.print();
	cout << endl;

	cout << "time of car journey - " << c.countTime() << endl;
	cout << "time of bike journey - " << b.countTime() << endl;
	cout << "time of car journey - " << ct.countTime() << endl;
}