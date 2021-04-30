#include <iostream>
using namespace std;

int main() {

    int tInfr = 1, contCF;
    string motivo, motivoMnr;
    double valor, sumST, sumT, valorMnr = 0;
    char gravedadInfr;
    bool primer = true;

    while(tInfr != 0)
    {
        cout << "1 ; 2 ; 3 ; 4" << endl;
        cout << "Ingrese tipo de infraccion: ";
        cin >>tInfr;

        if (tInfr > 0 && tInfr < 5)
        {
            cout << "Ingrese motivo de infraccion: ";
            cin >> motivo;

            cout << "Ingrese multa de infraccion: ";
            cin >> valor;
            sumST += valor;
            
            cout << "L: Leve, M: Medio, G: Grave" << endl;
            cout << "ingrese gravedad de infraccion: ";
            cin >> gravedadInfr;

            // L: +$100 M: +$150 G: +$300

            if(gravedadInfr == 'L')
            {
                valor = valor + 100;
            }
            else
            {
                if (gravedadInfr == 'M')
                {
                    valor = valor + 150;
                }
                else
                {
                    if (gravedadInfr == 'G')
                    {
                        valor = valor + 300;
                        if (tInfr == 3 || tInfr == 4)
                        {
                            contCF++;
                        }
                    }
                }
            }
            sumT += valor;
            if (primer)
            {
                valorMnr = valor;
                motivoMnr = motivo;
                primer = false;
            }
            else
            {
                if (valor < valorMnr)
                {
                    valorMnr = valor;
                    motivoMnr = motivo;
                }
            }
        }
        
    }

    cout << "Subtotal a pagar: " << sumST << endl;
    cout << "Total a pagar: " << sumT << endl;
    
    if(contCF > 3)
    {
        cout << "Clausurar Fábrica" << endl;
    }

    cout << "El motivo por el que se aplico la infraccion de menor valor: " << endl;
    cout << "valor: " << valorMnr << "  motivo: " << motivoMnr << endl;


    return 0;
}