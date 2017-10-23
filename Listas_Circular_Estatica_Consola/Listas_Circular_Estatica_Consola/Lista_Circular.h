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
	


	~Lista_Circular(){}
};

