#include "Masina.hpp"

Masina::Masina():Vehicul(), marca(NULL) {
	for (int i = 0; i < 3; i++)
		dimensiuni[i] = 0;
}

Masina::Masina(char* proprietar, int pret, int dim[3], char* marca) : Vehicul(proprietar, pret) {
	for (int i = 0; i < 3; i++)
		dimensiuni[i] = dim[i];
	
	this->marca = new char[strlen(marca) + 1];
	strcpy(this->marca, marca);
}

Masina& Masina::operator = (const Masina& obj) {
	if (this->marca != NULL)
		delete[]marca;
	this->marca = new char[strlen(obj.marca) + 1];
	strcpy(this->marca, obj.marca);

	for (int i = 0; i < 3; i++)
		this->dimensiuni[i] = obj.dimensiuni[i];

	return *this;
}

void Masina::Switch(Masina& obj) {
	Masina aux(*this);
	*this = obj;
	obj = aux;
}

void Masina::Write() {
	cout << "-----Masina-----" << endl;
	cout << "Proprietar: " << proprietar << endl;
	cout << "Pret: " << pret << endl;
	cout << "Marca: " << marca << endl;
	cout << "Lungime / Latime / Inaltime: " << dimensiuni[0] << " " << dimensiuni[1] << " " << dimensiuni[2] << endl;
}

Masina::~Masina() { 
	delete[]marca; 
}