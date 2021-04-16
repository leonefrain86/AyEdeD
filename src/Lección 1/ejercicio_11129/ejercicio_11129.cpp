#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

// 1. Para cada uno de los n conjuntos:
//     a. El valor promedio.
//     b. El máximo valor.
//     c. Porcentaje de valores positivos.
// 2. Para todo el lote de datos:
//     a. Valor promedio.
//     b. Porcentaje de valores negativos.
//     c. Valor mínimo.

    int contL, cont, contN, contP;
    char continuar;
    double promedio, promedioL, prjNgL, prjP, num, numMx, numMnL;
    bool primero, primeroL;

    do 
    {
        cont = 0;
        promedio = 0;
        contP = 0;
        primero = true;
        do
        {
            cout << "Ingrese numero: ";
            cin >> num;


            // Sumar y contar el 0 no tiene sentido, ya que no aporta nada al conjunto y puede tirara un error
            if (num != 0)
            {
                cont++;
                promedio = promedio + abs(num);

                contL++;
                promedioL = promedioL + abs(num);
            }

            if(primero)
            {
                numMx = num;
                if (primeroL)
                {
                    numMnL = num;
                    primeroL = false;
                }  
                primero = false;      
            }
            else
            {
                if (num > numMx)
                {
                    numMx = num;
                }
                else
                {
                    if (num < numMnL)
                    {
                        numMnL = num;
                    }
                }
            }
            if (num > 0)
            {
                contP++;
            }
            else
            {
                if(num < 0)
                {
                    contN++;
                }
            }
            
            cout << "Desea continuar ingresando numeros? Si es asi ingrese | S |: ";
            cin >> continuar;
            
        } while( continuar == 'S');

        cout << "---|----" << endl; 
        promedio = promedio / cont;       
        cout << "Promedio: "<< promedio << endl;
        cout << "Máximo valor del conjunto: " << numMx << endl;
        prjP = (contP * 100) / cont;
        cout << "Porcentaje de valores positivos: " << prjP << "%" << endl;
        cout << "---|----" << endl;
        cout << "Desea continuar ingresando otro conjunto? Si es asi ingrese | S |: ";
        cin >> continuar;

    } while( continuar == 'S');

    cout << "---|----" << endl; 
    promedioL = promedioL / contL;       
    cout << "Promedio total: "<< promedioL << endl;
    cout << "Minimo valor: " << numMnL << endl;
    prjNgL = (contN * 100) / contL;
    cout << "Porcentaje de valores negativos: " << prjNgL << "%" << endl;
    cout << "---|----" << endl;
    cout << "Desea continuar ingresando otro conjunto? Si es asi ingrese | S |: ";
    


    
	return 0;
}
