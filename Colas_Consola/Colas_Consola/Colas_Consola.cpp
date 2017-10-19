// Colas_Consola.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "APLICACION.h"
#include <conio.h>
#include <iostream>
using namespace std;
void IngresarMemoria(APLICACION<int, int>&var)
{
	cout << "ingrese el numero de datos" << endl;
	int n,i,m;cin >> n;
	Nodo<int> varus;
	for (i = 0;i < n;i++)
	{
		cout << "ingrese el elemento" << i << " :";
		cin >> m;
		varus.Elemento(m);
		var.Arreglo(i, varus);
	}
	var.Tamano(i);
	cout << "fin del ingreso a memoria" << endl;
}
void MostrarMemoria(APLICACION<int, int> var)
{
	cout << "la memoria es" << endl;
	for (int i = 0;i < var.Tamano();i++)
	{
		cout << var.Arreglo(i).Elemento()<<endl;
	}
	cout << "fin de la memoria" << endl;
}
void MostrarCola(APLICACION<int, int> var)
{
	cout << "est es la COLA" << endl;
	Nodo<int> aux;
	while (!var.ColaVacia())
	{
		var.Extraer(aux);
		cout << aux.Elemento()<<endl;
	}
	cout << "fin de la COLA" << endl;
}
int main()
{
	APLICACION<int, int> var, var2;
	IngresarMemoria(var);
	MostrarMemoria(var);
	cout << endl;
	var.Memoria_Cola(var.This());
	MostrarCola(var);
	cout << "cola sin repetidos" << endl;
	var.EliminarDuplicados(3);
	MostrarCola(var);
	//var.OrdenarColaPorEntrar(var.This());
	

	
	_getch();
    return 0;
}

