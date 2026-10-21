#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    // constructors
    explicit Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    explicit Time(int hours, int minutes, int seconds)
    {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }

    explicit Time(int seconds)
    {
        this->hours = seconds / 3600;
        this->minutes = seconds / 60 % 60;
        this->seconds = seconds % 60;
    }

    // methods
    void print()
    {
        if (hours < 10)
        {
            cout << "0" << hours << ":";
        }
        else
        {
            cout << hours << ":";
        }
        if (minutes < 10)
        {
            cout << "0" << minutes << ":";
        }
        else
        {
            cout << minutes << ":";
        }
        if (seconds < 10)
        {
            cout << "0" << seconds;
        }
        else
        {
            cout << seconds;
        }
    }

#pragma region Operators
    Time& operator++()
    {
        if (seconds == 59 && minutes == 59)
        {
            hours++;
            minutes = 0;
            seconds = 0;
        }
        else if (seconds == 59 && minutes < 60)
        {
            minutes++;
            seconds = 0;
        }
        else
        {
            seconds++;
        }
        return *this;
    }

#pragma endregion
};

int main()
{
    // PRACTICAL WORK
    Time time;
    time.print();

    cout << endl;

    Time time1(25);
    time1.print();
    time1++;
}
 