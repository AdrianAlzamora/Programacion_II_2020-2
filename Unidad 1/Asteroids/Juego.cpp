#include "Juego.h"
Juego::Juego() {
}
Juego::Juego(int maxW, int maxH) {
	ce = nullptr; //un puntero sin direccion de memoria
	Init(maxW,maxH);
}
void Juego::Init(int maxW, int maxH) {
	obj_nave = new Nave(maxW/2, maxH/2,1,3);//Constructor con Parametros
	if (ce!=nullptr &&  *ce > 0)
	{
		for (int i = 0; i < *ce; i++)
			delete arr_asteroide[i];
	}
	ce = new int;
	*ce = 0;
	vidas = 3;
	puntaje = 0;
	maximoW = maxW;
	maximoH = maxH;
}
void Juego::Run() {
	tiempo_actual = time(0); 
	while (vidas>0)
	{	Console::SetCursorPosition(1, 1);
		cout << "vidas : " << vidas;
		Console::SetCursorPosition(75, 1);
		cout << "puntaje : " << puntaje;

		if (_kbhit())
		{
			char t = getch();
			if (toupper(t) == 'W')  obj_nave->mover_Up(1);
			if (toupper(t) == 'S')  obj_nave->mover_Dw(maximoH);
			if (toupper(t) == 'A')  obj_nave->mover_Lf(1);
			if (toupper(t) == 'D')  obj_nave->mover_Ri(maximoW);
			if (toupper(t) == 'Q')  obj_nave->Disparar();
		
		}
		obj_nave->Dibujar();
		obj_nave->Mover_Balas(maximoW, maximoH);
		Insertar_Asteroides();
		Mover_Asteroides();
		if (Colision_Nave_Asteroide())
			vidas = vidas - 1;
		Colision_Bala_Asteroide();
		_sleep(100);

	}
}
Juego::~Juego() {
	for (int i = 0; i < *ce; i++)
		delete arr_asteroide[i];
	delete[] arr_asteroide;
	delete ce, obj_nave;
}

bool Juego::Colision_Nave_Asteroide()
{
	bool colision = false;
	Drawing::Rectangle rectangulo1;
	rectangulo1.X = obj_nave->retornar_x();
	rectangulo1.Y = obj_nave->retornar_y();
	rectangulo1.Width = obj_nave->retornar_l();
	rectangulo1.Height = obj_nave->retornar_h();
	Drawing::Rectangle rectangulo2;
	for (int i = 0; !colision && i < *ce; i++)
	{
		rectangulo2.X = arr_asteroide[i]->retornar_x();
		rectangulo2.Y = arr_asteroide[i]->retornar_y();
		rectangulo2.Width = arr_asteroide[i]->retornar_l();
		rectangulo2.Height = arr_asteroide[i]->retornar_h();
		if (rectangulo1.IntersectsWith(rectangulo2))
			colision = true;
	}
	return colision;
}

void Juego::Colision_Bala_Asteroide()
{	bool colision = false;
	Drawing::Rectangle rectangulo1;
	for (int j = 0; j < obj_nave->retornar_cant_balas(); j++)
	{	rectangulo1.X = obj_nave->retornar_bala(j)->retornar_x();
		rectangulo1.Y = obj_nave->retornar_bala(j)->retornar_y();
		rectangulo1.Width = obj_nave->retornar_bala(j)->retornar_l();
		rectangulo1.Height = obj_nave->retornar_bala(j)->retornar_h();
		Drawing::Rectangle rectangulo2;
		for (int i = 0; !colision && i < *ce; i++)
		{	rectangulo2.X = arr_asteroide[i]->retornar_x();
			rectangulo2.Y = arr_asteroide[i]->retornar_y();
			rectangulo2.Width = arr_asteroide[i]->retornar_l();
			rectangulo2.Height = arr_asteroide[i]->retornar_h();
			if (rectangulo1.IntersectsWith(rectangulo2))
			{	colision = true;
				puntaje = puntaje + 10;
				Eliminar_Asteroide(i);
				obj_nave->retornar_bala(j)->cambiar_eliminar(true);
			}
		}
	}
	obj_nave->Eliminar_Balas();
}
void Juego::Eliminar_Asteroide(int pos)
{	Asteroide** auxiliar=new Asteroide*[*ce -1];
	int j = 0;
	for (int i = 0; i < *ce; i++)
	{
		if (i != pos)
		{
			auxiliar[j] = arr_asteroide[i]; //guardamos todos a excep. del que se desea eliminar
			j++;
		}
		else
			arr_asteroide[i]->Borrar(); //borrar de pantalla
	}
	arr_asteroide = auxiliar;
	*ce = *ce - 1;
}


void Juego::Insertar_Asteroides() {
	time_t estiempo = time(0);  
	if (difftime(estiempo, tiempo_actual) >= 10)
	{	Asteroide** auxiliar = new Asteroide * [*ce];
		for (int i = 0; i < *ce; i++)
			auxiliar[i] = arr_asteroide[i];
		arr_asteroide = new Asteroide * [*ce + 1];
		for (int i = 0; i < *ce; i++)
			arr_asteroide[i] = auxiliar[i];
		arr_asteroide[*ce] = new Asteroide(maximoW/4, maximoH/4,2,3) ;//constructor con parametros
		*ce = *ce + 1;
		tiempo_actual = time(0);
	}
}
void Juego::Mover_Asteroides() {
	for (int i = 0; i < *ce; i++)
		arr_asteroide[i]->Mover(maximoW, maximoH);
}