#include <iostream>
using namespace std;

int main() {

    int cnt1 = 1, mult, cnt2;
    double num;

    cout << "Ingrese un numero: ";
    cin >> num;
    
    while (cnt2 < num)
    {
        mult = 5 * cnt1;
        if ((mult % 3) != 0)
        {
            cout << mult << "  ";
            cnt2++;
        }
        cnt1++;
    }

	return 0;
}
