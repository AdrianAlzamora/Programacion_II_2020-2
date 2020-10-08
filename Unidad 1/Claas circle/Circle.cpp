#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
	Circle* cir1;
	cir1 = new Circle();
	cir1->setRadio(2);

	Circle* cir2 = new Circle(5);

	cout << "Datos del circulo 1 : " << endl;
	cout << "Radio : " << cir1->getRadio()<<endl;
	cout << "Area : " << cir1->Area() << endl;
	cout << "Datos del circulo 2 : " << endl;
	cout << "Radio : " << cir2->getRadio()<<endl;
	cout << "Area : " << cir2->Area() << endl;



	system("pause");
	return 0;
}