#pragma once
#include "Nodo.h"
template<class tipo>
class Cola_Din
{
	Nodo<tipo> *final_;
	Nodo<tipo> *frente_;
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
	Cola_Din() { final_ = nullptr; frente_ = nullptr; }
	bool Cola_Vacia()
	{
		if (final_ == nullptr)
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
			val.Elemento(frente_->Elemento());
			val.Apuntador(nullptr);
			
			return true;
		}
	}
	Nodo<tipo>*Final()
	{
		return final_;
	}
	bool Insertar(Nodo<tipo>val)
	{
		Nodo<tipo>*y = this->Buscar_Nodo();
		y->Apuntador(nullptr);
		y->Elemento(val.Elemento());
		if (this->Cola_Vacia())
		{
			final_ = y;
			frente_ = y;
		}
		else
		{
			final_->Apuntador(y);
			final_ = y;
		}
		return true;
	}
	bool Eliminar(Nodo<tipo>&val)
	{
		Nodo<tipo>*y = nullptr;
		if (this->Cola_Vacia()) { return false; }
		else
		{
			val.Elemento(frente_->Elemento());
			val.Apuntador(nullptr);
			y = frente_;
			frente_ = frente_->Apuntador();
			if (frente_ == nullptr)
			{
				final_ = nullptr;
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
	~Cola_Din(){}
};

