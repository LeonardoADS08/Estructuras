#pragma once
#include "Nodo.h"
template<class tipo>
class Memoria
{
	Nodo<tipo> _arreglo[100];
	int _tam;
public:
	Memoria() { _tam = 0; }
	~Memoria(){}

	void Arreglo(Nodo<tipo> x, int pos)
	{
		_arreglo[pos] = x;
	}
	Nodo<tipo> Arreglo(int pos)
	{
		return _arreglo[pos];
	}
	int Tamano() { return _tam; }
	void Tamano(int a) { _tam = a; }
	void ThisM(Memoria<tipo> x) { *this = x; }
	Memoria<tipo> ThisM() { return *this; }
};

