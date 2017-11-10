#pragma once
#include "Nodo.h"

template<class tipo>
class Cola
{
	Nodo<tipo> _nodo[N];
	int _frente;
	int _final;
public:
	Cola() { _frente = -1;_final = -1; }
	bool ColaLLena();
	bool ColaVacia();
	bool Insertar(Nodo<tipo> var);
	bool Extraer(Nodo<tipo>&var);
	bool Frente(Nodo<tipo>&var);
	void ThisC(Cola<tipo> var) { *this = var; }
	Cola<tipo> ThisC() { return *this; }
	int Cantidad() {return _final - _frente;}
	void Reestruct();
};
template<class tipo>bool Cola<tipo>::ColaLLena()
{
	if (_final == N - 1) { return true; }
	else { return false; }
}
template<class tipo>bool Cola<tipo>::ColaVacia()
{
	if (_final == _frente) { return true; }
	else { return false; }
}
template<class tipo>bool Cola<tipo>::Insertar(Nodo<tipo> var)
{
	if (ColaLLena())
	{
		if (_frente != -1)
		{
			Reestruct();
			_final++;
			_nodo[_final] = var;
			return true;
		}
		else { return false; }
	}
	else
	{
		_final++;
		_nodo[_final] = var;
		return true;
	}
}
template<class tipo>bool Cola<tipo>::Extraer(Nodo<tipo>&var)
{
	if (ColaVacia()) { return false; }
	else
	{
		_frente++;
		var = _nodo[_frente];
		return true;
	}
}
template<class tipo>bool Cola<tipo>::Frente(Nodo<tipo>&var)
{
	if (ColaVacia()) { return false; }
	else
	{
		
		var = _nodo[_frente+1];
		
		return true;
	}
}
template<class tipo>void Cola<tipo>::Reestruct()
{
	int i = 0, comienzo = _frente+1;
	while (i < Cantidad())
	{
		_nodo[i] = _nodo[comienzo];
		i++;
		comienzo++;
	}
	_final = _final-_frente-1;
	_frente = -1;
	
}
