#include <iostream>
#include <Windows.h>
using namespace std;

//struct Date
//{
//    int day;
//    int month;
//    int year;
//
//    void printDate()
//    {
//        cout << "birthday - " << day << "." << month << "." << year;
//    }
//};
//
//class Student
//{
//private:
//    string name;
//    string surname;
//    string lastname;
//    Date date;
//    string phone;
//    int* marks;
//    int countMarks;
//    int averageMark;
//    double averageMark()
//    {
//        double summa = 0;
//        for (int i = 0; i < countMarks; i++)
//        {
//            summa += marks[i];
//        }
//        averageMark = summa / countMarks;
//    }
//
//
//public:
//   // constructors ctor + tab
//    Student() // methods
//    {
//        // default constructor
//        cout << "here is default constructor(a de ctor?)" << endl;
//        name = "no name";
//        surname = "no surname";
//        lastname = "no last name";
//        date = { 1, 1, 1970 };
//        phone = "no phone";
//        marks = nullptr;
//        countMarks = 0;
//        averageMark = 0;
//    }
//    Student(string name, string surname, string lastname)
//    {
//        // parametrized constructor
//        cout << "here is parametrized constructor" << endl; 
//        this->name = name;
//        this->surname = surname;
//        this->lastname = lastname;
//        this->date = { 1, 1, 1970 };
//        this->phone = "no phone";
//        this->marks = nullptr;
//        this->countMarks = 0;
//        this->averageMark = 0;
//    }
//    
//    // destructors
//    ~Student()
//    {
//        // destructor
//        cout << "here is destructor!";
//        if (marks != nullptr)
//            delete[]marks;
//    }
//
//    // getter
//    string getName()
//    {
//        return name;
//    }
//    string getSurname()
//    {
//        return surname;
//    }
//    string getLastname()
//    {
//        return lastname;
//    }
//
//
//
//    void showStudent()
//    {
//        cout << "name - " << getName() << endl;
//        cout << "surname - " << getSurname() << endl;
//        cout << "lastname - " << getLastname() << endl;
//        date.printDate();
//        cout << endl << "phone - " << phone << endl;
//        cout << "marks - ";
//        for (int i = 0; i < countMarks; i++)
//        {
//            cout << marks[i] << " ";
//        }
//        cout << "average mark - " << averageMark << endl;
//    }
//    void setName(string name){this->name = name;}
//    void lastName(string surname){this->surname = surname;}
//
//    void newMark(int mark)
//    {
//        int* temp = new int[countMarks + 1];
//        for (int i = 0; i < countMarks; i++)
//        {
//            temp[i] = marks[i];
//        }
//        temp[countMarks] = mark;
//        if (marks != nullptr)
//            delete[]marks;
//        marks = temp;
//        countMarks++;
//    }
//
//    void initialization()
//    {
//        name = "no name";
//        surname = "no surname";
//        lastname = "no last name";
//        date = { 1, 1, 1970 };
//        phone = "no phone";
//        marks = nullptr;
//        countMarks = 0;
//        averageMark = 0;
//    }
//
//
//};

void setCurPos(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// PRACTICAL WORK

struct coordinateS
{
    int x;
    int y;
};

class Rectanglee
{
private:
    int x;
    int y;
    char symbol;
    coordinateS coordinates;

public:

    // constructors
    Rectanglee()
    {
        this->x = 15;
        this->y = 5;
        this->symbol = '*';
        this->coordinates = { 0, 0 };
    }
    Rectanglee(int x, int y, char symbol, coordinateS coordinates)
    {
        this->x = x;
        this->y = y;
        this->symbol = symbol;
        this->coordinates = coordinates;
    }

    // destructor

    void printRectangle()
    {
        setCurPos(coordinates.x, coordinates.y);
        for (int i = 0; i < y; i++)
        {
            for (int i = 0; i < x; i++)
            {
                cout << symbol << " ";
            }
            cout << endl;
            setCurPos(coordinates.x, coordinates.y + i);
        }
    }

    void changeRectangle(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void moveRectangle(int x, int y)
    {
        coordinates.x = x;
        coordinates.y = y;
    }

    //void setRectangle()
    //{
    //    int x;
    //    int y;
    //    char symbol;
    //    coordinateS coordinates;

    //    cout << "enter width -> "; cin >> x; cout << endl;
    //    cout << "enter height -> "; cin >> y; cout << endl;
    //    cout << "enter symbol -> "; cin >> symbol; cout << endl;
    //    cout << "enter" << "x" << "coordinate"; cin >> coordinates

    //}
};








int main()
{
    srand(time(0));

    // PRACTICAL WORK
    Rectanglee rec(10, 15, '@', { 5,5 });
    
    int counterRectangle = 0;

    do
    {
        rec.printRectangle();
        Sleep(500);
        system("cls");
        rec.moveRectangle(rand() % 40, rand() % 20);
        rec.changeRectangle(rand() % 40, rand() % 20);
        rec.printRectangle();
        counterRectangle++;
    } while (counterRectangle != 500);
    

    /*Student student;
    student.initialization();
    student.showStudent();

    Student student2("Mikola", "Mateyuk", "Myhailovich");*/
}


