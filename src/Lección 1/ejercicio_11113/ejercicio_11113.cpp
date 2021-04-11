#include <iostream>
using namespace std;

int main() {

    int num, cont = 1;
    double f = 1;
    
	cout << "Ingrese un numero: ";
    cin >> num;

    while (cont <= num)
    {
        f = f * cont;
        cont++;
    }

    cout << "El factorial de " << num << " es " << f;
    
	return 0;
}
