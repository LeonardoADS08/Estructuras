#pragma once
#include "Memoria.h"
#include "Pila_Din.h"
template<class tipo>
class Aplicacion:public Pila_Din<tipo>,public Memoria<tipo>
{
public:
	Aplicacion(){}
	//relacion con la interzas y la memoria
	void Memoria_PilaDim(Memoria<tipo>x)
	{
		int i;
		Nodo<tipo> var;
		for (i = 0; i < x.Tamano(); i++)
		{
			var = x.Arreglo(i);
			this->Insertar(var);
		}
	}
	Memoria<tipo> PilaDim_Memoria()
	{
		int i=0;
		Nodo<tipo> var;
		Memoria<tipo> x;
		while (!this->Pila_Vacia())
		{
			this->Extraer(var);
			x.Arreglo(var, i);
			i++;
		}
		x.Tamano(i);
		//le devuelve a la lista su contenido original, sep es todo un desmadre
		for (int j = 0; j < x.Tamano(); j++)
		{
			this->Insertar(x.Arreglo(x.Tamano() - 1 - j));
		}
		return x;
	}
	//operaciones sobre la misma pila
	void IngresarOrdenadamente(Nodo<tipo> elem)
	{
		Pila_Din<tipo> aux1, aux2;
		if (this->Pila_Vacia())
		{
			this->Insertar(elem);
		}
		else
		{
			while(!this->Pila_Vacia()&&)
		}
	}
	~Aplicacion(){}
};
