// Colas_Dinamicas_Consola.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include "iostream"
#include"Cola_Din.h"
using namespace std;
void IngresarCola(Cola_Din<int>&var)
{
	cout << "ingrese el numero max de elementos"<<endl;
	int n,m;
	Nodo<int>aux;
	cin >> n;
	while (n--)
	{
		cout << "ingrese el elemento" << endl;
		cin >> m;
		aux.Elemento(m);
		var.Insertar(aux);
	}
	cout << "fin del ingreso" << endl;
}
void MostrarCola(Cola_Din<int>var)//por desgracia lo elimina no queda de otra
{
	Nodo<int>aux;

	cout << "inicio delmuestreo" << endl;
	while (!var.Cola_Vacia())
	{
		var.Eliminar(aux);
		cout << aux.Elemento() << endl;
	}
	cout << "fin del muestreo" << endl;
}
int main()
{
	Cola_Din<int>var;
	IngresarCola(var);
	MostrarCola(var);
	_getch();
    return 0;
}

