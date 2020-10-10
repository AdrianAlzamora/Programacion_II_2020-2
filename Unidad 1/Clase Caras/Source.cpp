#include "Boca.h"
#include "Emoji.h"
#include <ctime>
#include <conio.h>
int main() {
	
	//EmojiNormal* emoji1 = new EmojiNormal();
	Emoji* emoji1 = new Emoji(7,10);
	Emoji* emoji2 = new Emoji(7, 10);
	Emoji* emoji3 = new Emoji(7,10);
	srand(time(NULL));
	int opt;
	while (true) {
		do {
			system("cls");
			cout << "EMOJIS" << endl;
			cout << "1. Emoji Normal " << endl;
			cout << "2. Emoji Feliz " << endl;
			cout << "3. Emoji triste " << endl;
			cout << "3. Salir" << endl;
			cout << "Escoja una opcion:  " << endl;
			cin >> opt;

		} while (!(opt >= 1 && opt <= 4));
		switch (opt)
		{
		case 1:
			emoji1->EmojiNormal();break;
		case 2:
			emoji2->EmojiSonrie(); break;
		case 3:
			emoji3->EmojiTriste(); break;
		case 4:
			delete emoji1, emoji2, emoji3;
			return 0;
		}
	
		getch();
	}
	
	
}