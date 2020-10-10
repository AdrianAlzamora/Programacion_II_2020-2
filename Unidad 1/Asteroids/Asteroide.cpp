#include "Asteroide.h"

Asteroide::Asteroide(){}
Asteroide::Asteroide(int px, int py, int ph, int pl):Figura(px,py,ph,pl)
{
	dx = dy = 1;
}
Asteroide::~Asteroide() {}
void Asteroide::Mover(int maxW, int maxH) {
	Borrar();
	if (x + dx<1 || x + dx + l>maxW)
		dx = dx * -1;
	if (y + dy<1 || y + dy + h>maxH)
		dy = dy * -1;
	x = x + dx;
	y = y + dy;
	Dibujar();
}
void Asteroide::Dibujar() {
	Console::SetCursorPosition(x, y);
	cout << ' ' <<(char)220;
	Console::SetCursorPosition(x, y+1);
	cout << (char)223<<(char)219<< (char)223;
}
