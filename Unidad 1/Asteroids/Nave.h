#pragma once
#include "Figura.h"
#include "Bala.h"
class Nave: public Figura
{
private:
	Bala** arr_bala;
	int *ce;
public:
	Nave();
	Nave(int px, int py, int ph, int pl);
	~Nave();
	void mover_Up(int minH);
	void mover_Dw(int maxH);
	void mover_Ri(int maxW);
	void mover_Lf(int minW);
	void Dibujar();
	void Disparar();
	void Mover_Balas(int maxW, int maxH);
	int retornar_cant_balas();
	Bala* retornar_bala(int pos);
	void Eliminar_Balas();

};

