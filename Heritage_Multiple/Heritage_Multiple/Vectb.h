#pragma once
#include "Vect.h"

class Vectb : public Vect
{
private:
	int nDebut;
	int nFin;

private:
	Vectb(int, int);
	int& operator[](int);
};

