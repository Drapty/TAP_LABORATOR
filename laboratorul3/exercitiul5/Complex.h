#include <iostream>
#ifndef ex5-complex
#define ex5-complex
class Complex
{
	signed re;
	signed im;

	Complex();
	~Complex();
	Complex(signed numarator);
	Complex(signed numarator, signed numitor);
	Complex(Complex&);

	void adunarea(signed re, signed im);
	void scaderea(signed re, signed im);
	void inmultirea(signed re, signed im);
	void impartirea();
	void reciproc();
	bool egal(const Complex&);
	void print();


	void friend  modul(Complex&);

	void friend conjucat(Complex&);


};
#endif
