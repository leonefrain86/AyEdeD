#include <iostream>
using namespace std;

int main() {

    int cnt1 = 1, mult, cnt2, a, b;
    double n, aux;

    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese un numero: ";
    cin >> b;

    
    while (cnt2 < n)
    {
        mult = a * cnt1;
        if ((mult % b) != 0)
        {
            cout << mult << "  ";
            cnt2++;
        }
        cnt1++;
    }
    
	return 0;
}
