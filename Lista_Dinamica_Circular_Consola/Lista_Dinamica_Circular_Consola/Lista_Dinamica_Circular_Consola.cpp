// Lista_Dinamica_Circular_Consola.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ListaCDin.h"
#include "iostream"
#include "conio.h"
using namespace std;
void IngresarLista(ListaCDin<int>po)
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
	Nodo<int>aux;
	int m = 0,n=5;
	while(n--)
	{
		pos.Eliminar(nullptr, aux);
		m = aux.Elemento();
		cout << m << endl;
	}
	cout << "fin del muestreo" << endl;
}
int main()
{
	ListaCDin<int> pos;
	IngresarLista(pos);
	MostrareEliminarlista(pos);
	_getch();
    return 0;
}

