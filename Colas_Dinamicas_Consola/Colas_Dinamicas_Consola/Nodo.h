#pragma once

template<class tipo>
class Nodo
{
	tipo elemento_;
	Nodo<tipo>*apuntador_;
public:
	Nodo(void)
	{
	}
	Nodo<tipo>*Apuntador() { return apuntador_; }
	tipo Elemento() { return elemento_; }
	void Elemento(tipo x) { elemento_ = x; }
	void Apuntador(Nodo<tipo> *r) { apuntador_ = r; }//indirectamente el espacio de memoria es tipo nodo copia los apuntadores
};
