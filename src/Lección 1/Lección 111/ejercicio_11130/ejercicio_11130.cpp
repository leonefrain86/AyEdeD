#include <iostream>
using namespace std;

int main()
{

    int num, contSubC = 1, numSubC = 0, numMinSubC = 0, sumaC = 0, numMyrSubC, numMaxC = 0, posicionMyrSubC;
    bool primerSubC = true;
    double promedioSubC = 0;

    do
    {
        // cout << "----|----" << endl;
        // cout << "OPCIONES" << endl;
        // cout << "0: Guardar subconjunto" << endl;
        // cout << "-1: Dejar de ingresar numeros y ver resultados" << endl;
        // cout << "----|----" << endl;
        if (primerSubC)
        {
            cout << "Subconjunto: " << numSubC + 1 << endl;
        }
        cout << "Ingrese un numero: ";
        cin >> num;
        if (num >= 0)
        {
            // Terminar subconjunto
            if (num == 0)
            {
                cout << "Promedio: " << promedioSubC / contSubC << endl;
                cout << "Valor minimo del subconjunto: " << numMinSubC << endl;
                contSubC = 1;
                promedioSubC = 0;
                primerSubC = true;
                numSubC++;
            }
            // Evaluar el valor
            else
            {
                sumaC = sumaC + num;
                promedioSubC = promedioSubC + num;

                // Menor valor del subconjunto
                if (primerSubC)
                {
                    contSubC = contSubC - 1;
                    numMinSubC = num;
                    primerSubC = false;
                }
                else
                {
                    if (num < numMinSubC)
                    {
                        numMinSubC = num;
                    }
                }
                contSubC++;

                // Mayor valor del conjunto
                if (num > numMaxC)
                {
                    numMaxC = num;
                    numMyrSubC = numSubC + 1;
                    posicionMyrSubC = contSubC - 1;
                }
            }
        }
    } while (num >= 0);

    cout << "---|---" << endl;
    cout << "Cantidad de subconjuntos: " << numSubC << endl;
    cout << "Sumatoria de sus valores: " << sumaC << endl;
    cout << "---|---" << endl;
    cout << "Numero Mayor: " << numMaxC << endl;
    cout << "Subconjunto numero: " << numMyrSubC << endl;
    cout << "Posicion numero dentro del subconjunto: " << posicionMyrSubC << endl;
    cout << "---|---" << endl;

    return 0;
}
