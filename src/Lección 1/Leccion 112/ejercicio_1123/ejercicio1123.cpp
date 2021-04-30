#include <iostream>
using namespace std;

int main() {

    int sueldo, sobrante;

    cout << "Ingrese sueldo: ";
    cin >> sueldo; 
    if (sueldo % 60 == 0)
    {
        cout << "$60: " << sueldo / 60 << endl;
    }
    else
    {
        if (sueldo % 40 == 0)
        {
            cout << "$40: " << sueldo / 40 << endl;
        }
        else 
        {
            if (sueldo % 10 == 0)
            {
                cout << "$10: " << sueldo / 10 << endl;
            }
            else
            {
                sobrante = sueldo % 60;
                cout << "$60: "<< (sueldo - sobrante) / 60 << endl;
                sueldo = sobrante;
                sobrante = sobrante % 40;
                cout << "$40: " << (sueldo - sobrante) / 40 << endl;   
                sueldo = sobrante;
                sobrante = sobrante % 10;
                cout << "$10: " << (sueldo - sobrante) / 10 << endl;   
                cout << "Falta pagar: $" << sobrante << endl;
            }
        }
    }
}
