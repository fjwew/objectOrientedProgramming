#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    Person() : name("none") {}
    Person(string n) : name(n) {}

    virtual ~Person() = 0 {}

    void print() const
    {
        cout << name << endl;
    }

};

class Aspirant : public  Person
{
private:
    string* subject;
    int countSubjects;

public:
    Aspirant() : subject(nullptr), countSubjects(0), Person() {}
    Aspirant(string n, initializer_list<string> list) : Person(n)
    {
        this->countSubjects = list.size();
        subject = new string[countSubjects];

        int i = 0;
        for (string sub : list)
        {
            subject[i] = sub;
            i++;
        }
    }

    ~Aspirant()
    {
        if (subject != nullptr)
            delete subject;
    }

    void print() const
    {
        Person::print();
        cout << "subjects - ";
        for (int i = 0; i < countSubjects; i++)
        {
            cout << subject[i] << " ";
        }cout << endl;
    }

    void print() const
    {
        Person::print();
        cout << "spetialization - " << spetialization << endl;
    }

};

int main()
{
    srand(time(0));
    Person student("andrew", 14, "programmer");
    student.print();
    cout << endl;



}