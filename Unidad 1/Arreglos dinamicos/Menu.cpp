#include <iostream>
#include <conio.h>
using namespace std;

#include "ArregloPersonas.h"

int main()
{
	ArregloPersonas* A = new ArregloPersonas();

	string name;
	int age, pos;
	Persona* persona;

	int opc;
	while (true)
	{
		do
		{
			system("cls");
			cout << "Lista de amigos" << endl;
			cout << "1.- Mostrar Amigos" << endl;
			cout << "2.- Agregar Amigo" << endl;
			cout << "3.- Elimiar Amigo" << endl;
			cout << "4.- Modificar Amigo" << endl;
			cout << "5.- Salir" << endl;
			cout << "Opcion: ";
			cin >> opc;
		} while (!(opc >=1 && opc <=5));
		switch (opc)
		{
		case 1:
			A->Mostrar();
			break;
		case 2:
			cout << "Ingrese el nombre: "; cin >> name;
			cout << "Ingrese la edad: "; cin >> age;
			A->Agregar(new Persona(name, age));
			break;
		case 3: 
			cout << "Ingrese la posicion a eliminar: "; cin >> pos;
			A->Eliminar(pos);
			break;
		case 4:
			cout << "Ingrese la posicion a modificar: "; cin >> pos;
			persona = A->get(pos);
			cout << "Ingrese el nombre: ";
			cin >> name;
			cout << "Ingrese la edad: ";
			cin >> age;

			persona->setName(name);
			persona->setAge(age);
			break;
		case 5:
			delete A;
			return 0;

		}

		getch();
	}


}