#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int tab[100];
int i = 0;
; bool dodaj(int liczba);
; bool usun(int liczba);
int main()
{
	
	int liczba, j,n;
	string komenda;
	do {
		cout << "Podaj jedna z komend. dodaj, usun, wypisz, koniec." << endl;
		cin >> komenda;

		if (komenda == "dodaj")
		{
			cin >> liczba;
			
			if (dodaj(liczba)) 
			{
				tab[i] = liczba;
				i++;
			}
		}
		if (komenda == "usun")
		{
			cin >> liczba;
			for (j = 0; j < i; j++)
			{
				if (tab[j] == liczba) {
					cout << "usune liczbe " << liczba << " ze zbioru " << endl;
					for (n = j; n < i; n++) // usuwa element i tablice przesowa o 1 w lewo
						tab[n] = tab[n + 1];
					i--; // zmnijsza i 0 1 aby nie pominac miejsca w tablicy 
				}
			}

		}

		if (komenda == "wypisz")
		{
			for (j = 0; j<i; j++)
				cout << tab[j] << " " << endl;
		}
	} while (komenda != "koniec");

	return 0;
}
bool dodaj(int liczba)
{
	
	for (int j = 0; j < 100; j++) {
		if (tab[j] == liczba) {
			cout << "Juz jest taka liczba podaj inna" << endl;
			return false;
		}

	}
	if (i == 5) {
		cout << "Zbior pelny" << endl;
		return false;
	}
			return true;
}

