#pragma once
#include"Liste.h"
#include "Point.h"

class ListePoints : public Liste, public Point
{
public:
	ListePoints();
	void afficheListe();
};

