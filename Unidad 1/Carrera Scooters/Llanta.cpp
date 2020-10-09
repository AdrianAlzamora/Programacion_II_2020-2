#include "Llanta.h"
Llanta::Llanta(){
	forma = 'O';
}
Llanta::~Llanta() {}

int Llanta::retornar_x() { return x; }
int Llanta::retornar_y() { return y; }
int Llanta::retornar_c() { return c; }
int Llanta::retornar_dx() { return dx; }

void Llanta::cambiar_x(int nuevo) { x = nuevo; }
void Llanta::cambiar_y(int nuevo) { y = nuevo; }
void Llanta::cambiar_c(int nuevo) { c = nuevo; }
void Llanta::cambiar_dx(int nuevo) { dx = nuevo; }

void Llanta::Dibujar() {
	if (c == 1) Console::ForegroundColor = ConsoleColor::Blue;
	if (c == 2) Console::ForegroundColor = ConsoleColor::Red;
	if (c == 3) Console::ForegroundColor = ConsoleColor::Green;
	if (c == 4) Console::ForegroundColor = ConsoleColor::Yellow;
	if (c == 5) Console::ForegroundColor = ConsoleColor::Cyan;
	if (c == 6) Console::ForegroundColor = ConsoleColor::DarkBlue;
	if (c == 7) Console::ForegroundColor = ConsoleColor::DarkMagenta;
	if (c == 8) Console::ForegroundColor = ConsoleColor::Magenta;
	if (c == 9) Console::ForegroundColor = ConsoleColor::White;
	if (c == 10) Console::ForegroundColor = ConsoleColor::DarkCyan;

	Console::SetCursorPosition(x, y);
	cout << forma;
}
void Llanta::Borrar() {
	Console::SetCursorPosition(x, y);
	cout << ' ';
}
void Llanta::Mover(int MAXw, int MAXh) {
	Borrar();
	x = x + dx;
	Dibujar();
}