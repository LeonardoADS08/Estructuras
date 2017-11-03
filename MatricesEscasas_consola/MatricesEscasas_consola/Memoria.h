#pragma once
#include "Nodo.h"
#include <string>
using namespace std;
template<class tipo>
class Memoria
{
	int _tamanof;
	int _tamanoc;
	Nodo<tipo> _nodo[N][N];
public:
	Memoria() { _tamano = 0; }
	Nodo<tipo> Arreglo(int pos,int pos2)
	{
		return _nodo[pos][pos2];
	}
	void Arreglo(Nodo<tipo> x, int pos,int pos2)
	{
		_nodo[pos][pos2] = x;
	}
	int TamanoF() { return _tamanof; }
	void TamanoF(int a) { _tamanof = a; }
	int TamanoC() { return _tamanoc; }
	void TamanoC(int a) { _tamanoc = a; }
	Memoria<tipo> ThisM() { return *this; }
	void ThisM(Memoria<tipo> x){*this=x;}
	~Memoria(){}
};

