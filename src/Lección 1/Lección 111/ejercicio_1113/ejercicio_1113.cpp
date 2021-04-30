#include <iostream>
using namespace std;

int main() {

    int num;
	cout << "Ingrese un numero: ";
    cin >> num;

    cout << "La quinta parte: "<< num/5 << endl;
    
    // Revisar
    cout << "El resto al dividirlo en cinco partes iguales: " << num%5 << endl;
    cout << "La septima parte de la quinta parte: " << (num/5)/7 << endl;

	return 0;
}
