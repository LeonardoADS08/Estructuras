#pragma once
#include "Nodo.h"
template<class tipo>
class Memoria
{
	Nodo<tipo> arreglo_[100];
	int tam_;
public:
	Memoria() { tam_ = 0; }
	~Memoria(){}

	void Arreglo(Nodo<tipo> x, int pos)
	{
		arreglo_[pos] = x;
	}
	Nodo<tipo> Arreglo(int pos)
	{
		return arreglo_[pos];
	}
	int Tamano() { return tam_; }
	void Tamano(int a) { tam_ = a; }
	void ThisM(Memoria<tipo> x) { *this = x; }
	Memoria<tipo> ThisM() { return *this; }
};

