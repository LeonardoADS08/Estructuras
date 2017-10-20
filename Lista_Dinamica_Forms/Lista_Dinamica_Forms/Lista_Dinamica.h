#pragma once
#include "Nodo.h"
template<class tipo>
class Lista_Dinamica
{
	// Nodo<tipo> _lista;
	 Nodo<tipo>*_list;

	 Nodo<tipo> Buscar_Nodo()
	 {
		 return new Nodo<tipo>;
	 }
	 void Liberar_Nodo(Nodo<tipo>*p)
	 {
		 delete(p);
	 }
public:
	Lista_Dinamica() { _list = nullptr; }
	bool Insertar(Nodo<tipo>*x,Nodo<tipo> valor)//x es la direccion de memoria que recibe
	{
		Nodo<tipo>*y;
		y = Buscar_Nodo();
		y->Apuntador(NULL);
		y->Elemento(valor.Elemento());
		if (x == NULL)
		{
			y->Apuntador(_list);
			_list = y;
		}
		else
		{
			x->Apuntador(y);
		}
		return true;
	}
	bool ListaVacia()
{
	if (_list == NULL) { return true; }
	else { return false; }
}
	bool Eliminar(Nodo<tipo>*x, Nodo<tipo>&valor)//x es la direccion de memoria que recibe
	{
		Nodo<tipo>*y;
		if (this->ListaVacia()) { return false; }
		else
		{
			if (x == NULL)//eliminar el primero
			{
				valor.Elemento(_list->Elemento());//pone el primero en salir
				valor.Apuntador(NULL);
				y = _list;//y se convierte en el primero en salir
				_list = _list->Apuntador();//cambia list por el siguiente de list
				this->Liberar_Nodo(y);//elimina dicho nodo es decir el nodo que esta apuntado Y es decir esa memoria ya no esta
				return true;
			}
			else 
			{
				if (x->Apuntador() != NULL)//se asegura que no reciba el ultimo elemento ya que ese no apunta a nadie
				{
					valor.Elemento(x->Apuntador()->Elemento());//pone el valor en la direccion a la que apunta x(osea el elmento siguiente)
					valor.Apuntador(NULL);
					y = x->Apuntador();//el nodo que estoy eliminando osea su direccion;
					x->Apuntador(y->Apuntador());//guarda el apuntador del nodo que elimine en el anterior a el
					this->Liberar_Nodo(y);//libera la memoria de y es decir el nodo que quise eliminar
					return true;
				}
				else { return false; }
			}
			
		}
		return true;
	}
};

