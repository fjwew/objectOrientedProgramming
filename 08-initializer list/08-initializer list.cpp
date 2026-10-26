#include <iostream>
using namespace std;

template <typename arrr>

class Array
{
	arrr* arr;
	int size;
public:
	Array()
	{
		arr = nullptr;
		size = 0;
	}
	explicit Array(int size)
	{
		this->size = size;
		arr = new arrr[size];
	}
	Array(initializer_list<arrr>list)
	{
		this->size = list.size();
		arr = new arrr[size];
		int i = 0;
		for (arrr elem : list)
		{
			arr[i] = elem;
			i++;
		}
	}

	~Array()
	{
		if (arr != nullptr)
			delete[]arr;
	}
	void Print()
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	// methods
	arrr maxEl();

};

arrr maxEl()
{

}

int main()
{
	Array<int> arr({32, 4, 76, 786, 43});
	arr.Print();
}