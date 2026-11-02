#include <iostream>;
using namespace std;

class Queue
{
private:
	int* arr;
	int maxSize;
	int topIndex;
public:
	Queue() = default;
	Queue(int size)
	{
		maxSize = size;
		arr = new int[maxSize];
		topIndex = 0;
	}
	~Queue()
	{
		if (arr != nullptr)
			delete[]arr;
	}

	bool isFull() const
	{
		return (topIndex == maxSize);
	}

	bool isEmpty() const
	{
		return topIndex == 0;
	}

	int getCount() const
	{
		return topIndex;
	}

	void enqueue(int e)
	{
		if (!isFull())
			arr[topIndex++] = e;
	}

	/*int dequeue()
	{
		if (!isEmpty())
		{
			int first = arr[0];
			for (int i = 0; i < topIndex; i++)
			{
				arr[i] =arr[i+1];
			}topIndex--;
			return first;
		}
	}*/

	int dequeue() // queue cycle
	{
		if (!isEmpty())
		{
			int first = arr[0];
			for (int i = 0; i < topIndex; i++)
			{
				arr[i] = arr[i + 1];
			}
			arr[topIndex-1] = first;
			return first;
		}
	}

	void clear()
	{
		topIndex = 0;
	}

	void show() const
	{
		for (int i = 0; i < topIndex; i++)
		{
			cout << arr[i] << " ";
		}cout << endl;
	}
};

int main()
{
	Queue q(15);

	for (int i = 0; i < 10; i++)
	{
		q.enqueue(rand() % 10);
	}

	q.show();

	while (!q.isEmpty())
	{
		cout << "deleted " << q.dequeue() << endl;
	}

	q.show();
}