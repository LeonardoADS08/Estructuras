// Lista_Dinamica_Circular_Consola.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Aplicacion.h"
#include "iostream"
#include "conio.h"
using namespace std;
void IngresarLista(ListaCDin<int>&po)
{
	int n, m, i;
	cout << "ingrese n elementos" << endl;
	cin >> n;
	Nodo<int> aux;
	while(n--)
	{
		cout << "ingrese el elemento" << endl;
		cin >> m;
		aux.Elemento(m);
		po.Insertar(nullptr, aux);
	}
	cout << "find el ingreso" << endl;
}
void MostrareEliminarlista(ListaCDin<int>pos)
{
	cout << "inicio del muestreo" << endl;
	Nodo<int>aux,*p=pos.Primero();
	int m = 0,n=5;
	do
	{
		aux.Elemento(pos.Lista(p));
		cout << aux.Elemento() << endl;
		p = pos.Proximo(p);
	} while (p!=pos.Fin_Lista());
	cout << "fin del muestreo" << endl;
}
void IngresarMemoria(Aplicacion<int>&var)
{
	int i = 0,n,m;
	cout << "ingrese n elementos" << endl;
	cin >> n;
	Nodo<int> aux;
	while (n--)
	{
		cout << "ingrese el elemento" << endl;
		cin >> m;
		aux.Elemento(m);
		var.Arreglo(aux, i);
		i++;
	}
	var.Tamano(i);
	cout << "find del ingreso de una memoria" << endl;
}
void MostrarMemoria(Aplicacion<int>var)
{
	cout << "inicio muestreo memoria" << endl;
	for(int i=0;i<var.Tamano();i++)
	{
		cout << var.Arreglo(i).Elemento() << endl;
	}
	cout << "fin muestreo memoria" << endl;
}

void IngresarListaord(Aplicacion<int>&po)
{
	int n, m, i;
	cout << "ingrese n elementos" << endl;
	cin >> n;
	Nodo<int> aux;
	while (n--)
	{
		cout << "ingrese el elemento" << endl;
		cin >> m;
		aux.Elemento(m);
		po.IngresoOrdenado(aux);
		MostrareEliminarlista(po);
	}
	cout << "find el ingreso" << endl;
}
int main()
{

	Aplicacion<int> var,var2;
	
	IngresarLista(var);
	MostrareEliminarlista(var);
	var.Ordenar();
	MostrareEliminarlista(var);
	_getch();
    return 0;
}

