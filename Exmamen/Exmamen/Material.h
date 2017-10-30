#pragma once
#include "string"
using namespace std;
class Material
{
public:
	string nombre;
	int precio;
	string fecha;
public:
	Material(){}
	void Nombre(string x) { nombre = x; }
	string Nombre() { return nombre; }
	void Precio(int x){ precio = x; }
	int Precio() { return precio; }
	void Fecha(string x) { fecha = x; }
	string Fecha() { return fecha; }
	~Material(){}
};

