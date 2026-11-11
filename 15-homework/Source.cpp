#include "Shape.h";

int main()
{
	Rectangle r("pryamokutnik", 43.3, 54.6);

	r.print();
	cout << endl;
	cout << "S = " << r.getArea();

}