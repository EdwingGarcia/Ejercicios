//Se ingresa por teclado un valor entero, mostrar una leyenda que indique si el número es positivo, negativo o nulo (es decir cero)
#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "ingrese un numero: ";
	cin >> num;
	if (num == 0) {cout << "Es nulo";}
	else {
		if (num > 0) { cout << "Es positivo"; }
		else { cout << "Es negativo"; }
	}
	return 0;
}