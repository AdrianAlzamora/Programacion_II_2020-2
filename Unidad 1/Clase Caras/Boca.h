#pragma once
#include <iostream>
using namespace std;
using namespace System;
class Boca
{
private:
	int x, y;
	int l, color;
	char forma;
public:
	Boca();
	~Boca();

	void setX(int _x);
	void setY(int _y);
	void setL(int _l);
	void setColor(int _color);
	
	int getX();
	int getY();
	int getL();
	int getColor();

	void Draw();
	void Sonrie();
	void Triste();
	void Borrar();
	



};

