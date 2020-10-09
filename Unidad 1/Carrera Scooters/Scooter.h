#pragma once
#include "Estructura.h"
#include "Llanta.h"

class Scooter
{
private:
	Estructura* mi_estruct;
	Llanta** arr_llanta;
	int x, y, dx, c;

public:
	Scooter();
	Scooter(int px, int py);
	~Scooter();
	void Borrar();
	void Dibujar();
	void Mover(int MAXw, int MAXh);
	int Meta(int MaxW);
	
};


