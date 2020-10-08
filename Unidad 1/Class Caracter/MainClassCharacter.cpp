#include "Caracter.h"
#include <conio.h>
#include <iostream>
#include <ctime>

int main() {
	srand(time(NULL));
	Caracter* character1;
	character1 = new Caracter();
	character1->setX(10);
	character1->setY(10);
	while (1) {
		
		character1->Mover(80, 25);
		_sleep(100);
	}

	//delete character1;

	system("pause");
	return 0;
}