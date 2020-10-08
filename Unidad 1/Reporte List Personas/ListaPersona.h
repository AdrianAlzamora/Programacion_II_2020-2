#pragma once
#include <vector>
#include "Persona.h"
#include <ctime>
class ListaPersona
{
private:
	vector<Persona*> listadoPersona;

public:
	ListaPersona();
	~ListaPersona();

	void registrarPersona(Persona* persona);
	void registrarPersona(string n, int e, double p, bool v, char ec);
	void eliminarPersona(int Pos);

	vector<Persona*> getListadoPersona();
	vector<Persona*> reporte1();
	void initListaPersona();
};

