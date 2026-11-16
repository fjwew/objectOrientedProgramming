//#include <iostream>
//using namespace std;
//
//class Student
//{
//protected:
//    string name;
//    int age;
//    string spetialization;
//    int* marks;
//    int countMark;
//    
//public:
//    Student() : name("none"), age(0), spetialization("none"), marks(nullptr), countMark(0) {}
//    Student(string n, int a, string s) : name(n), age(a), spetialization(s)
//    {
//        countMark = rand() % 15 + 1;
//        marks = new int[countMark];
//        for (int i = 0; i < countMark; i++)
//        {
//            marks[i] = rand() % 12 + 1;
//        }
//    }
//
//    ~Student()
//    {
//        if (marks != nullptr)
//            delete[]marks;
//    }
//
//    void print() const
//    {
//        cout << name << ", " << age << endl;
//        cout << "marks - ";
//        for (int i = 0; i < countMark; i++)
//        {
//            cout << marks[i] << " ";
//        }
//        cout << endl;
//    }
//
//};
//
//class Aspirant : public  Student
//{
//private:
//    string* subject;
//    int countSubjects;
//
//public:
//    Aspirant() : subject(nullptr), countSubjects(0), Student() {}
//    Aspirant(string n, int a, string sT, initializer_list<string> list) : Student(n, a, sT)
//    {
//        this->countSubjects = list.size();
//        subject = new string[countSubjects];
//
//        int i = 0;
//        for (string sub : list)
//        {
//            subject[i] = sub;
//            i++;
//        }
//    }
//
//    ~Aspirant()
//    {
//        if (subject != nullptr)
//            delete subject;
//    }
//
//    void print() const
//    {
//        Student::print();
//        cout << "subjects - ";
//        for (int i = 0; i < countSubjects; i++)
//        {
//            cout << subject[i] << " ";
//        }cout << endl;
//    }
//
//    void print() const
//    {
//        Student::print();
//        cout << "spetialization - " << spetialization << endl;
//    }
//
//};
//
//int main()
//{
//    srand(time(0));
//    Student student("andrew", 14, "programmer");
//    student.print();
//    cout << endl;
//
//    Aspirant aspirant("andrew", 21, "programmer", "it");
//    aspirant.print();
//    cout << endl;
//
//
//
//}