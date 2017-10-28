#pragma once
#include "Nodo.h"
template<class tipo>
class Cola_Din
{
	Nodo<tipo> *_final;
	Nodo<tipo> *_frente;
private:
	Nodo<tipo>*Buscar_Nodo()
	{
		return new Nodo<tipo>;
	}
	void Eliminar_Nodo(Nodo<tipo>*p)
	{
		delete(p);
	}

public:
	Cola_Din() { _final = nullptr; _frente = nullptr; }
	bool Cola_Vacia()
	{
		if (_final == nullptr)
		{
			return true;
		}
		else { return false; }
	}
	bool Frente(Nodo<tipo>&val)
	{
		Nodo<tipo>*y = nullptr;
		if (this->Cola_Vacia()) { return false; }
		else
		{
			val.Elemento(_frente->Elemento());
			val.Apuntador(nullptr);
			
			return true;
		}
	}
	Nodo<tipo>*Final()
	{
		return _final;
	}
	bool Insertar(Nodo<tipo>val)
	{
		Nodo<tipo>*y = this->Buscar_Nodo();
		y->Apuntador(nullptr);
		y->Elemento(val.Elemento());
		if (this->Cola_Vacia())
		{
			_final = y;
			_frente = y;
		}
		else
		{
			_final->Apuntador(y);
			_final = y;
		}
		return true;
	}
	bool Eliminar(Nodo<tipo>&val)
	{
		Nodo<tipo>*y = nullptr;
		if (this->Cola_Vacia()) { return false; }
		else
		{
			val.Elemento(_frente->Elemento());
			val.Apuntador(nullptr);
			y = _frente;
			_frente = _frente->Apuntador();
			if (_frente == nullptr)
			{
				_final = nullptr;
			}
			this->Eliminar_Nodo(y);
			return true;
		}
	}

	//general
	Cola_Din<tipo> ThisCD()
	{
		return *this;
	}
	void ThisCD(Cola_Din<tipo> x)
	{
		*this = x;
	}
	void VaciarCola(Cola_Din<tipo>x)//no funciona DUNOW
	{
		Nodo<tipo>aux;
		while(!x.Cola_Vacia())
		{
			x.Eliminar(aux);
			this->Insertar(aux);
		}
	}
	~Cola_Din(){}
};

