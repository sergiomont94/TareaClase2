#include <iostream>
#include "Char.h"
#include "Integer.h"
#include "String.h"
#include "object.h"
using namespace std;

int main() {
	object *array[4];

	array[0] = new String("Hola");
	array[1] = new Integer(100);
	array[2] = new Char('u');
	array[3] = new String("Mundo");

	for (int i = 0; i < 4; i++)
	{
		array[i]->imprimir();
	}

	  
	system("pause");

}










