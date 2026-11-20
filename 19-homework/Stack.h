#pragma once
#include <iostream>
using namespace std;

class Stack {
private:
	enum { EMPTY = -1 };
	int* arr;
	int size;
	int topIndex;
public:
	Stack() = default;
	Stack(int size) : size(size)//100
	{
		if (size > 0)
		{
			arr = new int[size];
			topIndex = EMPTY;
		}
		else
			throw invalid_argument("size is less than 0 or it is 0");
	}
	~Stack()
	{
		if (arr != nullptr)
			delete[]arr;
	}
	bool IsFull()
	{
		return topIndex == size - 1;
	}
	bool Push(int elem) {

		if (!IsFull())
		{
			arr[++topIndex] = elem;
			return true;
		}
		throw exception("stack is full");
	}
	bool IsEmpty()
	{
		return topIndex == EMPTY;
	}
	int Pop()
	{
		if (!IsEmpty())
		{
			return arr[topIndex--];
		}
		else
			throw exception("stack is empty");
	}
	int GetCount()
	{
		return topIndex + 1;
	}
	void Clear()
	{
		topIndex = EMPTY;
	}
	int Peek()
	{
		if (!IsEmpty())
		{
			return arr[topIndex];
		}
		else
			throw exception("array is empty");
	}
	void Print()
	{
		if (!IsEmpty())
		{
			for (int i = 0; i <= topIndex; i++)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
		}
		else
			throw exception("stack is empty");
	}

};

