#pragma once
#include "object.h"
using namespace std;

#ifndef CHAR_H
#define CHAR_H

class Char :public object {

	

public:

	Char();
	Char(char);


	void setValor(char valor);
	char getValor();

	void imprimir();
	Tipo getTipo();



private:
	char valor;
};



#endif // !CHAR_H





