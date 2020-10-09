#pragma once
#include<iostream>
using namespace std;
using namespace System;
class Estructura
{
private:
	int x, y, c, dx;
	char forma;

public:

	Estructura();
	~Estructura();

	int retornar_x();
	int retornar_y();
	int retornar_c();
	int retornar_dx();

	void cambiar_x(int nuevo);
	void cambiar_y(int nuevo);
	void cambiar_c(int nuevo);
	void cambiar_dx(int nuevo);
	
	void Dibujar();
	void Borrar();
	void Mover(int MAXw, int MAXh);

};


