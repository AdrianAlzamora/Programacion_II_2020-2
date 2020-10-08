#pragma once
#include <iostream>

using namespace std;
class Sudoku
{
	// Atrbutes
private:
	const short lado = 9;
	short** tablero;
	//Methods
public: // funciones que van a interactuar con el jugador
	Sudoku();
	~Sudoku();
	void mostrarTablero();
	void escribirNumero();
	bool ContinueGame();
private:  // funciones internas del sudoku para gestionar sus procesos
	void inicializarMatrizValores();
	void liberarMemoriaMatriz();
	bool validarDatosIngresados(short _N, short _x, short _y);
	bool validarRango(short _N, short _min, short _max);




};

