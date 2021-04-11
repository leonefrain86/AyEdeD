#include <iostream>
using namespace std;

int main() {

    int num1, num2, cont = 0, sum = 0;

    cout << "Ingrese numero: ";
    cin >> num1;
    cout << "Ingrese numero: ";
    cin >> num2;

    if (num1 >= 0 && num2 >= 0)
    {
        while (cont < num2)
        {
            sum = sum + num1;
            cont ++;
        }
        cout << num1 << " * " << num2 << " = " << sum << endl;
    }
    else
    {
        cout << "ERROR, Los valores ingresados deben ser mayores a cero";
    }

	return 0;
}
