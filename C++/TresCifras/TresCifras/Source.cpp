//				Confeccionar un programa que permita cargar un número entero positivo de hasta tres cifras
//		y muestre un mensaje indicando si tiene 1, 2, o 3 cifras. Mostrar un mensaje de error si el número de cifras es mayor.
#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "ingrese un numero: ";
	cin >> num;
	if (num > 0) {
		if (num < 10) { cout << "Tiene solo un digito"; }
		else if (num < 100) { cout << "Tiene dos digitos"; }
		else if (num < 1000) { cout << "Tiene tres digitos"; }
	}
	else {
		cout << "Ingrse solo valores positivos";
	}


	return 0;
}