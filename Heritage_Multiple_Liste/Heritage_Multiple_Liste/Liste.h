#pragma once
struct Element
{
	Element* suivant;
	void* contenue;
};

class Liste
{
protected:
	Element* debut;
	Element* courant;

public:
	Liste();
	~Liste();
	void ajoute(void*);
	void* premier();
	void* prochain();
	int fini();
};

