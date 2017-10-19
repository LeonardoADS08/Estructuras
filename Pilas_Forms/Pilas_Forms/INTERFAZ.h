#pragma once
#include "MEMORIA.h"
#include <string>
using namespace System;
using namespace System::Windows::Forms;
using namespace std;
template<class tipo>
class INTERFAZ:public MEMORIA<tipo>
{
public:
	INTERFAZ(void){}
	void AgregarElemento(TextBox^ c)
	{
		NODO<tipo> j;
		j.Elemento(Convert::ToInt32(c->Text));
		this->Arreglo(j,this->Tamano());
		this->Tamano(this->Tamano()+1);
	}
	void Clear(DataGridView^ c)
	{
		this->Tamano(0);
		c->RowCount=1;
		c->ColumnCount=0;
	}
	void Memoria_Grilla(DataGridView^ a)
	{
		a->ColumnCount=1;

		a->RowCount=this->Tamano();
		for(int i=0;i<this->Tamano();i++)
		{
			a->Rows[i]->Cells[0]->Value=Convert::ToString(this->Arreglo(i).Elemento());
		}
	}
};

