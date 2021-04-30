#include <iostream>
using namespace std;

struct Plan
{
    double precio;
    int minL;
    double crgPorExd;
};

struct Abonado
{
    int num;
    string name;
    string direccion;
    int t;
    char tipoP;

    Plan plan;
};

int toMin(int t)
{
    return (t / 100) * 60 + t % 100;
}

void exedente(Plan p, int minU,int &minExd, double &impPagar)
{
    if (p.minL - minU < 0)
    {
        impPagar = abs(p.minL - minU) * p.crgPorExd;
        minExd = abs(p.minL - minU);
    }
}

Plan planSolicitado(char tipoPlan)
{
    Plan p;
    if(tipoPlan == 'A')
    {
        p.precio = 1500;
        p.minL = 1000;
        p.crgPorExd = 1;
    }
    else
    {
        if (tipoPlan == 'B')
        {
            p.precio = 1000;
            p.minL = 600;
            p.crgPorExd = 3;
        }
        else
        {
            if (tipoPlan == 'C')
            {
                p.precio = 700;
                p.minL = 400;
                p.crgPorExd = 5;
            }
            else
            {
                if(tipoPlan == 'D')
                {
                    p.precio = 500;    
                    p.minL = 300;
                    p.crgPorExd = 7;
                }
                else
                {
                    if (tipoPlan == 'E')
                    {
                        p.precio = 350;
                        p.minL = 100;
                        p.crgPorExd = 10;
                    }
                    else
                    {
                        p.precio = 0;
                        p.minL = 0;
                        p.crgPorExd = 0;
                    }
                }
            }
        }
    }

    return p;
}

void abonadoIngresoDeDatos (Abonado &a)
{
    cout << "Numero de celular: ";
    cin >> a.num;
    cout << "Nombre del abonado: ";
    cin >> a.name;
    cout << "Direccion del abonado: ";
    cin >> a.direccion;
    cout << "Tiempo de uso (hhhmm): ";
    cin >> a.t;
    cout << "Tipo de abono: ";
    cin >> a.tipoP;

    a.plan = planSolicitado(a.tipoP);
}

int main()
{
    Abonado a;
    int minExd;
    double impPagar;

    abonadoIngresoDeDatos(a);

    exedente(a.plan, toMin(a.t), minExd, impPagar);

    cout << "Minutos extendidos: " << minExd << endl;
    cout << "Total a abonar: " << a.plan.precio + impPagar << endl;

    return 0;
}
