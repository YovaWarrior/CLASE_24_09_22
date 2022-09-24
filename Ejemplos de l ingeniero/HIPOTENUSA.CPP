
#include <iostream> //Biblioteca estandar que permite entrada/salida
#include <cmath>    /*Biblioteca estandar para funciones matematicas*/

using namespace std;

/* FUNCION DE INICIO */
int main()
{

    float cateto1, cateto2, hipotenusa; /* DECLARACION DE VARIABLES TIPO DECIMALES*/

    cout << "CALCULAR LA HIPOTENUSA" << endl;

    /*INGRESO DE VALOR DE LOS CATETOS*/

    cout << "INGRESE LA MEDIDA DE LOS CATETOS A & B" << endl; // mensaje en pantalla
    cout << "CATETO A: " << endl;                             // mensaje en pantalla
    cin >> cateto1;                                           // captura el valor del cateto1
    cout << "CATETO B: " << endl;                             // mensaje en pantalla
    cin >> cateto2;                                           // captura el valor del cateto1

    /*VALIDAR QUE LOS NUMEROS SEAN POSITIVOS*/
    if (cateto1 > 0 && cateto2 > 0)
    {

        /*CALCULAR HIPOTENUS UTILIZANDO FUNCION SQRT=RAIZ CUADRADA  && FUNCION POW=POTENCIA*/
        hipotenusa = sqrt(pow(cateto1, 2.0) + pow(cateto2, 2.0));
        cout << "EL VALOR DE LA HIPOTENUSA ES: " << sqrt(pow(cateto1, 2.0) + pow(cateto2, 2.0)) << endl;
    }
    else
    {

        cout << "DEBE INGRESAR UNICAMENTE NUMEROS POSITIVOS" << endl;
    }

    system("PAUSE");
}
