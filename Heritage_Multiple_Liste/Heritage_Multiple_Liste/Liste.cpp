#include "Liste.h"
#include <cstddef>

//Constructeur
Liste::Liste() {
	this->debut = NULL;
	this->courant = this->debut;
}

//Destructeur
Liste::~Liste() {
	Element* suivant;
	this->courant = this->debut;
	while (this->courant != NULL)
	{
		suivant = courant->suivant;
		delete courant;
		courant = suivant;
	}
}

//Ajouter un element
void Liste::ajoute(void* nouveau) {
	Element* NewElem = new Element;
	NewElem->suivant = debut;
	NewElem->contenue = nouveau;
	this->debut = NewElem;
}

//Se placer au premier element
void* Liste::premier() {
	this->courant = this->debut;
	if (courant != NULL) {
		return courant->contenue;
	}
	else {
		return NULL;
	}
}

//Se placer sur l'element suivant
void* Liste::prochain() {
	if (courant != NULL) {
		courant = courant->suivant;
		if (courant != NULL) {
			return courant->contenue;
		}
	}
	return NULL;
}

//Verifier si on est a la fin de la liste
int Liste::fini() {
	if (courant == NULL) {
		return 1;
	}
	else {
		return 0;
	}
}