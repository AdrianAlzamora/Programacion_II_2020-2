#include "Competencia.h"
#include <ctime>
#include <conio.h>
int main() {
	Console::CursorVisible = false;
	Competencia* obj_arr = new Competencia();

	srand(time(NULL));
	int n = 5 + rand() % 10;
	for (int i = 0; i < n+1; i++)
	{
		obj_arr->InsertarPlayers();
	}
	obj_arr->Mostrar();
	while (1) {
		obj_arr->Mover(80, 25);
		_sleep(100);
		if (obj_arr->retorna_ganador() >= 0) {
			break;
		}
	}
	Console::SetCursorPosition(1, 1);
	cout << "Presione una tecla para continuar.....";
	getch();
	system("cls");
	Console::SetCursorPosition(12, 10);
	Console::ForegroundColor = ConsoleColor::White;
	cout << "El ganador es el scooter numero : " << obj_arr->retorna_ganador() + 1 << endl;
	
	system("pause");
	delete obj_arr;

	return 0;
}