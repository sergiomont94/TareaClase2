#include "Char.h"

Char::Char():valor('r') {

}

Char::Char(char x) {
	setValor(x);
}

void Char::setValor(char valor) {
	this->valor = valor;
}

char Char::getValor() {
	return valor;
}

void Char::imprimir() {
	cout << "El character es: " << valor << endl;
}

Tipo Char::getTipo() {
	return T_char;
}