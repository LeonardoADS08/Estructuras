#pragma once
#include "Nodo.h"
const int M = 50;
template<class tipo2>
class MEMORIA
{
private:
	int _tam;
	Nodo<tipo2> _nodo[M];
public:
	MEMORIA() { _tam = 0; }
	Nodo<tipo2> Arreglo(int pos) { return  _nodo[pos]; }
	void Arreglo(int pos, Nodo<tipo2> var) { _nodo[pos] = var; }
	int Tamano() { return _tam; }
	void Tamano(int var) { _tam = var; }
	MEMORIA<tipo2> This() { return *this; }
	void This(MEMORIA<tipo2> var) { *this = var; }
};

