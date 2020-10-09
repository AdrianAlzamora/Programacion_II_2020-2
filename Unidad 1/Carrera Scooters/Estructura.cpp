#include "Estructura.h"
Estructura::Estructura(){
	forma = (char)193;
}

Estructura::~Estructura(){}

int Estructura::retornar_x() { return x; }
int Estructura::retornar_y(){ return y; }
int Estructura::retornar_c(){ return c; }
int Estructura::retornar_dx(){ return dx; }

void Estructura::cambiar_x(int nuevo) { x = nuevo; }
void Estructura::cambiar_y(int nuevo) { y = nuevo; }
void Estructura::cambiar_c(int nuevo) { c = nuevo; }
void Estructura::cambiar_dx(int nuevo){ dx = nuevo; }

void Estructura::Dibujar(){
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
void Estructura::Borrar(){
	Console::SetCursorPosition(x, y);
	cout << ' ';
}
void Estructura::Mover(int MAXw, int MAXh){
	Borrar();
	if (x + dx < MAXw)
		x = x + dx;
	Dibujar();
}