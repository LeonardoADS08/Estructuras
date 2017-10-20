#pragma once
#include "Nodo.h"

template<class tipo>
class Lista
{
	//en listas nunca usar while(i<n) a no ser que pida un algoritmo de ordenacion tampoco el i++
	//debido a que las listas estan encadenadas por sus punteros no por su posicion vectorial
	Nodo<tipo> _lista[N];
	int _disp;
	int _list;
	int BuscarNodo();
	void EliminarNodo(int);
public:
	Lista();
	Nodo<tipo> TLista(int p) { return _lista[p]; }
	void TLista(int p, Nodo<tipo> var) { _lista[p] = var; }
	bool ListaVacia();
	bool ListaLLena();
	bool  Insertar(Nodo<tipo>x, int p);
	bool  Extraer(Nodo<tipo>&x, int p);
	Lista<tipo> ThisL();
	void ThisL(Lista<tipo> x);
	int Primero();//devolver _list
	int Proximo(int p);//devolver el proximo de P
	int Ultimo();//el puntero del ultimo elemento de la lista
	int Fin_Lista();//El el puntero del penultimo elemento de a lista o la ubicacion vectorial del ultimo elemento
	bool Equivalente(int p, int q);//verifica si dos elementos son iguales
	Nodo<tipo> Localizar_Puntero(int p);//busca el puntero  que recibe y devuelve el elemento
	int Localizar_Elemento(Nodo<tipo> x);//busca el elemento y devuelve su puntero
	int Localizar_Elemento_anterior(Nodo<tipo> x);
	Nodo<tipo> Localizar_Puntero_Anterior(int p);
	int Anterior(int ant)//le manda una poscicion vectorial y devuelve la posicion vectorial del elemento anterior a el
	{
		int r = this->Primero();
		int fin = this->Fin_Lista();
		if (this->Primero() == this->Ultimo())
		{ return -1; }
		else {
			int anterior = -2;
			while ((r != ant) && (r != fin))
			{
				anterior = r;
				r = this->Proximo(r);
			}
			return anterior;
		}
	}
	int Cantidad()
	{
		int i ,h= this->Primero();
		int j = this->Ultimo();
		while (i != j)
		{
			h = i;
			i = this->Proximo(i);
		}
		return h;
	}
};

template<class tipo>int Lista<tipo>::BuscarNodo()
{
	int y = _disp;
	_disp = _lista[_disp].Apuntador();
	return y;
}

template<class tipo>void Lista<tipo>::EliminarNodo(int y)
{
	_lista[y].Apuntador(_disp);
	_disp = y;
}

template<class tipo>Lista<tipo>::Lista()
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

template<class tipo>bool Lista<tipo>::ListaVacia()
{
	if (_list == -1) { return true; }
	else { return false; }
}

template<class tipo>bool Lista<tipo>::ListaLLena()
{
	if (_disp == -1) { return true; }
	else { return false; }
}

template<class tipo>bool Lista<tipo>::Insertar(Nodo<tipo> x, int p)
{
	int y;
	if (ListaLLena()) { return false; }
	else
	{
		y = BuscarNodo();
		if (p == -1)//pone al principio de la lista(no no le da al nuevo elemento el valor de -1)
		{
			x.Apuntador(_list);
			_lista[y] = x;
			_list = y;
		}
		else//recibe la pos vectorail del elemento al cual le quieres poner enfrente de el
		{
			x.Apuntador(_lista[p].Apuntador());
			_lista[y] = x;
			_lista[p].Apuntador(y);
		}
		return true;
	}
}

template<class tipo>bool Lista<tipo>::Extraer(Nodo<tipo>&x, int p)
{
	if (ListaVacia())
	{
		return false;
	}
	else
	{
		if (p == -1)//eliminar el primero de la lista 
		{
			x = _lista[_list];//devuelve el primer elemento
			x.Apuntador(-1);//quita la basura que hay en x
			p = _list;
			_list = _lista[_list].Apuntador();//toma el valor del apuntador del valor que sale
			EliminarNodo(p);
			return true;
		}
		else//siempre me envian uno anterior al que quiero eliminar
		{
			int y;
			if (_lista[p].Apuntador() == -1)
			{
				return false;//si es que el p que mandan es el apuntodr del ultimo elemento 
			}
			else
			{
				x = _lista[_lista[p].Apuntador()];
				x.Apuntador(-1);
				y = _lista[p].Apuntador();
				_lista[p].Apuntador(_lista[_lista[p].Apuntador()].Apuntador());//hace que el anterior tome el apuntador delsiguiente
																			   //hasta aqui aun no elimina el nodo solo lo quita del orden d ela lista
				p = y;
				EliminarNodo(p);
				return true;
			}
		}

	}
}

template<class tipo>Lista<tipo> Lista<tipo>::ThisL()
{
	return *this;
}

template<class tipo>void Lista<tipo>::ThisL(Lista<tipo> x)
{
	*this = x;
}

template<class tipo>int Lista<tipo>::Primero()
{
	return _list;
}

template<class tipo>int Lista<tipo>::Proximo(int  p)
{
	return _lista[p].Apuntador();
}

template<class tipo>int Lista<tipo>::Ultimo()//pos vectorial del ultimo elemento
{
	int i = Primero(), j = -1;
	while (i != -1)
	{
		j = i;
		i = Proximo(i);

	}
	return j;
}

template<class tipo>int Lista<tipo>::Fin_Lista()
{
	int i = Primero();
	while (i != -1)
	{
		i = Proximo(i);
	}
	return i;
}

template<class tipo>bool Lista<tipo>::Equivalente(int p, int q)
{
	if (_lista[p] == _lista[q])
	{
		return true;
	}
	else { return false; }
}

template<class tipo>Nodo<tipo> Lista<tipo>::Localizar_Puntero(int p)
{
	return _lista[p];
}

template<class tipo>int Lista<tipo>::Localizar_Elemento(Nodo<tipo> x)
{
	int i = Primero();
	int fin = Fin_Lista();
	while (i != fin&&_lista[i].Elemento() != x.Elemento())
	{
		i = Proximo(i);
	}
	if (_lista[i].Elemento() == x.Elemento())//debera ser equivalente(aunque no creo que funcione)
	{
		return i;//retorna la posicion vectorial del elemento que se busca
	}
	else
	{
		return -1;
	}
}

template<class tipo>int Lista<tipo> ::Localizar_Elemento_anterior(Nodo<tipo> x)
{
	int i = Primero(), p;
	int fin = Fin_Lista();
	while (i != fin&&_lista[i].Elemento() != x.Elemento())
	{
		p = i;
		i = Proximo(i);
	}
	if (_lista[i].Elemento() == x.Elemento())
	{
		return p;
	}
	else
	{
		return -1;
	}
}

template<class tipo>Nodo<tipo> Lista<tipo>::Localizar_Puntero_Anterior(int p)
{
	int i = Primero();
	int q = -1;
	while (i != p)
	{
		q = i;
		i = Proximo(i);
	}
	return _lista[q];
}


//aplicaciones
//invertir sobre la misma lista