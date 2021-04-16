#include <iostream>
using namespace std;

int main() {

    // Dado un conjunto de valores numéricos que finaliza con el ingreso de un 0 (cero),
    // informar cuál es el mayor de los negativos, y cuál el menor de los positivos.

    int mayorN, menorP;
    double num;
    bool primeroP = true, primeroN = true;

    do
    {
        cout << "Ingrese un numero: ";
        cin >> num;

        if (num != 0)
        {
            if (num > 0)
            {
                if (primeroP)
                {
                    menorP = num;
                    primeroP = false;
                }
                else
                {
                    if (num < menorP)
                    {
                        menorP = num;
                    }
                }
            }
            if (num < 0)
            {
                if (primeroN)
                {
                    mayorN = num;
                    primeroN = false;
                }
                else
                {
                    if (num > mayorN)
                    {
                        mayorN = num;
                    }
                }
            }
        }

    } while (num != 0);

    cout << "El mayor de los negativos: " << mayorN << endl;
    cout << "El menor de los positivos: " << menorP << endl;
    
    
	return 0;
}
