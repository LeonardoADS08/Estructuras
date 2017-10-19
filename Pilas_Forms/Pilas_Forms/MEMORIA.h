#pragma once
#include "NODO.h"
template<class tipo>
class MEMORIA
{
	NODO<tipo> x[100];
	int _tam;
public:
	MEMORIA(void){_tam=0;}
	NODO<tipo> Arreglo(int pos){return x[pos];}
	void Arreglo(NODO<tipo> elem,int pos){x[pos]=elem;}
	int Tamano()
	{
		return _tam;
	}

	void Tamano(int val)
	{
		_tam = val;
	}
	MEMORIA<tipo> ThisMem() { return *this; }
	void ThisMem(MEMORIA<tipo> val ) { *this = val; }
};

