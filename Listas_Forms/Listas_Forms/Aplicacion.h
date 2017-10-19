#pragma once
#include "Memoria.h"
#include "Monomio.h"
#include "Lista.h"
#include "Persona.h"
template<class tipo>
class Aplicacion :public Memoria<tipo>, public Lista<tipo>
{
	Lista<Monomio> A,B;



public:
	Aplicacion() {}
	void Memoria_Lista(Memoria<tipo> x)
	{

		int i = 0;
		for (i = 0;i < x.Tamano();i++)
		{
			this->Insertar(x.Arreglo(i), -1);
		}

	}
	Memoria<tipo> Lista_Memoria(Lista<tipo> ar)
	{
		Memoria<tipo> aux;
		Nodo<tipo> uno;
		int i = 0;
		while (!ar.ListaVacia())
		{

			ar.Extraer(uno, -1);
			aux.Arreglo(uno, i);
			i++;
		}
		aux.Tamano(i);
		return aux;
	}
	void InvertirLista()
	{

		int q, fin, f;
		q = this->Primero();
		fin = this->Fin_Lista();//final de la lista usualemnte -1 si todobien
		f = this->Primero();
		Nodo<tipo> nodo;
		/////////////////////////////7
		if (this->Primero() == this->Anterior(this->Ultimo()))//pregunta si la posicion del primero es igual a la del anterior del 
															  //ultimo debe ser de cuando solo hay dos elementos
		{
			this->Extraer(nodo, this->Anterior(this->Ultimo()));
			this->Insertar(nodo, -1);
		}
		/////////////////////////////////////////7
		else
		{
			if (this->Primero() != this->Anterior(Ultimo()))
			{
				q = this->Primero();
				f = this->Primero();
				do
				{
					if (this->Extraer(nodo, q) == true) //extrae el seguno osea el segundo a salir y lo pone al inicio hasta llegar al final 
														//por eso le manda el primero proque apunta al seguno
					{
						this->Insertar(nodo, -1);
					}

					f = this->Proximo(f);

				} while (f != fin);//mientras que f no sea -1
			}
		}
	}
	bool ValidoParaSN(string a)
	{
		int n = a.length();
		if (a[n - 1] == 'S' || a[n - 1] == 'N' || a[n - 1] == 's' || a[n - 1] == 'n')
		{
			return true;
		}
		else { return false; }
	}

	void  Intercambiar(int p, int q)
	{
		tipo dato;
		Nodo<tipo> nodo2, nodo;

		dato = TLista(p).Elemento();
		nodo2 = TLista(p);
		nodo2.Elemento(TLista(q).Elemento());
		TLista(p, nodo2);
		nodo = TLista(q);
		nodo.Elemento(dato);
		TLista(q, nodo);

	}
	void Ordenar()
	{
		int p, q, fin;
		fin = this->Fin_Lista();
		p = this->Primero();
		while (p != fin)
		{
			q = this->Proximo(p);
			while (q != fin)
			{
				if (TLista(p).Elemento()>TLista(q).Elemento())
				{
					Intercambiar(p, q);
				}
				q = Proximo(q);
			}
			p = Proximo(p);
		}

	}
	void Eliminar_repetidos()
	{
		int p, q, fin, r;
		Nodo<tipo> nodo, nodo1;
		fin = this->Fin_Lista();
		p = this->Primero();
		while (p != fin)
		{
			nodo = this->TLista(p);
			q = this->Proximo(p);
			while (q != fin)
			{
				nodo1 = this->TLista(q);
				if (nodo.Elemento() == nodo1.Elemento())
				{
					r = this->Anterior(q);
					this->Extraer(nodo1, this->Anterior(q));
					q = r;

				}
				q = this->Proximo(q);
			}
			p = this->Proximo(p);
		}

	}
	void IngresarOrdenadamente(Nodo<tipo> x)
	{

		int p = this->Primero();
		int f = this->Fin_Lista();
		if (this->ListaVacia())
		{
			this->Insertar(x, -1);

		}
		else
		{
			while (p != f)
			{
				if (this->TLista(p).Elemento() > x.Elemento())
				{

					if (p == this->Primero())
					{
						this->Insertar(x, -1); break;
					}

					else { this->Insertar(x, this->Anterior(p)); break; }

				}
				else if (p == this->Ultimo())
				{
					this->Insertar(x, p); break;
				}
				p = this->Proximo(p);
			}

		}
	}
	void ClearList()
	{
		Nodo<tipo> aux;
		while (!this->ListaVacia())
		{
			this->Extraer(aux, -1);
		}
		this->Tamano(0);
	}
	void Memoria_Polinomio(Memoria<tipo> x, char var)
	{
		
		Nodo<Monomio> aux;
		Monomio _part;
		for (int i = 0;i < x.Tamano();i = i + 2)
		{
			_part.Coeficiente(x.Arreglo(i).Elemento());
			_part.Exponente(x.Arreglo(i+1).Elemento());
			aux.Elemento(_part);
			if (var == 'A') 
			{
				A.Insertar(aux, -1);
			}
			else{ B.Insertar(aux, -1); }
		}
	}
	Memoria<tipo> Polinomio_Memoria(Lista<Monomio>x)
	{
		Memoria<tipo> aux;
		Nodo<Monomio> var;
		Nodo<tipo> var2;
		int i = 0;
		while (!x.ListaVacia())
		{
			x.Extraer(var, -1);
			var2.Elemento(var.Elemento().Coeficiente());
			aux.Arreglo(var2, i);
			i++;
			var2.Elemento(var.Elemento().Exponente());
			aux.Arreglo(var2, i);
			i++;
		}
		aux.Tamano(i);
		return aux;
	}
	Lista<tipo> EliminarSyN()
	{
		Lista<tipo>aux;
		Nodo<tipo> var,var2;
		int fin = this->Fin_Lista(),r;
		int p = this->Primero();
		while (p != fin)
		{
			var = this->TLista(p);
			if (ValidoParaSN(var.Elemento()))
			{
				r = this->Anterior(p);
				this->Extraer(var2, this->Localizar_Elemento_anterior(var));
				aux.Insertar(var2, -1);
				p = r;
			}
			p = this->Proximo(p);
		}
		return aux;
	}
	Lista<Monomio> This_Polinomio(char x)
	{
		if (x == 'A')
		{
			return A;
		}
		else { return B; }
	}
	void SumarPolinomio()
	{
		//el primero en salir deberia ser el mayor;
		int primA=A.Primero();
		int primB=B.Primero();
		int finA = A.Fin_Lista();
		int finB = B.Fin_Lista();
		Nodo<Monomio> aux,x;
		Monomio var;
		while (primA != -1)
		{
			aux = A.TLista(primA);
			while (primB != B.Fin_Lista())
			{
				if (aux.Elemento().Exponente() == B.TLista(primB).Elemento().Exponente())
				{
					var.Coeficiente(aux.Elemento().Coeficiente() + B.TLista(primB).Elemento().Coeficiente());
					var.Exponente(aux.Elemento().Exponente());
					x.Elemento(var);
					B.TLista(primB, x); break;
				}
				else if (aux.Elemento().Exponente() >B.TLista(primB).Elemento().Exponente())
				{
					if (primB == B.Primero())
					{
						B.Insertar(aux, -1); break;
					}
					else
					{
						B.Insertar(aux, B.Anterior(primB)); break;
					}
					break;
				}
				
				primB = B.Proximo(primB);
			}
	
			primB = B.Primero();
			finB = B.Fin_Lista();
			primA = A.Proximo(primA);
		}
	}
	Nodo<Persona> LaCosaDeManolo(int pos,int varus)// por editar
	{
		int pasos;
		int p;
		Nodo<Persona> aux;
		if (pos == -1)
		{
			pasos = this->TLista(this->Primero()).Elemento().Numero()-1;
			p = this->Primero();
		}
		else
		{
			pasos= pos-1;
			p = varus;
		}
		while (pasos--)
		{
			if (p == this->Ultimo())
			{
				p = this->Primero();
			}
			else
			{
				p = this->Proximo(p);
			}
		}
		this->Extraer(aux, this->Anterior(p));
		if (p == this->Ultimo())
		{
			p = this->Primero();
		}
		aux.Apuntador(p);
		return aux;


	}
	void Memoria_Personas(Memoria<string> x)
	{
		Persona per;
		Nodo<tipo> aux;
		for (int i = 0;i < x.Tamano();i=i+2)
		{
			per.Nombre(x.Arreglo(i).Elemento());
			per.Numero(atoi((x.Arreglo(i+1).Elemento()).c_str()));
			aux.Elemento(per);
			this->Insertar(aux, -1);

		}
	}
	Memoria<string> Persona_Memoria(Lista<Persona> personas)
	{
		Memoria<string> aux;
		Nodo<Persona> var;
		Nodo<string> var2;
		int i = 0;
		while (!personas.ListaVacia())
		{
			personas.Extraer(var, -1);
			var2.Elemento(var.Elemento().Nombre());
			aux.Arreglo(var2, i);
			var2.Elemento(to_string(var.Elemento().Numero()));
			aux.Arreglo(var2, i+1);
			i = i + 2;

		}
		aux.Tamano(i);
		return aux;
	}
	~Aplicacion() {}
};

