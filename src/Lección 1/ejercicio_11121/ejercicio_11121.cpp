#include <iostream>
using namespace std;

int main() {

    int num, cnt = 0, sumMyr100= 0, cntMyr100 = 0, sumMrsMns10 = 0;
    
    while (cnt < 50)
    {
        cout << "Ingrese un valor: ";
        cin >> num;

        if (num > 100)
        {
            cntMyr100++;
            sumMyr100 = sumMyr100 + num;
        }
        else
        {
            if( num < -10)
            {
                sumMrsMns10 = sumMrsMns10 + num;
            }
        }
        cnt++;
    }

    cout << "Promedio de los mayores que 100: " << sumMyr100 / cntMyr100 << endl;

    cout << "Suma de los menores que -10: " << sumMrsMns10 << endl;

	return 0;
}
