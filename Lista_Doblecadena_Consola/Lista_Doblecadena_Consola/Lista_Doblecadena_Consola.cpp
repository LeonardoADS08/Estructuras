// Lista_Doblecadena_Consola.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ListaDoble.h"
#include "iostream"
#include "conio.h"
using namespace std;
void IngresarLista(ListaDoble<int>&x)
{
	cout << "inicio del ingreso de datos" << endl;
	int i, n, m;
	cout << "ingrese el numero maximo de elementos" << endl;
	cin >> n;
	Nodo<int> aux;
	while (n--)
	{
		cout << "ingrese el elemento" << endl;
		cin >> m;
		aux.Elemento(m);
		x.Insertar_Derecha(aux, -1);
	}
	cout << "find el ingreso" << endl;
}
void MostrarLista(ListaDoble<int>x)
{
	Nodo<int>aux;
	int p = x.Primero();
	cout << "inicio del muestreo de la lista" << endl;
	while(p!=-1)
	{
		cout << x.Lista(p) << endl;
	}
	cout << "fin del meustreo" << endl;
}
int main()
{
	ListaDoble<int> value;
	IngresarLista(value);
	MostrarLista(value);

	_getch();
    return 0;
}

