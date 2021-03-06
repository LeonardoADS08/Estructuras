#pragma once
#include "Memoria.h"
#include "Pila_Din.h"
template<class tipo>
class Aplicacion:public Pila_Din<tipo>,public Memoria<tipo>
{
public:
	Aplicacion(){}
	//relacion con la interzas y la memoria
	void Memoria_PilaDim(Memoria<tipo> x);

	Memoria<tipo> PilaDim_Memoria();
	//operaciones sobre la misma pila
	void IngresarOrdenadamente(Nodo<tipo> elem);

	void Invertir();

	void OrdenarPila();

	void EliminarNrepetidos(int n);

	~Aplicacion(){}
};

template <class tipo>
void Aplicacion<tipo>::Memoria_PilaDim(Memoria<tipo> x)
{
	for (int i = 0; i < x.Tamano(); i++)
	{
		Nodo<tipo> var = x.Arreglo(i);
		this->Insertar(var);
	}
}

template <class tipo>
Memoria<tipo> Aplicacion<tipo>::PilaDim_Memoria()
{
	int i = 0;
	Nodo<tipo> var;
	Memoria<tipo> x;
	while (!this->Pila_Vacia())
	{
		this->Extraer(var);
		x.Arreglo(var, i);
		i++;
	}
	x.Tamano(i);
	//le devuelve a la lista su contenido original, sep estodo un desmadre
	for (int j = 0; j < x.Tamano(); j++)
	{
		this->Insertar(x.Arreglo(x.Tamano() - 1 - j));
	}
	return x;
}

template <class tipo>
void Aplicacion<tipo>::IngresarOrdenadamente(Nodo<tipo> elem)
{
	Pila_Din<tipo> aux1;
	Nodo<tipo> uno;
	if (this->Pila_Vacia())
	{
		this->Insertar(elem);
	}
	else
	{
		this->Tope(uno);
		while (elem.Elemento() > uno.Elemento() && !this->Pila_Vacia())
		{
			this->Extraer(uno);
			aux1.Insertar(uno);
			this->Tope(uno);
		}
		this->Insertar(elem);
		while (!aux1.Pila_Vacia())
		{
			aux1.Extraer(uno);
			this->Insertar(uno);
		}
	}
}

template <class tipo>
void Aplicacion<tipo>::Invertir()
{
	Pila_Din<tipo> aux;
	Nodo<tipo> uno;
	while (!this->Pila_Vacia())
	{
		this->Extraer(uno);
		aux.Insertar(uno);
	}
	ThisPD(aux);
}

template <class tipo>
void Aplicacion<tipo>::OrdenarPila()
{
	Aplicacion<tipo> aux;
	Nodo<tipo> uno, dos;
	while (!this->Pila_Vacia())
	{
		this->Extraer(uno);
		aux.IngresarOrdenadamente(uno);
	}
	this->ThisPD(aux.ThisPD());
}

template <class tipo>
void Aplicacion<tipo>::EliminarNrepetidos(int n)
{
	Nodo<tipo> basofia, uno, dos;
	Pila_Din<tipo> puros, aux;
	int cont = 0;
	while (!this->Pila_Vacia())
	{
		this->Extraer(uno);
		while (!this->Pila_Vacia())
		{
			this->Tope(dos);
			if (dos.Elemento() == uno.Elemento())
			{
				if (cont < n-1)
				{
					cont++;
					this->Extraer(dos);
					aux.Insertar(dos);
				}
				else
				{
					this->Extraer(basofia);
				}
			}
			else
			{
				this->Extraer(dos);
				aux.Insertar(dos);
			}
		}
		cont = 0;
		while(!aux.Pila_Vacia())
		{
			aux.Extraer(dos);
			this->Insertar(dos);
		}
		puros.Insertar(uno);
	}
	this->ThisPD(puros);
}

