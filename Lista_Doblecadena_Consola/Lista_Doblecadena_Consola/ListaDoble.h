#pragma once
#include "Nodo.h"
template<class tipo>
class ListaDoble
{
	Nodo<tipo> _lista[N];
	int _disp;
	int _list;
public:
	ListaDoble();
	bool ListaVacia();
	bool ListaLLena();
	~ListaDoble();
	int BuscarNodo();
	void EliminarNodo(int y);
	bool Insertar_Derecha(Nodo<tipo> x, int p);
	bool Insertar_Izquierda(Nodo<tipo> x, int p);
	bool Extraer(Nodo<tipo>& x, int p);
	int Proximo(int p);
	int Primero() { return _list; }
	int Anterior(int p);
	tipo Lista(int p);
	void Lista(tipo x, int p);
};
template<class tipo>ListaDoble<tipo>::~ListaDoble()
{
}

template<class tipo>int ListaDoble<tipo>::BuscarNodo()
{
	int y = _disp;
	_disp = _lista[_disp].Apuntador_Derecho();
	return y;
}

template<class tipo>void ListaDoble<tipo>::EliminarNodo(int y)
{
	_lista[y].Apuntador_Derecho(_disp);
	_disp = y;
}

template<class tipo>bool ListaDoble<tipo>::Insertar_Derecha(Nodo<tipo> x, int p)
{
	int y = this->BuscarNodo();
	_lista[y] = x;
	if(this->ListaLLena())
	{
		return false;
	}
	else
	{
		if(p==-1)
		{
			// esto pone al incio bajo cualquier contexto men :v
			p = _list;
			if (_list == -1)
			{
				_list = y;

				_lista[y].Apuntador_Derecho(p);//la priemr ave z ingresa en -1
				_lista[y].Apuntador_Izquierdo(p);
			}
			else
			{
				_lista[y].Apuntador_Derecho(p);
				_lista[y].Apuntador_Izquierdo(_lista[p].Apuntador_Izquierdo());
				_lista[p].Apuntador_Izquierdo(y);
				_list = y;
			}
		}
		
		else
		{
			_lista[y].Apuntador_Izquierdo(p);
			_lista[y].Apuntador_Derecho(_lista[p].Apuntador_Derecho());
			if(_lista[p].Apuntador_Derecho()!=-1)
			{
				_lista[_lista[p].Apuntador_Derecho()].Apuntador_Izquierdo(y);

			}
			
			_lista[p].Apuntador_Derecho(y);
		}
		return true;
	}


	
}

template<class tipo>bool ListaDoble<tipo>::Insertar_Izquierda(Nodo<tipo> x, int p)
{
	int y = this->BuscarNodo();
	_lista[y] = x;
	if (this->ListaLLena())
	{
		return false;
	}
	else
	{
		if (p == -1||_list==p)
		{
			// esto pone al incio bajo cualquier contexto men :v
			p = _list;
			if (_list == -1)
			{
				_list = y;

				_lista[y].Apuntador_Derecho(p);//la priemr ave z ingresa en -1
				_lista[y].Apuntador_Izquierdo(p);
			}
			else
			{
				_lista[y].Apuntador_Derecho(p);
				_lista[y].Apuntador_Izquierdo(_lista[p].Apuntador_Izquierdo());
				_lista[p].Apuntador_Izquierdo(y);
				_list = y;
			}
		}

		else
		{
			_lista[y].Apuntador_Derecho(p);
			_lista[y].Apuntador_Izquierdo(_lista[p].Apuntador_Izquierdo());
			_lista[_lista[p].Apuntador_Izquierdo()].Apuntador_Derecho(y);
			_lista[p].Apuntador_Izquierdo(y);
		}
		return true;
	}

}

template<class tipo>bool ListaDoble<tipo>::Extraer(Nodo<tipo>&x,int p)
{
	if (this->ListaVacia())
	{
		return false;
	}
	else
	{
		if (p == -1)  //Para eliminar el primero
		{
			p = _list;
		}
		x = _lista[p];
		if (_lista[p].Apuntador_Derecho() != -1 && _lista[p].Apuntador_Izquierdo() != -1)
		{
			_list = -1;
		}
		if (_lista[p].Apuntador_Derecho() != -1)
		{
			_lista[_lista[p].Apuntador_Derecho()].Apuntador_Izquierdo(_lista[p].Apuntador_Izquierdo());
		}
		if (_lista[p].Apuntador_Izquierdo() != -1)
		{
			_lista[_lista[p].Apuntador_Izquierdo()].Apuntador_Derecho(_lista[p].Apuntador_Derecho());
		}
		this->EliminarNodo(p);
		return true;
	}
}

template <class tipo>
int ListaDoble<tipo>::Proximo(int p)
{
	return _lista[p].Apuntador_Derecho();
}

template <class tipo>
int ListaDoble<tipo>::Anterior(int p)
{
	return _lista[p].Apuntador_Izquierdo();
}

template <class tipo>
tipo ListaDoble<tipo>::Lista(int p)
{
	return _lista[p].Elemento();
}

template <class tipo>
void ListaDoble<tipo>::Lista(tipo x, int p)
{
	_lista[p].Elemento(x);
}

template<class tipo>ListaDoble<tipo>::ListaDoble()
{
	int i = 0;
	while (i < N - 1)
	{
		_lista[i].Apuntador_Derecho(i + 1);
		i++;
	}
	_lista[i].Apuntador_Derecho(-1);
	_disp = 0;
	_list = -1;

}

template<class tipo>bool ListaDoble<tipo>::ListaVacia()
{
	if (_list == -1) { return true; }
	else { return false; }
}

template<class tipo>bool ListaDoble<tipo>::ListaLLena()
{
	if (_disp == -1) { return true; }
	else { return false; }
}