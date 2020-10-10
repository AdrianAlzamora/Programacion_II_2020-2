#include "Competicion.h"
Competicion::Competicion(){
	cont = 0;
	objalfa = new Alfa(0, 0);
	objbeta = new Beta(0, 6);
	objgamma = new Gamma(0, 12);
}
Competicion::~Competicion(){}
void Competicion::drawEverything(){
	if (cont < 1) {
		Console::Clear();
		objalfa->draw();
		objbeta->draw();
		objgamma->draw();
		for (int i = 0; i < 20; i++) {
			Console::SetCursorPosition(70, i); cout << "|";
		}
	}
}
void Competicion::moveEverything(){
	objalfa->move();
	objbeta->move();
	objgamma->move();

}
void Competicion::again() {
	objalfa->setX(0); objalfa->setY(0);
	objbeta->setX(0); objbeta->setY(6);
	objgamma->setX(0); objgamma->setY(12);
}