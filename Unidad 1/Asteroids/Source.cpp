#include "Juego.h"

int main()
{
	int maxW = 100;
	int maxH = 30;
	Console::CursorVisible = false;
	Console::SetWindowSize(maxW, maxH);

	Juego* obj_juego = new Juego(maxW, maxH);
	obj_juego->Run();
}