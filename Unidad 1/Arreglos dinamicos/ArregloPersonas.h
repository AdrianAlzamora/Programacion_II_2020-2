#pragma once
#include "Persona.h"

//(TipoDato)* nombre = new (TipoDato)[cantidad];
//(Persona*)* arreglo = new (Persona*)[cant]
//Persona** arreglo = new Persona*[cant]

class ArregloPersonas
{
private: 
	Persona** array;
	int ce;
public:
	ArregloPersonas();
	~ArregloPersonas();

	void Agregar(Persona* nuevo);
	void Eliminar(int pos);
	Persona* get(int pos);

	void Mostrar();

};

