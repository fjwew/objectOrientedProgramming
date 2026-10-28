#pragma once
#include <iostream>
using namespace std;

enum Genre{ none, fantasy, roman, drama, history, comedy, horror, education };

class Book
{
private:
	string title;
	string author;
	Genre genre;
	int year;
	int pages;
public:
	Book();
	Book(string t, string a, Genre g, int y, int p) : title(t), author(a), genre(g), year(y), pages(p){}

	void showInfo() const;
};

