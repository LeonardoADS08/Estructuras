#pragma once
const int N = 100;
template<class tipo>
class Nodo
{
	tipo _valor;
	int _apuntador_derecho;
	int _apuntador_izquierdo;
	public:
	Nodo()
	{
		_apuntador_derecho = 0;
		_apuntador_izquierdo = 0;
	}

	tipo Valor()
	{
		return _valor;
	}

	void Valor(tipo valor)
	{
		_valor = valor;
	}

	int Apuntador_Derecho() 
	{
		return _apuntador_derecho;
	}

	void Apuntador_Derecho(int apuntador_derecho)
	{
		_apuntador_derecho = apuntador_derecho;
	}

	int Apuntador_Izquierdo() 
	{
		return _apuntador_izquierdo;
	}

	void Apuntador_Izquierdo(int apuntador_izquierdo)
	{
		_apuntador_izquierdo = apuntador_izquierdo;
	}

	~Nodo(){}
};

