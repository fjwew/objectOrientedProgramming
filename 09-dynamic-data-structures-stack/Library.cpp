#include "Library.h"

Library::Library()
{
	name = "none";
	adress = "none";
	books = nullptr;
	countBooks = 0;
}

Library::Library(string name, string adress)
{
	this->name = name;
	this->adress = adress;;
	books = nullptr;
	countBooks = 0;
}

Library::Library(const Library& other)
{
	this->name = other.name;
	this->adress = other.adress;
	this->countBooks = other.countBooks;
	this->books = new Book[countBooks];
	for (int i = 0; i < countBooks; i++)
	{
		this->books[i] = other.books[i];
	}
}

Library& Library::operator=(const Library& other)
{
	this->name = other.name;
	this->adress = other.adress;
	this->countBooks = other.countBooks;
	this->books = new Book[countBooks];
	for (int i = 0; i < countBooks; i++)
	{
		this->books[i] = other.books[i];
	}
	cout << "operator = " << endl;
	return *this;
}

void Library::showLibrary() const
{
	cout << "name - " << name << endl;
	cout << "adress - " << adress << endl;
	cout << "books - " << endl;
	for (int i = 0; i < countBooks; i++)
	{
		books[i].showInfo();
	}
	cout << "count of books - " << countBooks << endl;
}

void Library::addBook(Book b)
{
	Book* temp = new Book[countBooks+1];
	for (int i = 0; i < countBooks; i++)
	{
		temp[i] = books[i];
	}
	temp[countBooks] = b;
	if (books != nullptr)
		delete[]books;
	countBooks++;
	books = temp;
}

Library::~Library()
{
	if (books != nullptr)
	{
		delete[]books;
	}
}
