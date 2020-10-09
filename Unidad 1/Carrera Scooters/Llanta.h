#pragma once
#include<iostream>
using namespace std;
using namespace System;

class Llanta
{
private:
	char forma;
	int x, y, c, dx;
public:
	Llanta();
	~Llanta();
	
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


