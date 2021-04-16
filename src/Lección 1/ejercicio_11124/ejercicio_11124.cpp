#include <iostream>
using namespace std;

int main() {

    int num, numMyr, cnt = 0;

    for (int i = 0; i < 3; i++)
    {
        cnt = 0;
        while (cnt < 10 )
        {
            if(i == 0)
            {
                cout << "Ingrese un numero positivo: ";
                cin >> num;
                if (num > 0)
                {
                    if (cnt == 0)
                    {
                        numMyr = num;
                    }
                    else
                    {
                        if (num > numMyr)
                        {
                            numMyr = num;
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
                cout << "Ingrese un numero mayor a -10: ";
                cin >> num;
                if (num > -10)
                {
                    if(cnt == 0)
                    {
                        numMyr = num;
                    }
                    else
                    {
                        if (num > numMyr)
                        {
                            numMyr = num;
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
                    numMyr = num;
                }
                else
                {
                    if (num > numMyr)
                    {
                        numMyr = num;
                    }
                } 
                cnt++;
            } 
            
        }
        cout << "---" << endl;
        cout << "Numero mayor: " << numMyr << endl;
        cout << "---" << endl;
    }
    
	return 0;
}
