
#include "Dreapta.h";

Dreapta::Dreapta(int n, int m )
{
	this->n = n;
	this->m = m;

}

//Dreapta::Dreapta(int n=0, int m=1);


Dreapta::Dreapta(const Dreapta &dreaptanoua)
{
	this->n = dreaptanoua.n;
	this->m = dreaptanoua.m;

}

Dreapta::~Dreapta()
{

};