#include <iostream>
using namespace std;

struct element
{
	string letter;
	int priority;
};

class PriorityQueue
{
private:
	element* elements;
	int count;
public:
	PriorityQueue() : elements(nullptr), count(0) {}
	~PriorityQueue()
	{
		if (elements != nullptr) delete[]elements;
	}

	bool isEmpty() const
	{
		return count == 0;
	}

	void enqueue(string name, int p)
	{
		int index = 0;
		while (index < count && elements[index].priority < p)index++;
		element* temp = new element[count + 1];
		for (int i = 0; i < index; i++)
		{
			temp[i] = elements[i];
		}
		temp[index] = element{name, p};
		for (int i = index; i < count; i++)
		{
			temp[i + 1] = elements[i];
		}
		if (elements != nullptr)
			delete[]elements;
		elements = temp;
		count++;
	}

	element dequeue()
	{
		if (!isEmpty())
		{
			element first = elements[0];
			for (int i = 0; i < count; i++)
			{
				elements[i] = elements[i + 1];
			}
			count--;
			return first;
		}
	}

	void print()
	{
		for (int i = 0; i < count; i++)
		{
			cout << elements[i].letter << " : " << elements[i].priority << endl;
		}
		cout << endl;
	}
};



int main()
{
	PriorityQueue printer;

	string name;
	int p;

	enum { ADD = 1, PRINT = 2, EXIT = 0 };
	int choice;

	do
	{
		system("cls");
		cout << "printer" << endl;
		cout << "1 - add, 2 - print, 0 - exit" << endl;
		cin >> choice;//2

		switch (choice)
		{
		case EXIT:
			system("cls");
			cout << "goodbye!";
			break;
		case ADD:
			system("cls");
			cout << "enter document name -> "; cin >> name;
			cout << "enter your status -> "; cin >> p;

			printer.enqueue(name, p);
			break;
		case PRINT:
			system("cls");
			while (!printer.isEmpty())
			{
				cout << "printing...";
				printer.dequeue();
			}
			
				//cout << "no documents to print!";
			break;
		}
	} while (choice != 0);
}

