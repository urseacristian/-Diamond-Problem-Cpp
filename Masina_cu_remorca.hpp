#ifndef MASINA_CU_REMORCA_HPP
#define MASINA_CU_REMORCA_HPP

#include "Remorca.hpp"
#include "Masina.hpp"

class Masina_cu_remorca: public Remorca, public Masina {
	int masa_totala;
public:
	Masina_cu_remorca();
	Masina_cu_remorca(char*, int, char*, int[3], int[3], int, int);
	Masina_cu_remorca& operator=(Masina_cu_remorca&);
	int operator + (const Masina_cu_remorca&);
	int operator - (const Masina_cu_remorca&);
	bool operator > (const Masina_cu_remorca&);
	bool operator < (const Masina_cu_remorca&);
	void Switch(Masina_cu_remorca&);
	void Write();
};

#endif