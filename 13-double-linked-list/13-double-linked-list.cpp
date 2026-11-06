#include <iostream>
using namespace std;

template <typename T>
class List
{
	struct Node
	{
		Node* prev;
		T value;
		Node* next;

		Node() : prev(nullptr), value(0), next(nullptr) {}
		Node(Node* p, T v, Node* n) : prev(p), value(v), next(n) {}
	};
private:
	Node* head;
	Node* tail;

public:
	List()
	{
		head = tail = nullptr;
	}

	~List()
	{
		Node* current = nullptr;
		while (head != nullptr)
		{
			current = head;
			head = head->next;
			delete current;
		}
	}
	
	bool isEmpty() const
	{
		return head == nullptr;
	}

	void addPos(T value)
	{

	}

	void addHead(T value)
	{
		Node* newNode = new Node(nullptr, value, head);
		
		if (isEmpty())
		{
			head = tail = newNode;
		}
		else
		{
			head->prev = newNode;
			head = newNode;
		}
	}

	void deleteHead()
	{
		if (isEmpty()) return;
		if (head->next = nullptr)
		{
			delete head;
			head->prev = nullptr;
		}
		else
		{
			head = head->next;
			delete head->prev;
			head->prev = nullptr;
		}
	}

	void addTail(T value)
	{
		Node* newNode = new Node(tail, value, nullptr);

		if (isEmpty())
		{
			head = tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
	}

	void deleteTail()
	{
		if (isEmpty()) return;
		if (tail->prev = nullptr)
		{
			delete tail;
			tail->next = nullptr;
		}
		else
		{
			tail = tail->prev;
			delete tail->next;
			tail->next = nullptr;
		}
	}

	void print()
	{
		/*Node* current = head;
		while (current != nullptr)
		{
			cout << "[" << current->value << "]" << " ";
			current = current->next;
		}

		cout << endl;*/

		for (Node* i = head; i != nullptr; i=i->next)
		{
			cout << i->value << endl;
		}
	}
};

struct cabin
{
	int number;
	int countSeats;
	int countPassengers;

	cabin() : number(0), countSeats(0), countPassengers(0) {}

	cabin(int num, int cS, int cP) : number(num), countSeats(cS), countPassengers(cP) {}
};

ostream& operator << (ostream& out, const cabin& c)
{
	out << "number [" << c.number << "]" << " count of seats[" << c.countSeats << "]" << " count of passangers [" << c.countPassengers << "]";
	return out;
}
class Train
{
private:
	string model;
	List<cabin> cabins;
	int countCabins;

public:
	Train() = default;

	Train(string m) : model(m) {}

	Train(const Train& other) : model(other.model), countCabins(other.countCabins) {}
	/*{
		for (int i = 0; i < countCabins; i++)
		{
			cabins.addTail(other.cabins.)
		}
	}*/

	void addCabinHead(cabin c)
	{
		cabins.addHead(c);
		countCabins++;
	}
	
	void addCabinTail(cabin c)
	{
		cabins.addTail(c);
		countCabins++;
	}
	
	void deleteCabinHead()
	{
		cabins.deleteHead();
		countCabins--;
	}

	void deleteCabinTail()
	{
		cabins.deleteTail();
		countCabins--;
	}

	void show()
	{
		cabins.print();
	}
};







int main()
{
	/*List<int> list;
	list.addHead(24);
	list.addHead(76);
	list.addHead(43);
	list.print();*/

	Train trains("abc123pro");

	cabin cabinn(1, 43, 40);
	cabin cabinn2(2, 45, 43);
	trains.addCabinHead(cabinn);
	trains.addCabinTail(cabinn2);
	trains.show();
	trains.addCabinTail(cabinn2);
	trains.deleteCabinHead();
	trains.show();
}
