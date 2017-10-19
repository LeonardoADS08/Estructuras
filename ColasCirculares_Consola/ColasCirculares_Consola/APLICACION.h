#pragma once
#include "MEMORIA.h"
#include "ColaCircular.h"
template<class tipo, class tipo2>
class APLICACION :public MEMORIA<tipo2>,public ColaCircular<tipo>
{
public:
	APLICACION() {}
	MEMORIA<tipo2> Cola_Memoria();
	void Memoria_Cola(MEMORIA<tipo2>);
	void InvertirColaCircular();
	void IngresarOrdenadamente(Nodo<tipo> x);
	void Ordenarcola();
	void EliminarNrepetidos(int n);
	void SeparaComponentes(MEMORIA<tipo2> a, ColaCircular<int>&operandos, ColaCircular<char>&operadores);
	int Expresion(ColaCircular<int> operandos, ColaCircular<char> operadores)
	~APLICACION(){}
};
template<class tipo, class tipo2>void APLICACION<tipo, tipo2>::Memoria_Cola(MEMORIA<tipo2> x)
{
	
	for (int i = 0;i < x.Tamano();i++)
	{
		this->Insertar(x.Arreglo(i));
	}
}
template<class tipo, class tipo2>MEMORIA<tipo2> APLICACION<tipo, tipo2>::Cola_Memoria()
{
	int i=0;
	Nodo<tipo2> aux;
	MEMORIA<tipo2> x;
	while (!this->ColaVacia())
	{
		this->Extraer(aux);//vacia toda la cola
		x.Arreglo(i,aux);
		i++;
	}
	x.Tamano(i);
	return x;
}
template<class tipo, class tipo2>void APLICACION<tipo, tipo2>::InvertirColaCircular()
{
	int cont = 0;
	ColaCircular<tipo> aux, aux2;
	Nodo<tipo> uno,dos;
	while(!this->ColaVacia())
	{	while (cont < this->Cantidad() - 1)
	{
		this->Extraer(uno);
		aux.Insertar(uno);

	}
	this->Extraer(uno);
	aux2.Insertar(uno);
	while (!aux.ColaVacia())
	{
		aux.Extraer(dos);
		this->Insertar(dos);
	}
	
}
this->ThisCC(aux2);

}
template<class tipo, class tipo2>void APLICACION<tipo, tipo2>::IngresarOrdenadamente(Nodo<tipo> x)
{
	Nodo<tipo> uno, dos, tres;
	ColaCircular<tipo>_aux,_aux2;
	if (this->ColaVacia())
	{
		this->Insertar(x);
	}
	else
	{
		this->Tope(uno);
		while (!this->ColaVacia()&&uno.Elemento()>x.Elemento())
		{
			this->Extraer(uno);
			_aux.Insertar(uno);
			this->Tope(uno);
		}
		while (!this->ColaVacia())
		{
			this->Extraer(dos);
			_aux2.Insertar(dos);
		}
		while (!_aux.ColaVacia())
		{
			_aux.Extraer(dos);
			this->Insertar(dos);
		}
		this->Insertar(x);
		while (!_aux2.ColaVacia())
		{
			_aux2.Extraer(dos);
			this->Insertar(dos);
		}
	}

}
template<class tipo, class tipo2>void APLICACION<tipo, tipo2>::Ordenarcola()
{
	MEMORIA<tipo2> aux;
	ColaCircular<tipo> cola;
	aux.This(this->Cola_Memoria());
	for (int i = 0;i < aux.Tamano();i++)
	{
		IngresarOrdenadamente(aux.Arreglo(i));
	}


}
template<class tipo, class tipo2>void APLICACION<tipo, tipo2>::EliminarNrepetidos(int n)
{
	int cont = 0;
	ColaCircular<tipo> aux, aux2;
	Nodo<tipo> uno, dos;
	while (!this->ColaVacia())
	{
		this->Extraer(uno);
		aux2.Insertar(uno);
		while (!this->ColaVacia())
		{
			this->Extraer(dos);
			if (uno.Elemento() != dos.Elemento())
			{
				aux.Insertar(dos);
			}
			else 
			{
				if(cont >= n-1)
				{ 
					aux.Insertar(dos);
				}
				else { cont++; }
			}
		}
		cont = 0;
		while (!aux.ColaVacia())
		{
			aux.Extraer(dos);
			this->Insertar(dos);
		}
	}
	this->ThisCC(aux2);
}
template<class tipo, class tipo2>void  APLICACION<tipo, tipo2>::SeparaComponentes(MEMORIA<tipo2> a, ColaCircular<int>&operandos, ColaCircular<char>&operadores)
{

}
template<class tipo, class tipo2>int  APLICACION<tipo, tipo2>::Expresion(ColaCircular<int> operandos, ColaCircular<char> operadores)
{

}