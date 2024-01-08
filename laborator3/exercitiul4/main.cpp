#include "Film.h"

#include <iostream>
using namespace std;

int main()
{
	Film nou;
	Film film2;
	string nume;
	string prenume;
	int varsta;
	Actor actor_nou;


	int cerere=1;
	while (cerere==1)
	{
		int i;
		cin >> i;
		switch (i)
		{
		case 1:
			getline(cin, actor_nou.nume);
			getline(cin, actor_nou.prenume);
			cin >> actor_nou.varsta;
			nou.adaugare(actor_nou);
			break;
		case 2:
			nou.stergere();
			break;
		case 3:
			nou.counter();
			break;
		case 4:
			comp_budget();
			break;
		case 5:
			actori_comuni(nou,film2);
			break;
		case 6:
			getline(cin, actor_nou.nume);
			getline(cin, actor_nou.prenume);
			cin >> actor_nou.varsta;
			film2.adaugare(actor_nou);
			break;
		case 7:
			cerere = 0;
			break;
		}
	}

	return 0;
}
