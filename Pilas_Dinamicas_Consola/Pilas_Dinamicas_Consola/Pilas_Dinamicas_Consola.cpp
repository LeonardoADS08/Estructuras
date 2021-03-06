// Pilas_Dinamicas_Consola.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Aplicacion.h"
#include <iostream>
#include <conio.h>
using namespace std;
void IngresarPila(Pila_Din<int>&x)
{
	cout << "ingrese el numero maximo de elementos" << endl;
	int n,aux;
	Nodo<int>var;
	cin >> n;
	while (n--)
	{
		cout << "ingrese el elemento" << endl;
		cin >> aux;
		var.Elemento(aux);
		x.Insertar(var);
	}
	cout << "fin del ingreso" << endl;
}
void MostrarPila(Pila_Din<int>x)

{
	Nodo<int> aux;
	cout << "inicio de muestreo" << endl;
	while (!x.Pila_Vacia())
	{
		x.Extraer(aux);
		cout << aux.Elemento() << endl;
	}
	cout << "fin del muestreto" << endl;
}
void IngresarMemoria(Aplicacion<int>&x)
{
	cout << "ingrese el numero maximo de elementos" << endl;
	int n, aux;
	Nodo<int>var;
	cin >> n;
	int i = 0;
	while (n--)
	{
		cout << "ingrese el elemento" << endl;
		cin >> aux;
		var.Elemento(aux);
		x.Arreglo(var, i);
		i++;
	}
	x.Tamano(i);
	cout << "fin del ingreso" << endl;
}
void MostrarMemoria(Aplicacion<int>x)
{
	cout << "inicio de muestreo" << endl;
	for (int i = 0; i < x.Tamano(); i++)
	{
		cout << x.Arreglo(i).Elemento()<<endl;
	}
	cout << "fin del muestreto" << endl;
}
int main()
{
	Aplicacion<int>var, var2;
	Nodo<int>x;
	IngresarPila(var);
	var.EliminarNrepetidos(2);
	MostrarPila(var.ThisPD());
	_getch();
    return 0;
}

