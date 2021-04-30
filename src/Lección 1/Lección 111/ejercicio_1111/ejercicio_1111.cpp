#include <iostream>
using namespace std;

int main() {

    int a, b, suma, producto, diferencia, cociente;
	cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    // Suma
    suma = a + b;
    cout << "Suma: " << a << " + " << b << " = " << suma << endl;

    // Diferencia 
    diferencia = a - b;
    cout << "Diferencia: "<< a << " - " << b << " = " << diferencia << endl;

    // Producto
    producto = a * b;
    cout << "Producto: "<< a << " * " << b << " = " << producto << endl;

    // Cociente
    cociente = a / b;
    cout << "Cociente: "<< a << " / " << b << " = " << cociente << endl;

	return 0;
}
