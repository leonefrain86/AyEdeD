#include <iostream>
using namespace std;

bool esPrimo (int n)
{
    int div = 2;

    while (div < n)
    {
        if (n % div == 0) 
        {
            return false;
        }
        div++;
    }

    return true;
}

int main()
{
    int n = 2, t;
    cout << "Ingrese un numero: ";
    cin >> t;

    while (t > 0)
    {
        if (esPrimo(n))
        {
            cout << n << " - ";
            t--;
        }
        n++;
    }

    return 0;
}
