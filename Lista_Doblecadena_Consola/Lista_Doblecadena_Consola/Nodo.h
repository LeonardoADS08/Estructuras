#pragma once
const int N = 100;
template<class tipo>
class Nodo
{
	tipo _valor;
	int _apuntador_derecho;
	int _apuntador_izquierdo;
	public:
	Nodo();

	tipo Elemento();

	void Elemento(tipo valor);

	int Apuntador_Derecho();

	void Apuntador_Derecho(int apuntador_derecho);

	int Apuntador_Izquierdo();

	void Apuntador_Izquierdo(int apuntador_izquierdo);

	~Nodo(){}
};

template <class tipo>
Nodo<tipo>::Nodo()
{
	_apuntador_derecho = 0;
	_apuntador_izquierdo = 0;
}

template <class tipo>
tipo Nodo<tipo>::Elemento()
{
	return _valor;
}

template <class tipo>
void Nodo<tipo>::Elemento(tipo valor)
{
	_valor = valor;
}

template <class tipo>
int Nodo<tipo>::Apuntador_Derecho()
{
	return _apuntador_derecho;
}

template <class tipo>
void Nodo<tipo>::Apuntador_Derecho(int apuntador_derecho)
{
	_apuntador_derecho = apuntador_derecho;
}

template <class tipo>
int Nodo<tipo>::Apuntador_Izquierdo()
{
	return _apuntador_izquierdo;
}

template <class tipo>
void Nodo<tipo>::Apuntador_Izquierdo(int apuntador_izquierdo)
{
	_apuntador_izquierdo = apuntador_izquierdo;
}
