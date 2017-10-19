#pragma once
#include "NODO.h"
const int N = 10;
template<class tipo>
class PilaDoble
{
	int _tope1;
	int _tope2;
	NODO<tipo> _nodo[N];
public:
	PilaDoble() { _tope1 = -1;_tope2 = N; }

	bool PilaVacia(int numeropila);
	bool PilaLLena();
	bool Insertar(int numeropila, NODO<tipo> elemento);
	bool Extraer(int numeropila, NODO<tipo>&elemento);
	bool Tope(int numeropila, NODO<tipo>&elemento);
	int Diferencia();
	PilaDoble<tipo> These() { return *this; }
	void These(PilaDoble<tipo> var) { *this = var; }
};
template<class tipo> bool PilaDoble<tipo>::PilaVacia(int numeropila)
{
	if(numeropila==1)
	{
		if (_tope1 == -1) { return true; }
		else { return false; }
	}
	else if (numeropila == 2)
	{
		if (_tope2 == N) { return true; }
		else { return false; }
	}
}
template<class tipo>bool PilaDoble<tipo>::PilaLLena()
{
	if (_tope1 + 1 == _tope2) { return true; }
	else { return false; }
}
template<class tipo>bool PilaDoble<tipo>::Insertar(int numeropila, NODO<tipo> elemento)
{
	if (numeropila == 1)
	{
		if(!PilaLLena())
		{
			_tope1++;
			_nodo[_tope1] = elemento;
			return true;
		}
		else { return false; }
	}
	else 
	{
		if(!PilaLLena())
		{
			_tope2--;
			_nodo[_tope2] = elemento;
			return true;
		}
		else { return false; }
	}
}
template<class tipo>bool PilaDoble<tipo>::Extraer(int numeropila, NODO<tipo>&elemento)
{
	if (numeropila == 1)
	{
		if(!PilaVacia(numeropila))
		{
			elemento = _nodo[_tope1];
			_tope1--;
			return true;
		}
		else { return false; }
	}
	else if(numeropila==2)
	{
		if (!PilaVacia(numeropila))
		{
			elemento = _nodo[_tope2];
			_tope2++;
			return true;
		}
		else
		{
			return false;
		}
	}

}
template<class tipo>bool PilaDoble<tipo>::Tope(int numeropila,NODO<tipo>&elemento)
{
	if (numeropila == 1)
	{
		if (!PilaVacia(numeropila))
		{
			elemento = _nodo[_tope1];
			
			return true;
		}
		else { return false; }
	}
	else if (numeropila == 2)
	{
		if (!PilaVacia(numeropila))
		{
			elemento = _nodo[_tope2];
			
			return true;
		}
		else
		{
			return false;
		}
	}
}
template<class tipo>int PilaDoble<tipo>::Diferencia()
{
	return _tope2 - (_tope1+1);
}