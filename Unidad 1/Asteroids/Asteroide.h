#pragma once
#include "Figura.h"
class Asteroide :   public Figura
{private:
public:
	Asteroide();
	Asteroide(int px, int py, int ph, int pl);
	~Asteroide();
	void Mover(int maxW, int maxH);
	void Dibujar();
};

