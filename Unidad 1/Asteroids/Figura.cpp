#include "Figura.h"
Figura::Figura() {}
Figura::Figura(int px, int py, int ph, int pl)
{
	x = px;
	y = py;
	h = ph;
	l = pl;
}
Figura::~Figura() {}
int Figura::retornar_x() { return x; }
void Figura::cambiar_x(int nuevo) { x = nuevo; }
int Figura::retornar_y() { return y; }
void Figura::cambiar_y(int nuevo) { y = nuevo; }
int Figura::retornar_dx() { return dx; }
void Figura::cambiar_dx(int nuevo) { dx = nuevo; }
int Figura::retornar_dy() { return dy; }
void Figura::cambiar_dy(int nuevo) { dy = nuevo; }
int Figura::retornar_h() { return h; }
void Figura::cambiar_h(int nuevo) { h = nuevo; }
int Figura::retornar_l() { return l; }
void Figura::cambiar_l(int nuevo) { l = nuevo; }
void Figura::Borrar()
{
	for (int i = 0; i < l; i++)
		for (int j = 0; j < h; j++)
		{
			Console::SetCursorPosition(x + i, y + j);
			cout << ' ';
		}
}