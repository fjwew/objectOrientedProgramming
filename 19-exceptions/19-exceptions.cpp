#include <iostream>
using namespace std;

// try, catch, throw

class passwordInvalidException : public exception
{
public:
    passwordInvalidException(const char* message) : exception(message) {}
};

class smallPasswordException : public exception
{
private:
    int length;
public:
    smallPasswordException(const char* message, int length) : length(length), exception(message) {}
};

float divide(float a, float b)
{
    if (b == 0)
        //cout << "can`t divide by zero!" << endl;
        throw exception("division by 0!");
    if (b == 1)
        throw 404;
    if (b == 2)
        throw "division by 0!";
    else
    {
        float result = 0;
        result = a / b;
        cout << a << " / " << b << " = " << result << endl;
        return result;
    }
}

void validateLogin(const char* login, const char*  password)
{
    if (strlen(password) < 8)
        throw exception("password is to small!");
    if (!islower(password[0]) || !isalpha(password[0]))
        throw exception("password is invalid!");
    if (!isupper(login[0]) || !isalpha(login[0]))
        throw exception("incorrect login!");
    
    cout << "loading..." << endl;
}

class myArray
{
    int* arr;
    int size;
public:
    myArray(int size = 20) : size(size)
    {
        arr = new int[size] {};
    }
    
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    int getElement(int index)
    {
        if (index >= 0 && index < size)
            return arr[index];
        else
            throw out_of_range("index is less then 0 or more then size");
    }

    void checkLength(int length)
    {
        if (length < 0)
            throw length_error("some length error");
        cout << "length is invalid";
    }

    void setSize(int newSize)
    {
        if (newSize < 0)
            throw invalid_argument("new size is less then 0");
        else
        {
            int* temp = new int[newSize];
            for (int i = 0; i < size && i < newSize; i++)
            {
                temp[i] = arr[i];
            }
            delete[]arr;
            arr = temp;
            size = newSize;
        }
    }
};


int main()
{
    char login[100];
    char password[100];

    for (int i = 0; i < 5; i++)
    {
        cout << "enter login -> "; cin >> login;
        cout << "enter password -> "; cin >> password;
        try
        {
            validateLogin(login, password);
        }
        catch (passwordInvalidException exxx)
        {
            cout << "invalid... do something!" << endl;
            cout << "first letter must be small: a-z, A-Z, 0-1" << endl;
            cout << exxx.what() << endl;
        }
        catch (...)
        {
            cout << "unknown exception" << endl;
        }
    }



















    /*float a, b;
    cout << "enter numbers -> ";
    cin >> a >> b;

    try
    {
        float result = divide(a, b);
    }
    catch(exception exxx)
    {
        cout << exxx.what();
    }
    catch(int exxx)
    {
        cout << exxx;
    }
    catch(const char* exxx)
    {
        cout << exxx;
    }*/
}