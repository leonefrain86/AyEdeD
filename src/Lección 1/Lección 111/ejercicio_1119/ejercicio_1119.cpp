#include <iostream>
using namespace std;

int main() {

    int aa, mm, dd, fecha;
	cout << "Ingrese el anio: ";
    cin >> aa;
    cout << "Ingrese el mes: ";
    cin >> mm;
    cout << "Ingrese el dia: ";
    cin >> dd;

    fecha = aa * 10000;
    fecha = fecha + mm * 100;
    fecha = fecha + dd;

    // VALIDACION GENERAL - SIN TOMAR EN CUENTA LA CANT. EXACTA DE DIAS POR CADA MES
    if (aa > 0 && mm > 0 && mm <= 12 && dd > 0 && dd <= 30 && fecha < 100000000)
    {
        cout << fecha;
    }
    else
    {
        cout << "ERROR, la fecha ingresada es invalida";
    }

	return 0;
}
