#include <iostream>
using namespace std;

int main() {

    int num1, num2, numMyr, numMnr;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num1 != num2)
    {
        if (num1 > num2)
        {
            numMyr = num1;
            numMnr = num2;
        }
        else
        {
            numMyr = num2;
            numMnr = num1;
        }

        cout << "El numero mayor es " << numMyr << " y el numero menor es " << numMnr << endl;
    }
    else
    {
        cout << "Los valores ingresados son iguales";
    }
    
    return 0;
}
