#include "Nave.h"

Nave::Nave() {}
Nave::Nave(int px, int py, int ph, int pl):Figura(px,py,ph,pl)
{	dx = 1;
	dy = 1;
	ce = new int;
	*ce = 0;
}
Nave::~Nave() {
	for (int i = 0; i < *ce; i++)
		delete arr_bala[i];
	delete[] arr_bala;
	delete ce;
}
void Nave::mover_Up(int minH) 
{	Borrar();
	if (y-dy>minH)
	y = y - dy;
}
void Nave::mover_Dw(int maxH) 
{	Borrar();
	if (y + dy+h < maxH)
		y = y + dy;
}
void Nave::mover_Ri(int maxW) 
{	Borrar();
	if (x + dx+l< maxW)
		x = x + dx;
}
void Nave::mover_Lf(int minW) 
{	Borrar();
	if (x - dx > minW)
		x = x - dx;
}
void Nave::Dibujar() 
{
	Console::SetCursorPosition(x, y);
	cout << (char) 220<<(char)206<<(char)220;
}
void Nave::Disparar()
{
	Bala** auxiliar = new Bala * [*ce];
	for (int i = 0; i < *ce; i++)
		auxiliar[i]=arr_bala[i];
	arr_bala = new Bala * [*ce+1];
	for (int i = 0; i < *ce; i++)
		arr_bala[i] = auxiliar[i];
	arr_bala[*ce] = new Bala(x + l / 2, y-1);
	*ce = *ce + 1;
	delete auxiliar;
}
void Nave::Mover_Balas(int maxW, int maxH)
{
	for (int i = 0; i < *ce; i++)
		arr_bala[i]->Mover(maxW, maxH);
}


int Nave::retornar_cant_balas() {
	return *ce;
}
Bala* Nave::retornar_bala(int pos)
{
	return arr_bala[pos];
}

void Nave::Eliminar_Balas()
{
	int contador = 0;
	for (int i = 0; i < *ce; i++)
		contador = contador + arr_bala[i]->retonar_eliminar() ? 1 : 0;
	Bala** auxiliar= new Bala*[*ce - contador];
	int j = 0;
	for (int i = 0; i < *ce; i++)
	{
		if (!arr_bala[i]->retonar_eliminar())
		{
			auxiliar[j] = arr_bala[i];
			j++;
		}
		else
			arr_bala[i]->Borrar();
	}
	arr_bala = auxiliar;
	*ce = *ce - contador;
}

