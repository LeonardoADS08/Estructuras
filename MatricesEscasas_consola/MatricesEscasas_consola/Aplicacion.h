#pragma once
#include "Memoria.h"
#include "MatrizEscasa.h"
#include "Lista_Dinamica.h"
template<class tipo>
class Aplicacion :public Memoria<tipo>,public Lista_Dinamica<tipo>
{
	Aplicacion() {}
	void Memoria_Escaza(Memoria<int> x)
	{
		Nodo<MatrizEscasa<int>> aux;
		MatrizEscasa<int> mat;
		mat.Fila(x.TamanoF());
		mat.Columna(x.TamanoC());
		aux.Elemento(mat);
		this->Insertar(nullptr, aux);
		int cont=0;
		for(int i=0;i<x.TamanoF();i++)
		{
			for(int j=0;j<x.TamanoF();j++)
			{
				if(x.Arreglo(i,j).Elemento()!=0)
				{
					mat.Fila(i);
					mat.Columna(j);
					mat.Valor(x.Arreglo(i, j).Elemento());
					cont++;
					
				}

			}
		}
		mat.Fila(x.TamanoF());
		mat.Columna(x.TamanoC());
		mat.Valor(cont);

		this->Lista(this->Primero(), mat);
	}
	Memoria<int> Escaza_Memoria()
	{
		Memoria<int> aux;
		
		Nodo<MatrizEscasa<int>>*q=this->Ultimo();
		aux.TamanoF(this->Lista(q).valor());
		aux.TamanoC(3);
		for(int i=0;i<aux.TamanoF();i++)
		{
			for(int j=0;j<aux.TamanoC();j++)
			{
				aux.Arreglo(this->Lista(q), i, j);
				q = this->Anterior(q);
			}
		}
		return aux;
	}

};

