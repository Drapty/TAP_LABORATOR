#include "Carte.h";
#include <iostream>

using namespace std;

Carte::Carte(string autor, string titlu, int ID, int pret)
{
	this->autor = autor;
	this->titlu = titlu;
	this->ID = ID;
	this->pret=pret;
}

Carte::Carte()
{

};
