#include "Fractie.h"

Fractie::Fractie(const Fractie& param)
{
	this->numarator = numarator;
	this->numitor = numitor;
}
//Fractie::Fractie(int numarator,int numitor):numarator(numarator)

Fractie::~Fractie() {}

int cmmdc(int a,int b)
{
	while (a != b)
	{
		if (a > b)
			a =a-b;
		else
			b =b-a;
	}
	return a;
}


Fractie Fractie::operator+(const Fractie& param) 
{
	Fractie rez;
	int c = cmmdc(this->numitor,param.numitor);
	int numitor_comun = this->numitor * param.numitor / c;
	int a = numitor_comun / this->numarator;
	int b = numitor_comun / param.numitor;
	rez.numarator = this->numarator * a + param.numarator*b;
	rez.numitor = numitor_comun;
	return rez;
}

Fractie operator-(const Fractie& param1, const Fractie& param2)
{
	Fractie rez;
	int c = cmmdc(param1.numitor, param2.numitor);
	int numitor_comun = param1.numitor * param2.numitor / c;
	int a = numitor_comun / param1.numarator;
	int b = numitor_comun / param2.numarator;
	rez.numarator = param1.numarator * a - param2.numarator * b;
}

Fractie Fractie::operator*( Fractie& param)
{
	return Fractie(this->numarator * param.numarator, this->numitor * param.numitor);
}

bool operator<(const Fractie& param1, const Fractie& param2)
{
	return (param1.numarator * param2.numitor < param1.numitor* param2.numarator);
}



bool operator>(const Fractie& param1, const Fractie& param2)
{
	return (param1.numarator * param2.numitor > param1.numitor * param2.numarator);
}

bool operator>=(const Fractie& param1, const Fractie& param2)
{
	return (param1.numarator * param2.numitor >= param1.numitor * param2.numarator);
}

bool operator<=(const Fractie& param1, const Fractie& param2)
{
	return (param1.numarator * param2.numitor <= param1.numitor * param2.numarator);
}

bool Fractie::operator!=(const Fractie& param1, const Fractie& param2)
{
	return (param1.numarator * param2.numitor != param1.numitor * param2.numarator);
}

bool Fractie::operator==(Fractie& param)
{
	Fractie  simplif = this->simplifica();
	Fractie  simplif_param = param.simplifica();
	return (simplif.numarator == param.numarator && simplif.numitor == param.numitor);
}

Fractie Fractie::simplifica() {
	int c = cmmdc(this->numarator, this->numitor);
	return Fractie(this->numarator / c, this->numitor / c);
}

Fractie Fractie::reciproc()
{
	return Fractie(this->numitor, this->numarator);
}

Fractie& Fractie::operator*=(Fractie& param)
{
	this->numarator = this->numarator * param.numarator;
	this->numitor = this->numitor * param.numitor;
	return *this;
}


