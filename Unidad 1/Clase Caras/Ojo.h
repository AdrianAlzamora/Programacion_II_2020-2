#pragma once
#include <iostream>
using namespace std;
using namespace System;
class Ojo
{
private:
	int x, y;
	int color;
	char forma;
public:
	Ojo();
	~Ojo();

	void setX(int _x);
	void setY(int _y);
	void setColor(int _color);

	int getX();
	int getY();
	int getColor();

	void Draw();
	void Borrar();

};

