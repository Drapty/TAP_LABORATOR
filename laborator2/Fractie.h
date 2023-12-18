#pragma once

class Fractie
{
	int numaratorul;
	int numitorul;

public:
	Fractie();
	Fractie(int numaratorul);
	Fractie(int numaratorul, int numitorul);
	void implicit();
	void numarator(int numaratorul);
	void fractie(int numaratorul, int numitorul);
	Fractie(Fractie& nou);
	void divizor_comun(int& a, int& b);
	void adunarea(int numarator1, int numitor1, int& divizor, int numarator2, int numitor2, int& numarator_rez);
	void scaderea(int numarator1, int numitor1, int& divizor, int numarator2, int numitor2, int& rez);
	void impartirea(int numarator1, int numitor1, int numarator2, int numitor2, int& fnumarator, int& fnumitor);
	void imultirea(int numarator1, int numitor1, int numarator2, int numitor2, int& fnumarator, int& fnumitor)
		;
	void simplifica(int a, int b);
	bool egal(const Fractie& fractia1);
	void print(int a, int b);




};