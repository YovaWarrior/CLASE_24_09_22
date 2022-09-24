//JEFERSON ALEXIS SUCHITE CHAVEZ//
//MARIO FRUMENCIO TUM TZOC//
//CARLOS GIOVANNI MARTINEZ ALDANA//

#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;
void escribir ();
int main ()
{

float empleado, salario, hora, dias;

    cout << " INGRESE SU NOMBRE ";
    string nombre;
    cin >> nombre;

    cout << " INGRESE SU APELLIDO ";
    string apellido;
    cin >> apellido;

    cout << " INGRESE SU NUMERO DE EMPLEADO ";
    cin >> empleado;

    cout << " INGRESE DIAS LABORADOS ";
    cin >> dias;

    cout << " INGRESE SUS HORAS LABORADAS ";
    cin >> hora;

    salario = ((dias * 75.25 )+(hora * 14.75 ));

    cout << "EMPLEADO: " << nombre << " " << apellido << ". NUMERO: " << empleado << ". SU SALARIO ES DE: " << salario << endl;

    system("PAUSE");

    return 0;


}
void escribir ()
{

ofstream 



}