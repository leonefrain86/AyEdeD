#include <iostream>
using namespace std;

struct Hora
{
    double cont = 1, f = 1;
    int mn;
    int sg;
};

bool horaValidarHora (Hora h)
{
    if (h.mn >= 0 && h.mn < 60 && h.sg >= 0 && h.sg < 60)
    {
        return true;
    }
    return false;
}

void horaMostrarDatos (Hora h)
{
    cout << h.mn << " min" << endl;
    cout << h.sg << " seg" << endl;
}

void horaIngresoDeDatos (Hora &h)
{
    cout << "Ingrese minutos: ";
    cin >> h.mn;
    cout << "Ingrese segundos: ";
    cin >> h.sg;
}

int main()
{
    Hora h;

    horaIngresoDeDatos(h);
    if (horaValidarHora(h))
    {    
        horaMostrarDatos(h);
    }
    else
    {
        cout << "ERROR, datos mal ingresados" << endl;
    }

    return 0;
}
