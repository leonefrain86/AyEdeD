#include <iostream>
using namespace std;

int main() {

    int contV = 0, esAsc = 0, contP = 0, palabra = 0, palabraMayor = 0;
    char crter;
    string oracion;
     
    while (crter != '.')
    {
        cout << "Ingrese un caracter: ";
        cin >> crter;

        bool vocales = crter == 'a' || crter == 'e' || crter == 'i' || crter == 'o' || crter == 'u' || crter == 'A' || crter == 'E' || crter == 'I' || crter == 'O' || crter == 'U';
        
        if (crter == '_' || crter == '.')
        {
            oracion = oracion + ' ';
            if (palabra > palabraMayor)
            {
                esAsc++;
                palabraMayor = palabra;
            }
            palabra = 0;
            contP++;
        }
        else
        {
            oracion = oracion + crter;
            palabra++;
            if (vocales)
            {
                contV++;
            }
        }
        
    }

    cout << palabraMayor;
    cout << "---|---" << endl;
    cout << oracion << endl;  
    cout << "---|---" << endl;
    cout << "Cantidad de veces que aparecio cada vocal: " << contV << endl;
    cout << "Cantidad de palabras que contiene la oracion: " << contP << endl;
    cout << "Cantidad de letras que posee la palabra mas larga: " << palabraMayor << endl;

    if (contP == esAsc)
    {
        cout << "Es ascendente" << endl;
    }
    else
    {
        cout << "No es ascendente" << endl;
    }
}
