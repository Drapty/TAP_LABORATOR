#include <stdio.h>
#include <stdlib.h>
#include <iostream>
//#include <iostream> 
//#include <string> 
#include <vector> 
#include "Fractie.h";
//#include <stdio.h>;
//#include <stdlib.h>;
//#include <iostream>;
using namespace std;

int main()
{
	Fractie nou;
	int read;
	cin >> read;
	Fractie neu;

	//nou.implicit();
	int i = 1;
	int numarator1 = 1;
	int numitor1 = 500;
	int numarator2 = 2;
	int numitor2 = 1500;
	int divizor;
	int numarator_Rez;


	switch (read)
	{
	case 0:
		nou.implicit();



		break;
	case 1:
		int numar;
		cin >> numar;
		nou.numarator(numar);
		break;
	case 2:
		int numarator;
		int numitor;
		//cin >> numarator;
		//cin >> numitor;
		//nou.fractie(numarator,numitor);

		nou.scaderea(numarator1, numitor1, divizor, numarator2, numitor2, numarator_Rez);
		break;
	case 3:
		nou.adunarea(numarator1, numitor1, divizor, numarator2, numitor2, numarator_Rez);
		break;
	case 4:
		nou.imultirea(numarator1, numitor1, divizor, numarator2, numitor2, numarator_Rez);
		break;
	case 5:
		nou.impartirea(numarator1, numitor1, divizor, numarator2, numitor2, numarator_Rez);
		break;

	}