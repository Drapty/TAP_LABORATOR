#pragma once
using namespace std;
#ifndef Stivastatica_included
#define stivastatica_included

class Stack
{
public:
    virtual bool isempty(int top) = 0;
    virtual bool isfull(int top, int MAX) = 0;
    virtual bool push() = 0;
    virtual int pop() = 0;
    virtual int peek() = 0;
    virtual void print() = 0;
};

class Array_Stack:public Stack
{
private:
    Array_Stack();

    int* stiva;

    const int Max=20;

    int top;
public:

    virtual bool isempty();

    virtual bool isfull();

    virtual int push(int info_nou);

    virtual int pop();

    virtual int peek();

    virtual void print();

     class Stack_Overflow {};//supradepasire;
     class Stack_Underflow {};//subdepasire;

};


#endif
