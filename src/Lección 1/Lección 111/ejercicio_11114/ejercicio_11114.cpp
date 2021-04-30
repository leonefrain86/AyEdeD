#include <iostream>
using namespace std;

int main() {

    int num, div = 2;
    bool primo = true;

    cout << "Ingrese un numero: ";
    cin >> num;

    
    while (div < num)
    {
        if (num % div == 0) 
        {
            primo = false;
            break;
        }
        div++;
    }

    if (primo)
    {
        cout << num << " es un numero primo" << endl;
    }
    else
    {
        cout << num << " no es un numero primo" << endl;
    }

    return 0;
}
