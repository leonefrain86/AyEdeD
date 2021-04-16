#include <iostream>
using namespace std;

int main() {

    int num, cntP, cntN, cntNum, cntPares = 0, sumP;
    double porstjPrs, porstjN, promdP;
    do
    {
        cout << "Ingrese un numero: ";
        cin >> num;

        if (num != 0)
        {
            if (num % 2 == 0)
            {
                cntPares++;
            }
            if(num > 0)
            {
                cntP++;
                sumP = sumP + num;
            }
            else
            {
                cntN++;
            }
            cntNum++; 
        }
        
    } while (num != 0);

    cout << "---" << endl;

    cout << "Numeros Positivos: " << cntP << endl;
    cout << "Numeros Negativos: " << cntN << endl;

    porstjPrs = (cntPares * 100) / cntNum;
    promdP = sumP / cntP;
    porstjN = (cntN * 100) / cntNum;

    cout << "Porcentaje de pares: " << porstjPrs << "%" << endl;
    cout << "Promedio de los positivos: " << promdP << endl;
    cout << "Porcentaje de negativos: " << porstjN << "%" << endl;
    
	return 0;
}
