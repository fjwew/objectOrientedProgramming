#pragma once
#include "book.h";

#pragma once
class Library
{
private:
	string name;
	string adress;
	Book* books;
	int countBooks;
public:
	Library();
	Library(string name, string adress);
	Library(const Library & other);
	Library& operator =(const Library& other);
	Library(Library&& other)
	{
		this->name = other.name;
		this->adress = other.adress;
		this->countBooks = other.countBooks;
		this->books = other.books;
		other.books = nullptr;
		cout << "move constructor" << endl;
	}


	void showLibrary() const;
	void addBook(Book b);

	~Library();
};