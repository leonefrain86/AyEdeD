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
        cout << f << "  ";
        cont++;
    }
    
	return 0;
}
