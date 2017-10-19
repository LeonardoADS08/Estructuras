#pragma once
#include "Nodo.h"
const int N=10;
template<class tipo>
class ColaCircular
{
	int _frente;
	int _final;
	Nodo<tipo> _cola[N];
public:
	ColaCircular() { _frente = 0;_final = 0; }
	bool ColaVacia();
	bool ColaLLena();
	bool Insertar(Nodo<tipo> x);
	bool Extraer(Nodo<tipo>&x);
	bool Tope(Nodo<tipo>&x);
	int Cantidad();
	ColaCircular<tipo> ThisCC() { return *this; }
	void ThisCC(ColaCircular<tipo> x) { *this = x; }
	~ColaCircular(){}
};
template<class tipo>
bool ColaCircular<tipo>::ColaLLena()
{
	if(_frente==(_final+1)%N)
	{
		return true;
	}
	else
	{
		return false;
	}
}
template<class tipo>
bool ColaCircular<tipo>::ColaVacia()
{
	if (_frente == _final)
	{
		return true;
	}
	else
	{
		return false;
	}
}
template<class tipo>
bool ColaCircular<tipo>::Insertar(Nodo<tipo> x)
{
	if (ColaLLena())
	{
		return false;
	}
	else
	{
		_final = (_final + 1) % N;
		_cola[_final] = x;
		return true;
	}
}
template<class tipo>
bool ColaCircular<tipo>::Extraer(Nodo<tipo>&x)
{
	if (ColaVacia()) { return false; }
	else
	{
		_frente = (_frente+1) % N;
		x = _cola[_frente];
		return true;
	}
}
template<class tipo>
int ColaCircular<tipo>::Cantidad()
{
	int i = 0;
	Nodo<tipo> fake2;
	ColaCircular<tipo> fake;
	fake.ThisCC(*this);
	while (!fake.ColaVacia())
	{
		fake.Extraer(fake2);
		i++;
	}
	return i;
}
template<class tipo>
bool ColaCircular<tipo>::Tope(Nodo<tipo>&x)
{
	if (ColaVacia()) { return false; }
	else
	{
		
		x = _cola[(_frente + 1) % N];
		return true;
	}
}