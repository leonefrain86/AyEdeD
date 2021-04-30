#include <iostream>
using namespace std;

int main() {

    int cntP, num = 2, div;
    bool primo;

    cout << "Ingrese cantidad de numeros primos que desea ver en pantalla: ";
    cin >> cntP;

    while (cntP > 0)
    {
        div = 2;
        primo = true;
        while (div < num)
        {
            if (num % div == 0) 
            {
                primo = false;
                break;
            }
            div++;      
        }
        if (primo)
        {
            cout << num << "  ";
            cntP--;
        }
        num++;
    }
    

	return 0;
}
