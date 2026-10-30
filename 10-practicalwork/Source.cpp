#include <iostream>
using namespace std;

class staticStack
{
private:
	enum { EMPTY = -1, FULL = 9 };
	char arr[FULL + 1];
	int topIndex;
public://    '    '
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

	bool push(char element)
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

template <typename Shablon>
class Stack
{
private:
	Shablon* arr;
	int size;
	enum { EMPTY = -1 };
	int topIndex;
public:
	Stack() = default;
	Stack(int size) : size(size)
	{
		arr = new Shablon[size];
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
		return topIndex == size - 1;
	}

	bool isEmpty()
	{
		return topIndex == EMPTY;
	}

	bool push(Shablon element)
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



template <typename Shablon>
class StackS
{
private:
	Shablon* arr;
	int size;
	enum { EMPTY = -1 };
	int topIndex;
public:
	StackS() = default;
	StackS(initializer_list<Shablon>list)
	{
		this->size = list.size();
		arr = new Shablon[size];
		topIndex = EMPTY;
		for (Shablon elem : list)
		{
			arr[++topIndex] = elem;
		}
	}
	~StackS()
	{
		if (arr != nullptr)
		{
			delete[]arr;
		}
	}

	bool isFull()
	{
		return topIndex == size - 1;
	}

	bool isEmpty()
	{
		return topIndex == EMPTY;
	}

	bool push(Shablon element)
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

	void resize()
	{

	}
};

int main()
{
	staticStack s;
	s.push('.');
	s.push('3');
	s.push('a');
	s.print();
	cout << endl;

	Stack<char> st(5);
	st.push('.');
	st.push('3');
	st.push('a');
	st.push('d');
	st.push('9');
	st.print();

	StackS<int> staS({ 4, 65, 57, 67, 34, 543, 54 });
	staS.print();

}