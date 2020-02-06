#include "Point.h"
#include <iostream>

using namespace std;

//Constructeur
Point::Point() {
	this->nX = 0;
	this->nY = 0;
}

Point::Point(int nX, int nY) {
	this->nX = nX;
	this->nY = nY;
}

//Fonction d'affichage
void Point::afficherPoint() {
	cout << "Coordonees : " << this->nX << " " << this->nY << endl;
}