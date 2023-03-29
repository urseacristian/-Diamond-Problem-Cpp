#include "Masina_cu_remorca.hpp"

int main()
{
	int dimensiuni1[3] = { 4, 4, 3 };
	int dimensiuni2[3] = { 5, 2, 1 };
	Masina_cu_remorca array1("Robert", 9500, "BaMWeu", dimensiuni1, dimensiuni2, 750, 4250);
	Masina_cu_remorca array2("Andrei", 11500, "Mertzan", dimensiuni1, dimensiuni2, 550, 3500);
	cout << "array1 + array2 = " << array1 + array2 << endl;
	cout << "array1 - array2 = " << array1 - array2 << endl;
	cout << "Se compara masa totala a celor 2 masini..." << endl;
	cout << "1 = true || 0 = false" << endl;
	cout << "< :" << (array1 < array2) << endl;
	cout << "> :" << (array1 > array2) << endl;

	int n = 4;
	Baza** array;
	array = new Baza * [4];

	array[0] = new Vehicul("Robert", 8000);
	array[1] = new Masina("Andrei", 6500, dimensiuni1, "Mazda");
	array[2] = new Remorca("Grigore", 950, dimensiuni2, 450);
	array[3] = new Masina_cu_remorca("Palantin", 14900, "Volvo", dimensiuni1, dimensiuni2, 3800, 600);

	for(int i = 0; i < n - 1; i++)
		for(int j = i + 1; j < n; j++)
			if (array[i]->Price() > array[j]->Price()) {
				Baza* aux;
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
			}

	for (int i = 0; i < n; i++) {
		cout << "-----" << i + 1 << "-----" << endl;
		array[i]->Write();
		cout << endl;
	}
}