#include <iostream>
using namespace std;

double factorial (double n)
{
    double cont = 1, f = 1;

    while (cont <= n)
    {
        f = f * cont;
        cont++;
    }
    return f;
}

int main()
{
    // NOTA: El factorial de un número n (se indica n!) se calcula así: n * n-1 * n-2 * … * 3 *
    // 2 * 1. El factorial de 0 es 1. Por ejemplo: 5! es: 120, 4! es: 24.

    double num = 1;
    
    while (num > 0)
    {
        cout << "Ingrese un numero: ";
        cin >> num;
        cout << "El factorial de " << num << " es " << factorial(num) << endl;       
    }

    return 0;
}
