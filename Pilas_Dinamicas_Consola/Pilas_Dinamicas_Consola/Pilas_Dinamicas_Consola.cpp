// Pilas_Dinamicas_Consola.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Pila_Din.h"
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
int main()
{
	Pila_Din<int>var;
	IngresarPila(var);
	MostrarPila(var);
	_getch();
    return 0;
}

