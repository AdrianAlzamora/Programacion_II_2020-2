#include "ArregloPersonas.h"

ArregloPersonas::ArregloPersonas(){
	array = nullptr;
	ce = 0;
}
ArregloPersonas::~ArregloPersonas(){
	for (int i = 0; i < ce; i++)
		delete array[i];
	if (array != nullptr)
		delete[] array;

	
}

void ArregloPersonas::Agregar(Persona* nuevo){
	Persona** aux = new Persona * [ce + 1];
	for (int i = 0; i < ce; i++)
	{
		aux[i] = array[i];
	}
	aux[ce] = nuevo;
	if (array != nullptr)
		delete[] array;
	array = aux;
	ce++;

}
void ArregloPersonas::Eliminar(int pos) {
	Persona** aux = new Persona * [ce - 1];
	for (int i = 0; i < pos; i++)
	{
		aux[i] = array[i];
	}
	for (int i = pos; i < ce-1; i++)
	{
		aux[i] = array[i + 1]; // deplaza hacia los valores restantes del arreglo
	}
	delete array[pos];  // se borra la posicion del arreglo de la memoria
	//Se borra el arreglo auxliar de la memoria
	if (array != nullptr)
		delete[] array;
	array = aux;
	ce--;

}
Persona* ArregloPersonas::get(int pos){
	return array[pos];
}

void ArregloPersonas::Mostrar(){
	for (int i = 0; i < ce; i++)
	{
		cout << i << ". ";
		array[i]->Mostrar();
	}
}
