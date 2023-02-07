//Realizar un programa que lea cuatro valores numéricos e informar su suma y promedio.
#include<iostream>
using namespace std;

int main() {
	int n1, n2, n3, n4, sum, prom;
	cout << "Ingrese un numero:";
	cin >> n1;
	cout << "Ingrese un numero:";
	cin >> n2;
	cout << "Ingrese un numero:";
	cin >> n3;
	cout << "Ingrese un numero:";
	cin >> n4;
	sum = n1 + n2 + n3 + n4;
	prom = sum / 4;
	cout << "La suma es de: ";
	cout << sum;
	cout << "\n";
	cout << "El promedio es de: ";
	cout << prom;

}