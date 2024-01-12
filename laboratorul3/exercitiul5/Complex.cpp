#include "Complex.h"
#include <iostream>
#include <math.h>
using namespace std;
Complex::Complex()
{
	this->re = 0;
	this->im = 1;

}

Complex::Complex(int numarator)
{
	this->re = numarator;
	this->im = 1;
}

Complex::Complex(int numarator, int numitor)
{
	this->re;
	this->im;


}

Complex::Complex(Complex& obiect)
{
	this->re = obiect.re;
	this->im = obiect.im;
}

void Complex::adunarea(signed re, signed im)
{
	signed rez = this->re + re;
	signed imag = this->im + im;
	cout << rez <<"+"<<im<<'i'<< endl;
	this->re = rez;
	this->im = im;

}
void Complex::scaderea(signed re, signed im)
{
	signed rez = this->re - re;
	signed imag = this->im - im;
	this->re = rez;
	this->im = im;
	cout << rez <<"-"<<imag<<'i'<< endl;
}

void Complex::inmultirea(signed re, signed im)
{
	signed real = this->re * re; //
	signed stang = this->re * im; // 
	signed drept = this->im * re;
	signed imag = this->im * im;

	this->re = real-imag;
	this->im = stang + drept;
	cout << re<<"+"<<im<< endl;
}

void Complex::impartirea()
{
	if (im!=0)
	int rez = this->re / this->im;

	cout << re << endl;
}

void modul(Complex& param)
{
	float rez;
	rez = (sqrt(param.re * param.re) + (param.im + param.im));

}

void conjucat(Complex& param)
{
	param.im = -param.im;

}

void Complex::reciproc()
{
	this->re = this->im;
	this->im = this->re;

}

bool Complex::egal(const Complex& param)
{
	if (this->re = param.re & this->im == param.im)
		return true;
	else
		return false;

}

void Complex::print()
{
	cout << this->re << "+" << this->im<<'i';
}
