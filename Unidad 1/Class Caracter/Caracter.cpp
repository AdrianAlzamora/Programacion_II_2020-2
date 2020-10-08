#include "Caracter.h"
#include <iostream>
#include <ctime>
using namespace std;
using namespace System;

Caracter::Caracter(){
	forma = '*';
	dx = 2;
	color = rand()%4+3;
}
Caracter::~Caracter(){}

//Metodos de setter | getter
int Caracter::getColor(){
	return color;
}
void  Caracter::setColor(int colour){
	color = colour;
}
char Caracter::getForma(){
	return forma;
}
void Caracter::setForma(char _forma){
	forma = _forma;
}

int Caracter::getX(){
	return x;
}
void Caracter::setX(int _x){
	x = _x;
}
int Caracter::getY(){
	return y;
}
void Caracter::setY(int _y){
	y = _y;
}

//Metodos de servicio
void Caracter::Borrar(){
	Console::SetCursorPosition(x, y);
	cout << ' ';
}
void Caracter::Dibujar(){
	Console::SetCursorPosition(x, y);
	if (color == 0) Console::ForegroundColor = ConsoleColor::White;
	if (color == 1) Console::ForegroundColor = ConsoleColor::Red;
	if (color == 2) Console::ForegroundColor = ConsoleColor::Green;
	if (color == 3) Console::ForegroundColor = ConsoleColor::Yellow;
	if (color == 4) Console::ForegroundColor = ConsoleColor::Blue;

	cout << forma;

}
void Caracter::Mover(int MaxW, int MaxH) { // Mover con las dimensiones de la pantalla
	Borrar();

	if (x<1 || x + dx> MaxW) {
		dx = dx * -1;
		color = rand() % 4 + 1;
	}
	x = x + dx;
	Dibujar();
}
