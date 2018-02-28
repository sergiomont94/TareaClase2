#pragma once
#include "object.h"
using namespace std;

#ifndef INTEGER_H
#define INTEGER_H

class Integer : public object {

	


public:
	Integer();
	Integer(int);

	void setValor(int valor);

	int getValor();


	void imprimir();
	Tipo getTipo();

private:
	int valor;

};




#endif // !INTEGER_H




