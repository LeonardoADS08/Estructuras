// ColasCirculares_Consola.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

#include "iostream"
#include <conio.h>
#include "APLICACION.h"""
using namespace std;

void MostrarColaCircular(ColaCircular<int> x)
{
	Nodo<int>aux;
	cout << "inicio cola" << endl;
	while (!x.ColaVacia())
	{
		x.Extraer(aux);
		cout << aux.Elemento()<<endl;
	}
	cout << "fin de la cola" << endl;
}
void IngresarColaCircular(ColaCircular<int>&x)
{
	cout << "ingrese el numero de elementos" << endl;
	int n,m;cin >> n;
	Nodo<int>aux;
	for(int i=0;i<n;i++)
	{
		if (x.ColaLLena() == true)
		{
			cout << "cola llena" << endl;break;
		}
		else 
		{
			cout << "ingrese el elmento  " << i << " : ";
			cin >> m;
			aux.Elemento(m);
			x.Insertar(aux);
		}
	}
	cout << "fin del ingreso" << endl;
}
void InsertarMemoria(APLICACION<int,int>&x)
{
	cout << "ingrese el numero de elementos" << endl;
	int n,i, m;cin >> n;
	Nodo<int>aux;
	for ( i= 0;i < n;i++)
	{
		cout << "ingrese el elmento  " << i << " : ";
		cin >> m;
		aux.Elemento(m);
		x.Arreglo(i, aux);
	}
	x.Tamano(i);
	cout << "fin del ingreso" << endl;
}
void MostrarMemoria(APLICACION<int, int> x)
{
	cout << "inicio memoria" << endl;
	for (int i = 0;i < x.Tamano();i++)
	{
		cout << x.Arreglo(i).Elemento()<<endl;
	}
	cout << "fin de memoria" << endl;
}
int main()
{
	APLICACION<int, int> var;
	InsertarMemoria(var);
	MostrarMemoria(var);
	var.Memoria_Cola(var.This());
	MostrarColaCircular(var.ThisCC());
	var.InvertirColaCircular();
	MostrarColaCircular(var.ThisCC());
	_getch();
    return 0;
}

