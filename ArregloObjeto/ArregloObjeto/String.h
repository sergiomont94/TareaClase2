#pragma once
#include "object.h"
#include <string>
using namespace std;


#ifndef STRING_H
#define STRING_H




class String :public object {



public:

		String();
		String(string);


	void setValor(string valor);
	string getValor();

	void imprimir();
	Tipo getTipo();

private:
	string valor;
};




#endif // !STRING_H



