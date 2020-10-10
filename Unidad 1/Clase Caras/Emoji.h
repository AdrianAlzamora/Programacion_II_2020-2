#pragma once
#include "Nariz.h"
#include "Ojo.h"
#include "Boca.h"
#include "Contorno.h"
#include <iostream>
using namespace std;
using namespace System;
class Emoji
{
private:
	Contorno* mi_contorno;
	Nariz* mi_Nariz;
	Boca* mi_boca;
	Ojo** arr_ojos;
	int x, y, color;
public:
	
	Emoji();
	Emoji(int px, int py);
	~Emoji();

	void Borrar();
	void EmojiNormal();
	void EmojiSonrie();
	void EmojiTriste();
	
	

};

