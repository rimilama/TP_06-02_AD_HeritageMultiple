#include "Vectok.h"

//Constructeur
Vectok::Vectok(int nDimension) : Vect(nDimension) {

}

Vectok::Vectok(Vectok& v) : Vect(v.nElem) {

}

//Surcharge opérateur
Vectok& Vectok::operator=(Vectok& v) {
	this->nElem = v.nElem;
	this->nAdr = v.nAdr;
	return *this;
}

//Fonction SizeOf
int Vectok::taille() {
	return this->nElem;
}