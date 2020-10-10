#include "Nave.h"
Nave::Nave(){}
Nave::Nave(int x, int y/*, int ph, int pl*/){
	this->x = x;
	this->y = y;
	l = 0;
	h = 0;
	
	arrive = false;
	model = 0;
}
Nave::~Nave(){}
int Nave::getX() { return x; }
int Nave::gety() { return y; }
bool Nave::getArrive() { return arrive; }
/*int Nave::getdx(){}
int Nave::getdy(){}
int Nave::geth(){}*/
void Nave::setX(int _x) { x = _x; }
void  Nave::setY(int _y) { y = _y; }
void Nave::setArrive(int _arrive) { arrive = _arrive; }
//void  Nave::setdx(int _dx) { dx = _dx; }
//void  Nave::setdy(int _dy) { dy = _dy; }
//void  Nave::seth(int _h) { h = _h; 
//void  Nave::setl(int _w) { w = _w; }
void Nave::move() {
	if (x + l <= 70) x += rand() % 3 + 1;
	else arrive = true;
}