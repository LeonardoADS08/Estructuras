#pragma once
#include "Nodo.h"
template<class tipo>
class Lista_Dinamica
{
	 Nodo<tipo> _lista;
	 Nodo<tipo>*_list;
public:
	Lista_Dinamica() { _list = nullptr; }
	Nodo<tipo> Buscar_Nodo()
	{
		return new Nodo<tipo>;
	}
	bool Insertar(Nodo<tipo>*x,Nodo<tipo> valor)
	{
		Nodo<tipo>*y;
		y = Buscar_Nodo();
		y->Apuntador(NULL);
		y->Elemento(valor.Elemento());
		if (x == NULL)
		{
			y->Apuntador(_list);
			_list = y;
		}
		else
		{
			x->Apuntador(y);
		}
		return true;
	}
};

