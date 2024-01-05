#include <iostream>
#include "Coada.h"
using namespace std;
int main()
{
	int adv = 1;
	Coada coada_obj;
	coada_obj.queue();
	
	try
	{
		throw coada_obj.empty();
	}
	catch(int adv)
	{
		cout << "lista goala";
	}

	return 0;
}
