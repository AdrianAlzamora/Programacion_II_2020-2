#include "Competencia.h"
Competencia::Competencia(){
	ce = new int;
	*ce = 0;
	y = new int;
	*y = 2;
	ganador=new int;
	*ganador=-1;
}
Competencia::~Competencia(){
	for (int i = 0; i < *ce; i++) {
		delete Scooters[i];
	}
	delete ce, y, ganador;
	delete[] Scooters;
}

void Competencia::InsertarPlayers() {
	Scooter** aux = new Scooter * [*ce];
	for (int i = 0; i < *ce; i++)
	{
		aux[i] = Scooters[i];
	}
	Scooters = new Scooter * [*ce + 1];
	for (int i = 0; i < *ce; i++)
	{
		Scooters[i] = aux[i];
	}
	Scooters[*ce] = new Scooter(3, *y);
	*y = *y + 2;
	*ce = *ce + 1;
}

void Competencia::Mostrar() {
	for (int i = 0; i < *ce; i++)
	{
		Scooters[i]->Dibujar();
	}
}
void Competencia::Mover(int MaxW, int MaxH) {
	for (int i = 0; i < *ce; i++)
	{
		Scooters[i]->Mover(MaxW, MaxH);
	}
	for (int i = 0; i < *ce; i++)
	{
		if (Scooters[i]->Meta(MaxW) == 0) {
			*ganador = i;
		}
	}
}
int Competencia::retorna_ganador() { return *ganador; }
