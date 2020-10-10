#pragma once
#include "Nave.h"
#include "Asteroide.h"
#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;
using namespace System;
class Juego
{
private:
	Nave* obj_nave;
	Asteroide** arr_asteroide;
	int* ce;
	int vidas;
	int puntaje;
	int maximoW, maximoH;
	time_t tiempo_actual;
public:
	Juego();
	Juego(int maxW, int maxH);
	void Init(int maxW,int maxH);
	void Run();
	void Insertar_Asteroides();
	void Mover_Asteroides();
	bool Colision_Nave_Asteroide();
	void Colision_Bala_Asteroide();
	void Eliminar_Asteroide(int pos);
	~Juego();
};

