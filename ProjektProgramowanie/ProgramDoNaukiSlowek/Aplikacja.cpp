#include <iostream>
#include <fstream>
#include "aplikacja.h"
#include <string>
#include <Windows.h>
#include <random>

using namespace std;

void Aplikacja::dodaj_wyraz()
{
	system("cls");
	cout << "Podaj wyraz po polsku: ";
	cin >> wyraz_pol;
	cout << "Podaj wyraz po angielsku: ";
	cin >> wyraz_ang;

	plik.open("slowkaPOL.txt", ios::out | ios::app); //stworzenie oraz dodanie slowka do pliku w jezyku polskim
	if (plik.is_open())
	{
		plik << wyraz_pol << endl;
		plik.close();
	}
	else
		cout << "Nie mozna otworzyc pliku!" << endl;

	plik.open("slowkaANG.txt", ios::out | ios::app); //stworzenie oraz dodanie slowka do pliku w jezyku ang
	if (plik.is_open())
	{
		plik << wyraz_ang << endl;
		plik.close();
	}
	else
		cout << "Nie mozna otworzyc pliku!" << endl;


	cout << endl;
	cout << "Poczekaj 2 sek";
}

void Aplikacja::pol_ang()
{
	system("cls");
	//utworzenie tablicy ze slowkami polskimi

	string linia;
	licz1 = 0;
	int i = 0;
	plik.open("slowkaPOL.txt", ios::in);
	if (plik.is_open())
	{
		while (!plik.eof())
		{
			getline(plik, linia);
			licz1++;
		}
		plik.close();
	}
	else
		cout << "Nie mozna otworzyc pliku!" << endl;

	string* tabPOL = new string[licz1];

	plik.open("slowkaPOL.txt", ios::in);
	if (plik.is_open())
	{
		while (!plik.eof())
		{
			getline(plik, linia);
			tabPOL[i] = linia;
			i++;
		}
		plik.close();
	}
	else
		cout << "Nie mozna otworzyc pliku!" << endl;

	//utworzenie tablicy ze slowkami angielskimi

	string linia2;
	licz2 = 0;
	int h = 0;
	plik.open("slowkaANG.txt", ios::in);
	if (plik.is_open())
	{
		while (!plik.eof())
		{
			getline(plik, linia2);
			licz2++;
		}
		plik.close();
	}
	else
		cout << "Nie mozna otworzyc pliku!" << endl;

	string* tabANG = new string[licz2];

	plik.open("slowkaANG.txt", ios::in);
	if (plik.is_open())
	{
		while (!plik.eof())
		{
			getline(plik, linia2);
			tabANG[h] = linia2;
			h++;
		}
		plik.close();
	}
	else
		cout << "Nie mozna otworzyc pliku!" << endl;


	//wylosowanie numeru slowka w tablicy

	random_device device;

	mt19937 generator(device());

	uniform_int_distribution<int>  distribution(0, licz1-1);

	losowanie = distribution(generator);

	char z_poziom = 0xC4;
	char z_pion = 0xB3;
	char z_rog_prawy_gora = 0xBF;
	char z_rog_prawy_dol = 0xD9;
	char z_rog_lewy_gora = 0xDA;
	char z_rog_lewy_dol = 0xC0;

	cout << z_rog_lewy_gora << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom <<
		z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom <<
		z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom <<
		z_poziom << z_poziom << z_poziom << z_rog_prawy_gora << endl;
	cout << z_pion << "Z polskiego na angielski " << z_pion << endl;
	cout << z_rog_lewy_dol << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom <<
		z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom <<
		z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom <<
		z_poziom << z_poziom << z_poziom << z_rog_prawy_dol << endl;
	cout << tabPOL[losowanie] << " - ";
	cin >> sprawdzenie;
	if (sprawdzenie == tabANG[losowanie])
		cout << "Dobrze!";
	else
		cout << "Zle! Poprawnie to: " << tabANG[losowanie];

	delete[] tabPOL;
	delete[] tabANG;

	cout << endl;
	cout << "Poczekaj 3 sek";
	Sleep(3000);
}

void Aplikacja::ang_pol()
{
	system("cls");
	//utworzenie tablicy ze slowkami polskimi

	string linia;
	licz1 = 0;
	int i = 0;
	plik.open("slowkaPOL.txt", ios::in);
	if (plik.is_open())
	{
		while (!plik.eof())
		{
			getline(plik, linia);
			licz1++;
		}
		plik.close();
	}
	else
		cout << "Nie mozna otworzyc pliku!" << endl;

	string* tabPOL = new string[licz1];

	plik.open("slowkaPOL.txt", ios::in);
	if (plik.is_open())
	{
		while (!plik.eof())
		{
			getline(plik, linia);
			tabPOL[i] = linia;
			i++;
		}
		plik.close();
	}
	else
		cout << "Nie mozna otworzyc pliku!" << endl;

	//utworzenie tablicy ze slowkami angielskimi

	string linia2;
	licz2 = 0;
	int h = 0;
	plik.open("slowkaANG.txt", ios::in);
	if (plik.is_open())
	{
		while (!plik.eof())
		{
			getline(plik, linia2);
			licz2++;
		}
		plik.close();
	}
	else
		cout << "Nie mozna otworzyc pliku!" << endl;

	string* tabANG = new string[licz2];

	plik.open("slowkaANG.txt", ios::in);
	if (plik.is_open())
	{
		while (!plik.eof())
		{
			getline(plik, linia2);
			tabANG[h] = linia2;
			h++;
		}
		plik.close();
	}
	else
		cout << "Nie mozna otworzyc pliku!" << endl;


	//wylosowanie numeru slowka w tablicy

	random_device device;

	mt19937 generator(device());

	uniform_int_distribution<int>  distribution(0, licz1 - 1);

	losowanie = distribution(generator);

	char z_poziom = 0xC4;
	char z_pion = 0xB3;
	char z_rog_prawy_gora = 0xBF;
	char z_rog_prawy_dol = 0xD9;
	char z_rog_lewy_gora = 0xDA;
	char z_rog_lewy_dol = 0xC0;

	cout << z_rog_lewy_gora << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom <<
		z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom <<
		z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom <<
		z_poziom << z_poziom << z_poziom << z_rog_prawy_gora << endl;
	cout << z_pion << "Z angielskiego na polski " << z_pion << endl;
	cout << z_rog_lewy_dol << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom <<
		z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom <<
		z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom << z_poziom <<
		z_poziom << z_poziom << z_poziom << z_rog_prawy_dol << endl;
	cout << tabANG[losowanie] << " - ";
	cin >> sprawdzenie;
	if (sprawdzenie == tabPOL[losowanie])
		cout << "Dobrze!";
	else
		cout << "Zle! Poprawnie to: " << tabPOL[losowanie];

	delete[] tabPOL;
	delete[] tabANG;

	cout << endl;
	cout << "Poczekaj 3 sek";
	Sleep(3000);
}