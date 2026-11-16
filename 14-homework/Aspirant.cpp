#include "Aspirant.h"

void Aspirant::print() const
{
	Person::print();

	cout << "dissertation theme - " << dissertationTheme << endl;
	cout << "pages - " << pages << endl << endl;
}

void Aspirant::writeDissertation()
{
	cout << "writing dicertation...";
	pages++;
}

void Aspirant::protectDissertation()
{
	cout << "i am protecting dissertation!!!!!!!!!!! ne mishayte nishiye!!!!!" << endl << endl;
}
