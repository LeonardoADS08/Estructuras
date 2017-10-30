#pragma once
#include "Memoria.h"
#include "Lista_Dinamica.h"
#include "string"
#include "Material.h"
#include "Lista_Circular.h"
using namespace std;
template<class tipo>
class Aplicacion:public Memoria<tipo>,public Lista_Dinamica<tipo>
{
	Lista_Circular<Material> A;

public:
	Aplicacion(){}
	~Aplicacion(){}

	void ThisA(Lista_Circular<Material> x) { A = x; }
	Lista_Circular<Material> ThisA() { return A; }


	void Memoria_Materiales(Memoria<string> x)
	{
		
		Nodo<tipo> aux,*pos=nullptr;
		Material mat;
		for(int i=0;i<x.Tamano();i=i+3)
		{
			mat.Fecha(x.Arreglo(i).Elemento());
			mat.Nombre(x.Arreglo(i+1).Elemento());
			mat.Precio((atoi((x.Arreglo(i + 2).Elemento()).c_str())));
				aux.Elemento(mat);
				this->Insertar(nullptr, aux);

		}
	}
	Memoria<string> Material_Memoria()
	{
		Memoria<string>aux;
		int i = 0;
		Nodo<string> str;
		Nodo<Material> y;
		Nodo<tipo>*p = this->Primero(), *q=p;
		while(p!=this->Fin_Lista())
		{
			y.Elemento( this->Lista(p));
			str.Elemento(y.Elemento().Fecha());
			aux.Arreglo(str, i);
			i++;
			str.Elemento(y.Elemento().Nombre());
			aux.Arreglo(str, i);
			i++;

			//to_string(var.Elemento().Numero()));
			str.Elemento(to_string(y.Elemento().Precio()));
			aux.Arreglo(str, i);
			i++;
			p = this->Proximo(p);
		}
		aux.Tamano(i);
		return aux;
	}
	Lista_Circular<Material> Reportedepromedio()
	{
		Lista_Circular<Material> _final;
		int prom = 0,saldo=0;
		Nodo<Material>*p=this->Primero(),*q=p, aux;
		NodoEstatico<Material> yyy;
		Material auros;
		while(p!=this->Fin_Lista())
		{
			aux.Elemento(this->Lista(p));
			auros.Nombre( this->Lista(p).Nombre());
			//_final.Insertar(aux, -1);
			prom=1;
			saldo = aux.Elemento().Precio();
			while (q != this->Fin_Lista())
			{
				if (this->Lista(q).Nombre() == this->Lista(p).Nombre() &&p!=q)
				{
					
					prom++;
					saldo += this->Lista(q).Precio();
					q = this->Proximo(q);

				}
				else
				{
					q = this->Proximo(q);
				}
			}
			saldo = (int)(saldo / prom);
			auros.Precio(saldo);

			yyy.Elemento(auros);
			_final.Insertar(yyy, -1);
			q = this->Primero();
			p = this->Proximo(p);
		}
		return _final;
	}
	
	Memoria<string> ListaCriualr_mem(Lista_Circular<Material> x)
	{
		int i = 0;
		Memoria<string> t;
		NodoEstatico<Material>y;
		Nodo<string> u;
		while(!x.ListaVacia())
		{
			x.Eliminar(y, -1);
			u.Elemento(y.Elemento().Nombre());
			t.Arreglo(u, i);
			i++;
			u.Elemento(to_string(y.Elemento().Precio()));
			t.Arreglo(u, i);
			i++;
		}
		t.Tamano(i);
		return t;

	}


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
		if(aux[aux.length()-1]=='S'|| aux[aux.length() - 1] == 's' ||  aux[aux.length() - 1] == 'N' ||  aux[aux.length() - 1] == 'n' )
		{
			return true;
		}
		else { return false; }
	}
	void ClearList()
	{
		Nodo<tipo> aux;
		while (!this->ListaVacia())
		{
			this->Eliminar(nullptr, aux);
		}
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
		tipo dos;
		int pasos = 0;
		Nodo<tipo> *p = this->Primero();
		Nodo<tipo> *q = p;
		Nodo<tipo>*pos = nullptr, x;
		while (p != this->Fin_Lista())
		{
			
			while (q != this->Fin_Lista())
			{
				if (this->Lista(q) == this->Lista(p))
				{
					if (pasos<cont )
					{
						pasos++;
						q = this->Proximo(q);
					}
					else
					{
						pos = this->Anterior(q);
						this->Eliminar(pos, x);
						q = pos;
						q = this->Proximo(q);
					}
				}
				else
				{
					q = this->Proximo(q);
				}
			}
			q = this->Primero();
			pasos = 0;
			p = this->Proximo(p);
		}
	}

	Lista_Dinamica<tipo> EliminarSn()
	{
		Nodo<tipo> var;
		Lista_Dinamica<tipo> aux;
		Nodo<tipo>*p, *q, *r;
		p = this->Primero();
		while (p != this->Fin_Lista())
		{
			if (ValidoParaSn(this->Lista(p)))
			{
				if (p == this->Primero())
				{
					this->Eliminar(nullptr, var);
					
				}
				else
				{
					r = this->Anterior(p);
					this->Eliminar(r, var);
					p = r;
				}
				aux.Insertar(nullptr, var); 
			}
			p = this->Proximo(p);
		}
		return aux;
	}
	
};

