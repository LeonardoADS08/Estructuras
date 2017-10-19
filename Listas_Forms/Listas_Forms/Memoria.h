#pragma once
#include "Nodo.h"
#include <string>
using namespace std;
template<class tipo>
class Memoria
{
	int _tamano;
	Nodo<tipo> _nodo[N];
public:
	Memoria() { _tamano = 0; }
	Nodo<tipo> Arreglo(int pos)
	{
		return _nodo[pos];
	}
	void Arreglo(Nodo<tipo> x, int pos)
	{
		_nodo[pos] = x;
	}
	int Tamano() { return _tamano; }
	void Tamano(int a) { _tamano = a; }
	Memoria<tipo> ThisM() { return *this; }
	void ThisM(Memoria<tipo> x){*this=x;}
	~Memoria(){}
};

