#include "LSI.h"
#include <iostream>

using namespace std;
void LSI::inserare_inc(int info)
{
	if (Noua==nullptr)
	{
		Nod* nod = new Nod;
		Noua->info = nod->info;
		Noua = nod;
	
	}
	else
	{
		Nod* nod = new Nod;
		nod->succ = Noua;
		nod->info = Noua->info;
		Noua = nod;
	}


}

void LSI::stergere_inc()
{
	if (Noua == nullptr)
	{
		cout << "lista goala";

	}
	else
	{
		Nod* salv = new Nod;
		Noua = Noua->succ;
		delete salv;
	}

}
