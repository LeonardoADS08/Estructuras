#pragma once
#include "MEMORIA.h";
#include "PilaDoble.h"
#include "NODO.h"
template<class tipo,class variable>
class APLICACION:public MEMORIA<variable>,public PilaDoble<tipo>
{
public:
	APLICACION(){}
	void VaciarLado(int u)
	{
		NODO<tipo> x;
		while (!this->PilaVacia(u))
		{
			this->Extraer(u, x);
		}
	}
	void Memoria_Pila_Lado(MEMORIA<variable> x,int lado)
	{
		NODO<tipo> aux;
		for(int i=0;i<x.Tamano()&&!this->PilaLLena();i++)
		{
			aux.Elemento(x.Arreglo(i));
			this->Insertar(lado,aux);

		}
	}
	MEMORIA<variable> PilaCompleta_Memoria(PilaDoble<tipo> var)
	{
		int i, j, k;
		MEMORIA<variable> _elementoaux;
		NODO<tipo> _nodoaux;
		for (i = 0;!var.PilaVacia(1); i++)
		{
			var.Extraer(1, _nodoaux);
			_elementoaux.Arreglo(i, _nodoaux.Elemento());
		}
		_elementoaux.Tamano(i);
		for (j = _elementoaux.Tamano();j < var.Diferencia();j++)
		{
			_elementoaux.Arreglo(j, 0);
			
		}
		_elementoaux.Tamano(j);
		
		for (k = 1; !var.PilaVacia(2); k++)
		{
			var.Extraer(2, _nodoaux);
			_elementoaux.Arreglo(N-k, _nodoaux.Elemento());
		}
		_elementoaux.Tamano(N);
		return _elementoaux;
	}
	MEMORIA<variable> PilaLado_Memoria(PilaDoble<tipo> var,int lado)
	{
		int i;
		NODO<tipo> aux;
		MEMORIA<variable> aux2;
		for (i = 0;!var.PilaVacia(lado);i++)
		{
			var.Extraer(lado,aux);
			aux2.Arreglo(i, aux.Elemento());
			
		}
		aux2.Tamano(i);
		return aux2;
	}
	void IngrearOrdenadamenteLado(int lado,NODO<tipo> var)
	{
		NODO<tipo> uno, dos;
		PilaDoble<tipo> aux;
		if (this->PilaVacia(lado))
		{
			this->Insertar(lado, var);
		}
		else
		{
			this->Tope(lado, uno);
			while (!this->PilaVacia(lado) && uno.Elemento() > var.Elemento())
			{
				this->Extraer(lado, uno);
				aux.Insertar(1, uno);
				this->Tope(lado, uno);
			}
			this->Insertar(lado, var);
			while (!aux.PilaVacia(1))
			{
				aux.Extraer(1, dos);
				this->Insertar(lado, dos);
			}

		}
	}
	void OrdenarLado(int lado)
	{
		MEMORIA<variable> aux;
		NODO<tipo> var;
		APLICACION<tipo,variable> x;
		aux.This_Memoria(this->PilaLado_Memoria(this->These(),lado));
		x.These(this->These());
		x.VaciarLado(lado);
		for (int i = 0;i < aux.Tamano();i++)
		{
			var.Elemento(aux.Arreglo(i));
			x.IngrearOrdenadamenteLado(lado, var);
		}
		this->These(x.These());
	}
	void EliminarNrepetidosLado(int lado,int n)
	{
		int cont = 0,r;
		PilaDoble<tipo> aux;
		NODO<tipo> uno, dos;
		while (!this->PilaVacia(lado))
		{
			this->Extraer(lado, uno);
			aux.Insertar(1, uno);
			while (!this->PilaVacia(lado))
			{
				this->Extraer(lado, dos);
				if (dos.Elemento() != uno.Elemento())
				{
					aux.Insertar(2, dos);
				}
				else
				{
					if (cont > n)
					{
						aux.Insertar(2, dos);
					}
					else { cont++; }
				}
			}
			cont = 0;
			while (!aux.PilaVacia(2))
			{
				aux.Extraer(2, dos);
				this->Insertar(lado, dos);
			}
		}
		if (lado == 1) { r = 2; }
		else { r = 1; }
		while (!this->PilaVacia(r))
		{
			this->Extraer(r, dos);
			aux.Insertar(1, dos);
		}
		this->These(aux);

	}
	void Invertir()
	{
		PilaDoble<tipo> aux;
		NODO<tipo> uno;
		while (!this->PilaVacia(1))
		{
			this->Extraer(1, uno);
			aux.Insertar(2, uno);
		}
		while (!this->PilaVacia(2))
		{
			this->Extraer(2, uno);
			aux.Insertar(1, uno);
		}
		this->These(aux);
	}
};

