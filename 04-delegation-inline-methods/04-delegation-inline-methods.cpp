#include <iostream>
using namespace std;

#define pi 3.14;

inline void hello()
{
    cout << "hello world" << endl;
}

class Human
{
private:
    string name;
    int age;
    float weight;
public:
    static int countHumans;
    // initialization list
    Human() : name("no name"), age(0), weight(0) {}
    /*Human() : name{ "no name" }, age{ 0 }, weight{ 0 }
    {

    }*/

    Human()
    {
        name = "noname?";
        age = 0;
        weight = 0;
    }
    Human(string name)
    {
        this->name = name;
        age = 0;
        weight = 0;
    }
    Human(int age)
    {
        name = "noname?";
        this->age = age;
        weight = 0;
    }
    Human(float weight)
    {
        name = "noname?";
        age = 0;
        this->weight = weight;
    }
    Human(string name, int age, float weight)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
    }
};

int main()
{
    cout << "hello world"; //hello();
    cout << pi;
}
