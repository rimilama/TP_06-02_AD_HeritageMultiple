#pragma once
class Vect
{
protected:
	int nElem;
	int* nAdr;

public:
	Vect();
	Vect(int);
	~Vect();
	int& operator[](int);

};

