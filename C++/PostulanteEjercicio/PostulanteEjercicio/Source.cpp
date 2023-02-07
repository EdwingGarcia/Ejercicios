/*
Un postulante a un empleo, realiza un test de capacitación, se obtuvo la siguiente información: 
cantidad total de preguntas que se le realizaron y la cantidad de preguntas que contestó correctamente.

Se pide confeccionar un programa que ingrese los dos datos por teclado e informe el nivel 
del mismo según el porcentaje de respuestas correctas que ha obtenido, y sabiendo que:
	Nivel máximo:	Porcentaje>=90%.
	Nivel medio:	Porcentaje>=75% y <90%.
	Nivel regular:	Porcentaje>=50% y <75%.
	Fuera de nivel:	Porcentaje<50%.

*/
#include<iostream>
using namespace std;
int main() {
	int preguntas, correctas;
	double porce;
	cout << "Ingrese la cantidad de preguntas";
	cin >> preguntas;
	cout << "Ingrese la cantidad de preguntas acertadas";
	cin >> correctas;
	porce = (correctas * 100) / preguntas ;
	if (porce >= 90) { 
		cout << "Nivel Maximo"; 
	}
	else {
		if (porce >= 75) {
			cout << "nivel Medio"; 
		}
		else {
			if (porce >= 50) { cout << "nivel Regular";
			}
			else {
				cout << "Fuera de nivel";
			}
		}
	}
	return 0;
}