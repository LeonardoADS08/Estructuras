// Listas_Dinamicas_Consola.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Aplicacion.h"
#include <conio.h>
using namespace std;
void InsertarLista(Lista_Dinamica<int>&lista)
{
	int a,  c;
	Nodo<int> aux ;
	cout << "ingrese el numero maximo" << endl;
	cin >> a;
	cout << "comienza el ingreso ded datos" << endl;
	while (a--)
	{
		cout << "ingrese el elemento: ";
		cin >> c;
		aux.Elemento(c);
		cout << endl;
		lista.Insertar(NULL,aux);

	}
	cout << "fin del ingreso" << endl;
}
void MostrarLista(Lista_Dinamica<int>x)
{
	Nodo<int>*b=x.Primero(), aux;
	cout << "ingreso de la impresion" << endl;
	while (b!=x.Fin_Lista())
	{
		aux.Elemento(x.Lista(b));
		b = x.Proximo(b);
		cout << "Elemento: " << aux.Elemento() << endl;
	}
	cout << "fin de la impresion" << endl;
}
void IngresarMem(Aplicacion<int>&x)
{
	int a, c,i;
	Nodo<int> aux;
	cout << "ingrese el numero amximo" << endl;
	cin >> a;
	cout << "comienza el ingreso ded datos" << endl;
	for(i=0;i<a;i++)
	{
		cout << "ingrese el elemento: ";
		cin >> c;
		aux.Elemento(c);
		cout << endl;
		x.Arreglo(aux, i);

	}
	x.Tamano(i);
	cout << "fin del ingreso" << endl;
}
void MostrarMem(Aplicacion<int> x)
{
	Nodo<int> aux;
	int i;
	cout << "ingreso de la impresion" << endl;
	for (i = 0; i<x.Tamano(); i++)
	{
		
		cout << "Elemento: " << x.Arreglo(i).Elemento() << endl;
	}
	cout << "fin de la impresion" << endl;
}
void PorOrden(Aplicacion<int>&x)
{
	int a, c, i;
	Nodo<int> aux;
	cout << "ingrese el numero amximo" << endl;
	cin >> a;
	cout << "comienza el ingreso ded datos" << endl;
	for (i = 0; i<a; i++)
	{
		cout << "ingrese el elemento: ";
		cin >> c;
		aux.Elemento(c);
		cout << endl;
		x.IngresarOrdenadamente(aux);
		MostrarLista(x.ThisL());
	}
	
	cout << "fin del ingreso" << endl;
}
int main()
{
	cout << "hello";
	Aplicacion<int> var, var2;
	IngresarMem(var);
	var.Memoria_ListaDim(var.ThisM());
	var2.ThisM(var.ListaDim_Memoria(var.ThisL()));
	MostrarMem(var2);
	_getch();
    return 0;
}

