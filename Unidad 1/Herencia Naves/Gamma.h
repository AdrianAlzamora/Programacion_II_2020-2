#pragma once
#include "Nave.h"
class Gamma : public Nave
{
public:
	Gamma(int px, int py/*,int ph, int pl*/) : Nave(px, py/*,ph,pl*/) {}
	~Gamma() {}

	void draw() {
		if (model == 0) {
			l = 19;
			h = 8;
			Console::SetCursorPosition(x, y);     cout << "            .         ";
			Console::SetCursorPosition(x, y + 1); cout << "            |         ";
			Console::SetCursorPosition(x, y + 2); cout << "       .-"" ^ ""-.    ";
			Console::SetCursorPosition(x, y + 3); cout << "      /_....._\\      ";
			Console::SetCursorPosition(x, y + 4); cout << "   .-""`         `""-.";
			Console::SetCursorPosition(x, y + 5); cout << "  (  ooo  ooo  ooo  ) ";
			Console::SetCursorPosition(x, y + 6); cout << "   '-.,_________,.-'  ";
			Console::SetCursorPosition(x, y + 7); cout << "  `""`         `""`   ";
		}

	}
};

