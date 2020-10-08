#include "Soduko.h"

Sudoku::Sudoku() { inicializarMatrizValores(); }
Sudoku::~Sudoku() { liberarMemoriaMatriz(); }


void Sudoku::inicializarMatrizValores() {
	//Indica que la matriz endra 'lado' filas

	this->tablero = new short* [this->lado];
	//Para cada fila
	for (short i = 0; i <= this->lado; i++)
	{
		// Cada fila tendrá 'lado' columnas
		this->tablero[i] = new short[this->lado];
		//Incializando cada columna ,,,
		for (short j = 0; j <= this->lado; j++)
		{
			//.. con valor o
			this->tablero[i][j] = 0;
		}
	}
}
void Sudoku::liberarMemoriaMatriz() {
	//recorriendo la matriz/tablero filaxfila para...
	for (short i = 0; i <= this->lado; i++)
	{
		//... disponibilizar la memoria ocupada por cada fila de la matriz(tablero)
		delete[] this->tablero[i];
	}
	//Disponibiliza la memoria , apuntada por matrizValores ocupada
	//por el vector de punteros a las filas
	delete[] this->tablero;
}
void Sudoku::escribirNumero() {
	short N, x, y;
	cout << "Ingrese " << endl;
	cout << "Numero: ";cin>>N;
	cout << "X: ";cin>>x;
	cout << "y: ";cin>>y;
	x--; y--;// Cambiando de posicion a indice;
	if (validarDatosIngresados(N, x, y))
		this->tablero[y][x] = N;
	else {
		cout << "Valores inigresados incorrectos. " << endl;
		system("pause");
	}

}
bool Sudoku::ContinueGame() {
	for (short i = 0; i < 9; i++)
		for (short j = 0; j < 9; j++)
		{
			if (this->tablero[i][j] == 0)
				return true;
		}
	//No hay mas casillas para llenar
	cout << "Felicitaciones, lo has conseguido." << endl;
	return false;
	
}
void Sudoku::mostrarTablero(){
	system("cls");
	for (short i = 0; i < 9; i++)
	{
		if (i % 3 == 0)cout << "+---+---+---+" << endl;
		for (short j = 0; j < 9; j++)
		{
			if (j % 3 == 0) cout << "|";
			if (this->tablero[i][j] == 0) cout << "*";
			else cout << this->tablero[i][j];
		}
		cout << "|" << endl;
	}
	cout << "+---+---+---+" << endl;
}



bool Sudoku::validarDatosIngresados(short _N, short _x, short _y){
	if (_N == 0)
		return true;
	if (_N > 0) {
		if (!(this->validarRango(_N, 1, 9) &&
			this->validarRango(_x, 0, this->lado - 1) &&
			this->validarRango(_y, 0, this->lado - 1)
			))
			return false;
		for (short i = 0; i < 9; i++)
			if (i != _x && this->tablero[_y][i] == _N)
				return false;
		for (short i = 0; i < 9; i++)
		{
			if (i != _y && this->tablero[i][_x] == _N)
				return false;
		}
		short casillaX = (_x / 3) * 3;
		short casillaY = (_y / 3) * 3;
		for (short i = casillaX; i < casillaX+3; i++)
		{
			for (short j = casillaY; j < casillaY+3; j++)
			{
				if ((_x != i && _y != j) && this->tablero[_y][_x] == _N)
					return false;
			}
		}
	}
	return true;
}
bool Sudoku::validarRango(short N, short min, short max){
	if (N >= min && N <= max) return true;
	else return false;
}

int main() {
	Sudoku juego = Sudoku();
	do{
		juego.mostrarTablero();
		juego.escribirNumero();
	}while(juego.ContinueGame());

	return 0;
}
