#include "Bala.h"


Bala::Bala() {}
Bala::Bala(int px, int py):Figura(px,py,1,1)
{	dy = -1;
	dx = 0;
	eliminar = false;
}
Bala::~Bala() {}
void Bala::Mover(int maxW, int maxH) {
	Borrar();
	if (x + dx<1 || x + dx + l >maxW)
		dx = 0;
	if (y + dy<1 || y + dy + h >maxH)
		dy = 0;
	x = x + dx;
	y = y + dy;
	if (dy == 0) eliminar = true;
	Dibujar();
}

void Bala::Dibujar() {
	Console::SetCursorPosition(x, y);
	cout << (char)24;
}

bool  Bala::retonar_eliminar() { return eliminar; }
void Bala::cambiar_eliminar(bool nuevo) { eliminar = nuevo; }