#pragma once
#include "Nodo.h"
template<class tipo>
class Lista_Circular
{
	Nodo<tipo> _Lista[N];
	int _disp, _list;

	int BuscarNodo()
	{
		int y = _disp;
		_disp = _Lista[_disp].ApuntadorEst();
		return y;
	}
	void EliminarNodo(int y)
	{
		_Lista[y].ApuntadorEst(_disp);
		_disp = y;
	}
public:
	Lista_Circular()
	{
		int i = 0;
		while (i < N - 1)
		{
			_Lista[i].ApuntadorEst(i + 1);
			i++;
		}
		_Lista[i].ApuntadorEst(-1);
		_disp = 0;
		_list = -1;
	}

	//principales

	bool ListaLLena() const;

	bool ListaVacia();

	bool Insertar(Nodo<tipo> x, int p);

	int Primero();

	bool Eliminar(Nodo<tipo>& x, int p);
	int Proximo(int i) { return _Lista[i].ApuntadorEst(); }
	int Ultimo() const
	{
		return _list;
	}
	int Fin_Lista()
	{
		int i;
		if (ListaVacia()) { return -1; }
		else
		{
			i = this->Primero();
			do
			{
				i = this->Proximo(i);
			} while (i != this->Primero());
			return i;
		}
	}
	//Nodo<tipo> TLista(int pos) { return _Lista[pos]; }
	//void TLista(tipo x, int pos) { _Lista[pos].Elemento( x); }//ver claramente mueve sin modificar su puntero
	int Localizar_Elemento(Nodo<tipo> x)
	{
		int i = -1;
		if (this->ListaVacia()) { return -1; }
		else
		{
			i = this->Primero();
			do
			{
				i = this->Proximo(i);
			} while (x.Elemento()!=_Lista[i].Elemento()&&i != this->Primero());
			if (x.Elemento() == _Lista[i].Elemento()) { return i; }
			else return -1;
		}
	}
	Nodo<tipo> Localizar_Puntero(int pos)
	{
		return _Lista[pos];
	}
	int Anterior(int pos)
	{
		int i = -1,q,w;
		if (this->ListaVacia()) { return -1; }
		else
		{
			i = this->Primero();
			do
			{
				q = i;
				i = this->Proximo(i);
			} while (i != this->Primero() && p != i);
			return q;
		}
	}
	void Swap(int p, int q)
	{
		Nodo<tipo> aux1, aux2;
		
	}
	void ThisL(Lista_Circular<tipo>x) { *this = x; }
	Lista_Circular<tipo> ThisL() { return *this; }
	~Lista_Circular(){}
	tipo Lista(int i) { return _Lista[i].Elemento(); }
	void Lista(int i, tipo aux) { _Lista[i].Elemento(aux); }
};

template <class tipo>
bool Lista_Circular<tipo>::ListaLLena() const
{
	if (_disp == -1) { return true; }
	else { return false; }
}

template <class tipo>
bool Lista_Circular<tipo>::ListaVacia()
{
	if (_list == -1) { return true; }
	else { return false; }
}

template <class tipo>
bool Lista_Circular<tipo>::Insertar(Nodo<tipo> x, int p)
{
	int y;
	if (ListaLLena()) { return false; }
	else
	{
		y = BuscarNodo();//busca el primero disponible para entrar
		_Lista[y] = x;
		if (p == -1)
		{
			
			if (ListaVacia())
			{
				_list = y;
				_Lista[y].ApuntadorEst(y);
			}//si no hay nada
			p = _list;

			//termina en que el unico elemento apunta a si mismo
		}
		else
		{
			if (_list == p) { _list = y; }
		}
		_Lista[y].ApuntadorEst(_Lista[p].ApuntadorEst());//busca a donde apunta el ultimo
		_Lista[p].ApuntadorEst(y);
		return true;
	}
}

template <class tipo>
int Lista_Circular<tipo>::Primero()
{
	return _Lista[_list].ApuntadorEst();
}

template <class tipo>
bool Lista_Circular<tipo>::Eliminar(Nodo<tipo>& x, int p)
{
	int y;
	if (ListaVacia()) { return false; }
	else
	{
		if (p == -1 || p == _list)
		{
			y = this->Primero();
			x = _Lista[y];
			if (y == _list) { _list = -1; }
			else
			{
				_Lista[_list].ApuntadorEst(_Lista[y].ApuntadorEst());
			}
		}
		else
		{
			y = _Lista[p].ApuntadorEst();
			x = _Lista[y];
			if (y == _list) { _list = p; }
			_Lista[p].ApuntadorEst(_Lista[y].ApuntadorEst());
		}
		this->EliminarNodo(y);
		return true;
	}
}
