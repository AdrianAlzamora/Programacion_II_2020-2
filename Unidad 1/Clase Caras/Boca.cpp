#include "Boca.h"

Boca::Boca() {
	forma = (char)220;
}
Boca::~Boca() {}

void Boca::setX(int _x) { x = _x; }
void Boca::setY(int _y) { y = _y; }
void Boca::setL(int _l) { l = _l; }
void Boca::setColor(int _color) { color = _color; }

int Boca::getX() { return x; }
int Boca::getY() { return y; }
int Boca::getL() { return l; }
int Boca::getColor() { return color; }

void Boca::Draw() {
	if (color == 1) Console::ForegroundColor = ConsoleColor::Blue;
	if (color == 2) Console::ForegroundColor = ConsoleColor::Red;
	if (color == 3) Console::ForegroundColor = ConsoleColor::Green;
	if (color == 4) Console::ForegroundColor = ConsoleColor::Yellow;
	for (int i = 0; i < l; i++) {
		Console::SetCursorPosition(x + i, y);
		cout << forma;
	}
}
void Boca::Sonrie() {
	if (color == 1) Console::ForegroundColor = ConsoleColor::Blue;
	if (color == 2) Console::ForegroundColor = ConsoleColor::Red;
	if (color == 3) Console::ForegroundColor = ConsoleColor::Green;
	if (color == 4) Console::ForegroundColor = ConsoleColor::Yellow;
	Console::SetCursorPosition(x-1,y-1);
	cout << forma;
	for (int i = 0; i < l; i++) {
		Console::SetCursorPosition(x + i, y);
		cout << forma;
	}
	Console::SetCursorPosition(x + l, y-1);
	cout << forma;
}
void Boca::Triste() {
	if (color == 1) Console::ForegroundColor = ConsoleColor::Blue;
	if (color == 2) Console::ForegroundColor = ConsoleColor::Red;
	if (color == 3) Console::ForegroundColor = ConsoleColor::Green;
	if (color == 4) Console::ForegroundColor = ConsoleColor::Yellow;
	Console::SetCursorPosition(x - 1, y + 1);
	cout << forma;
	for (int i = 0; i < l; i++) {
		Console::SetCursorPosition(x + i, y);
		cout << forma;
	}
	Console::SetCursorPosition(x + l, y + 1);
	cout << forma;
}
void Boca::Borrar() {
	for (int i = 0; i < l; i++)
	{
		Console::SetCursorPosition(x + i, y);
		cout << ' ';
	}
}
