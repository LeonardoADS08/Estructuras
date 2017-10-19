#pragma once
template<class tipo>
class NODO
{
	tipo _elemento;
public:
	NODO() {}
	void Elemento(tipo x) { _elemento = x; }
	tipo Elemento() { return _elemento; }

};

