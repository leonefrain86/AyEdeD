#include <iostream>
using namespace std;

int main() {

    long l1, l2, l3;

    cout << "Ingrese lado: ";
    cin >> l1;

    cout << "Ingrese lado: ";
    cin >> l2;

    cout << "Ingrese lado: ";
	cin >> l3;

    if (l1 > 0 && l2 > 0 && l3 > 0)
    {
        if (l1 == l2)
        {
            if (l2 == l3)
            {
                cout << "Es un triangulo: EQUILATERO";
            }
            else
            {
                if (l1 + l2 > l3)
                {
                    cout << "Es un triangulo: ISOSELES";
                }
                else
                {
                    cout << "NO FORMA UN TRIANGULO";
                }
            }
        }
        else
        {
            if (l1 == l3)
            {
                if (l1 + l3 > l2)
                {
                    cout << "Es un triangulo: ISOSELES";
                }
                else
                {
                    cout << "NO FORMA UN TRIANGULO";
                }
            }
            else
            {
                if (l2 == l3)
                {
                    if (l2 + l3 > l1)
                    {
                        cout << "Es un triangulo: ISOSELES";
                    }
                    else
                    {
                        cout << "NO FORMA UN TRIANGULO";
                    }
                }
                else
                {
                    if (l1 < l2 && l2 < l3)
                    {
                        if ((l1 + l2) > l3)
                        {
                            cout << "Es un triangulo: ESCALENO";
                        }
                        else
                        {
                            cout << "NO FORMA UN TRIANGULO";
                        }
                    }
                    else
                    {
                        if (l2 < l1 && l1 < l3)
                        {
                            if (l1 + l2 > l3)
                            {
                                cout << "Es un triangulo: ESCALENO";
                            }
                            else
                            {
                                cout << "NO FORMA UN TRIANGULO";
                            }
                        }
                        else
                        {
                            if (l2 < l3 && l3 < l1)
                            {
                                if (l2 + l3 > l1)
                                {
                                    cout << "Es un triangulo: ESCALENO";
                                }
                                else
                                {
                                    cout << "NO FORMA UN TRIANGULO";
                                }
                            }
                            else
                            {
                                if (l3 < l2 && l2 < l1)
                                {
                                    if (l2 + l3 > l1)
                                    {
                                        cout << "Es un triangulo: ESCALENO";
                                    }
                                    else
                                    {
                                        cout << "NO FORMA UN TRIANGULO";
                                    }
                                }
                                else
                                {
                                    if (l1 < l3 && l3 < l2)
                                    {
                                        if (l1 + l3 > l2)
                                        {
                                            cout << "Es un triangulo: ESCALENO";
                                        }
                                        else
                                        {
                                            cout << "NO FORMA UN TRIANGULO";
                                        }
                                    }
                                    else
                                    {
                                        if (l3 < l1 && l1 < l2)
                                        {
                                            if (l1 + l3 > l2)
                                            {
                                                cout << "Es un triangulo: ESCALENO";
                                            }
                                            else
                                            {
                                                cout << "NO FORMA UN TRIANGULO";
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } 
    else
    {
        cout << "NO FORMA UN TRIANGULO";
    }

	return 0;
}
