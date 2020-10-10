#include "Ojo.h"

Ojo::Ojo() {
	forma = (char)184;
}
Ojo::~Ojo() {}

void Ojo::setX(int _x) { x = _x; }
void Ojo::setY(int _y) { y = _y; }
void Ojo::setColor(int _color) { color = _color; }

int Ojo::getX() { return x; }
int Ojo::getY() { return y; }
int Ojo::getColor() { return color; }

void Ojo::Draw() {
	if (color == 1) Console::ForegroundColor = ConsoleColor::Blue;
	if (color == 2) Console::ForegroundColor = ConsoleColor::Red;
	if (color == 3) Console::ForegroundColor = ConsoleColor::Green;
	if (color == 4) Console::ForegroundColor = ConsoleColor::Yellow;
	Console::SetCursorPosition(x, y);
	cout << forma;

}
void Ojo::Borrar() {
	Console::SetCursorPosition(x, y);
	cout << ' ';
}