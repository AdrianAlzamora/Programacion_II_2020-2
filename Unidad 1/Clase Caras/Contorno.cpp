#include "Contorno.h"

Contorno::Contorno() {
	forma = (char)219;
}
Contorno::~Contorno() {}

void Contorno::setX(int _x) { x = _x; }
void Contorno::setY(int _y) { y = _y; }
void Contorno::setL(int _l) { l = _l; }
void Contorno::setColor(int _color) { color = _color; }

int Contorno::getX() { return x; }
int Contorno::getY() { return y; }
int Contorno::getL() { return l; }
int Contorno::getColor() { return color; }

void Contorno::Draw() {
	if (color == 1) Console::ForegroundColor = ConsoleColor::Blue;
	if (color == 2) Console::ForegroundColor = ConsoleColor::Red;
	if (color == 3) Console::ForegroundColor = ConsoleColor::Green;
	if (color == 4) Console::ForegroundColor = ConsoleColor::Yellow;
	
	

	for (int i = 0; i < l; i++) {
		Console::SetCursorPosition(x , ((y - 5)+i));
		cout << forma;
		
	}
	for (int i = 0; i < l; i++) {
		Console::SetCursorPosition(x+1+ i, y);
		cout << forma;
	}

	
}

void Contorno::Borrar() {
	for (int i = 0; i < l; i++)
	{
		Console::SetCursorPosition(x + i, y);
		cout << ' ';
	}
}
