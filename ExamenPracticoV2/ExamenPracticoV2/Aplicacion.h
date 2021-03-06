#pragma once
#include "Memoria.h"
#include "string"
#include "Lista_Circular.h"
#include "ListaCDin.h"
#include "Lista.h"
#include "Lista_Dinamica.h"
#include "Pila.h"
#include "Pila_Din.h"
#include "Cola.h"
#include "Cola_Din.h"
using namespace std;
template<class tipo>
class Aplicacion:public Memoria<tipo>,public ListaCDin<tipo>,public Lista_Circular<tipo>,public Lista<tipo>,public Lista_Dinamica<tipo>,
public Pila<tipo>,public Pila_Din<tipo>,public Cola<tipo>,public Cola_Din<tipo>
{
	/*Lista_Circular<Material> A;
*/
public:
	Aplicacion(){}
	~Aplicacion(){}



	void Memoria_ListaCircEst(Memoria<tipo> x)
	{
		Nodo<tipo> aux;
		for(int i=0;i<x.Tamano();i++)
		{
			aux = x.Arreglo(i);
			this->Lista_Circular::Insertar(aux, -1);
		}
	}
	void Memoria_ListaCircDim(Memoria<tipo> x)
	{
		Nodo<tipo> aux;
		for (int i = 0; i<x.Tamano(); i++)
		{
			aux = x.Arreglo(i);
			this->ListaCDin::Insertar(nullptr,aux);
		}
	}
	void Memoria_ListaLinealEst(Memoria<tipo>x)
	{
		Nodo<tipo> aux;
		for(int i=0;i<x.Tamano();i++)
		{
			this->Lista::Insertar(x.Arreglo(i), -1);
		}
	}
	void Memoria_ListaLinealDin(Memoria<tipo>x)
	{
		for(int i=0;i<x.Tamano();i++)
		{
			this->Lista_Dinamica::Insertar(nullptr, x.Arreglo(i));
		}
	}
	void Memoria_PilaEst(Memoria<tipo>x)
	{
		for(int i=0;i<x.Tamano();i++)
		{
			this->Pila::Insertar(x.Arreglo(i));
		}
	}
	void Memoria_PilaDinamic(Memoria<tipo>x)
	{
		for (int i = 0; i<x.Tamano(); i++)
		{
			this->Pila_Din::Insertar(x.Arreglo(i));
		}
	}
	void Memoria_ColaEstatica(Memoria<tipo> x)
	{
		for(int i=0;i<x.Tamano();i++)
		{
			this->Cola::Insertar(x.Arreglo(i));
		}
	}
	void Memoria_ColaDinamica(Memoria<tipo> x)
	{
		for(int i=0;i<x.Tamano();i++)
		{
			this->Cola_Din::Insertar(x.Arreglo(i));
		}
	}
	Memoria<tipo> ColaDinamica_Memoria()
	{
		Memoria<tipo> fin;
		int i = 0;
		Nodo<tipo> aux;
		while(!this->Cola_Din::Cola_Vacia())
		{
			this->Cola_Din::Eliminar(aux);
			fin.Arreglo(aux, i);
			i++;
		}
		fin.Tamano(i);
		this->Memoria_ColaDinamica(fin);
		return fin;
	}
	Memoria<tipo> ColaEstatica_Memoria()
	{
		int i = 0;
		Memoria<tipo> fin;
		Nodo<tipo> aux;
		while(!this->Cola::ColaVacia())
		{
			this->Cola::Extraer(aux);
			fin.Arreglo(aux, i);
			i++;

		}
		fin.Tamano(i);
		this->Memoria_ColaEstatica(fin);
		return fin;
	}
	Memoria<tipo> PilaDinamica_Memoria()
	{
		int i = 0;
		Nodo<tipo> aux;
		Memoria<tipo> fin;
		while (!this->Pila_Din::Pila_Vacia())
		{
			this->Pila_Din::Extraer(aux);
			fin.Arreglo(aux, i);
			i++;
		}
		fin.Tamano(i);
		for (int i = 0; i<fin.Tamano(); i++)
		{
			this->Pila_Din::Insertar(fin.Arreglo(fin.Tamano() - 1 - i));
		}
		return fin;
	}
	Memoria<tipo> PilaEstatica_Memoria()
	{
		int i = 0;
		Nodo<tipo> aux;
		Memoria<tipo> fin;
		while(!this->Pila::PilaVacia())
		{
			this->Pila::Eliminar(aux);
			fin.Arreglo(aux, i);
			i++;
		}
		fin.Tamano(i);
		for (int i = 0; i<fin.Tamano(); i++)
		{
			this->Pila::Insertar(fin.Arreglo(fin.Tamano()-1-i));
		}
		return fin;
	}
	Memoria<tipo> ListaLinearDinamic_Memoria()
	{
		Nodo<tipo>*p = this->Lista_Dinamica::Primero();
		Nodo<tipo>aux;
		int i = 0;
		Memoria<tipo> fin;
		while(p!=nullptr)
		{
			aux.Elemento(this->Lista_Dinamica::Lista(p));
			fin.Arreglo(aux, i);
			i++;
			p = this->Lista_Dinamica::Proximo(p);
		}
		fin.Tamano(i);
		return fin;
	}
	Memoria<tipo> ListaLinearEstatica_Memoria()
	{
		Memoria<tipo> fin;
		Nodo<tipo>aux;
		int i = 0;
		int p = this->Lista::Primero();
		while(p!=-1)
		{
			aux.Elemento(this->Lista::TLista(p));
			fin.Arreglo(aux, i);
			i++;
			p = this->Lista::Proximo(p);
		}
		fin.Tamano(i);
		return fin;
	}
	Memoria<tipo> ListaCDin_Memoria()
	{
		int i = 0;
		Memoria<tipo> fin;
			Nodo<tipo> aux,*p=this->ListaCDin::Primero();
		do
		{

			aux.Elemento(this->ListaCDin::Lista(p));
			p = this->ListaCDin::Proximo(p);
			fin.Arreglo(aux, i);
			i++;
		} while (p != this->ListaCDin::Fin_Lista());
		fin.Tamano(i);
		
		return fin;
	}
	Memoria<tipo> ListaCircEst_Memoria()
	{
		Memoria<tipo> Fin;
		Nodo<tipo> aux;
		int i = 0;
		int p = this->Lista_Circular::Primero();
		do
		{
			
			aux.Elemento(this->Lista_Circular::Lista(p));
			p = this->Lista_Circular::Proximo(p);
			Fin.Arreglo(aux, i);
			i++;
		} while (p != this->Lista_Circular::Fin_Lista());
		Fin.Tamano(i);
			return Fin;
	}




	//void ThisA(Lista_Circular<Material> x) { A = x; }
	//
	//Lista_Circular<Material> ThisA() { return A; }

	//void Memoria_Materiales(Memoria<string> x)
	//{
	//	
	//	Nodo<tipo> aux,*pos=nullptr;
	//	Material mat;
	//	for(int i=0;i<x.Tamano();i=i+3)
	//	{
	//		mat.Fecha(x.Arreglo(i).Elemento());
	//		mat.Nombre(x.Arreglo(i+1).Elemento());
	//		mat.Precio((atoi((x.Arreglo(i + 2).Elemento()).c_str())));
	//			aux.Elemento(mat);
	//			this->Insertar(nullptr, aux);

	//	}
	//}

	//Memoria<string> Material_Memoria()
	//{
	//	Memoria<string>aux;
	//	int i = 0;
	//	Nodo<string> str;
	//	Nodo<Material> y;
	//	Nodo<tipo>*p = this->Primero(), *q=p;
	//	while (p != this->Fin_Lista())
	//	{
	//		y.Elemento(this->Lista(p));

	//		if(y.Elemento().Fecha()!="")
	//		{
	//			str.Elemento(y.Elemento().Fecha());
	//			aux.Arreglo(str, i);
	//			i++;
	//		}

	//		str.Elemento(y.Elemento().Nombre());
	//		aux.Arreglo(str, i);
	//		i++;

	//		//to_string(var.Elemento().Numero()));
	//		str.Elemento(to_string(y.Elemento().Precio()));
	//		aux.Arreglo(str, i);
	//		i++;
	//		p = this->Proximo(p);
	//	}
	//	aux.Tamano(i);
	//	return aux;
	//}

	//void Memoria_Materiales2(Memoria<string> x)
	//{
	//	
	//	NodoEstatico<tipo> aux;
	//	tipo mat;
	//	for (int i = 0; i<x.Tamano(); i = i + 3)
	//	{
	//		mat.Fecha(x.Arreglo(i).Elemento());
	//		mat.Nombre(x.Arreglo(i + 1).Elemento());
	//		mat.Precio((atoi((x.Arreglo(i + 2).Elemento()).c_str())));
	//		aux.Elemento(mat);
	//		A.Insertar(aux, -1);

	//	}
	//}

	//Memoria<string> Material_Memoria2()
	//{
	//	Memoria<string>aux;
	//	int i = 0;
	//	Nodo<string> str;
	//	Nodo<tipo> y;
	//	int p = A.Primero();
	//do
	//	{
	//		y.Elemento(A.Lista(p));
	//		str.Elemento(y.Elemento().Fecha());
	//		aux.Arreglo(str, i);
	//		i++;
	//		str.Elemento(y.Elemento().Nombre());
	//		aux.Arreglo(str, i);
	//		i++;

	//		//to_string(var.Elemento().Numero()));
	//		str.Elemento(to_string(y.Elemento().Precio()));
	//		aux.Arreglo(str, i);
	//		i++;
	//		p = A.Proximo(p);
	//} while (p != A.Fin_Lista());
	//	aux.Tamano(i);
	//	return aux;
	//}
	//	
	//Lista_Circular<tipo> Reportedepromedio()
	//{
	//	Lista_Circular<tipo> _final;
	//	int prom = 0,saldo=0;
	//	Nodo<tipo>*p=this->Primero(),*q=p, aux,*o;
	//	NodoEstatico<tipo> h;
	//	tipo auros;
	//	while(p!=this->Fin_Lista())
	//	{
	//		aux.Elemento(this->Lista(p));
	//		auros.Nombre( this->Lista(p).Nombre());
	//		//_final.Insertar(aux, -1);
	//		prom=1;
	//		saldo = aux.Elemento().Precio();
	//		while (q != this->Fin_Lista())
	//		{
	//			if (this->Lista(q).Nombre() == this->Lista(p).Nombre() &&p!=q)
	//			{
	//				
	//				prom++;
	//				saldo += this->Lista(q).Precio();
	//				

	//				o = this->Anterior(q);
	//				this->Eliminar(o, aux);
	//				q = o;
	//				q = this->Proximo(q);
	//				

	//			}
	//			else
	//			{
	//				q = this->Proximo(q);
	//			}
	//		}
	//		saldo = (int)(saldo / prom);
	//		auros.Precio(saldo);

	//		h.Elemento(auros);
	//		_final.Insertar(h, -1);
	//		q = this->Primero();
	//		p = this->Proximo(p);
	//	}
	//	return _final;
	//}
	//
	//void ReportePromedioInverso()
	//{
	//	
	//	int p = A.Primero();
	//	int q = p;
	//	int pos;
	//	int sol = 0, cant = 0;
	//	NodoEstatico<tipo> dos;
	//	tipo auxest;
	//	Nodo<tipo>auxdim;
	//	Lista_Dinamica<tipo> d;
	//	do
	//	{
	//		auxest.Nombre(A.Lista(p).Nombre());
	//		cant = 1;
	//		sol = A.Lista(p).Precio();
	//		do
	//		{
	//			if(A.Lista(p).Nombre()==A.Lista(q).Nombre()&&p!=q)
	//			{
	//				cant++;
	//				sol += A.Lista(q).Precio();
	//				pos = A.Anterior(q);
	//				A.Eliminar(dos, pos);
	//				q = A.Proximo(pos);
	//			}
	//			else
	//			{
	//				q = A.Proximo(q);
	//			}
	//		} while (q != A.Fin_Lista());
	//		auxest.Precio(sol / cant);
	//		auxdim.Elemento(auxest);
	//		d.Insertar(nullptr, auxdim);
	//		q = A.Primero();
	//		p = A.Proximo(p);
	//	} while (p != A.Fin_Lista());
	//
	//	this->ThisL(d);
	//}
	//
	//Memoria<string> ListaCriualr_mem(Lista_Circular<tipo> x)
	//{
	//	int i = 0;
	//	Memoria<string> t;
	//	NodoEstatico<tipo>y;
	//	Nodo<string> u;
	//	while(!x.ListaVacia())
	//	{
	//		x.Eliminar(y, -1);
	//		u.Elemento(y.Elemento().Nombre());
	//		t.Arreglo(u, i);
	//		i++;
	//		u.Elemento(to_string(y.Elemento().Precio()));
	//		t.Arreglo(u, i);
	//		i++;
	//	}
	//	t.Tamano(i);
	//	return t;

	//}

	////clasicos de manejo con interfaz
	//void Memoria_ListaDim(Memoria<tipo> x)
	//{
	//	int i;
	//	for ( i = 0; i < x.Tamano(); i++)
	//	{
	//		this->Insertar(nullptr, x.Arreglo(i));
	//	}

	//}
	//
	//Memoria<tipo> ListaDim_Memoria(Lista_Dinamica<tipo> x)
	//{
	//	Memoria<tipo> aux;
	//	Nodo<tipo> var, *p;
	//	int i = 0;
	//	p = this->Primero();
	//	while (p != this->Fin_Lista())
	//	{

	//		var.Elemento(x.Lista(p));
	//		p = this->Proximo(p);
	//		aux.Arreglo(var, i);
	//		i++;
	//	}
	//	aux.Tamano(i);
	//	return aux;
	//}
	//
	
};

