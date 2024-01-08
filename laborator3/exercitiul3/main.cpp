#include "Carte.h"
#include <iostream>

int main()
{
	int instante=4;
	//Carte* carti = (Carte*)malloc(sizeof(Carte) * instante);// dinamic size carte * 4
	Carte* carti = new Carte[instante]{};
	carti[0] = { "Ion Creanga","Amintiri din copilarie",209,45 };
	carti[1] = { "Ion Creanga", "Harap-Alb", 208, 40 };
	carti[2] = { "","",210,35 };
	carti[3] = {"Scott Cawton","The Twisted Ones",211,70};

	string autor;
	cout << "citeste autor"<<endl;


	getline(cin, autor);
	int i = 0;
	for (i;i<instante;i++)
	carti[i].afisare(autor);

	cout << endl << instante;


}
