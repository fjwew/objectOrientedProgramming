#include "book.h"

Book::Book()
{
	title = "none";
	author = "none";
	genre = none;
	year = 2000;
	pages = 0;
}

void Book::showInfo() const
{
	cout << "title - " << title << endl;
	cout << "author - " << author << endl;
	cout << "genre - ";
	switch (genre)
	{
	case none:cout << "none" << endl; break;
	case fantasy:cout << "fantasy" << endl; break;
	case roman:cout << "roman" << endl; break;
	case drama:cout << "drama" << endl; break;
	case history:cout << "history" << endl; break;
	case comedy:cout << "comedy" << endl; break;
	case horror:cout << "horror" << endl; break;
	case education:cout << "education" << endl; break;
	}
	cout << "year - " << year << endl;
	cout << "pages - " << pages << endl;
}
