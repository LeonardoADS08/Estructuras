// Listas_Circular_Estatica_Consola.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Aplicacion.h"
#include <iostream>
#include <conio.h>
using namespace std;
void MostrarMemoria(Aplicacion<int>x)
{
	cout << "iniio de muestreo de memoria" << endl;
	for(int i=0;i<x.Tamano();i++)
	{
		cout << x.Arreglo(i).Elemento() << endl;
	}
	cout << "fin del muestre de la memoria" << endl;
}
void IngresarMemoria(Aplicacion<int>&x)
{
	Nodo<int>aux;
	int n, m,i;
	cout << "ingrese el numero max de elementos" << endl;
	cin >> n;
	for( i = 0;i<n;i++)
	{
		cout << "ingrese elemento" << endl;
		cin >> m;
		aux.Elemento(m);
		x.Arreglo(aux, i);
	}
	x.Tamano(i);
}
int main()
{
	Aplicacion<int> var,var2;
	IngresarMemoria(var);
	(var.Memoria_Lista(var.ThisM()));
	var2.ThisM(var.Lista_Memoria(var.ThisL()));
	MostrarMemoria(var2);
	_getch();
    return 0;
}

