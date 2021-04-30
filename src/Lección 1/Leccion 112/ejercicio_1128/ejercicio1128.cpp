#include <iostream>
using namespace std;

int main()
{

    int d = 1, dMyr, p, contP = 0, contPersonas, contTP;
    double i, sumP = 0, sumTP = 0, sumPMyr = 0;
    char continuar;

    while(d != 0)
    {   
        cout << "Ingrese DNI: ";
        cin >> d;

        if(d != 0)
        {
            continuar = 'S';
            sumP = 0;
            contP = 0;
            while (continuar == 'S')
            {
                cout << "Ingrese la fecha de pago: ";
                cin >> p;
                cout << "Ingrese importe: $";
                cin >> i;

                if (i > 0)
                { 
                    sumP+=i;
                    contP++; 

                    contTP++; 
                    sumTP+=i;            
                }
                else
                {
                    cout << "ERROR, el pago no se realizo correctamente" << endl;
                }

                cout << "Desea continuar? Si es asi ingrese | S |: ";
                cin >> continuar;
            } 

            

            if (sumP > 0)
            {
                contPersonas++;
            }

            if (sumP > sumPMyr)
            {
                sumPMyr = sumP;
                dMyr = d;
            }
            cout << "Cantidad de pagos efectuados: " << contP << endl;
            cout << "Importe promedio de los pagos: " << sumP / contP << endl;
            cout << "Cantidad total abonada: " << sumP << endl;
        }
    }

    cout << "Cuantas personas efectuaron al menos un pago: " << contPersonas << endl;
    cout << "Promedio de los importes pagados: " << sumTP / contTP << endl;
    cout << "DNI de la persona que, en total, abonó la mayor cantidad de dinero: " << dMyr << endl;



    return 0;
}
