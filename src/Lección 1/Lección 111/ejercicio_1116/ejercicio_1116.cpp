#include <iostream>
using namespace std;

int main() {

    int num1, num2, num3, numMd, numMyr, numMnr;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
	cin >> num3;

    if (num1 != num2 && num2 != num3 && num3 != num1)
    {
        if (num1 > num2 && num1 > num3)
        {
            numMyr = num1;
            if (num2 > num3)
            {
                numMd = num2;
                numMnr = num3;
            }
            else
            {
                numMd = num3;
                numMnr = num2;
            } 
        }
        else
        {
            if (num2 > num1 && num2 > num3)
            {
                numMyr = num2;
                if (num1 > num3)
                {
                    numMd = num1;
                    numMnr = num3;
                }
                else
                {
                    numMd = num3;
                    numMnr = num1;
                } 
            }
            else
            {
                numMyr = num3;
                if (num1 > num2)
                {
                    numMd = num1;
                    numMnr = num2;
                }
                else
                {
                    numMd = num2;
                    numMnr = num1;
                } 
            }
        }

        cout << "Numero mayor: " << numMyr << endl;
        cout << "Numero del medio: " << numMd << endl;
        cout << "Numero menor: " << numMnr << endl;
    }
    else
    {
        cout << "ERROR, Los numeros no pueden repetirse";
    }

	return 0;
}
