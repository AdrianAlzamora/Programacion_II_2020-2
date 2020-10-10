#pragma once
#include <iostream>
using namespace std;
using namespace System;
class Contorno
{
private:
	int x, y;
	int l, color;
	char forma;
public:
	Contorno();
	~Contorno();

	void setX(int _x);
	void setY(int _y);
	void setL(int _l);
	void setColor(int _color);

	int getX();
	int getY();
	int getL();
	int getColor();

	void Draw();
	
	void Borrar();


};

