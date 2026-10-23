#include <iostream>
using namespace std;

//void Clear() { system("cls"); }
//
//class Book {
//    string author;
//    string name;
//    string publish;
//    int year;
//    int pages;
//public:
//    Book() {
//        this->author = "No author";
//        this->name = "No name";
//        this->publish = "No publisher";
//        this->year = 0;
//        this->pages = 0;
//    }
//    Book(string author, string name, string publish, int year, int pages) {
//        this->author = author;
//        this->name = name;
//        this->publish = publish;
//        this->year = year;
//        this->pages = pages;
//    }
//    Book(const Book& other) {
//        this->author = other.author;
//        this->name = other.name;
//        this->publish = other.publish;
//        this->year = other.year;
//        this->pages = other.pages;
//    }
//    explicit Book(int year) {
//        this->author = "No author";
//        this->name = "No name";
//        this->publish = "No publisher";
//        this->year = year;
//        this->pages = 0;
//    }
//    void Print()const {
//        cout << "Author: " << author << '\n';
//        cout << "Name: " << name << '\n';
//        cout << "Publish: " << publish << '\n';
//        cout << "Year: " << year << '\n';
//        cout << "Pages: " << pages << '\n';
//    }
//    string getAuthor()const {
//        return author;
//    }
//    string getPublis()const {
//        return publish;
//    }
//    int getYear()const {
//        return year;
//    }
//};
//class Library {
//    Book* books;
//    int countBooks;
//public:
//    Library() {
//        books = nullptr;
//        countBooks = 0;
//    }
//    ~Library() {
//        if (countBooks != 0) delete[] books;
//    }
//    void PrintAll() {
//        for (int i = 0; i < countBooks; i++) {
//            books[i].Print();
//            cout << '\n';
//        }
//    }
//    void PrintAuthor(string author)const {
//        for (int i = 0; i < countBooks; i++)
//            if (books[i].getAuthor() == author) books[i].Print();
//    }
//    void PrintPublish(string publish)const {
//        for (int i = 0; i < countBooks; i++)
//            if (books[i].getPublis() == publish) books[i].Print();
//    }
//    void PrintYear(int year)const {
//        for (int i = 0; i < countBooks; i++)
//            if (books[i].getYear() > year) books[i].Print();
//    }
//    void addBook(Book& book) {
//        Book* temp = new Book[countBooks + 1];
//        for (int i = 0; i < countBooks; i++) {
//            temp[i] = books[i];
//        }
//        temp[countBooks] = book;
//        delete[] books;
//        books = temp;
//        countBooks++;
//    }
//};

#pragma region practicalWork

#pragma region classArray
class Array
{
private:
    int size;
    long* arr;
public:
    // constructors
    Array()
    {
        arr = nullptr;
        size = 0;
    }
    Array(int size)
    {
        this->size = size;
        arr = new long[size]();
    }

    // destructors
    ~Array()
    {
        delete[]arr;
    }

    // methods
    // fill
    void fillRandom()
    {
        for (int i = 0; i < size; i++)
        {
            arr[i] = rand() % 50;
        }
    }

    void fillKeyboard()
    {
        int number;
        for (int i = 0; i < size; i++)
        {
            cout << "enter number -> "; cin >> number;
            arr[i] = number;
            cout << arr[i] << endl;
        }
    }

    // add elements
    void addElements(int size, int choice) // choice: 1 - random fill, 2 - manual fill
    {
        long* temp = new long[this->size + size];
        if (choice == 1)
        {
            for (int i = 0; i < this->size; i++)
            {
                temp[i] = arr[i];
            }
            for (int i = this->size; i < this->size + size; i++)
            {
                temp[i] = rand() % 20;
            }
        }
        if (choice == 2)
        {
            int number;
            for (int i = 0; i < this->size; i++)
            {
                temp[i] = arr[i];
            }
            for (int i = this->size; i < size; i++)
            {
                cout << "enter number -> "; cin >> number;
                temp[i] = number;
            }
        }
        this->size += size;
        delete[]arr;
        arr = temp;
    }

    // print array
    void printArray()
    {
        cout << "array:" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // remove element
    void removeBIndex(int index)
    {
        if (index > size || index < 0)
        {
            cout << "no index" << endl;
            return;
        }
        long* temp{ new long[size - 1] };
        for (int i = 0; i < index; i++)
        {
            temp[i] = arr[i];
        }
        for (int i = index; i < size; i++)
        {
            temp[i] = arr[i + 1];
        }

        this->size--;
        delete[]arr;
        arr = temp;

    }

    

    #pragma region Operators
    long operator[](int index)
    {
        return this->arr[index];
    }

    void operator()(long number)
    {
        for (int i = 0; i < size; i++)
        {
            arr[i] += number;
        }
    }
    #pragma endregion
};
#pragma endregion

#pragma endregion

int main()
{
    Array arr(50);
    arr.fillRandom();
    arr.printArray();
    cout << endl;

    cout << arr[2];
    cout << endl;

    cout << endl;
    arr(50);
    arr.printArray();
}

