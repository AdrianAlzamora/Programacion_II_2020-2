#include "Nariz.h"
Nariz::Nariz(){
	forma = (char)254;
}
Nariz::~Nariz(){}

void Nariz::setX(int _x) { x = _x; }
void Nariz::setY(int _y) { y = _y; }
void Nariz::setColor(int _color) { color = _color; }

int Nariz::getX() { return x; }
int Nariz::getY() { return y; }
int Nariz::getColor() { return color; }

void Nariz::Draw(){
	if (color == 1) Console::ForegroundColor = ConsoleColor::Blue;
	if (color == 2) Console::ForegroundColor = ConsoleColor::Red;
	if (color == 3) Console::ForegroundColor = ConsoleColor::Green;
	if (color == 4) Console::ForegroundColor = ConsoleColor::Yellow;
	Console::SetCursorPosition(x , y);
	cout << forma;

}
void Nariz::Borrar(){
	Console::SetCursorPosition(x, y);
	cout << ' ';
}