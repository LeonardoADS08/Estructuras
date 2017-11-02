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

	void IngresoOrdenado(Nodo<tipo> elem)
	{

		Nodo<tipo>*p, *q;
		if(this->Lista_Vacia())
		{
			this->Insertar(nullptr, elem);
		}
		else
		{
			p = this->Primero();
			do
			{
				if(this->Lista(p)>elem.Elemento())
				{
					if(p==this->Primero())
					{
						this->Insertar(nullptr, elem); break;
					}
					else 
					{
						this->Insertar(this->Anterior(p), elem); break;
					}
				
				}
				else if(this->Proximo(p)==this->Primero())
				{
					this->Insertar(this->Ultimo(), elem); break;
				}
				
				p = this->Proximo(p);
			} while (p != this->Fin_Lista());
		}
	}

	void Ordenar()//pendiente
	{
		Nodo<tipo>*p, *q, aux;
		p = this->Primero();
		do
		{
			do
			{
				
			} while (p != this->Ultimo());
		} while (p != this->Fin_Lista());
	}
	void EliminarNrepetidos(int copias)//pendiente mi tener sue�o
	{
		Nodo<tipo>*p, *q, aux;
		p = this->Primero();
		do
		{
			
		} while (p != this->Fin_Lista());
	}
};

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
	Nodo<tipo> *p = this->Primero(), *q = p, uno;
	while (p != this->Ultimo())
	{
		this->Extraer(p, uno);
		this->Insertar(nullptr, uno);
	}
}

