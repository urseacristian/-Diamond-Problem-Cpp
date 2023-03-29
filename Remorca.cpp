#include "Remorca.hpp"

Remorca::Remorca() :Vehicul(), greutate_maxima(0) {
	for (int i = 0; i < 3; i++)
		dimensiuni[i] = 0;
}
Remorca::Remorca(char* proprietar, int pret, int dim[3], int greutate_maxima) : Vehicul(proprietar, pret), 
																greutate_maxima(greutate_maxima) {
	for (int i = 0; i < 3; i++)
		dimensiuni[i] = dim[i];
}

Remorca& Remorca::operator = (const Remorca& obj) {
	for (int i = 0; i < 3; i++)
		dimensiuni[i] = obj.dimensiuni[i];
	this->greutate_maxima = obj.greutate_maxima;

	return *this;
}

void Remorca::Switch(Remorca& obj) {
	Remorca aux(*this);
	*this = obj;
	obj = aux;
}

void Remorca::Write() {
	cout << "-----Remorca-----" << endl;
	cout << "Proprietar: " << proprietar << endl;
	cout << "Pret: " << pret << endl;
	cout << "Greutate maxima: " << greutate_maxima << endl;
	cout << "Lungime / Latime / Inaltime: " << dimensiuni[0] << " " << dimensiuni[1] << " " << dimensiuni[2] << endl;
}