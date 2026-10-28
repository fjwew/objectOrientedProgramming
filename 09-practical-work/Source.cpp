#include "Point.h";

int main()
{
	Point p1(12, 54);
	Point p2(11, 39);
	p1.print();
	p2.print();
	
	if (p1 > p2)
		cout << "ctor + tab" << endl;
	else
		cout << "ctor - tab" << endl;
	
	!p1;
	p1.print();

}