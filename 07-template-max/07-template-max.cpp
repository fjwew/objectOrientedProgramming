#include <iostream>
using namespace std;


template <typename Example>
Example getMax(Example arr[], int size)
{
    Example max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

class Point {
    int x;
    int y;
public:
#pragma region Constructors
    Point()
    {
        x = y = 0;
    }
    Point(int value)
    {
        x = y = value;
    }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
#pragma endregion
    void Print()const
    {
        cout << "X : " << x << ". Y : " << y << endl;
    }
};



class myClass
{
private:
    int* collection;
    int size;
    Point value;
public:
    myClass()
    {
        collection = nullptr;
        size = 0;
        //value = nullptr;
    }
    myClass(int* coll, Point value) : collection(coll), value(value){}
    
    ~myClass()
    {
        if (collection != nullptr)
        {
            delete[]collection;
        }
    }

    void setCollection(int* coll)
    {
        collection = coll;
    }
    void setValue(Point value)
    {
        this->value = value;
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << collection[i] << " ";
        }
        cout << endl;
    }
};




int main()
{
    srand(time(0));

    long* longArr = new long[5];
    for (int i = 0; i < 5; i++)
    {
        longArr[i] = i + 1;
        cout << longArr[i] << " ";
    }
    cout << endl;

    char* charArr = new char[5];
    for (int i = 0; i < 5; i++)
    {
        charArr[i] = 'a' + i;
        cout << charArr[i] << " ";
    }
    cout << endl;

    delete[]longArr;
    delete[]charArr;

    /*const int size = 10;
    int arr1[size] = { 5, 77, 34, 64, 23, 78, 91, 45, 23, 54 };
    float arr2[size] = { 5, 77, 34, 64, 23, 78, 91, 45, 23, 54 };
    long arr3[size] = { 5, 77, 34, 64, 23, 78, 91, 45, 23, 54 };
    cout << "max element - " << getMax(arr1, size) << endl;
    cout << "max element - " << getMax(arr2, size) << endl;
    cout << "max element - " << getMax(arr3, size) << endl;*/
}

