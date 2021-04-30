#include <iostream>
using namespace std;

bool esAnioBisiesto (int aa)
{
    return (aa % 100 == 0 && aa % 400 == 0) || ((aa % 4 == 0 || aa % 400) && aa % 100 != 0);
}

int diasDelMes (int mm, int aa)
{
    int dd = 31;
    if (mm == 4 || mm == 6 || mm == 9 || mm == 11)
    {
        return 30;
    }
    else
    {
        dd = 28;
        if (esAnioBisiesto(aa))
        {
            return 29;
        }
    }
    return dd;
}

int main()
{
    int anio, mes;

    cout << "Ingrese anio: ";
    cin >> anio;
    cout << "Ingrese mes: ";   
    cin >> mes;

    cout << "dias: " << diasDelMes(mes, anio) << endl;

    return 0;
}
