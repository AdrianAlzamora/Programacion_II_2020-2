#include "Emoji.h"
#include <ctime>

Emoji::Emoji(){}
Emoji::Emoji(int px, int py){
	color = rand() % (5 - 1) + 1;
	x = px;
	y = py;

	mi_contorno = new Contorno();
	mi_contorno->setX(x-4);
	mi_contorno->setY(y+4);
	mi_contorno->setL(7);
	mi_contorno->setColor(color);

	mi_Nariz = new Nariz();
	mi_Nariz->setX(x);
	mi_Nariz->setY(y);
	mi_Nariz->setColor(color);
	mi_boca = new Boca();
	mi_boca->setX(x - 1);
	mi_boca->setY(y + 2);
	mi_boca->setL(3);
	mi_boca->setColor(color);
	
	arr_ojos = new Ojo * [2];
	arr_ojos[0] = new Ojo();
	arr_ojos[0]->setX(x-2);
	arr_ojos[0]->setY(y-1);
	arr_ojos[1] = new Ojo();
	arr_ojos[1]->setX(x+2);
	arr_ojos[1]->setY(y-1);

	for (int i = 0; i < 2; i++)
	{
		arr_ojos[i]->setColor(color);
	}

	
}
Emoji::~Emoji(){

	delete mi_contorno;
	delete mi_Nariz;
	delete mi_boca;
	
	for (int i = 0; i < 2; i++)
	{
		delete arr_ojos[i];
	}
	delete[] arr_ojos;
}
void Emoji::Borrar() {
	for (int i = 0; i < 2; i++)
	{
		arr_ojos[i]->Borrar();
	}
	mi_boca->Borrar();
	mi_Nariz->Borrar();
	mi_contorno->Borrar();
}

void Emoji::EmojiNormal() {
	mi_contorno->Draw();
	mi_boca->Draw();
	for (int i = 0; i < 2; i++)
	{
		arr_ojos[i]->Draw();
	}
	mi_Nariz->Draw();
}
void Emoji::EmojiSonrie(){
	mi_contorno->Draw();
	mi_boca->Sonrie();
	for (int i = 0; i < 2; i++)
	{
		arr_ojos[i]->Draw();
	}
	mi_Nariz->Draw();
}
void Emoji::EmojiTriste(){
	mi_contorno->Draw();
	mi_boca->Triste();
	for (int i = 0; i < 2; i++)
	{
		arr_ojos[i]->Draw();
	}
	mi_Nariz->Draw();
}


