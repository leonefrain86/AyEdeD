#include <iostream>
using namespace std;

int main() {

    int num, numMnr, cnt;

    for (int i = 0; i < 3; i++)
    {
        cnt = 0;
        while (cnt < 10 )
        {
            if(i == 0)
            {
                cout << "Ingrese un numero negativo: ";
                cin >> num;
                if (num < 0)
                {
                    if (cnt == 0)
                    {
                        numMnr = num;
                    }
                    else
                    {
                        if (num < numMnr)
                        {
                            numMnr = num;
                        }
                    }
                    cnt++;
                }
                else
                {
                    cout << "ERROR, Ingrese de nuevo el numero" << endl;
                }
            }
            if(i == 1)
            {
                cout << "Ingrese un numero menor a 10: ";
                cin >> num;
                if (num < 10)
                {
                    if(cnt == 0)
                    {
                        numMnr = num;
                    }
                    else
                    {
                        if (num < numMnr)
                        {
                            numMnr = num;
                        }
                    } 
                    cnt++;
                }
                else
                {
                    cout << "ERROR, Ingrese de nuevo el numero" << endl;
                }
            }
            if(i == 2)
            {
                cout << "Ingrese un numero: ";
                cin >> num;
                if(cnt == 0)
                {
                    numMnr = num;
                }
                else
                {
                    if (num < numMnr)
                    {
                        numMnr = num;
                    }
                } 
                cnt++;
            } 
            
        }
        cout << "---" << endl;
        cout << "Numero menor: " << numMnr << endl;
        cout << "---" << endl;
    }
    
	return 0;
}
