#pragma once
#include "Memoria.h"
#include "Cola_Din.h"
template<class tipo>
class Aplicacion:public Cola_Din<tipo>,public Memoria<tipo>
{
public:
	Aplicacion(){}
	//relacion con la interzas y la memoria
	void Memoria_ColaDin(Memoria<tipo> x);

	Memoria<tipo> ColaDin_Memoria();
	//operaciones sobre la misma pila
	void IngresarOrdenadamente(Nodo<tipo> elem);
	
	void Invertir();

	void OrdenarCola();

	void EliminarNrepetidos(int n);

	~Aplicacion(){}
};

template <class tipo>
void Aplicacion<tipo>::EliminarNrepetidos(int n)
{
	int cont = 0;
	
	Nodo<tipo> uno, dos;
	Cola_Din<tipo>perfectos, aux2;
	while(!this->Cola_Vacia())
	{
		this->Eliminar(uno);
		while (!this->Cola_Vacia())
		{
			this->Frente(dos);
			if(uno.Elemento()==dos.Elemento())
			{
				if(cont<n-1)
				{
					cont++;
					this->Eliminar(dos);
					aux2.Insertar(dos);
				}
				else
				{
					this->Eliminar(dos);
				}
			}
			else
			{
				this->Eliminar(dos);
				aux2.Insertar(dos);
			}
			
		}
		while (!aux2.Cola_Vacia())
		{
			aux2.Eliminar(dos);
			this->Insertar(dos);
		}
		perfectos.Insertar(uno);


	}

	this->ThisCD(perfectos);
}

template <class tipo>
void Aplicacion<tipo>::Memoria_ColaDin(Memoria<tipo> x)
{
	for (int i = 0; i < x.Tamano(); i++)
	{
		Nodo<tipo> var = x.Arreglo(i);
		this->Insertar(var);
	}
}

template <class tipo>
Memoria<tipo> Aplicacion<tipo>::ColaDin_Memoria()
{
	int i = 0;
	Nodo<tipo> var;
	Memoria<tipo> x;
	while (!this->Cola_Vacia())
	{
		this->Eliminar(var);
		x.Arreglo(var, i);
		i++;
	}
	x.Tamano(i);
	//le devuelve a la cola su contenido original
	for (int j = 0; j < x.Tamano(); j++)
	{
		this->Insertar(x.Arreglo(j));
	}
	return x;
}

template <class tipo>
void Aplicacion<tipo>::IngresarOrdenadamente(Nodo<tipo> elem)
{
	Nodo<tipo>uno;
	Cola_Din<tipo> aux, aux2;
	if(this->Cola_Vacia())
	{
		this->Insertar(elem);
	}
	else
	{
		this->Frente(uno);
		while (!this->Cola_Vacia()&&uno.Elemento()<elem.Elemento())
		{
			this->Eliminar(uno);
			aux.Insertar(uno);
			
			this->Frente(uno);
		}
		while(!this->Cola_Vacia())
		{
			this->Eliminar(uno);
			aux2.Insertar(uno);
		}
		while (!aux.Cola_Vacia())
		{
			aux.Eliminar(uno);
			this->Insertar(uno);
		}
		this->Insertar(elem);
		while (!aux2.Cola_Vacia())
		{
			aux2.Eliminar(uno);
			this->Insertar(uno);
		}
	}
}

template <class tipo>
void Aplicacion<tipo>::Invertir()
{
	Nodo<tipo>uno, dos;
	Cola_Din<tipo>aux, aux2;
	bool quedauno = false;
	while (!this->Cola_Vacia())
	{
		while(!this->Cola_Vacia())
		{
			this->Eliminar(uno);
			if(this->Cola_Vacia())
			{
				aux.Insertar(uno);
			
			}
			else
			{
				aux2.Insertar(uno);
			}
		}

		while(!aux2.Cola_Vacia())
		{
			aux2.Eliminar(dos);
			this->Insertar(dos);
		}
	}
	this->ThisCD(aux.ThisCD());

}

template <class tipo>
void Aplicacion<tipo>::OrdenarCola()
{
	Aplicacion<tipo> x;
	Nodo<tipo> uno;
	while(!this->Cola_Vacia())
	{
		this->Eliminar(uno);
		x.IngresarOrdenadamente(uno);
	}
	this->ThisCD(x.ThisCD());
}
