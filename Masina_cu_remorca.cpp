#include "Masina_cu_remorca.hpp"

Masina_cu_remorca::Masina_cu_remorca() : Remorca(), Masina(), masa_totala(0) {}

Masina_cu_remorca::Masina_cu_remorca(char* proprietar, int pret, char* marca, int dimensiuni1[3], int dimensiuni2[3], 
											int greutate_maxima, int masa_totala) : Vehicul(proprietar, pret), 
												Remorca(proprietar, pret, dimensiuni2, greutate_maxima), 
													Masina(proprietar, pret, dimensiuni1, marca), 
														masa_totala(masa_totala)	{}

Masina_cu_remorca &Masina_cu_remorca::operator=(Masina_cu_remorca& obj) {
	this->masa_totala = obj.masa_totala;

	return *this;
}

int Masina_cu_remorca::operator + (const Masina_cu_remorca& obj) {
	return this->masa_totala + obj.masa_totala;
}

int Masina_cu_remorca::operator - (const Masina_cu_remorca& obj) {
	return this->masa_totala - obj.masa_totala;
}

bool Masina_cu_remorca::operator > (const Masina_cu_remorca& obj) {
	if (this->masa_totala > obj.masa_totala)
		return true;
	return false;
}

bool Masina_cu_remorca::operator < (const Masina_cu_remorca& obj) {
	if (this->masa_totala < obj.masa_totala)
		return true;
	return false;
}

void Masina_cu_remorca::Switch(Masina_cu_remorca& obj) {
	Masina_cu_remorca aux(*this);
	*this = obj;
	obj = aux;
}

void Masina_cu_remorca::Write() {
	cout << "-----Masina cu Remorca-----" << endl;
	cout << "Proprietar: " << proprietar << endl;
	cout << "Pret: " << pret << endl;
	cout << "Marca: " << marca << endl;
	cout << "Greutate maxima:" << greutate_maxima << endl;
	cout << "Masa totala:" << masa_totala << endl;
}