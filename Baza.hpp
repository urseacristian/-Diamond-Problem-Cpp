#ifndef BAZA_HPP
#define BAZA_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Baza {
public:
	virtual ~Baza() = 0;
	virtual void Write() = 0;
	virtual int Price() = 0;
};

#endif