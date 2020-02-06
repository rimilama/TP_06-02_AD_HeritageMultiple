#include "Vectb.h"

Vectb::Vectb(int nDebut, int nFin) : Vect(nFin - nDebut + 1) {
	this->nDebut = nDebut;
	this->nFin = nFin;
}

int& Vectb::operator[](int nElem) {
	return Vect::operator[](nElem - this->nDebut);
}