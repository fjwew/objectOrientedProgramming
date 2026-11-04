#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node* next;

    Node() : value(0), next(nullptr) {}
    Node(int value, Node*next) : value(value), next(next) {}
};

template <typename T>
class List
{
private:
    Node* head;
public:
    List()
    {
        head = nullptr;
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

    void addtohead(int value)
    {
        Node* newNode = new Node(value, head);
        head = newNode;
    }

    void print()
    {
        Node* current = head;
        while (current != nullptr)
        {
            cout << "[" << current->value << "]" << " ";
            current = current->next;
        }
        cout << endl;
    }

    void addtotail(int value)
    {
        Node* newNode = new Node(value, nullptr);
        
        if (head == nullptr)
            head = newNode;
        else
        {
            Node* current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }current->next = newNode;
        }
    }

    void deletefromtail()
    {
        if (head == nullptr) return;
        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
        }

        Node* current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        } delete current->next;
        current->next = nullptr;
    }
};

class Vector
{
private:
    struct Point
    {
        int x;
        int y;
    };

    Point point;
    Node* head;

public:
    void addtohead(int value)
    {
        Node* newNode = new Node(value, head);
        head = newNode;
    }

    void print()
    {
        Node* current = head;
        while (current != nullptr)
        {
            cout << "[" << current->value << "]" << " ";
            current = current->next;
        }
        cout << endl;
    }

    void addtotail(int value)
    {
        Node* newNode = new Node(value, nullptr);

        if (head == nullptr)
            head = newNode;
        else
        {
            Node* current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }current->next = newNode;
        }
    }

    void deletefromtail()
    {
        if (head == nullptr) return;
        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
        }

        Node* current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        } delete current->next;
        current->next = nullptr;
    }
};

int main()
{
    List l;
    for (int i = 0; i < 10; i++)
    {
        l.addtotail(i);
    }l.print();

    for (int i = 0; i < 10; i++)
    {
        l.addtohead(i);
    }l.print();
    for (int i = 0; i < 10; i++)
    {
        l.addtotail(i);
    }l.print();
    cout << endl << endl;
    l.deletefromtail();
    l.print();
    l.deletefromtail();
    l.print();
    l.deletefromtail();
    l.print();
}