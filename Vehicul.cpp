#include "Vehicul.hpp"

Vehicul::Vehicul() : proprietar(NULL), pret(0) {}

Vehicul::Vehicul(char* proprietar, int pret) : pret(pret) {
	this->proprietar = new char[strlen(proprietar) + 1];
	strcpy(this->proprietar, proprietar);
}

Vehicul::Vehicul(const Vehicul& obj) {
	proprietar = NULL;
	*this = obj;
}

Vehicul& Vehicul::operator = (const Vehicul& obj) {
	if (proprietar != NULL)
		delete[]proprietar;
	this->proprietar = new char[strlen(obj.proprietar) + 1];
	strcpy(this->proprietar, obj.proprietar);
	this->pret = obj.pret;

	return *this;
}

int Vehicul::Price() {
	return pret;
}

void Vehicul::Write() {
	cout << "-----Vehicul:-----" << endl;
	cout << "Proprietar: " << proprietar <<endl;
	cout << "Pret: " << pret <<endl;
}

Vehicul::~Vehicul() { 
	delete[] proprietar; 
}