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
			this->Insertar(NULL, x.Arreglo(i));
		}

	}
	Memoria<tipo> ListaDim_Memoria(Lista_Dinamica<tipo> x)
	{
		Memoria<tipo> aux;
		Nodo<tipo> var,*p;
		int i = 0;
		p = this->Primero();
		while (p!=this->Fin_Lista())
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
			this->Insertar(NULL, aux);
		}
	}
	void IngresarOrdenadamente(Nodo<tipo> x)
	{

		Nodo<tipo>*p = this->Primero();
		Nodo<tipo>*f = this->Fin_Lista();

		if (this->ListaVacia())
		{
			this->Insertar(NULL, x);
		}
		else
		{
			while (p != f &&this->Lista(p) >x.Elemento())
			{
				p = this->Proximo(p);

			}
			if (p == this->Primero())
			{
				this->Insertar(NULL, x);

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
	
	Lista_Dinamica<tipo> EliminarNrepetidos(int cont)
	{
		tipo dos;
		int pasos = 0;
		Nodo<tipo> *p = this->Primero();
		Nodo<tipo> *q = p;
		Nodo<tipo>*pos=nullptr,x;
		while (p != this->Fin_Lista())
		{
			tipo uno = this->Lista(p);
			while(q!=this->Fin_Lista())
			{
				if(this->Lista(q)==this->Lista(p))
				{
					if(pasos<cont-1)
					{
					pasos++;
					q = this->Proximo(q);
					}
					else
					{
						pos = this->Anterior(q);
						this->Eliminar(pos, x);
						q = pos;
					}
				}
				else
				{
					q = this->Proximo(q);
				}
			}
			pasos = 0;
			p = this->Proximo(p);
		}
	}
	
};

