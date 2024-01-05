#pragma once
#pragma warning
#ifndef LSI_TAP
#define LSI_TAP
using namespace std;
class Nod; 
class LSI
{
	void init();
	void inserare_inc(int info);
	
	void stergere_inc();
	
	Nod* Noua;

	friend class Nod;
};

class Nod
{
	
		int info;
		Nod* succ;

	friend void LSI::inserare_inc(int info);
	friend void LSI::stergere_inc();
};
#endif;
