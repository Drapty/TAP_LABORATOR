#include "Stack.h"
#include <iostream>

int main()
{
	Array_Stack obj;
	
	try
	{
		obj.push(5);
		obj.pop();
	}
	catch(Array_Stack::Stack_Underflow ex)
	{
		cout<<"stiva goala";
	}

	return 0;
}
