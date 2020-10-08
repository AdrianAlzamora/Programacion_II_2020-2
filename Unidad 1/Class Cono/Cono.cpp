#include "Cono.h"
#include <iostream>

using namespace std;

int main() {
	Cono* cono1;
	cono1 = new Cono();
	cono1->setRadio(5);
	cono1->setGtriz(2);
	cono1->setH(4);

	Cono* cono2 = new Cono(2, 4, 5);

	cout << "Datos del cono 1" << endl;
	cout << "Radio : " << cono1->getRadio() << endl;
	cout << "Altura : " << cono1->getH() << endl;
	cout << "Generatriz: " << cono1->getGtriz() << endl;
	cout << "Area : " << cono1->Area() << endl;
	cout << "Volumen: " << cono1->Volumen() << endl;
	cout << "Datos del cono 2" << endl;
	cout << "Radio : " << cono2->getRadio() << endl;
	cout << "Altura : " << cono2->getH() << endl;
	cout << "Generatriz: " << cono2->getGtriz() << endl;
	cout << "Area : " << cono2->Area() << endl;
	cout << "Volumen: " << cono2->Volumen() << endl;

	system("pause");
	return 0;
}