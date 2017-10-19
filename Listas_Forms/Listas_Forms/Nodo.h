#pragma once
const int N = 100;
template<class tipo>
class Nodo
{
	tipo _elemento;
	int _apuntador;
public:
	Nodo() { _apuntador = 0; }
	tipo Elemento() { return _elemento; }
	void Elemento(tipo x) { _elemento = x; }
	int Apuntador() { return _apuntador; }
	void Apuntador(int a) { _apuntador = a; }
	bool operator==(Nodo<tipo> a)
	{
		if(_elemento==a.Elemento())
		{
			return true;
		}
		else { return false; }
	}
};
