#ifndef MASINA_HPP
#define MASINA_HPP

#include "Vehicul.hpp"

class Masina : virtual public Vehicul	{
protected:
	int dimensiuni[3];
	char* marca;
public:
	Masina();
	Masina(char*, int, int[3], char*);
	Masina& operator = (const Masina&);
	~Masina();
	void Switch(Masina&);
	void Write();

};

#endif