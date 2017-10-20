#pragma once
const int N = 100;
template<class tipo>
class Nodo
{
	tipo elemento;
	Nodo<tipo> *apuntador;
public:
	Nodo(void)
	{
	}
	Nodo<tipo>*Apuntador() { return apuntador; }
	tipo Elemento() { return elemento; }
	void Elemento(tipo x) { elemento = x; }
	void Apuntador(Nodo<tipo> *r) { apuntador = r; }//indirectamente el espacio de memoria es tipo nodo copia los apuntadores
	

};
