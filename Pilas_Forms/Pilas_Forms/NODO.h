#pragma once
template<class tipo>
class NODO
{
	tipo _elemento;
public:
	NODO(void){}
	tipo Elemento(){return _elemento;}
	void Elemento(tipo x){_elemento=x;}

};

