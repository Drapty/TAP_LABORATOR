#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
#ifndef Film_ex4
#define Film_ex4
using namespace std;

class Actor;

class Film
{
public:
	string titlu;
	string regizor;
	int an_lansare;
	int budget;

	vector<Actor> lista_actori;

	void adaugare(Actor nou);

	void stergere();

	void counter();

	friend void comp_budget(vector<Film> lista_filme);
	

	bool buget(Film film1, Film film2);

	void actori_comuni(Film actor1, Film actor2);
};

class Actor
{
public:

	string nume;
	string prenume;
	int varsta;
	Actor();
	//Actor(string nume, string prenume, int varsta);
	

};


#endif // !Film_ex4
