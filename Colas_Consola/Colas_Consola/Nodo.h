#pragma once
template<class tipo>
class Nodo
{
	tipo _elemento;
public:
	Nodo() {}
	tipo Elemento() { return _elemento; }
	void Elemento(tipo aux) { _elemento = aux; }
};

