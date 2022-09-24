//Ciclo While

#include <iostream> //Biblioteca

using namespace std;  //Utilizar cout y cin

int main ()  // Fucion principal del programa
{


    int i;    // Variable de tipo entero

    i = 0;   // Iniciando la variable con valor 0

    while (i <= 30)   // Condicion que se va a repetir mientras se cumpla
    {
        cout << i << endl;   //Mostrar el pantalla el valor de i
        i+= 5;         // Incremento de i de 1 en 1
    }
    
    system("PAUSE");
    return 0;




}