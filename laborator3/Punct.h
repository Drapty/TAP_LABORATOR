#pragma once

class Punct
{
public:
	int x;
	int y;
	static int n; // dreapta
	static int a; // contor puncte dreapta
	static int b; // contor puncte pozitive
	static int c; // contor puncte negative

	Punct(int x,int y);
	Punct(const Punct &punctnou);
	~Punct();
	friend int distanta(int dis1, int dis2);
	friend class Dreapta;

private:

};
