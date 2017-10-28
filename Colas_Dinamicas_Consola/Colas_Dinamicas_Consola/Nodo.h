#pragma once

template<class tipo>
class Nodo
{
	tipo _elemento;
	Nodo<tipo>*_apuntador;
public:
	Nodo(void)
	{
	}
	Nodo<tipo>*Apuntador() { return _apuntador; }
	tipo Elemento() { return _elemento; }
	void Elemento(tipo x) { _elemento = x; }
	void Apuntador(Nodo<tipo> *r) { _apuntador = r; }//indirectamente el espacio de memoria es tipo nodo copia los apuntadores
};
