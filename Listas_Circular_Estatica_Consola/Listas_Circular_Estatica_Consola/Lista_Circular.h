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
		_disp = _lista[_disp].Apuntador();
		return y;
	}
	void EliminarNodo(int y)
	{
		_lista[y].Apuntador(_disp);
		_disp = y;
	}
public:
	Lista_Circular()
	{
		int i = 0;
		while (i < N - 1)
		{
			_lista[i].Apuntador(i + 1);
			i++;
		}
		_lista[i].Apuntador(-1);
		_disp = 0;
		_list = -1;
	}

	//principales

	bool ListaLLena()
	{
		if (_disp == -1) { return true; }
		else { return false; }
	}
	bool ListaVacia()
	{
		if (_list == -1) { return true; }
		else { return false; }
	}
	bool Insertar(Nodo<tipo> val,int p)
	{
		if (ListaLLena()) { return false; }
		else
		{
			y = BuscarNodo();//busca el primero disponible para entrar
			_Lista[y] = x;
			if (p == -1)
			{
				if (ListaVacia()) { _list = y; }//si no hay nada
				p = _list;
			
				//termina en que el unico elemento apunta a si mismo
			}
			else
			{
				if (_list == p) { _list = y; }
			

			}
			_Lista[y].Apuntador(_Lista[p].Apuntador());//busca a donde apunta el ultimo
			_Lista[p].Apuntador(y);
			return true;
		}
	}
	int Primero(int a)
	{
		return _list[a].Apuntador();
	}
	bool Eliminar(Nodo<tipo>&x, int p)
	{
		int y;
		if (ListaVacia()) { return false; }
		else
		{
			if (p == -1||p==_list)
			{
				y = this->Primero();
				x = _Lista[y];
				if (y == _list) { _list = -1; }
				else
				{
					_Lista[_list].Apuntador(_Lista[y].Apuntador());
				}
			}
			else
			{
				y = _Lista[p].Apuntador();
				x = _Lista[y];
				if (y == _list) { _list = p; }
				_Lista[p].Apuntador(_Lista[y].Apuntador());
				
			}
			this->EliminarNodo(y);
			return true;
		}
	}
	int Proximo(int i) { return _lista[i].Apuntador(); }
	int Ultimo()
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
	Nodo<tipo> TLista(int pos) { return _Lista[pos]; }
	void TLista(Nodo<tipo>x, int pos) { _Lista[pos] = x; }
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

	~Lista_Circular(){}
};