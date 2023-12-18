#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Dreapta.h";
//#include <iostream> 
//#include <string> 
#include <vector> 
#include "Punct.h";
//#include <stdio.h>;
//#include <stdlib.h>;
//#include <iostream>;
using namespace std;




int main()
{
	int x = 6;
	int y = 5;
	vector<Punct> puncte;
	Punct punct(x, y);
	Dreapta oarecare(4, 5);

	int n;
	cin >> n;

	for (int i = 0;i < n;i++)
	{
		puncte.push_back(punct);
	}


	for (int i = 0;i < n;i++)
	{
		cout << puncte[i].x << endl;
	}

	for (int i=0;i<n;i++)
	{

		//centrudegreutate(puncte[i].a, puncte[i].b, puncte[i].c);

	}

	return 0;
};


