#include "Competicion.h"
#include <ctime>
#include <conio.h>

int main() {
	Console::SetWindowSize(100, 40);
	Console::CursorVisible = false;
	srand(time(NULL));

	Competicion* comp = new Competicion();
	char key;

	while (1) {
		comp->drawEverything();
		comp->moveEverything();
		_sleep(100);
		if (_kbhit()) {
			key == _getch();
			if (key == 32) {
				comp->again();
			}
			if (key == 27) {
				Console::Clear();
				break;
			}
		}
	}

	getch();
	return  0;

}