#include <iostream>
using namespace std;

int main() {

    // Dado un conjunto de valores numéricos que finaliza al ingresar un 0 (cero), informar
    // cuál es el mínimo valor entre aquellos que pertenecen al intervalo [-16, 27].

    int menor;
    double num;
    bool primero = true;

    do
    {
        cout << "Ingrese un numero: ";
        cin >> num;

        if (num != 0)
        {
            if (num >= -16 && num < 27)
            {
                if (primero)
                {
                    menor = num;
                    primero = false;
                }
                else
                {
                    if (num < menor)
                    {
                        menor = num;
                    }
                }
            }
        }
    } while (num != 0);

    cout << "El mínimo valor entre aquellos que pertenecen al intervalo [-16, 27]: " << menor << endl;
    
	return 0;
}
