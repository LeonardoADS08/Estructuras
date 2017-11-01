#pragma once
#include "Nodo.h"
template<class tipo>
class ListaCDin
{
	Nodo<tipo>*_list;
	void EliminarNodo(Nodo<tipo>*p)
	{
		delete(p);
	}
	Nodo<tipo>*BusccarNodo()
	{
		return new Nodo<tipo>;
	}
public:
	ListaCDin() { _list = nullptr; }
	bool Lista_Vacia();

	bool Insertar(Nodo<tipo>*pos,Nodo<tipo> val)
	{
		Nodo<tipo>*y=this->BusccarNodo();
		y->Elemento(val.Elemento());
		if(pos==nullptr)
		{
			if(this->Lista_Vacia())
			{
				_list = y;
			
			}
			pos = _list;
		}
		else
		{
			if (_list == pos) { _list = y; }
		}
		y->Apuntador(pos->Apuntador());
		pos->Apuntador(y);
		return true;
	}
	Nodo<tipo>*Primero()
	{
		return _list->Apuntador();
	}
	bool Eliminar(Nodo<tipo>*pos,Nodo<tipo>&val)
	{
		Nodo<tipo>*y = nullptr;
		if (this->Lista_Vacia())
		{ return false; }
		else
		{
			if(pos==nullptr||pos==_list)
			{
				y = this->Primero();
				val.Elemento(y->Elemento());
				if (y == _list) { _list == nullptr; }
				else
				{
					_list->Apuntador(y->Apuntador());
				}
			}
			else
			{
				y = pos->Apuntador();
				val.Elemento(y->Elemento());
				if (y == _list) { _list = pos; }
				pos->Apuntador(y->Apuntador());
			}
			this->EliminarNodo(y);
			return true;
		}
	}
	~ListaCDin(){}
};

template <class tipo>
bool ListaCDin<tipo>::Lista_Vacia()
{
	if (_list == nullptr) { return true; }
	else { return false; }
}

