#pragma once

class Caracter
{
private:
	int color;
	int x, y; // Console Position 
	int  dx; // diferencial de la distance in X | Movimiento
	char forma;
public:
	Caracter();
	~Caracter();

	//Metodos de setter | getter
	int getColor();
	void  setColor(int colour);
	char getForma();
	void setForma(char _forma);

	int getX();
	void setX(int _x);
	int getY();
	void setY(int _y);

	//Metodos de servicio
	void Borrar();
	void Dibujar();
	void Mover(int MaxW, int MaxH); // Mover con las dimensiones de la pantalla



};

