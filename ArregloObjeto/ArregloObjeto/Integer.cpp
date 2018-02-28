#include "Integer.h"



Integer::Integer() :valor(1) {

}

Integer::Integer(int n) {
	setValor(n);   
}

void Integer::setValor(int valor) {
	this->valor = valor;
}

int Integer::getValor() {
	return valor;
}

void Integer::imprimir() {
	cout << "El valor del integer es: " << valor << endl;
}

Tipo Integer::getTipo() {
	return T_int;
}