#include "Vect.h"
#include <corecrt_malloc.h>

//constructeur
Vect::Vect() {
	this->nElem = 2;
	this->nAdr = (int*)malloc(this->nElem * sizeof(int));
	for (int i = 0; i < nElem; i++) {
		nAdr[i] = 0;
	}
}

Vect::Vect(int nElem) {
	this->nElem = nElem;
	this->nAdr = (int*)malloc(nElem * sizeof(int));
	for (int i = 0; i < nElem; i++) {
		nAdr[i] = 0;
	}
}

//Surcharge opérateur
int& Vect::operator[](int nElem) {
	return this->nAdr[nElem - 1];
}

//Destructeur
Vect::~Vect() {
	free(this->nAdr);
	nAdr = NULL;
}