#include <iostream>
using namespace std;

int main() {

    int a, b, cociente;
	cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    if (b != 0)
    {
        cociente = a / b;
        cout << "Cociente: "<< a << " / " << b << " = " << cociente << endl;
    }
    else
    {
        cout << "ERROR, b no puede ser 0";
    }

	return 0;
}
