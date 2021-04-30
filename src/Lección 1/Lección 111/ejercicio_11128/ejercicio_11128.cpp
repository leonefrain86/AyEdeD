#include <iostream>
using namespace std;

int main() {

    // Se ingresa un conjunto de duplas (n, f), donde n es el nombre de una persona y f su
    // fecha de nacimiento, informar el nombre de la persona más joven y el de la más vieja

    // Para comodidad de usuario, puede ingresar dd, mm y aa por separado
    int aa, dd, mm, fecha, fechaMnr, fechaMyr;
    string name, nameMyr, nameMnr, continuar;
    bool primero = true;

    do
    {
        cout << "Ingrese nombre: ";
        cin >> name;

        while (fecha == 0)
        {
            cout << "---FECHA DE NACIMIENTO---" << endl;
            cout << "Ingrese el anio: ";
            cin >> aa;
            cout << "Ingrese el mes: ";
            cin >> mm;
            cout << "Ingrese el dia: ";
            cin >> dd;

            // VALIDACION DE FECHA DE NACIMIENTO
            if (aa > 0 && mm > 0 && dd > 0)
            {
                bool mm31dias = mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12;
                bool mm30dias = mm == 4 || mm == 6 || mm == 9 || mm == 11;
                if ((mm31dias == true) && dd <= 31 )
                {
                    fecha = aa * 10000;
                    fecha = fecha + mm * 100;
                    fecha = fecha + dd;
                }
                else 
                {
                    if (mm30dias == true && dd <= 30)
                    {
                        fecha = aa * 10000;
                        fecha = fecha + mm * 100;
                        fecha = fecha + dd;
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
                                    fecha = aa * 10000;
                                    fecha = fecha + mm * 100;
                                    fecha = fecha + dd;
                                }
                            }
                            else
                            {
                                if (dd == 28)
                                {
                                    fecha = aa * 10000;
                                    fecha = fecha + mm * 100;
                                    fecha = fecha + dd;
                                }
                            }
                        }
                    }
                }   
            }
            if (fecha == 0)
            {
                cout << "ERROR, fecha mal ingresada" << endl;;
            }
        }
        if (primero)
        {
            fechaMnr = fecha;
            nameMyr = name;
            fechaMyr = fecha;
            nameMnr = name;
            primero = false;
        }
        else
        {
            if (fecha > fechaMnr)
            {
                fechaMnr = fecha;
                nameMnr = name;
            }
            else
            {
                if (fecha < fechaMyr)
                { 
                    fechaMyr = fecha;
                    nameMyr = name;
                }
            }
        }

        fecha = 0;

        cout << "Desea continuar ingresando datos? Si es asi coloque | S |: ";
        cin >> continuar;
    } while ( continuar == "S");

    cout << "El mas joven es: " << nameMnr << endl;
    cout << "El mas viejo es: " << nameMyr << endl;
    
    
	return 0;
}
