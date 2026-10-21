#include <iostream>
using namespace std;

//class Date {
//public:
//    const int day;
//    const int month;
//    const int year;
//    int getDate()
//    {
//        return day;
//    }
//    void print() const
//    {
//        cout << "day - " << day << " month - " << month << " year - " << year;
//    }
//};
//
//class Account
//{
//private:
//    double suma;
//    const double rate;
//public:
//    // constructors
//    Account(double suma, double rate) : rate(rate)
//    {
//        this->suma = suma;
//    }
//
//    //methods
//    double getRate() const
//    {
//        return rate;
//    }
//
//    double getIncome() const
//    {
//        return suma * rate / 100;
//    }
//    double getSuma() const {
//        return suma;
//    }
//    double setSuma() {
//        suma += getIncome();
//        return suma;
//    }
//};

// PRACTICAL WORK
class Book
{
private:
    string name;
    string author;
    string publisher;
    int year;
    int pages;
public:
    // constructors
    Book() : name(""), author(""), publisher(""), year(0), pages(0)
    {
        
    }
    Book(string name, string author, string publisher, int year, int pages) : name(name), author(author), publisher(publisher), year(year), pages(pages)
    {

    }

    // methods
    void print() const
    {
        cout << "name - " << name << endl;
        cout << "author - " << author << endl;
        cout << "publisher - " << publisher << endl;
        cout << "year - " << year << endl;
        cout << "pages - " << pages << endl << endl;
    }


};

class Library
{
private:
    int size = 0;
    Book *books;
public:
    void addBook(Book book)
    {
        Book* temp = new Book[this->size + 1];
        for (int i = 0; i < this->size; i++)
        {
             temp[i] = books[i];
        }
        temp[size] = book;
        this->size += 1;
        delete[]books;
        books = temp;
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            books[i].print();
        }
    }
};

int main()
{
    // PRACTICAL WORK

    Book book{"Placeholder", "Lorem", "Lorem ipsum", 2012, 208};
    book.print();

    Library l;
    l.addBook(Book("Placeholder", "Lorem", "Lorem ipsum", 2012, 208));
    l.addBook(Book("Placeholder", "Lorem", "Lorem ipsum", 2012, 208));
    l.addBook(Book("Placeholder", "L1orem", "Lorem ipsum", 2012, 208));
    l.print();


    //int a = 3.14; // implicit double -> int
    //cout << a << endl; // a = 3

    //double b(10); // implicit int -> double
    //cout << b << endl; // b = 

    ///*const Date day{24, 8, 2026};
    //day.print();*/
    //
    //Account account1(2000, 5);
    //const Account account2(5000, 8);

    //cout << account1.getRate() << endl;
    //cout << account2.getRate() << endl;

    //cout << account1.getSuma() << endl;
    //cout << account2.getSuma() << endl;

    //cout << account1.getIncome() << endl;
    //cout << account2.getIncome() << endl;

    //cout << account1.setSuma() << endl;
    ////cout << account2.setSuma() << endl;

}
