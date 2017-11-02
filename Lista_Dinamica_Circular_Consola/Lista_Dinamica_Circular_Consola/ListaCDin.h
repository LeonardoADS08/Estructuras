#pragma once
#include "Nodo.h"
template<class tipo>
class ListaCDin
{
	Nodo<tipo>*_list;
	void EliminarNodo(Nodo<tipo>* p);

	Nodo<tipo>* BusccarNodo();
public:
	ListaCDin();
	bool Lista_Vacia();

	Nodo<tipo>* Primero();

	bool Insertar(Nodo<tipo>* p, Nodo<tipo> val);

	bool Extraer(Nodo<tipo>* p, Nodo<tipo>& val);

	Nodo<tipo>* Fin_Lista();

	Nodo<tipo>* Proximo(Nodo<tipo>* q);

	Nodo<tipo>* Anterior(Nodo<tipo>* p);
	Nodo<tipo>* Ultimo();

	tipo Lista(Nodo<tipo>* p);

	void Lista(Nodo<tipo>* p, tipo val);
	~ListaCDin(){}
};

template <class tipo>
void ListaCDin<tipo>::EliminarNodo(Nodo<tipo>* p)
{
	delete(p);
}

template <class tipo>
Nodo<tipo>* ListaCDin<tipo>::BusccarNodo()
{
	return new Nodo<tipo>;
}

template <class tipo>
ListaCDin<tipo>::ListaCDin()
{
	_list = nullptr;
}

template <class tipo>
bool ListaCDin<tipo>::Lista_Vacia()
{
	if (_list == nullptr) { return true; }
	else { return false; }
}

template <class tipo>
Nodo<tipo>* ListaCDin<tipo>::Primero()
{
	return _list->Apuntador();
}

template <class tipo>
bool ListaCDin<tipo>::Insertar(Nodo<tipo>* p, Nodo<tipo> val)
{
	Nodo<tipo>* y = this->BusccarNodo();
	y->Elemento(val.Elemento());
	y->Apuntador(nullptr);
	if (p == nullptr)
	{
		if (this->Lista_Vacia())//si es uqe esta vacio
		{
			_list = y;//se vuelve el primer elemento
			_list->Apuntador(y);
		}

		y->Apuntador(_list->Apuntador());
		_list->Apuntador(y);
	}
	else
	{
		if (p == _list)
		{
			y->Apuntador(p->Apuntador());
			p->Apuntador(y);
			_list = y;
		}
		else
		{
			y->Apuntador(p->Apuntador());
			p->Apuntador(y);
		}
	}
	return true;
}

template <class tipo>
bool ListaCDin<tipo>::Extraer(Nodo<tipo>* p, Nodo<tipo>& val)
{
	Nodo<tipo>* y;
	if (this->Lista_Vacia()) { return false; }
	else
	{
		if (p == nullptr || p == _list)
		{
			y = _list->Apuntador();
			val.Elemento(y->Elemento());

			if (y == _list) { _list = nullptr; }
			else { _list->Apuntador(y->Apuntador()); }
		}
		else
		{
			y = p->Apuntador();
			val.Elemento(y->Elemento());

			if (p->Apuntador() == _list)
			{
				_list = p;
			}

			p->Apuntador(y->Apuntador());
		}
		this->EliminarNodo(y);
		return true;
	}
}

template <class tipo>
Nodo<tipo>* ListaCDin<tipo>::Fin_Lista()
{
	return this->Primero();
}

template <class tipo>
Nodo<tipo>* ListaCDin<tipo>::Proximo(Nodo<tipo>* q)
{
	return q->Apuntador();
}

template <class tipo>
Nodo<tipo>* ListaCDin<tipo>::Anterior(Nodo<tipo>* p)
{
	Nodo<tipo> *y = this->Primero(), q;

	do
	{
		q = y;
		y = this->Proximo(y);
	}
	while (y != p);
	return q;
}

template <class tipo>
Nodo<tipo>* ListaCDin<tipo>::Ultimo()
{
	return _list;
}

template <class tipo>
tipo ListaCDin<tipo>::Lista(Nodo<tipo>* p)
{
	return p->Elemento();
}

template <class tipo>
void ListaCDin<tipo>::Lista(Nodo<tipo>* p, tipo val)
{
	p->Elemento(val);
}

