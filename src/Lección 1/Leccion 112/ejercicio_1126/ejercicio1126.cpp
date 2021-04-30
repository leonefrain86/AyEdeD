#include <iostream>
using namespace std;

int main() {

    int cont, cantI, domicilio, edad, contTotal, contA, domicilioMyr, cantIMyrXDepto = 0, sumEXF;
    int contP, contS, contU, contT, contF, contM;
    char tVivienda, sexo, nivelE, indicador;

    string apellido, nombre, datosICP, promedioEXF;

    while (domicilio != 0)
    {
        // Por casa
        cout << "Ingrese Domicilio: "; 
        cin >> domicilio;

        cout << "Ingrese Tipo de vivienda, que puede ser: C    (casa) o D     (departamento): "; 
        cin >> tVivienda;

        cout << "Ingrese Cantidad de integrantes: ";   
        cin >> cantI;

        // 3
        if (tVivienda == 'D' && cantI > cantIMyrXDepto)
        {
            cantIMyrXDepto = cantI;
            domicilioMyr = domicilio;
        }

        contTotal += cantI;

        while (cantI > 0)
        {
            // Por integrante familiar 
            cout << "Ingrese nombre: ";
            cin >> nombre;   

            cout << "Ingrese apellido: ";
            cin >> apellido; 

            cout << "Ingrese edad: ";
            cin >> edad;
            sumEXF+= edad;
            
            cout << "Ingrese sexo (M   o F   ): "; 
            cin >> sexo;

            if (sexo == 'F')
            {
                contF++;
            }
            else
            {
                if (sexo == 'M')
                {
                    contM++;
                }
            }

            cout << "N (no posee)" << endl;
            cout << "P (primario)" << endl;
            cout << "S (secundario)" << endl;
            cout << "T (terciario)" << endl;
            cout << "U (universitario)" << endl;
            cout << "Nivel de estudios: " << endl;
            cin >> nivelE;
            
            cout << "Completo 'C' o Incompleto 'I': ";
            cin >> indicador;
            
            // 5
            if (nivelE == 'P')
            {
                contP++;
            }
            else
            {
                if (nivelE == 'S')
                {
                    contS++;
                }
                else
                {
                    if (nivelE == 'T')
                    {
                        contT++;
                    }
                    else
                    {
                        if (nivelE == 'U')
                        {
                            contU++;
                        }
                    }
                }
            }


            // 1
            if (nivelE == 'P' && indicador == 'C')  
            {
                datosICP += " Domicilio: " + domicilio;
                datosICP += " Nombre: " + nombre;
                datosICP += " Apellido: " + apellido;
                datosICP += " Sexo: " + sexo; 
                datosICP += " | ";
            } 
            if (nivelE == 'N' && edad > 10)   
            {
                contA++;
            }

            cantI--;
        }
        
        // 4
        promedioEXF += " Familia: " + cont;
        promedioEXF += " Promedio: " + sumEXF/cantI;
        promedioEXF += " | ";
        
        cont++;
    }        
    
    // Los datos de quienes que hayan completado los estudios primarios.
    cout << datosICP << endl;

    // Porcentaje de analfabetismo en la ciudad (se considera analfabetos a los 
    // mayores de 10 años que no posean estudios).
    cout << (contA * 100) / contTotal << "%" << endl; 

    // Porcentaje de analfabetismo en la ciudad (se considera analfabetos a los 
    // mayores de 10 años que no posean estudios).
    cout << domicilioMyr << endl;

    // Edad promedio de cada familia y de la ciudad
    cout << promedioEXF << endl;

    // Por cada nivel de estudio, cuántos encuestados lo tienen incompleto
    cout << "Cantidad de ciudadados con estudios incompletos por nivel de estudio: " << endl;
    cout << "Primario: " << contP << endl;
    cout << "Secundario: " << contS << endl;
    cout << "Terceario: " << contT << endl;
    cout << "Universitario: "<< contU << endl;

    // Porcentaje de encuestados de cada sexo
    cout << "Porsentaje de mujeres: " << (contF * 100) / contTotal << "%" << endl;
    cout << "Porsentaje de hombres: " << (contM * 100) / contTotal << "%" << endl;

    return 0;
}