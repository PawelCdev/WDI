#include <iostream>
#include <string>
#include <Windows.h>
#include "funkcje.h"
#include "aplikacja.h"

using namespace std;

int main()
{
	fstream plik;
	int licz1 = 0;
	string napis = "Witaj! Odpalies wlasnie najlepsza aplikacje do nauki slowek z angielskiego!";
	wypisz(napis);
	Sleep(3000);
	int wybor; // zmienna  okreslajaca nasz wybor opcji w aplikacji
	Aplikacja appka;
	for (;;)
	{
		system("cls");

		menuGlowne();

		Sleep(100);

		menu();
		cin >> wybor;

		switch (wybor)
		{
		case 1:
			appka.dodaj_wyraz();
			break;
		case 2:
			appka.pol_ang();
			break;
		case 3:
			appka.ang_pol();
			break;
		case 4:
			cout << "Dziekuje  za skorzystanie z aplikacji!";
			exit(0);
			break;
		default:
			cout << "Zly numer opcji";
		}
	}
	return 0;
}

//Materia³y z których korzysta³em do stworzenia tej aplikacji(projektu) to:
// materia³ z wyk³adu 9 oraz lab 9
// materia³ z wyk³adu 8 oraz lab 8
// materia³ z wyk³adu 6 oraz lab 6
// https://pl.wikibooks.org/wiki/C%2B%2B/Klasy