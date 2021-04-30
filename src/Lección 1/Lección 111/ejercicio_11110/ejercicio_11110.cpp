#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

    int aa, mm, dd, fecha1, fecha2, fechaHoy = 20210411;

    // INGRESO DE DATOS

    cout << "--FECHA 1--" << endl;

    cout << "Ingrese el anio: ";
    cin >> aa;
    cout << "Ingrese el mes: ";
    cin >> mm;
    cout << "Ingrese el dia: ";
    cin >> dd;

    // VALIDACIÓN

    if (aa > 0 && mm > 0 && dd > 0)
    {
        bool mm31dias = mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12;
        bool mm30dias = mm == 4 || mm == 6 || mm == 9 || mm == 11;
        if ((mm31dias == true) && dd <= 31 )
        {
            fecha1 = aa * 10000;
            fecha1 = fecha1 + mm * 100;
            fecha1 = fecha1 + dd;
        }
        else 
        {
            if (mm30dias == true && dd <= 30)
            {
                fecha1 = aa * 10000;
                fecha1 = fecha1 + mm * 100;
                fecha1 = fecha1 + dd;
            }
            else
            {
                if (mm == 2)
                {
                    if ((dd == 29) && ((aa % 4 == 0) || (aa % 400 == 0)) && (aa % 100 != 0))
                    {
                        fecha1 = aa * 10000;
                        fecha1 = fecha1 + mm * 100;
                        fecha1 = fecha1 + dd;
                    }
                    else
                    {
                        if ((dd == 29) && ((aa % 400) == 0) && ((aa % 100) == 0))
                        {
                            fecha1 = aa * 10000;
                            fecha1 = fecha1 + mm * 100;
                            fecha1 = fecha1 + dd;
                        }
                        else
                        {
                            if (dd == 28)
                            {
                                fecha1 = aa * 10000;
                                fecha1 = fecha1 + mm * 100;
                                fecha1 = fecha1 + dd;
                            }
                        }
                    }
                }
            }
        }   
    }

    if (fecha1 != 0)
    {
        cout << "--FECHA 2--" << endl;

        cout << "Ingrese el anio: ";
        cin >> aa;
        cout << "Ingrese el mes: ";
        cin >> mm;
        cout << "Ingrese el dia: ";
        cin >> dd;

        if (aa > 0 && mm > 0 && dd > 0)
        {
            bool mm31dias = mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12;
            bool mm30dias = mm == 4 || mm == 6 || mm == 9 || mm == 11;
            if ((mm31dias == true) && dd <= 31 )
            {
                fecha2 = aa * 10000;
                fecha2 = fecha2 + mm * 100;
                fecha2 = fecha2 + dd;
            }
            else 
            {
                if (mm30dias == true && dd <= 30)
                {
                    fecha2 = aa * 10000;
                    fecha2 = fecha2 + mm * 100;
                    fecha2 = fecha2 + dd;
                }
                else
                {
                    if (mm == 2)
                    {
                        if (dd == 29)
                        {
                            // Test
                            if (((aa % 4 == 0 || aa % 400 == 0) && aa % 100 != 0) || ((aa % 400 == 0) && (aa % 100 == 0)))
                            {
                                fecha2 = aa * 10000;
                                fecha2 = fecha2 + mm * 100;
                                fecha2 = fecha2 + dd;
                            }
                        }
                        else
                        {
                            if (dd == 28)
                            {
                                fecha2 = aa * 10000;
                                fecha2 = fecha2 + mm * 100;
                                fecha2 = fecha2 + dd;
                            }
                        }
                    }
                }
            }   
        }
    }

    if (fecha1 != 0 && fecha2 != 0)
    {
        if (abs(fechaHoy - fecha1) < abs(fechaHoy - fecha2))
        {
            cout << "La fecha 1 es la mas cercana";
        }
        else
        {
            if (abs(fechaHoy - fecha2) < abs(fechaHoy - fecha1))
            {
                cout << "La fecha 2 es la mas cercana";
            }
            else
            {
                cout << "Ambas estan a la misma cercania con respecto a la fecha de hoy";
            }
        }
    }
    else
    {
        cout << "ERROR, fecha mal ingresada";
    }
    
	return 0;
}
