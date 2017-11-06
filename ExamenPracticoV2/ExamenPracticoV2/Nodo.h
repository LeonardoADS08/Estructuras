#pragma once
const int N = 100;
template<class tipo>
class Nodo
{
	tipo elemento;
	Nodo<tipo>*apuntador;
	int _apuntadorest;
public:
	Nodo(void)
	{
	}
	Nodo<tipo>*Apuntador() { return apuntador; }
	tipo Elemento() { return elemento; }
	void Elemento(tipo x) { elemento = x; }
	void Apuntador(Nodo<tipo> *r) { apuntador = r; }//indirectamente el espacio de memoria es tipo nodo copia los apuntadores

	void ApuntadorEst(int r) { _apuntadorest=r; }
	int ApuntadorEst() { return _apuntadorest; }
};
