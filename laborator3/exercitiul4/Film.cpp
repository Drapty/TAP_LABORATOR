#include "Film.h"
#include <fstream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

Actor::Actor()
{

}

void Film::adaugare(Actor nou)
{
	lista_actori.push_back(nou);
}
void Film::stergere()
{
	lista_actori.pop_back();

}

void Film::counter()
{
	cout << lista_actori.size() << endl;
}

void comp_budget(vector<Film> lista_filme)
{
	sort(lista_filme.begin(), lista_filme.end(), buget);
}

bool buget(Film film1, Film film2)
{
	return (film1.budget < film2.budget);
}

void Film::actori_comuni(Film actor, Film actor1)
{
	for (auto i = actor.lista_actori.cbegin();i != actor.lista_actori.cend();i++)
	{
		for (auto j = actor1.lista_actori.cbegin();j != actor1.lista_actori.cend();j++)
		{
			if (*i == *j )
				cout << *i;
		}

	}
}
