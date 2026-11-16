#include "Shapes.h"





int main()
{
	line l({4, 6}, {6, 7}, "line");
	l.print();

	rectangle r({7, 8}, 12, 43, "rectangle");
	r.print();
}