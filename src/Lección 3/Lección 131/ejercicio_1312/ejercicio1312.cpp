#include <iostream>
using namespace std;

struct Fecha
{
    int aa;
    int mm;
    int dd;
};

bool fechaEsAnioBisiesto (int aa)
{
    return (aa % 100 == 0 && aa % 400 == 0) || ((aa % 4 == 0 || aa % 400 == 0) && aa % 100 != 0);
}

bool fechaValidarFecha (Fecha f)
{ 
    if (f.mm > 0 && f.mm <= 12 && f.dd > 0 && f.dd <= 31 && f.aa > 0)
    {
        if (f.mm == 2)
        {
            if (f.dd <= 29)
            {
                if (!fechaEsAnioBisiesto(f.aa))
                {
                    if (f.dd > 28)
                    {
                        return false;
                    }
                } 
            }
            else
            {
                return false;
            }  
        }
        
        if (f.mm == 4 || f.mm == 6 || f.mm == 9 || f.mm == 11)
        {
            if (f.dd > 30)
            {
                return false;
            }
        }
    }
    else
    {
        return false;
    }

    return true;
}

void fechaMostrarFecha(Fecha f)
{
    cout << f.aa << endl;
    cout << f.mm << endl;
    cout << f.dd << endl;
}

void fechaIngresoDeDatos(Fecha &f)
{
    cout << "Ingrese dia: ";
    cin >> f.dd;    
    cout << "Ingrese mes: ";
    cin >> f.mm;
    cout << "Ingrese anio: ";
    cin >> f.aa;
}

int main()
{
    Fecha f;

    fechaIngresoDeDatos(f);
    if(fechaValidarFecha(f))
    {
        fechaMostrarFecha(f);
    }
    else
    {
        cout << "ERROR, fecha invalida" << endl;
    }
}
