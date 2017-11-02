#pragma once
#include "Memoria.h"
#include "ListaCDin.h"
#include "string"
using namespace std;
template<class tipo>
class Aplicacion:public Memoria<tipo>,public ListaCDin<tipo>
{
public:
	Aplicacion(){}
	~Aplicacion(){}
	//clasicos de manejo con interfaz
	void Memoria_ListaCrdin(Memoria<tipo> var);

	Memoria<tipo> ListaCrdin_Memoria();

	void Invertir();

	void IngresoOrdenado(Nodo<tipo> elem);

	void Ordenar()//pendiente
	{
		Nodo<tipo> *p = this->Primero();
		Nodo<tipo> *q;
		do
		{
			q = this->Proximo(p);
			do
			{
				
				if(this->Lista(p)>this->Lista(q))
				{
					this->Swap(p, q);
				}
				q = this->Proximo(q);
			} while (q != this->Fin_Lista());
			p = this->Proximo(p);
		} while (p != this->Ultimo());
	}

	void EliminarNrepetidos(int copias)
	;
};

template <class tipo>
void Aplicacion<tipo>::EliminarNrepetidos(int copias)
{
	int cont = 0;
	Nodo<tipo> aux;
	Nodo<tipo> *p = this->Primero();
	Nodo<tipo> *q = p;
	do
	{
		do
		{
			if (this->Lista(p) == this->Lista(q) && p != q)
			{
				if (cont < copias - 1)
				{
					cont++;
					q = this->Proximo(q);
				}

				else
				{
					Nodo<tipo> *r = this->Anterior(q);
					this->Extraer(r, aux);
					q = this->Proximo(r);
				}
			}
			else
			{
				q = this->Proximo(q);
			}
		}
		while (q != this->Fin_Lista());

		p = this->Proximo(p);
		q = this->Primero();
		cont = 0;
	}
	while (p != this->Fin_Lista());
}

template <class tipo>
void Aplicacion<tipo>::Memoria_ListaCrdin(Memoria<tipo> var)
{
	for (int i = 0; i < var.Tamano(); i++)
	{
		this->Insertar(nullptr, var.Arreglo(i));
	}
}

template <class tipo>
Memoria<tipo> Aplicacion<tipo>::ListaCrdin_Memoria()
{
	int i = 0;
	Memoria<tipo> x;
	Nodo<tipo> *p, aux;
	p = this->Primero();
	do
	{
		aux.Elemento(this->Lista(p));
		x.Arreglo(aux, i);
		i++;
		p = this->Proximo(p);
	}
	while (p != this->Fin_Lista());
	x.Tamano(i);
	return x;
}

template <class tipo>
void Aplicacion<tipo>::Invertir()
{
	Nodo<tipo> *p = this->Primero(), uno;
	while (p != this->Ultimo())
	{
		this->Extraer(p, uno);
		this->Insertar(nullptr, uno);
	}
}

template <class tipo>
void Aplicacion<tipo>::IngresoOrdenado(Nodo<tipo> elem)
{
	Nodo<tipo> *p, *q;
	if (this->Lista_Vacia())
	{
		this->Insertar(nullptr, elem);
	}
	else
	{
		p = this->Primero();
		do
		{
			if (this->Lista(p) > elem.Elemento())
			{
				if (p == this->Primero())
				{
					this->Insertar(nullptr, elem);
					break;
				}
				else
				{
					this->Insertar(this->Anterior(p), elem);
					break;
				}
			}
			else if (this->Proximo(p) == this->Primero())
			{
				this->Insertar(this->Ultimo(), elem);
				break;
			}

			p = this->Proximo(p);
		}
		while (p != this->Fin_Lista());
	}
}

