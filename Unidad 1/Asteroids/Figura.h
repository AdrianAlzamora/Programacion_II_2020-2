#pragma once
#include <iostream>
using namespace std;
using namespace System;
class Figura
{
protected:
	int x, y, h, l, dx, dy;
public:
	Figura();
	Figura(int px, int py, int ph, int pl);
	~Figura();
	int retornar_x();
	void cambiar_x(int nuevo);
	int retornar_y();
	void cambiar_y(int nuevo);
	int retornar_dx();
	void cambiar_dx(int nuevo);
	int retornar_dy();
	void cambiar_dy(int nuevo);
	int retornar_h();
	void cambiar_h(int nuevo);
	int retornar_l();
	void cambiar_l(int nuevo);
	void Borrar();
};

