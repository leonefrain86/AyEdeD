#include <iostream>
using namespace std;

int main()
{

    int num, cont = 0, contE = 1, contS, numMyr = 0, contMyrE = 0, seguidillaMyr = 0, posicionMyrI = 0, posicionI = 0, posicionMyrF = 0;
    bool primerS = true, primerE = true;

    do
    {
        cout << "Ingrese un numero: ";
        cin >> num;
        if (num != 0)
        {
            cont++;

            if (primerE)
            {
                numMyr = num;
                posicionI = cont;
                primerE = false;
            }
            else
            {
                if (num > numMyr)
                {
                    numMyr = num;
                    contE++;
                }
                else
                {
                    if (contE >= 2)
                    {
                        contS++;
                        cout << "---|---" << endl;
                        cout << "Cantidad de elementos de la seguidilla: " << contE << endl;
                        cout << "-->" << cont << "-" << posicionI << endl;
                        cout << "---|---" << endl;

                        if (primerS)
                        {
                            contMyrE = contE;
                            seguidillaMyr = contS;
                            posicionMyrF = cont - 1;
                            posicionMyrI = posicionI;
                            primerS = false;
                        }
                        else
                        {
                            if (contE > contMyrE)
                            {
                                contMyrE = contE;      //5
                                seguidillaMyr = contS; //3
                                posicionMyrF = cont - 1;

                                posicionMyrI = posicionI;
                            }
                        }
                    }
                    contE = 1;
                    numMyr = num;
                    posicionI = cont;
                }
            }
        }
    } while (num != 0);

    cout << "Numero de seguidillas: " << contS << endl;
    cout << "Seguidilla con mayor cantidad de elementos: " << seguidillaMyr << endl;
    cout << "Posicion: [" << posicionMyrI << "," << posicionMyrF << "]" << endl;

    return 0;
}
