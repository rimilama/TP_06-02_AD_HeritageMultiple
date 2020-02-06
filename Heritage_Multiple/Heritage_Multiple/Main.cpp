#include "Vectok.h"
#include <iostream>

using namespace std;

int main() {
	//Test Ex1
	Vect Vecteur(5);
	Vecteur[1] = 10;
	cout << Vecteur[1] << endl;


	cout << "" << endl;
	//Test Ex2
	Vectok Vecteur1(5);
	Vecteur1[3] = 10;
	Vectok Vecteur2(1);
	Vecteur2 = Vecteur1;
	cout << "Vecteur 1 : ";
	for (int i = 0; i < Vecteur1.taille(); i++) {
		cout << Vecteur1[i] << " ";
	}
	cout << "" << endl;
	cout << "Vecteur 2 : ";
	for (int j = 0; j < Vecteur2.taille(); j++)
	{
		cout << Vecteur2[j] << " ";
	}
	cout << "" << endl;
}