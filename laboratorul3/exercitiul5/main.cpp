#include "Complex.h"
#include <iostream>
using namespace std;
int main()
{
	Complex nou(2,3);
	nou.adunarea(1,5);
	nou.scaderea(2,3);
	nou.inmultirea(2,4);
	nou.impartirea(2,1);
	nou.reciproc();
	if (nou.egal(nou) == true)
	{
		cout << "egal";
	}
	else
		cout << "nu sunt egale";

	nou.print();


	return 0;
}
