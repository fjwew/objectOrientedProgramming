#include <iostream>
using namespace std;

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
            for (int i = this->size; i < this->size+size; i++)
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
        long* temp{ new long[size-1] };
        for (int i = 0; i < index; i++)
        {
            temp[i] = arr[i];
        }
        for (int i = index; i < size; i++)
        {
            temp[i] = arr[i+1];
        }

        this->size--;
        delete[]arr;
        arr = temp;

    }

    void removeBValue(long value)
    {
        /*if (index > size || index < 0)
        {
            cout << "no index" << endl;
            return;
        }*/
        long* temp{ new long[size - 1] };
        for (int i = 0; i < size; i++)
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
};

int main()
{
    srand(time(0));

    Array arr(5);

    arr.fillRandom();
    arr.printArray();
    arr.addElements(5, 1);
    arr.printArray();
    arr.removeBIndex(5);
    arr.printArray();
}

