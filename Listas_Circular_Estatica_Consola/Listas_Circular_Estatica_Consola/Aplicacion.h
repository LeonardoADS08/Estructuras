#pragma once
#include "Memoria.h"
#include "Lista_Circular.h"
template<class tipo>
class Aplicacion :public Memoria<tipo>, public Lista_Circular<tipo>
{
	



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
	Memoria<tipo> Lista_Memoria(Lista_Circular<tipo> ar)
	{
		Memoria<tipo> aux;
		Nodo<tipo> uno;
		int i = 0;
		while (!ar.ListaVacia())
		{

			ar.Eliminar(uno, -1);
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

	~Aplicacion() {}
};

