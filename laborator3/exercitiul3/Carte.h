#pragma once
#include <string>
#include <iostream>
#ifndef Carte_ex
#define Carte_ex
using namespace std;
class Carte
{
public:
	string autor;
	string titlu;
	int ID;
	int pret;
	Carte(string autor, string titlu, int ID, int pret);
	Carte();

	inline void afisare(string autor) const {
			if (this->autor == autor)
				cout << this->titlu<<endl;
	    };

};
#endif // !Carte_ex

