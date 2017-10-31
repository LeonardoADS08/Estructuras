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
		while (p != this->Fin_Lista())
		{
			y.Elemento(this->Lista(p));

			if(y.Elemento().Fecha()!="")
			{	str.Elemento(y.Elemento().Fecha());
			aux.Arreglo(str, i);
			i++;
		}


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



	void Memoria_Materiales2(Memoria<string> x)
	{
		
		NodoEstatico<tipo> aux;
		tipo mat;
		for (int i = 0; i<x.Tamano(); i = i + 3)
		{
			mat.Fecha(x.Arreglo(i).Elemento());
			mat.Nombre(x.Arreglo(i + 1).Elemento());
			mat.Precio((atoi((x.Arreglo(i + 2).Elemento()).c_str())));
			aux.Elemento(mat);
			A.Insertar(aux, -1);

		}
	}
	Memoria<string> Material_Memoria2()
	{
		Memoria<string>aux;
		int i = 0;
		Nodo<string> str;
		Nodo<tipo> y;
		int p = A.Primero();
	do
		{
			y.Elemento(A.Lista(p));
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
			p = A.Proximo(p);
	} while (p != A.Fin_Lista());
		aux.Tamano(i);
		return aux;
	}
	
	
	
	Lista_Circular<tipo> Reportedepromedio()
	{
		Lista_Circular<tipo> _final;
		int prom = 0,saldo=0;
		Nodo<tipo>*p=this->Primero(),*q=p, aux,*o;
		NodoEstatico<tipo> h;
		tipo auros;
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
					

					o = this->Anterior(q);
					this->Eliminar(o, aux);
					q = o;
					q = this->Proximo(q);
					

				}
				else
				{
					q = this->Proximo(q);
				}
			}
			saldo = (int)(saldo / prom);
			auros.Precio(saldo);

			h.Elemento(auros);
			_final.Insertar(h, -1);
			q = this->Primero();
			p = this->Proximo(p);
		}
		return _final;
	}
	
	void ReportePromedioInverso()
	{
		
		int p = A.Primero();
		int q = p;
		int pos;
		int sol = 0, cant = 0;
		NodoEstatico<tipo> dos;
		tipo auxest;
		Nodo<tipo>auxdim;
		Lista_Dinamica<tipo> d;
		do
		{
			auxest.Nombre(A.Lista(p).Nombre());
			cant = 1;
			sol = A.Lista(p).Precio();
			do
			{
				if(A.Lista(p).Nombre()==A.Lista(q).Nombre()&&p!=q)
				{
					cant++;
					sol += A.Lista(q).Precio();
					pos = A.Anterior(q);
					A.Eliminar(dos, pos);
					q = A.Proximo(pos);
				}
				else
				{
					q = A.Proximo(q);
				}
			} while (q != A.Fin_Lista());
			auxest.Precio(sol / cant);
			auxdim.Elemento(auxest);
			d.Insertar(nullptr, auxdim);
			q = A.Primero();
			p = A.Proximo(p);
		} while (p != A.Fin_Lista());
	
		this->ThisL(d);
	}
	Memoria<string> ListaCriualr_mem(Lista_Circular<tipo> x)
	{
		int i = 0;
		Memoria<string> t;
		NodoEstatico<tipo>y;
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
	
	
};

