#include "ListePoints.h"

int main() {
	ListePoints MaListe;
	Point P1(5,3);
	Point P2(19,31);
	Point P3(694,61);
	Point P4(16,1);

	MaListe.ajoute(&P1);
	MaListe.ajoute(&P2);
	MaListe.afficheListe();
	MaListe.ajoute(&P3);
	MaListe.ajoute(&P4);
	MaListe.afficheListe();
	
}