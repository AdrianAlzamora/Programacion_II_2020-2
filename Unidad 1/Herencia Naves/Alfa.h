#pragma once
#include "Nave.h"

class Alfa :    public Nave
{
public:
	Alfa(int px, int py/*,int ph, int pl*/) : Nave(px,py/*,ph,pl*/){}
	~Alfa(){}

	void draw() {
		if (model == 0) {
			l = 19;
			h = 5;
			Console::SetCursorPosition(x, y);     cout <<     "  _.---._";
			Console::SetCursorPosition(x, y + 1); cout <<     " .'     '.";
			Console::SetCursorPosition(x, y + 2); cout <<  "_.-~===========~-._";
			Console::SetCursorPosition(x, y + 3); cout <<  "(_________________)";
			Console::SetCursorPosition(x, y + 4); cout <<      "\_______/ ";
		}
		
	}
};

