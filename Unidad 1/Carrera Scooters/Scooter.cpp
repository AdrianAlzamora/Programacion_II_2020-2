#include "Scooter.h"
Scooter::Scooter(){}
Scooter::Scooter(int px, int py){
	c = rand() % (10) + 1;
	dx = rand() % (5) + 1;
	x = px; y = py;

	mi_estruct = new Estructura();
	mi_estruct->cambiar_x(x+1);
	mi_estruct->cambiar_y(y+1);
	mi_estruct->cambiar_c(c);
	mi_estruct->cambiar_dx(dx);
	
	arr_llanta = new Llanta * [2];
	arr_llanta[0] = new Llanta();
	arr_llanta[0]->cambiar_x(x);
	arr_llanta[0]->cambiar_y(y+1);
	arr_llanta[1] = new Llanta();
	arr_llanta[1]->cambiar_x(x+2);
	arr_llanta[1]->cambiar_y(y+1);
	for (int i = 0; i < 2; i++)
	{
		arr_llanta[i]->cambiar_c(c);
		arr_llanta[i]->cambiar_dx(dx);
	}

}

Scooter::~Scooter(){
	delete mi_estruct;
	for (int i = 0; i < 2; i++)
		delete arr_llanta[i];

	delete[] arr_llanta;
	
}
void Scooter::Borrar(){
	mi_estruct->Borrar();
	for (int i = 0; i < 2; i++)
		arr_llanta[i]->Borrar();
}
void Scooter::Dibujar(){
	mi_estruct->Dibujar();
	for (int i = 0; i < 2; i++)
		arr_llanta[i]->Dibujar();
	
}
void Scooter::Mover(int MAXw,int MAXh){
	Borrar();
	if (x + dx + mi_estruct->retornar_dx ()< MAXw) {
		x = x + dx;
		mi_estruct->Mover(MAXw,MAXh);
		for (int i = 0; i < 2; i++) {
			arr_llanta[i]->Mover(MAXw,MAXh);
			}
	}
	else {
		dx = 0;
		mi_estruct->cambiar_dx(dx);
		for (int i = 0; i < 2; i++) {
			arr_llanta[i]->cambiar_dx(dx);
		}
	}
	Dibujar();
}
int Scooter::Meta(int MaxW) {
	if (x + dx < MaxW) {
		return dx;
	}
	else {
		return dx;
	}
}