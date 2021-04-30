#include <iostream>
using namespace std;

bool esAnioBisiesto (int aa)
{
    return (aa % 100 == 0 && aa % 400 == 0) || ((aa % 4 == 0 || aa % 400) && aa % 100 != 0);
}

bool validarFecha (int aa, int mm, int dd)
{ 
    if (mm > 0 && mm <= 12 && dd > 0 && dd <= 31 && aa > 0)
    {
        if (mm == 2 && dd <= 29)
        {
            if (!esAnioBisiesto(aa))
            {
                if (dd > 28)
                {
                    return false;
                }
            }  
        }
        
        if (mm == 4 || mm == 6 || mm == 9 || mm == 11)
        {
            if (dd > 30)
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

int unificarFecha(int dd, int mm, int aa)
{
    return aa * 10000 +  mm * 100 + dd;
}

int main()
{
    int a, m, d;

    cout << "Ingrese anio: ";
    cin >> a;
    cout << "Ingrese mes: ";
    cin >> m;
    cout << "Ingrese dia: ";
    cin >> d;
    
    if(validarFecha( a, m, d))
    {
        cout << unificarFecha(d,m,a) << endl;
    }
    else
    {
        cout << ">:)" << endl;
    } 

    return 0;
}
