//Se cargan por teclado tres números distintos. Mostrar por pantalla el mayor de ellos.
#include<iostream>
using namespace std;
int main(){
	int n1, n2, n3;
	cout << "Ingrese el primer numero: ";
	cin >> n1;
	cout << "Ingrese el segundo numero: ";
	cin >> n2;
	cout << "Ingrese el tercer numero: ";
	cin >> n3;
	if (n1 > n2) {
		if (n1 > n3) {
			cout << "el numero mayor es:";
			cout << n1;
		}
		else {
			cout << "el numero mayor es:";
			cout << n3;
		}
	}else {
		if (n2 > n3) {
			cout << "el numero mayor es:";
			cout << n2;
		}
		else {
			cout << "el numero mayor es:";
			cout << n3;
		}
	}	
	return 0;
}