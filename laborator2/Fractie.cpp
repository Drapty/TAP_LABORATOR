#include "Fractie.h";

int cmmdc(int a, int b)
{
	if (a == 0)
	{
		return b;
	}
	return cmmdc(b % a, a);
}

	Fractie::Fractie()
	{
		numaratorul = 0;
		numitorul = 1;
	}

	Fractie::Fractie(int numaratorul)
	{
		this->numaratorul = numaratorul;
		this->numitorul = null;
	};

	Fractie::Fractie(int numaratorul,int numitorul)
	{
		this->numaratorul = numaratorul;
		this->numitorul = numitorul;
	}

	void implicit()
	{
		this->numaratorul = 0;
		this->numitorul = 1;
		cout << this->numaratorul;
		cout << endl << this->numitorul;
	};

	void numarator(int numaratorul)
	{
		this->numaratorul = numaratorul;
		cout << this->numaratorul;
		cout << endl << 1;
	};

	void fractie(int numaratorul, int numitorul)
	{
		this->numaratorul = numaratorul;
		this->numitorul = numitorul;
		cout << this->numaratorul;
		cout << endl << this->numitorul;
	};


	Fratie::Fractie(Fractie &nou)
	{
		this->numaratorul = nou.numaratorul;
		this->numitorul = nou.numitorul;
	}

	void divizor_comun(int &a, int &b)
	{
		int divizor_comun = cmmdc(b,a);
		a = a / divizor_comun;
		b = b / divizor_comun;


	}
	void adunarea(int numarator1,int numitor1,int &divizor,int numarator2,int numitor2,int &numarator_rez)
	{

		divizor = cmmdc(numitor1,numitor2);

		divizor = (numitor1 * numitor2) / divizor;

		numarator_rez= (numarator1) * (divizor / numitor1) + (numarator2) * (divizor / numitor2);

		divizor_comun(numarator_rez,divizor);
	};

	void scaderea(int numarator1,int numitor1,int &divizor,int numarator2,int numitor2,int &rez)
	{
		divizor = cmmdc(numitor1, numitor2);

		divizor=(numitor1 * numitor2) / divizor;

		rez= (numarator1) * (divizor / numitor1) - (numarator2) * (divizor / numitor2);

		divizor_comun(rez, divizor);
	};

	void impartirea(int numarator1, int numitor1,int numarator2,int numitor2,int &fnumarator,int &fnumitor)
	{
		fnumarator = numarator1 * numitor2;
		fnumitor = numitor2 * numarator2;
	};

	void imultirea(int numarator1,int numitor1,int numarator2,int numitor2,int &fnumarator,int &fnumitor)
	{
		fnumarator = numarator1 * numarator2;
		fnumitor = numitor1 * numitor2;

	};

	void simplifica(int a, int b)
	{
		int c = a / b;
		if (a / b < c)
			cout << "nu poate fi simplificat";


	};

	bool egal(const Fractie& fractia1)
	{
		//if (fractia1.numaratorul)
	};

	void print(int a,int b)
	{
		cout << a << "/" << b << endl;
	};
}



	




}