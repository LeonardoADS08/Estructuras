#pragma once

#include "Nodo.h"
template<class tipo>
class Pila
{
	int _tope;
	Nodo<tipo> _pila[N];
	int n;
public:
	Pila(void){_tope=-1;}
	bool PilaVacia();
	bool PilaLLena();
	bool Insertar(Nodo<tipo>x);
	bool Eliminar(Nodo<tipo> &x);
	bool Tope(Nodo<tipo>&x);
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
bool Pila<tipo>::Eliminar(Nodo<tipo> &x)
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
bool Pila<tipo>::Insertar(Nodo<tipo>x)
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
bool Pila<tipo>::Tope(Nodo<tipo> &x)
{
	if(PilaVacia())
	{return false;}
	else
	{
		x=_pila[_tope];
		
		return true;
	}
}