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

    ofstream miarchivo;
    string nombre_archivo;
    string texto_archivo;

    cout << "Escribe el nombre para el archivo";
    getline(cin, nombre_archivo);
    miarchivo.open(nombre_archivo.c_str(), ios::out);

    if (miarchivo.fail())  //condicion en caso de error
    {
        cout << "Error al abrir el archivo";
        exit(1);
    }
      //para escribir dentro del documento creado uso el nombre de la varibale y lo que este dentro de las comillas correra
      
    cout << "Escribe el texto a guardar en el arxhivo";
    getline(cin, texto_archivo);

    miarchivo<< texto_archivo;

    miarchivo.close(); //cerrar archivo
    
}