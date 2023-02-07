/*Se debe desarrollar un programa que pida el ingreso del precio de un artículo y
la cantidad que lleva el cliente.Mostrar lo que debe abonar el comprador.*/
#include<iostream>
using namespace std;
int main() {
	int cant;
	float precio,total;
	cout << "Cantidad:";
	cin >> cant;
	cout << "Precio";
	cin >> precio;
	total = precio * cant;
	cout << "El total es de:";
	cout << total;
	return 0;
}