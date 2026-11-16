#include "Aspirant.h";

int main()
{
	cout << "student--------------------------------------------" << endl;
	Person s("Andrew", "Manzuk", "Serhiyovich", 14, 2, "programming", 54.7);

	s.print();
	s.averageMarkC(12);
	s.print();
	s.averageMarkC(18);
	s.print();

	cout << "aspirant-------------------------------------------" << endl;

	Aspirant a("Project-Based Learning (PBL) in High School Programming: Bridging the Gap Between Academic Knowledge and Software Engineering Practices", 57, "Andrew", "Manzuk", "Serhiyovich", 14, 2, "programming", 54.7);

	a.print();
	a.averageMarkC(24);
	for (int i = 0; i < 17; i++)
	{
		a.writeDissertation();
		cout << endl;
	}
	cout << endl;
	a.print();
}