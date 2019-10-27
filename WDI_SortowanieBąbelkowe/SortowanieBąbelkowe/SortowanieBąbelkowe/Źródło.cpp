#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int a[20]; // okreslenie wielkosci tablicy
	fstream plik;
	plik.open("liczby20.txt"); // wskazanie pliku
	for (int i = 0; i < 20; i++) // wczytanie danych do tablicy
	{
		plik >> a[i];
	}
	plik.close();

	cout << "LICZBY NIEPOSORTOWANE:" << endl << endl;

	for (int i = 0; i < 20; i++) // wyswietlnie liczb nieposortowanych
	{
		cout << a[i] << endl;
	}

	cout << "LICZBY POSORTOWANE:" << endl << endl;

	for (int i = 0; i < 19; i++) // petla zewnetrzna
	{
		for (int j = 0; j < 19 - i; j++) // petla wewnetrzna [ j < 19-1 poniewaz ostatnia liczba po kolejnym wykonaniu sie petli bedzie najwieksza dlatego juz jej nie sprawdzamy ] 
		{
			if (a[j] > a[j + 1]) // jeœli liczba a[j] jest wieksza od a[j+1] to :
			{
				swap(a[j], a[j + 1]); // zamiana liczb miejscami
			}
		}
	}
	for (int i = 0; i < 20; i++) // wyswietlenie liczb juz posortowanych
	{
		cout << a[i] << endl;
	}
	system("pause");
	return 0;
}