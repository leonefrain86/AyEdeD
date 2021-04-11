#include <iostream>
using namespace std;

int main() {

    int n, a, b, mult, cont = 1;

	cout << "Ingrese un numero: ";
    cin >> n;
    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese un numero: ";
    cin >> b;

    while (n > 0)
    { 
        mult = a * cont;
        if (mult % b != 0)
        {
            n--;
        }
        cont++;
    }
    
    cout << mult << endl;

	return 0;
}
