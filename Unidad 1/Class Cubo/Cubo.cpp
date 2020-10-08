#include "Cubo.h"
#include <iostream>
using namespace std;

int main() {
	Cubo* c1;
	c1 =  new Cubo();
	c1->setLado(50);

	Cubo* c2 = new Cubo(20);

	cout << "Datos del Cubo 1" << endl;
	cout << "Lado : " << c1->getLado() << endl;
	cout << "Volumen: " << c1->volumen() << endl;
	//
	cout << "Datos del Cubo 2" << endl;
	cout << "Lado : " << c2->getLado() << endl;
	cout << "Volumen: " << c2->volumen() << endl;

	system("pause");
	return 0;
}