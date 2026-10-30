#include <iostream>
using namespace std;

class staticStack
{
private:
	enum { EMPTY = -1, FULL = 9 };
	int arr[FULL + 1];
	int topIndex;
public://     '  '
	// default \/ delete
	staticStack()
	{
		topIndex = EMPTY;
	}
	staticStack(const staticStack& other) = delete;
	~staticStack() = default;

	bool isFull()
	{
		return topIndex == FULL;
	}

	bool isEmpty()
	{
		return topIndex == EMPTY;
	}

	bool push(int element)
	{
		if (!isFull())
		{
			arr[++topIndex] = element;
			return true;
		}
		else
			return false;
	}
	int pop()
	{
		if (!isEmpty())
			return arr[topIndex--];
	}

	int getCount()
	{
		return topIndex + 1;
	}

	void clear()
	{
		topIndex = EMPTY;
	}

	int peek()
	{
		if (!isEmpty())
		{
			return arr[topIndex];
		}
	}

	void print()
	{
		for (int i = 0; i <= topIndex; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

class Stack
{
private:
	int* arr;
	int size;
	enum {EMPTY = -1};
	int topIndex;
public:
	Stack() = default;
	Stack(int size) : size(size)
	{
		arr = new int[size];
		topIndex = EMPTY;
	}
	~Stack()
	{
		if (arr != nullptr)
		{
			delete[]arr;
		}
	}

	bool isFull()
	{
		return topIndex == size-1;
	}

	bool isEmpty()
	{
		return topIndex == EMPTY;
	}

	bool push(int element)
	{
		if (!isFull())
		{
			arr[++topIndex] = element;
			return true;
		}
		else
			return false;
	}

	int getCount()
	{
		return topIndex + 1;
	}

	void clear()
	{
		topIndex = EMPTY;
	}

	int peek()
	{
		if (!isEmpty())
		{
			return arr[topIndex];
		}
	}

	int pop()
	{
		if (!isEmpty())
			return arr[topIndex--];
	}

	void print()
	{
		for (int i = 0; i <= topIndex; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

int main()
{
	Stack st(10); // 10
	cout << "size = " << st.getCount() << endl;
	st.push(23);
	st.push(12);
	st.push(43);
	st.print();
	while (!st.isEmpty())
	{
		cout << "deleted element - " << st.pop() << endl;
	}
	st.print();
}