#pragma once
#include <iostream>

using namespace std;
using namespace System;

class Nave
{
protected:
	int x, y, l, h, dx, dy,model;
	bool arrive;
public:
	Nave();
	Nave(int x, int y/*, int ph, int pl*/);
	~Nave();
	int getX();
	int gety();
	bool getArrive();
	/*int getdx();
	int getdy();*/
	//int geth();
	void setX(int _x);
	void setY(int _y);
	void setArrive(int _arrive);
	/*void setdx(int _dx);
	void setdy(int _dy);*/
	/*void seth(int _h);
	void setl(int _w);*/

	void move();
};

