#include "Stack.h";


int main()
{
	Stack stack1(5);
	try
	{
		Stack stack(3);
	}
	catch(invalid_argument exxx)
	{
		cout << exxx.what();
	}
	try
	{
		stack1.Push(67);
		stack1.Push(34);
		stack1.Print();
	}
	catch (exception exxx)
	{
		cout << exxx.what();
	}
	try
	{
		Stack stack3(0);
		stack3.Pop();
	}
	catch (exception exxx)
	{
		cout << exxx.what();
	}
}