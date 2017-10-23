#pragma once
#include "Memoria.h"
#include "Lista_Dinamica.h"
#include "string"
using namespace std;
template<class tipo>
class Aplicacion:public Memoria<tipo>,public Lista_Dinamica<tipo>
{
public:
	Aplicacion(){}
	~Aplicacion(){}
	//clasicos de manejo con interfaz
	void Memoria_ListaDim(Memoria<tipo> x)
	{
		int i;
		for ( i = 0; i < x.Tamano(); i++)
		{
			this->Insertar(nullptr, x.Arreglo(i));
		}

	}
	Memoria<tipo> ListaDim_Memoria(Lista_Dinamica<tipo> x)
	{
		Memoria<tipo> aux;
		Nodo<tipo> var, *p;
		int i = 0;
		p = this->Primero();
		while (p != this->Fin_Lista())
		{

			var.Elemento(x.Lista(p));
			p = this->Proximo(p);
			aux.Arreglo(var, i);
			i++;
		}
		aux.Tamano(i);
		return aux;
	}
	bool ValidoParaSn(string aux)
	{
		int i = 0;
		if(aux[aux.length()-1]=='S'||, aux[aux.length() - 1] == 's' || , aux[aux.length() - 1] == 'N' || , aux[aux.length() - 1] == 'n' || )
		{
			return true;
		}
		else { return false; }
	}
	//procesos sobre si misma
	void Invertir()
	{
		Nodo<tipo>*f,*q,aux;
		q = this->Primero();
		f = this->Primero();

		while (q != this->Ultimo())
		{
			this->Eliminar(q, aux);
			this->Insertar(nullptr, aux);
		}
	}
	void IngresarOrdenadamente(Nodo<tipo> x)
	{

		Nodo<tipo>*p = this->Primero();
		Nodo<tipo>*f = this->Fin_Lista();

		if (this->ListaVacia())
		{
			this->Insertar(nullptr, x);
		}
		else
		{
			while (p != f &&this->Lista(p) >x.Elemento())
			{
				p = this->Proximo(p);

			}
			if (p == this->Primero())
			{
				this->Insertar(nullptr, x);

			}
			else
			{
				this->Insertar(this->Anterior(p), x);
			}
		}

	}
	void Ordenar()
	{
		Nodo<tipo>*p, *q, *f, *b;
		p = this->Primero();
		while (p != this->Fin_Lista())
		{
			q =this->Primero();
			while (q != this->Ultimo())
			{
				if (this->Lista(p) > this->Lista(q))
				{
					this->Intercambiar(p, q);
				}
				q = this->Proximo(q);
			}
			p = this->Proximo(p);
		}
	}
	
	void EliminarNrepetidos(int cont)
	{
		Nodo<tipo>*p,*q,*aux,f;
		p = this->Primero();
		int copias=0;
		while (p != this->Fin_Lista())
		{
			q = this->Primero();
			while (p != this->Fin_Lista())
			{
				if (this->Lista(p) == this->Lista(q))
				{
					if(copias<cont)
					{
						copias++;
					}
					else
					{
						aux = this->Anterior(p);
						this->Eliminar(aux, f);
						p = aux;
					
					}
					

				}
				p = this->Proximo(p);
				
			}
			copias = 0;
			q = this->Proximo(q);
		}
	}
	
};

