#pragma once
#include "MEMORIA.h"
#include "Pila.h"
template<class tipo>
class APLICACION:public MEMORIA<tipo>
{
	Pila<tipo> _pile;
public:
	APLICACION(void){}
	void Memoria_Pila(MEMORIA<tipo> x)
	{
		for(int i =0;i<x.Tamano();i++)
		{
			_pile.Insertar(x.Arreglo(i));
		}
	}
	void This_Pile(Pila<tipo> x){_pile=x; }
	Pila<tipo> This_Pile(){return _pile;}
	void Pila_Memoria()
	{
		int i=0;
		NODO<tipo> aux;
		while(_pile.PilaVacia()==false)
		{
			_pile.Eliminar(aux);
			this->Arreglo(aux,i);
			i++;
			this->Tamano(i);
		}

	}
	void Memoria_Pila_ordenadamente(MEMORIA<tipo> a)
	{
		Pila<tipo> auxiliar;
	int n, i = 0,nodis1;
	NODO<tipo> aux, aux2, aux3;
	n=a.Tamano();
	while (n--)
	{
		
		aux=a.Arreglo(i);
		_pile.Tope(aux2);
		if (aux2.Elemento() < aux.Elemento()&&_pile.PilaVacia()==false)
		{
			while (aux2.Elemento() < aux.Elemento() &&_pile.PilaVacia() == false)
			{
				_pile.Eliminar(aux2);
				auxiliar.Insertar(aux2);
				_pile.Tope(aux2);
			}
			_pile.Insertar(aux);
			while (!auxiliar.PilaVacia())
			{
				auxiliar.Eliminar(aux2);
				_pile.Insertar(aux2);
			}
			
		}
		else { _pile.Insertar(aux); }
		i++;
	}
	}
	void EliminarDuplicados()
	{
	Pila<tipo> aux,aux2;
	NODO<tipo> uno, dos,tres;
	while (!_pile.PilaVacia())
	{
		_pile.Eliminar(uno);
		while (!_pile.PilaVacia())
		{
			_pile.Eliminar(dos);
			if (dos.Elemento() != uno.Elemento())
			{
				aux.Insertar(dos);
			}
		}
		while (!aux.PilaVacia())
		{
			aux.Eliminar(tres);
			_pile.Insertar(tres);
		}
		aux2.Insertar(uno);

		
	}
	_pile = aux2;
	}
	void Pila_Ordenar()
	{
	NODO<int> uno, dos, tres;
	Pila<int> aux,aux2;
	while (!_pile.PilaVacia())
	{
		_pile.Eliminar(uno);
		if(aux.PilaVacia())
		{
			aux.Insertar(uno);
		}
		else
		{
			aux.Tope(dos);
			if (dos.Elemento() < uno.Elemento())
			{
				while (!aux.PilaVacia() && dos.Elemento() < uno.Elemento())
				{
					aux.Eliminar(dos);
					aux2.Insertar(dos);
					aux.Tope(dos);
				}
				aux.Insertar(uno);
				while (!aux2.PilaVacia())
				{
					aux2.Eliminar(dos);
					aux.Insertar(dos);
				}
			}
			else
			{
				aux.Insertar(uno);
			}
		}
	}
	_pile = aux;
	}
	void InvertirPila()
	{
		Pila<int> sub;
		NODO<int> i;
		while (!_pile.PilaVacia())
		{
			_pile.Eliminar(i);
			sub.Insertar(i);
		}
		_pile = sub;
	}
};

