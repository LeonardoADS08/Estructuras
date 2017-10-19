#pragma once
#include <string>
using namespace std;
class Persona
{
	 string _nombre;
	 int _numero;

public:
	Persona(){}
	void Nombre(string a) { _nombre = a; }
	string Nombre() { return _nombre; }
	int Numero() { return _numero; }
	void Numero(int x) { _numero = x; }
};

