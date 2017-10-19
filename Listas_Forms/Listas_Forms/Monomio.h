#pragma once
class Monomio
{
	int _coeficiente;
	int _exponente;
public:
	Monomio() {}
	void Coeficiente(int x) { _coeficiente = x; }
	void Exponente(int x) { _exponente = x; }
	int Coeficiente() { return _coeficiente; }
	int Exponente() { return _exponente; }
	~Monomio() {}
};

