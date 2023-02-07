//Se ingresan tres notas de un alumno, si el promedio es mayor o igual a siete mostrar un mensaje "Promocionado"
#include<iostream>
using namespace std;

int main() {
	double n1, n2, n3,promedio;
	cout << "ingrese la primera nota: ";
	cin >> n1;
	cout << "ingrese la segunda nota: ";
	cin >> n2;
	cout << "ingrese la tercera nota: ";
	cin >> n3;
	promedio = (n1 + n2 + n3) / 3;
	if (promedio >= 7) {
		cout << "Promocionado con promedio de:";
	}
	else {
		cout << "Reprobado con promedio de:";
	}
	cout << promedio;
	return 0;
}