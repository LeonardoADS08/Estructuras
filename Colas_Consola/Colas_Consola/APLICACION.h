#pragma once
#include "MEMORIA.h"
#include "Cola.h"
template<class tipo,class tipo2>
class APLICACION :public Cola<tipo>, public MEMORIA<tipo2>
{
public:
	APLICACION() {}
	void Memoria_Cola(MEMORIA<tipo2> var)
	{

		for (int i = 0;i < var.Tamano();i++)
		{
			this->Insertar(var.Arreglo(i));
		}
	}
	MEMORIA<tipo2> Cola_Memoria()
	{
		int i = 0;
		MEMORIA<tipo2> res;
		Nodo<tipo2> _aux;
		while (!(this->ColaVacia()))
		{
			this->Extraer(_aux);
			res.Arreglo(i, _aux);
			i++;
		}
		res.Tamano(i);
		return res;
	}
	void OrdenarColaPorEntrar(MEMORIA<tipo2> var)
	{
		int i = 0;
		Cola<tipo> cola_aux, cola_aux2;
		Nodo<tipo> _nodoaux, _auxo2;
		for (i = 0;i < var.Tamano();i++)
		{
			if (this->ColaVacia())
			{
				this->Insertar(var.Arreglo(i));
			}
			else
			{
				this->Frente(_nodoaux);
				while (_nodoaux.Elemento() > var.Arreglo(i).Elemento() && this->ColaVacia() == false)
				{
					this->Extraer(_nodoaux);
					cola_aux.Insertar(_nodoaux);
					this->Frente(_nodoaux);

				}
				while (this->ColaVacia() == false)
				{
					this->Extraer(_nodoaux);
					cola_aux2.Insertar(_nodoaux);

				}
				while (!cola_aux.ColaVacia())
				{
					cola_aux.Extraer(_auxo2);
					this->Insertar(_auxo2);
				}
				this->Insertar(var.Arreglo(i));
				while (!cola_aux2.ColaVacia())
				{
					cola_aux2.Extraer(_auxo2);
					this->Insertar(_auxo2);
				}
			}
		}
	}
	void OrdenarSobreLaMisma()
	{
		APLICACION<tipo,tipo2> auxap;
		Cola<tipo> auxcola=this->ThisC();
		auxap.This(this->Cola_Memoria());
		this->OrdenarColaPorEntrar(auxap.This());
		
	}
	void InvertirCola()
	{
		int i = 0,m;
		Nodo<tipo> _nodoaux;
		Cola<tipo>_colaux, _colaux2;
		while(!this->ColaVacia())
		{
			m = this->Cantidad() - 1;
			while (!this->ColaVacia() && i < m)
			{

			this->Extraer(_nodoaux);
			_colaux.Insertar(_nodoaux);
			i++;
			}
			this->Extraer(_nodoaux);
			_colaux2.Insertar(_nodoaux);
			while (!_colaux.ColaVacia())
			{
			_colaux.Extraer(_nodoaux);
			this->Insertar(_nodoaux);

			}
			i = 0;
		}
		this->ThisC(_colaux2);
		

	}
	void EliminarRepetidos()
	{
		Nodo<tipo> _uno,_dos;
		Cola<tipo> _aux,_aux2;
		while (!this->ColaVacia())
		{
			this->Extraer(_uno);
			_aux2.Insertar(_uno);
			while (!this->ColaVacia())
			{
				this->Extraer(_dos);
				if (_uno.Elemento() != _dos.Elemento())
				{
					_aux.Insertar(_dos);
				}
			}
			while (!_aux.ColaVacia())
			{
				_aux.Extraer(_dos);
				this->Insertar(_dos);
			}
		}
		this->ThisC(_aux2);
	}
	void EliminarDuplicados(int dato)
	{
		int cont = 0;
		Nodo<tipo> _uno, _dos;
		Cola<tipo> _aux, _aux2;
		while (!this->ColaVacia())
		{
			this->Extraer(_uno);
			_aux2.Insertar(_uno);
			while (!this->ColaVacia())
			{
				this->Extraer(_dos);
				if (_uno.Elemento() == _dos.Elemento())
				{
					cont++;
					if (cont>=dato)
					{
						_aux.Insertar(_dos);
					}
				}
				else{ _aux.Insertar(_dos); }
				

			}
			while (!_aux.ColaVacia())
			{
				_aux.Extraer(_dos);
				this->Insertar(_dos);
			}
			cont = 0;


		}
		this->ThisC(_aux2);
	}
	void EliminarPares();//no se que se refiere
	void Analizarnosequecosa();
};

