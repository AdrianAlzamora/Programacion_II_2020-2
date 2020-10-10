#pragma once
#include "Nave.h"
class Beta :
    public Nave
{

public:
	Beta(int px, int py/*,int ph, int pl*/) : Nave(px, py/*,ph,pl*/) {}
	~Beta() {}

	void draw() {
		if (model == 0) {
			l = 11;
			h = 3;
			Console::SetCursorPosition(x, y);     cout << "   .---.   ";
			Console::SetCursorPosition(x, y + 1); cout << " _/__~0_\\_";
			Console::SetCursorPosition(x, y + 2); cout << "(_________)";
		}

	}
};

