#pragma once
template<class tipo>
class NodoEstatico
{
	tipo _elementoe;
	int _apuntador;
public:
	NodoEstatico(){}
	void Elemento(tipo x) { _elementoe = x; }
	tipo Elemento() { return _elementoe; }
	int Apuntador() { return _apuntador; }
	void Apuntador(int x) { _apuntador = x; }
	~NodoEstatico(){}
};

