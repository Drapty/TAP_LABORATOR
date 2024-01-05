#include "Coada.h"
#include <cstddef>
#include <iostream>
using namespace std;

void Coada::queue()
{
	
	end = -1;
	front = -1;

	
}




void Coada::enqueue(int info)
{
		if (front = -1)
			front = 0;
		else
		{
			end = end + 1;
			this->list[end] = info;

		};
}

void Coada::dequeue()
{
	if (end == front)
	{
		//cout << "coada goala"<<endl;
	}
	else
	{
		int elem = this->list[end];
		front = front + 1;
	}
}

int Coada::peek()
{
	return this->list[front];

}

bool Coada::isempty()
{
	
	if (front==end)
	{
		return true;
	}
	return false;

}

void Coada::print()
{
	
	for (int i=front;i<end;i++)
	{
		cout << list[front] << endl;
	}

}

int Coada::empty()
{
	if (front == end)
		throw 1;
	else
		throw 0;

}
