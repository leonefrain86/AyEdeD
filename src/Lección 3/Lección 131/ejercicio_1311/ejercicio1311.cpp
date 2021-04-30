#include <iostream>
using namespace std;

struct Fraccion
{
    double num1;
    double num2;

};

bool fraccionValidar(Fraccion f)
{
    return f.num2 != 0;
}

double fraccionRealizar(Fraccion f)
{
    return f.num1/f.num2;
}

void fraccionIngresoDeDatos(Fraccion f)
{
    char c = 's';
    
    while (c == 's')
    {
        cout << "Ingrese un numero: ";
        cin >> f.num1;
        cout << "Ingrese otro numero: ";
        cin >> f.num2;

        if(fraccionValidar(f))
        {
            cout << "La fraccion es " << fraccionRealizar(f) << endl;
        }
        else
        {
            cout << "ERROR, el denomibador no puede ser sero" << endl;
        }
        cout << "Desea continuar? (s): ";
        cin >> c;
    }
}

int main()
{
    Fraccion f1;
    
    fraccionIngresoDeDatos(f1);

    return 0;
}
