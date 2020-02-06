#include "funkcje.h"
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void menuGlowne()
{
	char z_poziom = 0xCD;
	char z_pion = 0xBA;
	char z_rog_prawy_gora = 0xBB;
	char z_rog_prawy_dol = 0xBC;
	char z_rog_lewy_gora = 0xC9;
	char z_rog_lewy_dol = 0xC8;

	cout << z_rog_lewy_gora << z_poziom << z_poziom << z_poziom << z_poziom
		<< z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom
		<< z_poziom << z_poziom << z_poziom << z_poziom << z_rog_prawy_gora << endl;
	cout << z_pion;
	cout << "Menu Aplikacji";
	cout << z_pion;
	cout << endl;
	cout << z_rog_lewy_dol << z_poziom << z_poziom << z_poziom << z_poziom
		<< z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom
		<< z_poziom << z_poziom << z_poziom << z_poziom << z_rog_prawy_dol << endl;
}

void wypisz(string napis)
{
	for (int i = 0; i < napis.size(); i++)
	{
		cout << napis[i];
		Sleep(50);
	}
}

// "1 - Dodaj wyrazy"
// "2 - Nauka slowek(pol - ang)" 
// "3 - Nauka slowek(ang - pol)"
// "4 - Wyjscie z aplikacji"
// "Podaj opcje z ktorej chcesz skorzystac: "

void menu()
{
	char z_poziom = 0xC4;
	char z_pion = 0xB3;
	char z_rog_prawy_gora = 0xBF;
	char z_rog_prawy_dol = 0xD9;
	char z_rog_lewy_gora = 0xDA;
	char z_rog_lewy_dol = 0xC0;
	cout << z_rog_lewy_gora << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom <<
		z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom <<
		z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom <<
		z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_rog_prawy_gora << endl;
	cout << z_pion  << "1 - Dodaj wyrazy" << "           " << z_pion << endl;
	cout << z_pion << "2 - Nauka slowek(pol - ang)" << z_pion <<  endl;
	cout << z_pion << "3 - Nauka slowek(ang - pol)" << z_pion << endl;
	cout << z_pion << "4 - Wyjscie z aplikacji" << "    " << z_pion << endl;
	cout << z_rog_lewy_dol << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom <<
		z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom <<
		z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom <<
		z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_rog_prawy_dol << endl;
	cout << endl;
	cout << "Prosze wybrac opcje: ";
}