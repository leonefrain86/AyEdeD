#include <iostream>
using namespace std;

int main() {

    int v, cnt12, cnt24, cnt36, cntC = 0;
    
    do
    {
        cout << "Ingrese un valor: ";
        cin >> v;

        if (v >= 0)
        {
            if (v <= 12)
            {
                if (v != 0)
                {
                    cnt12++;
                }
                else
                {
                    cntC++;
                }  
            }
            else
            {
                if (v <= 24)
                {
                    cnt24++;
                }
                else
                {
                    if (v <= 36)
                    {
                        cnt36++;
                    }
                }
            }
        }
    } while (v >= 0);

    cout <<"Menores o iguales a 12: " << cnt12 << endl;
    cout <<"Mayores a 12 y menores o iguales a 24: " << cnt24 << endl;
    cout <<"Mayores a 24 y menores o iguales a 36: " << cnt36 << endl;
    cout <<"Iguales a 0: " << cntC << endl;

	return 0;
}
