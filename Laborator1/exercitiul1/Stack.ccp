#include "Stack.h"
#include <iostream>
using namespace std;
Array_Stack::Array_Stack()
{
}

bool Array_Stack::isempty()
{
	if (top==0)
	{
		return true;
	}
	else
		return false;


}

bool Array_Stack::isempty()
{
	if (top == 0)
		return true;
	return false;
	
}

bool Array_Stack::isfull()
{
	if (top == Max)
	{
		return true;

	}
	else
		return false;
}

int Array_Stack::push(int info_nou)
{
	if (!isfull())
	{
		
		top = top + 1;
		stiva[top] = info_nou;
	}
	else
		cout << "plin";


}

int Array_Stack::pop()
{
	if (isempty())
	{
		int valoare = peek();
		top = top - 1;
		
		return valoare;

	}

	return 1;


}

int Array_Stack::peek()
{
	return stiva[top];
}

void Array_Stack::print()
{
	for (int i = 1;i < top;i++)
	{
		cout << stiva[i]<<endl;
	}
}


