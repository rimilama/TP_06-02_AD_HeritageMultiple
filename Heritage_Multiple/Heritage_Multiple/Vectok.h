#pragma once
#include "Vect.h"

class Vectok : public Vect
{
public:
	Vectok(int);
	Vectok(Vectok&);
	Vectok& operator=(Vectok&);
	int taille();
};

