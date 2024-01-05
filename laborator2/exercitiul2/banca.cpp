#include "banca.h"

//cont bancar
void contbancar::transfer(contbancar& contDest, float suma)
{
	if (moneda == "RON")
	{
		if (suma < 500)
			contDest.suma = contDest.suma + suma - ((suma * 0.3) / 100);
		else
			contDest.suma = contDest.suma + suma - ((suma * 0.8) / 100);

	}
	else
	{ 
		contDest.suma = contDest.suma + suma - ((suma * 0.1) / 100);
	}

}

contbancar::~contbancar()
{
	suma = 0;
	numarCont = nullptr;

}

contbancar::contbancar(const contbancar& cont)
{
	this->suma = cont.suma;
	this->numarCont = cont.numarCont;


}

////

//banca
banca::banca(const banca& param)
{
	int j;

	codBancar = param.codBancar;
	nrclient = param.nrclient;
	for (int i = 0;i < 21;i++)
	{
		clienti[i].nume = param.clienti[i].nume;
		clienti[i].prenume = param.clienti[i].prenume;
		clienti[i].adresa = param.clienti[i].adresa;
		clienti[i].nrconturi = param.clienti[i].nrconturi;
		for (j = 0;j < 21;j++)
		{
			clienti[i].conturi[j] = param.clienti[i].conturi[j];
		}
	}

}

banca::~banca()
{
	codBancar = nullptr;
	nrclient = 0;
	for (int i = 0;i < 21;i++)
	{

	}
}

////


//client

client::client(const client& param)
{
	int j;
	nume = param.nume;
	prenume = param.prenume;
	adresa = param.adresa;
	nrconturi = param.nrconturi;
	for (int i = 0;i < 21;i++)
	{
		conturi[i].codBancar = param.conturi[i].codBancar;
		conturi[i].nrclienti=param.conturi[i].nrclienti;
		for (j = 0;j < 21;j++)
		{
			conturi[i].clienti[j] = param.conturi[i].clienti[i];

		}

	}
}
