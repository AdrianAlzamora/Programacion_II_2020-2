#pragma once
#include<iostream>
#include "Scooter.h"

class Competencia
{
private:
	Scooter** Scooters;
	int* ce;
	int* y;
	int* ganador;
public:
	Competencia();
	~Competencia();

	void InsertarPlayers();
	void Mostrar();
	void Mover(int MaxW, int MaxH);
	int retorna_ganador();
	
};

