#include "String.h"
#include <string>
#include <iostream>
using namespace std;


String::String() {

}

String::String(string n) {
	setValor(n);
}

void String::setValor(string valor) {
	this->valor = valor;
}

string String::getValor() {
	return valor;
}

void String::imprimir() {
	cout << "El string a imprimir: " << valor << endl;
}

Tipo String::getTipo() {
	return T_String;    
}