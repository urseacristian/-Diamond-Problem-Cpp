#ifndef VEHICUL_HPP
#define VEHICUL_HPP

#include <iostream>
#include <cstring>
#include "Baza.hpp"
using namespace std;

class Vehicul: public Baza  {
protected:
    char* proprietar;
    int pret;
public:
    Vehicul();
    Vehicul(char*, int);
    Vehicul(const Vehicul&);
    Vehicul& operator = (const Vehicul&);
    int Price();
    void Write();
    ~Vehicul();
};

#endif