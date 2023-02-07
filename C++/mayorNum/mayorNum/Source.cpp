/*
Realizar un programa que solicite la carga por teclado de dos números,
si el primero es mayor al segundo informar su suma y diferencia, 
en caso contrario informar el producto y la división del primero respecto al segundo.
*/
#include <iostream>
using namespace std;
int main() {
	int num1,num2,suma,resta,producto;
	double division;
	cout << "Ingrese el primer numero";
	cin >> num1;
	cout << "Ingrese el segundo numero";
	cin >> num2;
	if (num1 > num2) {
		suma = num1 + num2;
		resta = num1 - num2;
		cout << "La suma es:";
		cout << suma;
		cout << "\n";
		cout << "La diferencia es:";
		cout << resta;
	}
	else {
		producto = num1 * num2;
		division = num1 / num2;
		cout << "El producto es:";
		cout << producto;
		cout << "\n";
		cout << "La division del primer numero con respecto al segundo es:";
		cout << division;
	}
	return 0;
}