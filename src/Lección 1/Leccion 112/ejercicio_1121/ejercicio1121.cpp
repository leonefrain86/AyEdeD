#include <iostream>
using namespace std;

int main() {

    int sueldo, sobrante;

    cout << "Ingrese sueldo: ";
    cin >> sueldo;

    sobrante = sueldo % 100;

    cout << "$100: "<< (sueldo - sobrante) / 100 << endl;

    sueldo = sobrante;
    sobrante = sobrante % 50;

    cout << "$50: " << (sueldo - sobrante) / 50 << endl;

    sueldo = sobrante;
    sobrante = sobrante % 20;

    cout << "$20: " << (sueldo - sobrante) / 20 << endl;

    sueldo = sobrante;
    sobrante = sobrante % 10;

    cout << "$10: " << (sueldo - sobrante) / 10 << endl;

    sueldo = sobrante;
    sobrante = sobrante % 5;

    cout << "$5: " << (sueldo - sobrante) / 5 << endl;

    sueldo = sobrante;
    sobrante = sobrante % 2;

    cout << "$2: " << (sueldo - sobrante) / 2 << endl;

    cout << "$1: " << sobrante << endl;

}
