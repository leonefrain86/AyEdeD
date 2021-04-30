#include <iostream>
#include <iomanip>

using namespace std;

// void getDate(int& dia, int& mes, int& anio)
// {
//     time_t timestamp;
//     time(&timestamp);  
//     struct tm* fechaActual = localtime(&timestamp);
    
//     int  dd = fechaActual->tm_mday, mm = fechaActual->tm_mon+1, aa = fechaActual->tm_year+1900;
    
//     dia = fechaActual->tm_mday;
//     mes = fechaActual->tm_mon+1;
//     anio = fechaActual->tm_year+1900;
// }

// int unificarFecha()
// {
//     int dd, mm, aa;

//     getDate(dd, mm, aa);

//     return aa * 10000 +  mm * 100 + dd;
// }


int unificarFecha(int dd, int mm, int aa)
{
    return aa * 10000 +  mm * 100 + dd;
}

int getDate()
{
    time_t timestamp;
    time(&timestamp);  
    struct tm* fechaActual = localtime(&timestamp);

    return unificarFecha (fechaActual->tm_mday, fechaActual->tm_mon+1, fechaActual->tm_year+1900);
}

int main()
{

    // cout << unificarFecha() << endl;

    cout << getDate() << endl;

    return 0;
}