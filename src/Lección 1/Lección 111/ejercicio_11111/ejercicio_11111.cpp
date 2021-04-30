#include <iostream>
using namespace std;

int main() {

    int mm, aa;

    cout << "Ingrese el mes: ";
    cin >> mm;
    cout << "Ingrese el a\xA4o: ";
    cin >> aa;

    if (mm > 0 && mm <= 12)
    {
        bool mm31dias = mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12;
        bool mm30dias = mm == 4 || mm == 6 || mm == 9 || mm == 11;

        if (mm31dias)
        {
            cout << "Tiene 31 dias";
        }
        else
        {
            if (mm30dias)
            {
                cout << "Tiene 30 dias";
            }
            else
            {
                if (mm == 2)
                {
                    if (((aa % 4 == 0) || (aa % 400 == 0)) && (aa % 100 != 0))
                    {
                        cout << "Tiene 29 dias - A\xA4o bisiesto";
                    }
                    else
                    {
                        if (((aa % 400) == 0) && ((aa % 100) == 0))
                        {
                            cout << "Tiene 29 dias - A\xA4o bisiesto";
                        }
                        else
                        {
                            cout << "Tiene 28 dias";
                        }
                    }
                }
            }
        }
    }

	return 0;
}
