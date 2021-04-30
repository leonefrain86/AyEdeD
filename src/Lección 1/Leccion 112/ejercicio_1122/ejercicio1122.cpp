#include <iostream>
using namespace std;

int main() {

    int sum = 0, sueldo, sobrante, cont100 = 0, cont50 = 0, cont20 = 0, cont10 = 0, cont5 = 0, cont2 = 0, cont1 = 0;
    char continuar = 's';

    do
    {
        cout << "Ingrese sueldo: ";
        cin >> sueldo;

        if (sueldo > 0)
        {
            sum+= sueldo;

            sobrante = sueldo % 100;
            cont100+= (sueldo - sobrante) / 100;

            sueldo = sobrante;
            sobrante = sobrante % 50; 
            cont50+= (sueldo - sobrante) / 50;

            sueldo = sobrante;
            sobrante = sobrante % 20;
            cont20+= (sueldo - sobrante) / 20;

            sueldo = sobrante;
            sobrante = sobrante % 10;
            cont10+= (sueldo - sobrante) / 10;

            sueldo = sobrante;
            sobrante = sobrante % 5;
            cont5+= (sueldo - sobrante) / 5;

            sueldo = sobrante;
            sobrante = sobrante % 2;
            cont2+= (sueldo - sobrante) / 2;

            cont1+= sobrante;

            cout << "Desea agregar otro sueldo?, Si es asi ingrese | s |: ";
            cin >> continuar;
        }   

    } while (continuar == 's');

    cout << "---|---" << endl;
    cout << "Monto total a pagar: " << endl;
    cout << "$100: " << cont100 << endl;
    cout << "$50: " << cont50 << endl;
    cout << "$20: " << cont20  << endl;
    cout << "$10: " << cont10 << endl;
    cout << "$5: " << cont5<< endl;
    cout << "$2: " << cont2 << endl;
    cout << "$1: " << cont1 << endl;
    cout << "---|---" << endl;

}
