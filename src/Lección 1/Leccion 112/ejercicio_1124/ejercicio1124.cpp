#include <iostream>
using namespace std;

int main() {

    int contC = 0, puerto = 1, idCMyr, pesoMyr = 0, p1 = 0, p2 = 0, p3 = 0;
    double peso, pesoT = 0;

    bool invalido = true;

    while (contC <= 10)
    {
        cout << "Id del contenedor: " << contC << endl;
        cout << "Ingrese el peso del contenedor (kg): ";
        cin >> peso;

        if (peso > 0)
        {
            invalido = true;
            pesoT+= peso;
            if (peso > pesoMyr)
            {
                pesoMyr = peso;
                idCMyr = contC;
            }

            while (invalido)
            {
                cout << "---|---" << endl;
                cout << "1- Puerto Buenos Aires" << endl;
                cout << "2- Puerto Bahia Blanca" << endl;
                cout << "3- Puerto Ushuaia" << endl;
                cout << "---|---" << endl;

                cout << "Ingrese puerto: ";
                cin >> puerto;

                switch (puerto)
                {
                case 1:
                    p1++;
                    invalido = false;
                    break;
                case 2:
                    p2++;
                    invalido = false;
                    break;
                case 3:
                    p3++;
                    invalido = false;
                    break;
                default:
                    invalido = true;
                    break;
                } 
            }  
            contC++; 
        } 
    }
    cout << "El peso total que el buque debe trasladar: " << pesoT << endl;
    cout << "El contenedor de mayor peso: " << idCMyr << endl;
    cout << "1- Puerto Buenos Aires: " << p1 << endl;
    cout << "2- Puerto Bahia Blanca: " << p2 << endl;
    cout << "3- Puerto Ushuaia: " << p3 << endl;
    
}
