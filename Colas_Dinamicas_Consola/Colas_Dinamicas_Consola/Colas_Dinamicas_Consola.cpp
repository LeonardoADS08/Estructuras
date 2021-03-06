// Colas_Dinamicas_Consola.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include "iostream"
#include "Aplicacion.h"
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
		cout << x.Arreglo(i).Elemento() << endl;
	}
	cout << "fin del muestreto" << endl;
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
	Aplicacion<int>var,var2;
	IngresarMemoria(var);
	var.Memoria_ColaDin(var.ThisM());
	var2.ThisM(var.ColaDin_Memoria());
	MostrarMemoria(var2);
	var.EliminarNrepetidos(2);
	var2.ThisM(var.ColaDin_Memoria());
	MostrarMemoria(var2);
	_getch();
    return 0;
}

