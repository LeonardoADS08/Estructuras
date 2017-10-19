#pragma once
const int N=50;
#include "NODO.h"
template<class tipo>
class Pila
{
	int _tope;
	NODO<tipo> _pila[N];
	int n;
public:
	Pila(void){_tope=-1;}
	bool PilaVacia();
	bool PilaLLena();
	bool Insertar(NODO<tipo>x);
	bool Eliminar(NODO<tipo> &x);
	bool Tope(NODO<tipo>&x);
};
template<class tipo>
bool Pila<tipo>::PilaVacia()
{
	if(_tope==-1){return true;}
	else{return false;}
}
template<class tipo>
bool Pila<tipo>::PilaLLena()
{
	if(_tope==N){return true;}
	else{return false;}
}
template<class tipo>
bool Pila<tipo>::Eliminar(NODO<tipo> &x)
{
	if(PilaVacia())
	{return false;}
	else
	{
		x=_pila[_tope];
		_tope--;
		return true;
	}
}
template<class tipo>
bool Pila<tipo>::Insertar(NODO<tipo>x)
{
	if(PilaLLena())
	{return false;}
	else
	{
		_tope++;
		_pila[_tope]=x;
		return true;
	}
}
template<class tipo>
bool Pila<tipo>::Tope(NODO<tipo> &x)
{
	if(PilaVacia())
	{return false;}
	else
	{
		x=_pila[_tope];
		
		return true;
	}
}