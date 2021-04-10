// Mayor valor entre dos números

#include <iostream>
using namespace std;

int main() {

    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num1 != num2)
    {
        if (num1 > num2)
        {
            cout << num1 << " es mayor a " << num2;
        }
        else
        {
            cout << num2 << " es mayor a " << num1;
        }      
    }
    else
    {
        cout << "ERROR, los numeros son iguales";
    }
    
	return 0;
}
