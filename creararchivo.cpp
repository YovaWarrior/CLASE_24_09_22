#include <iostream>
#include <stdlib.h>
#include <fstream> //libreria para el manejo de archivos

using namespace std;

void escribir();    //funcion a crear mas adelante
               //cuerpo del programa
int main ()
{

    escribir();

    system("pause");
    return 0;
}
  // funcion para crear el archivo
void escribir()
{

    ofstream miarchivo;    //variable tipo archivo (sirve para representar el flujo de creacion y escritura en el archivo a crear)
    miarchivo.open("MI PRIMER ARCHIVP.txt", ios::out);   //abrir el archivo , pero si no existe el archivo con ese nombre se crea y se le nombra con el texto dentro de las comillas

    if (miarchivo.fail())  //condicion en caso de error
    {
        cout << "Error al abrir el archivo";
        exit(1);
    }
      //para escribir dentro del documento creado uso el nombre de la varibale y lo que este dentro de las comillas correra
      
    miarchivo << "Hoy es un dia genial";

    miarchivo.close();
    
}