#pragma once
#include <iostream>
using namespace std;
using namespace System;
class Nariz
{
private:
	int x, y;
	int color;
	char forma;
public:
	Nariz();
	~Nariz();

	void setX(int _x);
	void setY(int _y);
	void setColor(int _color);

	int getX();
	int getY();
	int getColor();

	void Draw();
	void Borrar();
};

