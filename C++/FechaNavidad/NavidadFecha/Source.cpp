//Realizar un programa que pida cargar una fecha cualquiera, luego verificar si dicha fecha corresponde a Navidad.
#include<iostream>
using namespace std;
int main() {
	int dia, mes, anio;
	cout << "Ingrese el dia: ";
	cin >> dia;
	cout << "Ingrese el mes: ";
	cin >> mes;
	cout << "Ingrese el anio: ";
	cin >> anio;
	if (dia == 25 && mes == 12) { cout << "Es navidad"; }
	return 0;
}