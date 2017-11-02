#pragma once
#include "Memoria.h"
#include "ListaCDin.h"
#include "string"
using namespace std;
template<class tipo>
class Aplicacion:public Memoria<tipo>,public ListaCDin<tipo>
{
public:
	Aplicacion(){}
	~Aplicacion(){}
	//clasicos de manejo con interfaz
	void Memoria_ListaCrdin(Memoria<tipo> var)
	{
		for(int i=0;i<var.Tamano();i++)
		{
			this->Insertar(nullptr, var.Arreglo(i));
		}
	}
	Memoria<tipo> ListaCrdin_Memoria()
	{
		int i = 0;
		Memoria<tipo>x;
		Nodo<tipo>*p, aux;
		p = this->Primero();
		do
		{
			aux.Elemento(this->Lista(p));
			x.Arreglo(aux, i);
			i++;
		} while (p != this->Fin_Lista());
		x.Tamano(i);
	}
	
};

