#pragma once
#include <string>
#ifndef exercitiu_banca;
#define exercitiu_banca;
using namespace std;

	class banca
	{
	public:

		string codBancar;
		unsigned nrclient;
		client clienti[20];
		banca(const banca& );
		~banca();
	};

	class contbancar
	{
		string numarCont;
		float suma;
		string moneda{ "RON","LEI" };

		void transfer(contbancar& contDest,  float suma );
		contbancar(const contbancar&);
		~contbancar();

	};

	class client
	{
	public:
		string nume;
		string prenume;
		string adresa;
		unsigned nrconturi;
		banca conturi[20];
		client(const client&);


	};


	class operatiuni
	{
		virtual float getSumaTotala()=0;

		virtual float getDobanda()=0;

		virtual void depunere()=0;

		virtual void extragere() = 0;

};
#endif
