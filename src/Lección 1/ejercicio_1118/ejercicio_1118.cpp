#include <iostream>
using namespace std;

int main() {

    int fecha, dd, mm, aa;

    cout << "Ingrese la fecha en 8 digitos: ";
    cin >> fecha;

    aa = fecha / 10000;
    mm = (fecha - (aa * 10000)) / 100;
    dd = (fecha - (aa * 10000)) - mm * 100; // tambien puede ser: dd = fecha % 100;

    // NOTA: ¡¡VALIDACIÓN DE FECHA SOLO PARA QUE EL AÑO-MES-DIA TENGAN LOS VALORES GENERALES.
    if (aa > 0 && mm > 0 && mm < 12 && dd > 0 && dd <= 30 && fecha < 100000000)
    {
        cout << aa << "-" << mm << "-" << dd << endl;
    }
    else
    {
        cout << "ERROR, debe ingresar un numero de 8 digitos";
    }

    return 0;
}
