/*Escribir un programa en el cual se ingresen cuatro n�meros, calcular e informar
la suma de los dos primeros y el producto del tercero y el cuarto.*/
#include<iostream>
using namespace std;
int main() {
	int num1, num2, num3, num4, suma, producto;
	cout << "Ingrese el primer numero";
	cin >> num1;
	cout << "Ingrese el segundo numero";
	cin >> num2;
	cout << "Ingrese el tercer numero";
	cin >> num3;
	cout << "Ingrese el cuarto numero";
	cin >> num4;
	suma = num1 + num2;
	producto = num3 * num4;
	cout << "La suma es:";
	cout << suma;
	cout << "\n";
	cout << "El producto es:";
	cout << producto;
}
