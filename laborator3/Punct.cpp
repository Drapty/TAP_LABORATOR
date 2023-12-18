#include "Punct.h";

Punct::Punct(int x,int y)
{
	this->x = x;
	this->y = y;
	//a++;
	//b++;
	//c++;
}

Punct::Punct(const Punct& punctnou)
{
	this->x = punctnou.x;
	this->y = punctnou.y;
	//if (m*)
	a++;
	b++;
	c++;
}

Punct::~Punct()
{
	a--;
	b--;
	c--;
}


int distanta(int dis1, int dis2)
{
	int dis;
	dis = dis1 + dis2;
	return dis;
}
