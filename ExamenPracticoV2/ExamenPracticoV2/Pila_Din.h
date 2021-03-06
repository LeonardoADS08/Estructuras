#pragma once
#include "Nodo.h"
template<class tipo>
class Pila_Din
{
	Nodo<tipo>*_tope;
	//buscar y generar espacios
private:
	Nodo<tipo>*buscar_nodo()
	{
		return new Nodo<tipo>;
	}
	void Liberar_Nodo(Nodo<tipo>*p)
	{
		delete(p);
	}
public:
	Pila_Din() { _tope = nullptr; }
	//clasicos de ingreso y salida
	bool Pila_Vacia()
	{
		if (_tope == nullptr) { return true; }
		else { return false; }
	}
	bool Insertar(Nodo<tipo>x)
	{
		Nodo<tipo>*y=this->buscar_nodo();
		y->Apuntador(_tope);
		y->Elemento(x.Elemento());
		_tope = y;
		return true;
	}
	bool Extraer(Nodo<tipo>&x)
	{
		Nodo<tipo>*y = nullptr;
		if (Pila_Vacia()) 
		{
			return false;
		}
		else
		{
			x.Elemento(_tope->Elemento());//posible conflicto
			x.Apuntador(nullptr);
			y = _tope;
			_tope = _tope->Apuntador();
			this->Liberar_Nodo(y);
			return true;
		}

	}
	//busqueda de la posicion actual de la mem
	bool Tope(Nodo<tipo>& x);

	Pila_Din<tipo> ThisPD()
	{
		return *this;
	}
	void ThisPD(const Pila_Din<tipo> x)
	{
		*this = x;
	 }
	~Pila_Din(){}
};

template <class tipo>
bool Pila_Din<tipo>::Tope(Nodo<tipo>& x)
{
	Nodo<tipo>* y = nullptr;
	if (Pila_Vacia())
	{
		return false;
	}
	else
	{
		x.Elemento(_tope->Elemento());//posible conflicto
		x.Apuntador(nullptr);

		return true;
	}
}

