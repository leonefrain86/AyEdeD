#include <iostream>
using namespace std;

int main() {

    int num, sum = 1 , num1 = 1, num2 = 1;

	cout << "Ingrese un numero: ";
    cin >> num;

    while (num > 2)
    {
        sum = num1 + num2;
        if (sum > 2)
        {
            num1 = num2;
        }
        num2 = sum;
        
        num--;
    }

    cout << sum << endl;   

	return 0;
}
