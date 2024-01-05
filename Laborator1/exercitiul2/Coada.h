#pragma once
#ifndef Coada_dinamica
#define Coada_dinamica
using namespace std;
class Coada_abs
{

	

public:
	//virtual coada* init(int info) = 0;
	virtual void dequeue() = 0;

	virtual void enqueue(int info)=0;

	virtual int peek() = 0;

};


class Coada:public Coada_abs
{

	int list[20];
public:

	int front;
	int end;

	virtual void queue();

	virtual void enqueue(int info);

	virtual void dequeue();

	virtual bool isempty();

	virtual int peek();

	virtual void print();

	int empty();
};


	
#endif

