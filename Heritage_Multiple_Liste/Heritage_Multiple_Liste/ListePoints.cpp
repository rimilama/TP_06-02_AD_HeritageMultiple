#include "ListePoints.h"

//Constructeur
ListePoints::ListePoints() {

}

//Fonction d'affichage de la liste de point
void ListePoints::afficheListe() {
	Point* point = (Point*)premier();
	while (fini() != 1)
	{
		point->afficherPoint();
		point = (Point*)prochain();
	}
}