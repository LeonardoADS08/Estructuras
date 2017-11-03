#pragma once
template<class tipo>
class MatrizEscasa
{
	int _fila;
	int _columna;
	tipo _valor;
public:
	MatrizEscasa()
	{
		_fila = 0;
		_columna = 0;
		_valor = 0;
	}

	void Fila(int x);
	int Fila();
	void Columna(int x);
	int Columna();
	void Valor(tipo x);
	tipo Valor();
	~MatrizEscasa(){}
};

template <class tipo>
void MatrizEscasa<tipo>::Fila(int x)
{
	_fila = x;
}

template <class tipo>
int MatrizEscasa<tipo>::Fila()
{
	return _fila;
}

template <class tipo>
void MatrizEscasa<tipo>::Columna(int x)
{
	_columna = x;
}

template <class tipo>
int MatrizEscasa<tipo>::Columna()
{
	return _columna;
}

template <class tipo>
void MatrizEscasa<tipo>::Valor(tipo x)
{
	_valor = x;
}

template <class tipo>
tipo MatrizEscasa<tipo>::Valor()
{
	return _valor;
}
