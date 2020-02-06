#pragma once
class Vect
{
private:
	int nElem;
	int* nAdr;

public:
	Vect();
	Vect(int);
	~Vect();
	int& operator[](int);

};

