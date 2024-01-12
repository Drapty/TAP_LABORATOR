#pragma once
#include <iostream>
using namespace std;
class Fractie {
public:
	int numarator, numitor;

	Fractie(int numarator = 0, int numitor = 1);
	Fractie(const Fractie&);
	~Fractie();
	Fractie operator-() const ;




	Fractie operator+(const Fractie&) const;

	friend Fractie operator-(const Fractie&, const Fractie&);

	Fractie operator*(Fractie&);//imultirea obiectul curent cu parametrul dat
	Fractie operator/(Fractie&);//impartima obiectul curent cu parametrul dat
	//friend Fractie operator/(const Fractie&,const Fractie&);
	friend int cmmdc(int, int);
	Fractie& operator*=(Fractie&);//NU poate fi freind intrucat schimba obiectul curent
	friend bool operator<(const Fractie&, const Fractie&);
	friend bool operator>(const Fractie&,const Fractie&);
	friend bool operator!=(const Fractie&,const Fractie&);
	friend bool operator<=(const Fractie&, const Fractie&);
	friend bool operator>=(const Fractie&, const Fractie&);
    bool operator==(const Fractie&);

	friend Fractie operator>>(istream&,const Fractie&);
    friend Fractie operator<<(ofstream&, const Fractie&);

	Fractie operator++(int i);
    Fractie operator--(int i);
	Fractie operator++(int j);
	Fractie operator--(int j);

	Fractie operator-=(const Fractie&);
	Fractie operator+=(const Fractie&);


};
