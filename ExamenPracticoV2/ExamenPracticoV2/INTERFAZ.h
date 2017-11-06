#pragma once
#include "MEMORIA.h"
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using namespace msclr::interop;
template<class tipo>
class INTERFAZ:public Memoria<tipo>
{
public:
	INTERFAZ(void){}
	void AgregarElemento(TextBox^ c)
	{
		Nodo<tipo> j;
		j.Elemento(Convert::ToInt32(c->Text));
		this->Arreglo(j,this->Tamano());
		this->Tamano(this->Tamano()+1);
	}
	void Grid_Memoria_Str(DataGridView^ var, TextBox^ x)
	{
		int i;
		Nodo<tipo> aux;
		int m = Convert::ToInt32(x->Text)*3;
		for (i = 0;i < m;i++)
		{
			aux.Elemento(marshal_as<std::string>(Convert::ToString(var->Rows[0]->Cells[i]->Value)));
			this->Arreglo(aux, i);
		}
		this->Tamano(i);
	}
	void Memoria_Str_Grid(DataGridView^a)
	{
		a->ColumnCount = this->Tamano();

		a->RowCount = 1;
		for (int i = 0;i<this->Tamano();i++)
		{
			a->Columns[i]->Width = 35;
			a->Rows[0]->Cells[i]->Value =marshal_as<String^>(this->Arreglo(i).Elemento());
		}
	}
	void Clear(DataGridView^ c)
	{
		this->Tamano(0);
		c->RowCount=1;
		c->ColumnCount=0;
	}
	void Memoria_Grilla(DataGridView^ a)
	{
		a->ColumnCount=this->Tamano();

		a->RowCount= 1;
		for(int i=0;i<this->Tamano();i++)
		{
			a->Columns[i]->Width = 35;
			a->Rows[0]->Cells[i]->Value=Convert::ToString(this->Arreglo(i).Elemento());
		}
	}
	Nodo<tipo> Node(TextBox^ a)
	{
		Nodo<tipo> aux;
		aux.Elemento(Convert::ToInt32(a->Text));
		return aux;
	}
	void ClearMem()
	{
		this->Tamano(0);
	}
	void Tam_Grid(DataGridView^ a, TextBox^  b)
	{
		int m = Convert::ToInt32(b->Text),i=0;
		a->ColumnCount = m;
		a->RowCount = 1;
		while (m--)
		{
			a->Columns[i]->Width = 55;
			i++;
		}
	}
	
	void Grid_Memoria(DataGridView^ var,TextBox^ x)
	{
		int i;
		Nodo<tipo> aux;
		int m = Convert::ToInt32(x->Text);
		for (i = 0;i < m;i++)
		{
			aux.Elemento(Convert::ToInt32(var->Rows[0]->Cells[i]->Value));
			this->Arreglo(aux, i);
		}
		this->Tamano(i);
	}

};

