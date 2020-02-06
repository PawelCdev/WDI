#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Aplikacja
{
public:
	//zmienne
	string wyraz_pol, wyraz_ang;
	fstream plik;
	int losowanie;
	int licz1, licz2;
	string sprawdzenie;

	//funkcje

	void dodaj_wyraz();
	void pol_ang();
	void ang_pol();
};
