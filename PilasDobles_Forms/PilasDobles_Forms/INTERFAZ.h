#pragma once
#include "MEMORIA.h"
#include "NODO.h"
using namespace System;
using namespace System::Windows::Forms;
template<class variable>
class INTERFAZ:public MEMORIA<variable>
{
public:
	INTERFAZ(void){}
	void Clear(DataGridView^ var)
	{
		this->Tamano(0);
		var->ColumnCount=1;
		var->RowCount=0;
	}
	void Grid_Memoria(DataGridView^ var,TextBox^ lal)
	{
		
		this->Arreglo(this->Tamano(),Convert::ToInt32(lal->Text));
		this->Tamano(this->Tamano()+1);

	}
	void Memria_Grid(DataGridView^ var,int tipo)
	{
		var->ColumnCount=1;
		var->RowCount=this->Tamano();
		String^ lo;
		if(tipo==1){lo="MEMORIA";}
		else{lo="PILA";}
		for(int i=0;i<this->Tamano();i++)
		{
			var->Columns[0]->HeaderText=lo;
			var->Rows[i]->Cells[0]->Value=Convert::ToString(this->Arreglo(i));
		}
	}
	NODO<variable> Node(TextBox^ a)
	{
		NODO<variable> aux;
		aux.Elemento(Convert::ToInt32(a->Text));
		return aux;
	}
};

