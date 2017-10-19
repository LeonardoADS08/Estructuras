#pragma once
template<class variable>
class MEMORIA
{
	int _tamano;
	variable _x[100];
public:
	MEMORIA() {_tamano=0;}
	variable Arreglo(int pos) { return _x[pos]; }
	void Arreglo(int pos, variable elem) { _x[pos] = elem; }
	void Tamano(int num) { _tamano = num; }
	int Tamano() { return _tamano; }
	void This_Memoria(MEMORIA<variable> x) { *this = x; }
	MEMORIA<variable> This_Memoria() { return *this; }
	
};

