#pragma once
#include "Nodo.h"
template<class tipo>
class Lista_Dinamica
{
	// Nodo<tipo> _lista;
	 Nodo<tipo>*_list;

	 Nodo<tipo>*Buscar_Nodo()
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
			y->Apuntador(x->Apuntador());
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

	//auxiliares

	Nodo<tipo>*Primero()//devuelve el apuntador en elque se situa el primero de la lista
	{
		return _list;
	}
	Nodo<tipo>*Proximo(Nodo<tipo>*p)//devuelte el puntero siguiente al que se recibe
	{
		return p->Apuntador();
	}
	Nodo<tipo>*Fin_Lista()
	{
		Nodo<tipo>*y;
		y = this->Primero();
		while (y != NULL)
		{
			y = this->Proximo(y);
		}
		return y;//Siesta bien deberia devolver NULL
	}
	Nodo<tipo>*Ultimo()
	{
		Nodo<tipo>*y,*f;
			y = this->Primero();
			f = this->Fin_Lista();//deberia ser NULL
		while (y->Apuntador() != f)//se fija en el ultimo si su apuntador es NULL
		{
			
			y = this->Proximo(y);
		}
		return y;
	}
	Nodo<tipo>*Anterior(Nodo<tipo>*x)
	{
		Nodo<tipo>*P, *U = this->Primero();
	
		P = this->Primero();
		while (P!= x)
		{
			U = P;
			P = this->Proximo(P);

		}
		return U;
	}
	tipo Localizar_Puntero(Nodo<tipo>*x)
	{
		return x->Elemento();
	}
	Nodo<tipo>*Localizar_Elemento(Nodo<tipo> x)
	{
		Nodo<tipo>*i, *j;
		i = this->Primero();
		j = this->Fin_Lista();
			while (i != j&&(i->Elemento()!=x.Elemento()))//non esta usando x (ERROR)
			{
				i = this->Proximo(i);
			}
			if (i->Elemento() == x.Elemento()) { return i; }
			else { return NULL; }
	}
	Nodo<tipo>Localizar_Elemento_Anterior(Nodo<tipo> x)
	{
		Nodo<tipo>*p,y;
		p=this->Localizar_Elemento(y);
		return this->Anterior(p);
	}

	//generales

	void Intercambiar(Nodo<tipo>*p, Nodo<tipo>*q)
	{
		Nodo<tipo> prim,sec;

		prim.Elemento(this->Lista(p));
		sec.Elemento(this->Lista(q));


		this->Lista(q, prim);
		this->Lista(p, sec);
	}
	tipo Lista(Nodo<tipo>*p)
	{
		return p->Elemento();
	}
	void Lista(Nodo<tipo>*pos, tipo val)
	{
		pos->Elemento(val);
	}
	void ThisL(Lista_Dinamica<tipo> x) { *this = x; }
	Lista_Dinamica<tipo> ThisL() { return *this; }
};

