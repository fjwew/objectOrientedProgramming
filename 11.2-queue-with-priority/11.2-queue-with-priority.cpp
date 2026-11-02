#include <iostream>
using namespace std;

struct element
{
    char letter;
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

    void enqueue(element e)
    {
        int index = 0;
        while (index < count && elements[index].priority < e.priority)index++;
        element* temp = new element[count + 1];
        for (int i = 0; i < index; i++)
        {
            temp[i] = elements[i];
        }
        temp[index] = e;
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
    PriorityQueue q;
    q.enqueue(element{'b', 2});
    q.enqueue(element{'a', 1});
    q.print();
    q.enqueue(element{ 'd', 4 });
    q.print();
    q.enqueue(element{ 'c', 3 });
    q.enqueue(element{ 'e', 5 });
    q.print();

    while (!q.isEmpty())
    {
        q.dequeue();
        q.print();
    }
}

