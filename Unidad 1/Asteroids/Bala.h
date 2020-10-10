#pragma once
#include "Figura.h"
#include <iostream>
using namespace std;
using namespace System;
class Bala: public Figura
{
private:
	bool eliminar;
	
public:
	Bala();
	Bala(int px, int py);
	~Bala();
	void Mover(int maxW, int maxH);
	void Dibujar();
	bool retonar_eliminar();
	void cambiar_eliminar(bool nuevo);

};

