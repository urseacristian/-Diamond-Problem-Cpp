#ifndef REMORCA_HPP
#define REMORCA_HPP

#include "Vehicul.hpp"

class Remorca : virtual public Vehicul	{
protected:
	int dimensiuni[3];
	int greutate_maxima;
public:
	Remorca();
	Remorca(char*, int, int[3], int);
	Remorca& operator = (const Remorca&);
	void Switch(Remorca&);
	void Write();
};

#endif