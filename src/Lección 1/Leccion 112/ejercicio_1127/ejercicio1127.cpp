#include <iostream>
using namespace std;

int main()
{

    int contVC, numV = 1, cantA, cantAL, pasaporte = 1, contV, contVCMyr = 0, numVMyr = 0;
    string destinoV, origenVAux, origenV;
    double importe, sumV, sumVMyr = 0, sumT;

    while(numV > 0)
    {

        cout << "Ingrese numero de vuelo: ";
        cin >> numV;
        if (numV > 0)
        {
            cout << "Ingrese destino: ";
            cin >> destinoV;

            if (contV == 0)
            {
                origenV = destinoV;
            }
            else
            {
                if(contV == 1 || contV % 3 == 0)
                {
                    if (destinoV == origenVAux)
                    {
                        contVC++;
                    }
                    else
                    {
                        if (contVC > contVCMyr)
                        {
                            contVCMyr = contVC;
                        }
                        contVC = 0;
                    }
                    origenVAux = destinoV;
                }  

                if ((contV % 2) == 0)
                {
                    if (destinoV == origenV)
                    {
                        contVC++;
                    }
                    else
                    {
                        if (contVC > contVCMyr)
                        {
                            contVCMyr = contVC;
                        }
                        contVC = 0;
                    }
                    origenV = destinoV;
                }
            }
            contV++;

            cout << "Ingrese cantidad de asientos: ";
            cin >> cantA;
            cantAL = cantA;

            while (cantAL > 0 && pasaporte > 0)
            {
                cout << "Cantidad de asientos disponibles: " << cantAL << endl;
                
                cout << "Ingrese pasaporte: ";
                cin >> pasaporte;

                if (pasaporte > 0)
                {
                    cantAL--;
                    cout << "Ingrese importe abonado: $";
                    cin >> importe;
                    sumV += importe;

                    cout << "Nro. de vuelo: " << numV << " , " << "Destino: " << destinoV << endl;
                    cout << "Numero de pasaporte: " << pasaporte << " , " << "Importe: $" << importe << endl;
                }
            }
            if (sumV > sumVMyr)
            {
                sumVMyr = sumV;
                numVMyr = numV;
            }
            sumT += sumV;

            cout << "Total recaudacion de vuelo: $" << sumV << endl;
            cout << "Porcentaje de asientos libres: " << (cantAL * 100) / cantA << "%" << endl;
            cout << "Porcentaje de asientos ocupados: " << ((cantA - cantAL) * 100) / cantA << "%" << endl;
        }
    }

    cout << "Total recaudacion mensual: " << sumT << endl;
    cout << "Mayor cantidad de veces seguidas que se dieron vuelos completos:" << contVCMyr << endl;
    cout << "Numero de vuelo que más recaudó: " << numVMyr <<endl;

    return 0;
}
