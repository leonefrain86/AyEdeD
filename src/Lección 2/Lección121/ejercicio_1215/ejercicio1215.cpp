#include <iostream>
using namespace std;

struct Fecha
{
    int aa, mm, dd;
};


Fecha fechaDividir(int f)
{
    Fecha fecha;

    fecha.aa = f / 10000;
    fecha.mm = (f - fecha.aa * 10000) / 100;
    fecha.dd = f % 100;

    return fecha;
}

void fechaMostrar(Fecha f)
{
    cout << f.aa << endl;
    cout << f.mm << endl;
    cout << f.dd << endl;
}

int main()
{
    int fecha;
    cout << "Ingrese fecha: ";
    cin >> fecha;

    fechaMostrar(fechaDividir(fecha));

    return 0;
}
